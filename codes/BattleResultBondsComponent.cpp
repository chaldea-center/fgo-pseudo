void __fastcall BattleResultBondsComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  struct BattleResultBondsComponent_StaticFields *static_fields; // x0
  int64_t v11; // x1
  int64_t v12; // x1
  struct BattleResultBondsComponent_StaticFields *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4BB7A3F & 1) == 0 )
  {
    sub_1C13D24(&BattleResultBondsComponent_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_7184/*"GetMember"*/, v8);
    sub_1C13D24(&StringLiteral_7170/*"GetEncoding"*/, v9);
    byte_4BB7A3F = 1;
  }
  static_fields = BattleResultBondsComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SVT_GAP_5 = 0x4316000043320000LL;
  *(_QWORD *)&static_fields->CONF_LABEL_MAX_WIDTH = 0x12000001D0LL;
  v11 = StringLiteral_7184/*"GetMember"*/;
  static_fields->GET_NEW_SVT_KEY = (struct System_String_o *)StringLiteral_7184/*"GetMember"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->GET_NEW_SVT_KEY, v11, v2, v3, v4, v5, v6, v7);
  v12 = StringLiteral_7170/*"GetEncoding"*/;
  v13 = BattleResultBondsComponent_TypeInfo->static_fields;
  v13->GET_EXIST_SVT_KEY = (struct System_String_o *)StringLiteral_7170/*"GetEncoding"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v13->GET_EXIST_SVT_KEY, v12, v14, v15, v16, v17, v18, v19);
}


void __fastcall BattleResultBondsComponent___ctor(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Collections_Generic_List_object__o *v14; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  BattleResultBondsFigureComponent_o *v21; // x20
  const MethodInfo *v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4BB7A3E & 1) == 0 )
  {
    sub_1C13D24(&BattleResultBondsFigureComponent_TypeInfo, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject___ctor__, v4);
    sub_1C13D24(&System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo, v5);
    sub_1C13D24(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    byte_4BB7A3E = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.conflist = (struct System_Collections_Generic_List_GameObject__o *)v7;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.conflist, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  this->fields.buddyPointInfoWindowHeight = 366;
  this->fields.tempSaveTimeScale = 1.0;
  v14 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__);
  this->fields.bondsList = (struct System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__o *)v14;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.bondsList, (int64_t)v14, v15, v16, v17, v18, v19, v20);
  v21 = (BattleResultBondsFigureComponent_o *)sub_1C13F70(BattleResultBondsFigureComponent_TypeInfo);
  BattleResultBondsFigureComponent___ctor(v21, v22);
  this->fields.bondsFigure = v21;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.bondsFigure, (int64_t)v21, v23, v24, v25, v26, v27, v28);
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
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  Il2CppObject *Master_object; // x25
  __int64 v41; // x24
  int64_t v42; // x23
  int64_t v43; // x25
  Il2CppObject *v44; // x8
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  System_String_o *v57; // x24
  Il2CppObject *v58; // x25
  __int64 v59; // x0
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4BB7A30 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, collect);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1C13D24(&Method_DataManager_GetMaster_SvtCoinMaster___, v6);
    sub_1C13D24(&DataManager_TypeInfo, v7);
    sub_1C13D24(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_1C13D24(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v9);
    sub_1C13D24(&GetSvtCoin___TypeInfo, v10);
    sub_1C13D24(&GetSvtCoin_TypeInfo, v11);
    sub_1C13D24(&LocalizationManager_TypeInfo, v12);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1C13D24(&Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__, v15);
    sub_1C13D24(&Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__, v16);
    sub_1C13D24(&BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo, v17);
    sub_1C13D24(&BattleResultBondsComponent___c_TypeInfo, v18);
    sub_1C13D24(&StringLiteral_12562/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/, v19);
    sub_1C13D24(&StringLiteral_18901/*"detailMsgSpacingY"*/, v20);
    byte_4BB7A30 = 1;
  }
  entity = 0LL;
  if ( this->fields.getJoinSvtList && !this->fields.isWarboard )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantMaster___),
          (getJoinSvtList = this->fields.getJoinSvtList) == 0LL) )
    {
LABEL_45:
      sub_1C13F80(Instance, v22);
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
        UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_18901/*"detailMsgSpacingY"*/, 1, 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
      else
      {
        if ( !v24 )
          goto LABEL_45;
        Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                      v24,
                                      v27->fields.userSvtId,
                                      (const MethodInfo_323AB80 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
                _9__62_0 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
                System_Action___ctor(
                  _9__62_0,
                  v32,
                  Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__,
                  0LL);
                static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
                static_fields->__9__62_0 = _9__62_0;
                sub_1C13CC8(
                  (PartyOrganizationUtility_o *)&static_fields->__9__62_0,
                  (int64_t)_9__62_0,
                  v34,
                  v35,
                  v36,
                  v37,
                  v38,
                  v39);
              }
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_SvtCoinMaster___);
              Instance = (DataManager_o *)UserServantEntity__getSvtId(v28, 0LL);
              if ( !Master_object )
                goto LABEL_45;
              Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                            &entity,
                                            (int32_t)Instance,
                                            (const MethodInfo_3238670 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !entity )
                  goto LABEL_45;
                if ( SHIDWORD(entity[1].klass) >= 1 )
                {
                  v41 = sub_1C13F70(BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo);
                  System_Object___ctor((Il2CppObject *)v41, 0LL);
                  v42 = sub_1C13DCC(GetSvtCoin___TypeInfo, 1LL);
                  v43 = sub_1C13F70(GetSvtCoin_TypeInfo);
                  GetSvtCoin___ctor((GetSvtCoin_o *)v43, 0LL);
                  v44 = entity;
                  if ( !entity )
                    goto LABEL_45;
                  if ( !v43 )
                    goto LABEL_45;
                  *(_DWORD *)(v43 + 16) = entity[1].klass;
                  *(int32x2_t *)(v43 + 20) = vrev64_s32(*(int32x2_t *)((char *)&v44[1].klass + 4));
                  if ( !v42 )
                    goto LABEL_45;
                  Instance = (DataManager_o *)sub_1C13E60(v43, *(_QWORD *)(*(_QWORD *)v42 + 64LL));
                  if ( !Instance )
                  {
                    v59 = sub_1C13FA4(0LL);
                    sub_1C13E4C(v59, 0LL);
                  }
                  if ( !*(_DWORD *)(v42 + 24) )
LABEL_46:
                    sub_1C13F88(Instance, v22);
                  *(_QWORD *)(v42 + 32) = v43;
                  sub_1C13CC8((PartyOrganizationUtility_o *)(v42 + 32), v43, v45, v46, v47, v48, v49, v50);
                  if ( !v41 )
                    goto LABEL_45;
                  *(_QWORD *)(v41 + 16) = v42;
                  sub_1C13CC8((PartyOrganizationUtility_o *)(v41 + 16), v42, v51, v52, v53, v54, v55, v56);
                  _9__62_0 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
                  System_Action___ctor(
                    _9__62_0,
                    (Il2CppObject *)v41,
                    Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__,
                    0LL);
                }
              }
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v57 = LocalizationManager__Get((System_String_o *)StringLiteral_12562/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/, 0LL);
              v58 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              Instance = (DataManager_o *)EventServantEntity__GetGetMessage(EventServant, 0LL);
              if ( !v58 )
                goto LABEL_45;
              CommonUI__OpenNotificationDialog(
                (CommonUI_o *)v58,
                v57,
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

  if ( (byte_4BB7A38 & 1) == 0 )
  {
    sub_1C13D24(&Method_BattleResultBondsComponent_endClose__, method);
    sub_1C13D24(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4BB7A38 = 1;
  }
  if ( this->fields.isMultiDeck )
    multiDeckWindow = this->fields.multiDeckWindow;
  else
    multiDeckWindow = this->fields.window;
  v5 = (BattleWindowComponent_EndCall_o *)sub_1C13F70(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v5, (Il2CppObject *)this, Method_BattleResultBondsComponent_endClose__, 0LL);
  if ( !multiDeckWindow )
    sub_1C13F80(v6, v7);
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

  if ( (byte_4BB7A3D & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_5590/*"END_OPENING_MOVIE"*/, method);
    byte_4BB7A3D = 1;
  }
  upRoot = this->fields.upRoot;
  if ( !upRoot
    || (UnityEngine_GameObject__SetActive(upRoot, 0, 0LL),
        (upRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1C13F80(upRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)upRoot, (System_String_o *)StringLiteral_5590/*"END_OPENING_MOVIE"*/, 0LL);
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
  Il2CppObject *Object_object__49747248; // x21
  BattleResultBondsComponent_o *v14; // x21
  BattleResultBondsComponent_o *v15; // x22
  BattleResultBondsComponent_o *v16; // x22
  BattleResultBondsComponent_o *v17; // x22
  int m_CancellationTokenSource; // w8
  BattleResultBondsComponent_o *v19; // x21
  unsigned int v20; // w22

  v8 = this;
  if ( (byte_4BB7A32 & 1) == 0 )
  {
    sub_1C13D24(&Method_AssetData_GetObject_GameObject____77466800, data);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__, v10);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    this = (BattleResultBondsComponent_o *)sub_1C13D24(&UnityEngine_Object_TypeInfo, v12);
    byte_4BB7A32 = 1;
  }
  if ( !data )
    goto LABEL_23;
  Object_object__49747248 = AssetData__GetObject_object__49747248(
                              data,
                              effectName,
                              (const MethodInfo_2F71530 *)Method_AssetData_GetObject_GameObject____77466800);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultBondsComponent_o *)UnityEngine_Object__Instantiate_object_(
                                           Object_object__49747248,
                                           (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  if ( !byte_4BAEDA1 )
  {
    this = (BattleResultBondsComponent_o *)sub_1C13D24(&UnityEngine_Vector3_TypeInfo, data);
    byte_4BAEDA1 = 1;
  }
  if ( !v16 )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v16,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v14, 0LL);
  v17 = this;
  if ( !byte_4BAEDA6 )
  {
    this = (BattleResultBondsComponent_o *)sub_1C13D24(&UnityEngine_Vector3_TypeInfo, data);
    byte_4BAEDA6 = 1;
  }
  if ( !v17 )
    goto LABEL_23;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v17,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50202144(
                                           (UnityEngine_GameObject_o *)v14,
                                           (const MethodInfo_2FE0620 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
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
        sub_1C13F88(this, data);
      this = (BattleResultBondsComponent_o *)*((_QWORD *)&v19->fields.parentComp + (int)v20);
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, targetIcon->fields.mDepth - 1, 0LL);
      m_CancellationTokenSource = (int)v19->fields.m_CancellationTokenSource;
      if ( (int)++v20 >= m_CancellationTokenSource )
        goto LABEL_21;
    }
LABEL_23:
    sub_1C13F80(this, data);
  }
LABEL_21:
  this = (BattleResultBondsComponent_o *)v8->fields.effectUIList;
  if ( !this )
    goto LABEL_23;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)v19,
    (const MethodInfo_362D3D8 *)Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
}


void __fastcall BattleResultBondsComponent__DeleteGetJoinSvtData(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleResultBondsComponent_c *v2; // x0

  if ( (byte_4BB7A27 & 1) == 0 )
  {
    sub_1C13D24(&BattleResultBondsComponent_TypeInfo, v1);
    byte_4BB7A27 = 1;
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
  int v8; // w8
  _DWORD *v9; // x20
  unsigned int v10; // w21
  SePlayer_o *MeterSePlayer; // x0

  if ( (byte_4BB7A2E & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_9416/*"NETWORK_ERROR_SERVER_NO_FILE_MESSAGE"*/, method);
    sub_1C13D24(&iTween_TypeInfo, v3);
    byte_4BB7A2E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_61615872(gameObject, 0LL);
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
        sub_1C13F88(BondsIconArray, v7);
      BondsIconArray = *(_DWORD **)&v9[2 * v10 + 8];
      if ( !BondsIconArray )
        break;
      BattleResultBondsIconComponent__FinishUpdateValue((BattleResultBondsIconComponent_o *)BondsIconArray, v7);
      v8 = v9[6];
      if ( (int)++v10 >= v8 )
        goto LABEL_11;
    }
LABEL_16:
    sub_1C13F80(BondsIconArray, v7);
  }
LABEL_11:
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0LL);
  BondsIconArray = this->fields.myFsm;
  this->fields.bondsCountUp = 0;
  if ( !BondsIconArray )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_9416/*"NETWORK_ERROR_SERVER_NO_FILE_MESSAGE"*/, 0LL);
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
  PartyOrganizationUtility_o *p_bondsIconArray; // x19
  System_Collections_Generic_List_object__o *v11; // x20
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *bondsList; // x0
  const MethodInfo *v14; // x1
  System_Collections_Generic_IEnumerable_T__o *BondsIconArray; // x0
  System_Object_array *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BB7A3A & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__,
      method);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__,
      v3);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__,
      v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__, v8);
    sub_1C13D24(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo, v9);
    byte_4BB7A3A = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( this->fields.isMultiDeck )
  {
    p_bondsIconArray = (PartyOrganizationUtility_o *)&this->fields.bondsIconArray;
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.bondsIconArray, 0LL) )
    {
      v11 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v11,
        (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
      bondsList = (System_Collections_Generic_List_object__o *)this->fields.bondsList;
      if ( !bondsList )
        goto LABEL_17;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v24,
        bondsList,
        (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v24,
                (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
      {
        if ( !v24.fields._current )
          sub_1C13F80(0LL, v14);
        BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                          (BattleResultBondsDeckPerWaveComponent_o *)v24.fields._current,
                                                                          v14);
        if ( !v11 )
          sub_1C13F80(BondsIconArray, BondsIconArray);
        System_Collections_Generic_List_object___AddRange(
          v11,
          BondsIconArray,
          (const MethodInfo_362D3D8 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v24,
        (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
      if ( !v11 )
LABEL_17:
        sub_1C13F80(bondsList, v12);
      v16 = System_Collections_Generic_List_object___ToArray(
              v11,
              (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
      p_bondsIconArray->klass = (PartyOrganizationUtility_c *)v16;
      sub_1C13CC8(p_bondsIconArray, (int64_t)v16, v17, v18, v19, v20, v21, v22);
    }
  }
  else
  {
    p_bondsIconArray = (PartyOrganizationUtility_o *)&this->fields.collects;
  }
  return (BattleResultBondsIconComponent_array *)p_bondsIconArray->klass;
}


void __fastcall BattleResultBondsComponent__Init(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleWindowComponent_o *window; // x0
  System_Collections_Generic_List_object__o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  UnityEngine_Object_o *multiDeckWindow; // x20

  if ( (byte_4BB7A28 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_UIUnityRenderer___ctor__, method);
    sub_1C13D24(&System_Collections_Generic_List_UIUnityRenderer__TypeInfo, v3);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v4);
    byte_4BB7A28 = 1;
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
  v6 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_UIUnityRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
  this->fields.effectUIList = (struct System_Collections_Generic_List_UIUnityRenderer__o *)v6;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.effectUIList, (int64_t)v6, v7, v8, v9, v10, v11, v12);
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
    sub_1C13F80(window, method);
  }
LABEL_14:
  this->fields.isMultiDeck = 0;
  window = (BattleWindowComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !window )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  UnityEngine_Object_o *multiDeckWindow; // x20
  UnityEngine_Object_o *multiBondsPrefab; // x20
  UnityEngine_Object_o *multiBondsRoot; // x20

  v14 = inIsMultiDeck;
  if ( (byte_4BB7A29 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, oldCollects);
    byte_4BB7A29 = 1;
  }
  this->fields.oldCollections = oldCollects;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.oldCollections,
    (int64_t)oldCollects,
    (int64_t)inRewardInfos,
    (int32_t)resultAsset,
    *(System_String_o **)&baseFriendshipExp,
    (BattleSetupInfo_o *)getJoinSvts,
    (FollowerInfo_o *)inIsMultiDeck,
    (PartyListViewItem_o *)method);
  this->fields.rewardInfos = inRewardInfos;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.rewardInfos,
    (int64_t)inRewardInfos,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.resultAssetData = resultAsset;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.resultAssetData,
    (int64_t)resultAsset,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.getJoinSvtList = getJoinSvts;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.getJoinSvtList,
    (int64_t)getJoinSvts,
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
  if ( (byte_4BB7A3B & 1) == 0 )
  {
    sub_1C13D24(&BattleResultBondsComponent_TypeInfo, *(_QWORD *)&targetIndex);
    this = (BattleResultBondsComponent_o *)sub_1C13D24(&UnityEngine_Object_TypeInfo, v14);
    byte_4BB7A3B = 1;
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
      this = (BattleResultBondsComponent_o *)BattleResultBondsIconComponent__ChangeGauge(
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
      sub_1C13F88(this, *(_QWORD *)&targetIndex);
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
      sub_1C13F80(this, *(_QWORD *)&targetIndex);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  _BOOL4 isMultiDeck; // w8
  struct BattleWindowComponent_o *v25; // x20
  __int64 *v26; // x8
  BattleWindowComponent_EndCall_o *v27; // x21

  if ( (byte_4BB7A2C & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Any_BattleResultBondsIconComponent___, method);
    sub_1C13D24(&Method_BattleResultBondsComponent_OpenEnd__, v3);
    sub_1C13D24(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_1C13D24(&System_Func_BattleResultBondsIconComponent__bool__TypeInfo, v5);
    sub_1C13D24(&Method_BattleResultBondsComponent___c__Open_b__53_0__, v6);
    sub_1C13D24(&BattleResultBondsComponent___c_TypeInfo, v7);
    sub_1C13D24(&StringLiteral_5585/*"END_NP"*/, v8);
    sub_1C13D24(&StringLiteral_12370/*"SKILLCHARGETURN_TXT"*/, v9);
    byte_4BB7A2C = 1;
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
    _9__53_0 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_BattleResultBondsIconComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__53_0, v14, Method_BattleResultBondsComponent___c__Open_b__53_0__, 0LL);
    static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
    static_fields->__9__53_0 = (struct System_Func_BattleResultBondsIconComponent__bool__o *)_9__53_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__53_0,
      (int64_t)_9__53_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( BasicHelper__Any_object__49783940(
         v12,
         (System_Func_T__bool__o *)_9__53_0,
         (const MethodInfo_2F7A484 *)Method_BasicHelper_Any_BattleResultBondsIconComponent___) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      isMultiDeck = this->fields.isMultiDeck;
      this->fields.openBoundsFlg = 0;
      this->fields.colIndex = 0;
      this->fields.bondsCountUp = 1;
      v25 = isMultiDeck ? this->fields.multiDeckWindow : this->fields.window;
      v27 = (BattleWindowComponent_EndCall_o *)sub_1C13F70(BattleWindowComponent_EndCall_TypeInfo);
      BattleWindowComponent_EndCall___ctor(
        v27,
        (Il2CppObject *)this,
        (intptr_t)Method_BattleResultBondsComponent_OpenEnd__,
        0LL);
      if ( v25 )
      {
        ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v25->klass->vtable._10_Open.method)(
          v25,
          v27,
          v25->klass->vtable._11_CompOpen.methodPtr);
        gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
        if ( gameObject )
        {
          v26 = &StringLiteral_5585/*"END_NP"*/;
          goto LABEL_19;
        }
      }
    }
LABEL_20:
    sub_1C13F80(gameObject, v22);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
  if ( !gameObject )
    goto LABEL_20;
  v26 = &StringLiteral_12370/*"SKILLCHARGETURN_TXT"*/;
LABEL_19:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)*v26, 0LL);
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Object_array *v23; // x21
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x22
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x22
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  int64_t v89; // x22
  System_Collections_Hashtable_o *v90; // x0
  const MethodInfo *v91; // x1
  int max_length; // w8
  BattleResultBondsIconComponent_array *v93; // x20
  unsigned int v94; // w21
  _QWORD *v95; // x0
  System_Reflection_MethodBase_o *v96; // x20
  System_String_o *CommonSeName; // x0
  struct SePlayer_o *v98; // x0
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  __int64 v105; // x0
  int v106; // [xsp+Ch] [xbp-44h] BYREF
  int v107; // [xsp+18h] [xbp-38h] BYREF
  int v108; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4BB7A2D & 1) == 0 )
  {
    sub_1C13D24(&Method_BattleResultBondsComponent_OpenEnd__, method);
    sub_1C13D24(&object___TypeInfo, v3);
    sub_1C13D24(&SeManager_TypeInfo, v4);
    sub_1C13D24(&float_TypeInfo, v5);
    sub_1C13D24(&StringLiteral_19961/*"friendCode"*/, v6);
    sub_1C13D24(&StringLiteral_24320/*"textarea"*/, v7);
    sub_1C13D24(&StringLiteral_22651/*"onProductPurchaseDeferred"*/, v8);
    sub_1C13D24(&StringLiteral_15437/*"UpdateEnemyCount"*/, v9);
    sub_1C13D24(&StringLiteral_24361/*"timeoutTicks"*/, v10);
    sub_1C13D24(&StringLiteral_22643/*"onFetchStorePromotionOrderFailed"*/, v11);
    sub_1C13D24(&StringLiteral_6856/*"FinishTransaction"*/, v12);
    sub_1C13D24(&iTween_TypeInfo, v13);
    byte_4BB7A2D = 1;
  }
  if ( !this->fields.bondsCountUp )
    return;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C13DCC(object___TypeInfo, 10LL);
  if ( !BondsIconArray )
LABEL_65:
    sub_1C13F80(BondsIconArray, v16);
  v23 = (System_Object_array *)BondsIconArray;
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_19961/*"friendCode"*/;
  if ( StringLiteral_19961/*"friendCode"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C13E60(
                                                               StringLiteral_19961/*"friendCode"*/,
                                                               v23->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v16 = (const MethodInfo *)StringLiteral_19961/*"friendCode"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !v23->max_length )
    goto LABEL_64;
  v23->m_Items[0] = (Il2CppObject *)v16;
  sub_1C13CC8((PartyOrganizationUtility_o *)v23->m_Items, (int64_t)v16, v17, v18, v19, v20, v21, v22);
  v108 = 0;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v108, v24, v25, v26);
  v33 = (int64_t)BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C13E60(
                                                               BondsIconArray,
                                                               v23->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
  }
  if ( v23->max_length <= 1 )
    goto LABEL_64;
  v23->m_Items[1] = (Il2CppObject *)v33;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v23->m_Items[1], v33, v27, v28, v29, v30, v31, v32);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_24361/*"timeoutTicks"*/;
  if ( StringLiteral_24361/*"timeoutTicks"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C13E60(
                                                               StringLiteral_24361/*"timeoutTicks"*/,
                                                               v23->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v16 = (const MethodInfo *)StringLiteral_24361/*"timeoutTicks"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v23->max_length <= 2 )
    goto LABEL_64;
  v23->m_Items[2] = (Il2CppObject *)v16;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v23->m_Items[2], (int64_t)v16, v34, v35, v36, v37, v38, v39);
  v107 = 1065353216;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v107, v40, v41, v42);
  v49 = (int64_t)BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C13E60(
                                                               BondsIconArray,
                                                               v23->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
  }
  if ( v23->max_length <= 3 )
    goto LABEL_64;
  v23->m_Items[3] = (Il2CppObject *)v49;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v23->m_Items[3], v49, v43, v44, v45, v46, v47, v48);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_22651/*"onProductPurchaseDeferred"*/;
  if ( StringLiteral_22651/*"onProductPurchaseDeferred"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C13E60(
                                                               StringLiteral_22651/*"onProductPurchaseDeferred"*/,
                                                               v23->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v16 = (const MethodInfo *)StringLiteral_22651/*"onProductPurchaseDeferred"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v23->max_length <= 4 )
    goto LABEL_64;
  v23->m_Items[4] = (Il2CppObject *)v16;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v23->m_Items[4], (int64_t)v16, v50, v51, v52, v53, v54, v55);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_15437/*"UpdateEnemyCount"*/;
  if ( StringLiteral_15437/*"UpdateEnemyCount"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C13E60(
                                                               StringLiteral_15437/*"UpdateEnemyCount"*/,
                                                               v23->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v16 = (const MethodInfo *)StringLiteral_15437/*"UpdateEnemyCount"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v23->max_length <= 5 )
    goto LABEL_64;
  v23->m_Items[5] = (Il2CppObject *)v16;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v23->m_Items[5], (int64_t)v16, v56, v57, v58, v59, v60, v61);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_22643/*"onFetchStorePromotionOrderFailed"*/;
  if ( StringLiteral_22643/*"onFetchStorePromotionOrderFailed"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C13E60(
                                                               StringLiteral_22643/*"onFetchStorePromotionOrderFailed"*/,
                                                               v23->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v16 = (const MethodInfo *)StringLiteral_22643/*"onFetchStorePromotionOrderFailed"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v23->max_length <= 6 )
    goto LABEL_64;
  v23->m_Items[6] = (Il2CppObject *)v16;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v23->m_Items[6], (int64_t)v16, v62, v63, v64, v65, v66, v67);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_6856/*"FinishTransaction"*/;
  if ( StringLiteral_6856/*"FinishTransaction"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C13E60(
                                                               StringLiteral_6856/*"FinishTransaction"*/,
                                                               v23->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v16 = (const MethodInfo *)StringLiteral_6856/*"FinishTransaction"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v23->max_length <= 7 )
    goto LABEL_64;
  v23->m_Items[7] = (Il2CppObject *)v16;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v23->m_Items[7], (int64_t)v16, v68, v69, v70, v71, v72, v73);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_24320/*"textarea"*/;
  if ( StringLiteral_24320/*"textarea"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C13E60(
                                                               StringLiteral_24320/*"textarea"*/,
                                                               v23->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v16 = (const MethodInfo *)StringLiteral_24320/*"textarea"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v23->max_length <= 8 )
    goto LABEL_64;
  v23->m_Items[8] = (Il2CppObject *)v16;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v23->m_Items[8], (int64_t)v16, v74, v75, v76, v77, v78, v79);
  v106 = 1072064102;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v106, v80, v81, v82);
  v89 = (int64_t)BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1C13E60(
                                                               BondsIconArray,
                                                               v23->obj.klass->_1.element_class);
    if ( !BondsIconArray )
    {
LABEL_66:
      v105 = sub_1C13FA4(BondsIconArray);
      sub_1C13E4C(v105, 0LL);
    }
  }
  if ( v23->max_length <= 9 )
    goto LABEL_64;
  v23->m_Items[9] = (Il2CppObject *)v89;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v23->m_Items[9], v89, v83, v84, v85, v86, v87, v88);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v90 = iTween__Hash(v23, 0LL);
  iTween__ValueTo(gameObject, v90, 0LL);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v91);
  if ( !BondsIconArray )
    goto LABEL_65;
  max_length = BondsIconArray->max_length;
  v93 = BondsIconArray;
  if ( max_length >= 1 )
  {
    v94 = 0;
    while ( v94 < max_length )
    {
      BondsIconArray = (BattleResultBondsIconComponent_array *)v93->m_Items[v94];
      if ( !BondsIconArray )
        goto LABEL_65;
      BattleResultBondsIconComponent__StartUpdateBuddyPoint((BattleResultBondsIconComponent_o *)BondsIconArray, v16);
      max_length = v93->max_length;
      if ( (int)++v94 >= max_length )
        goto LABEL_57;
    }
LABEL_64:
    sub_1C13F88(BondsIconArray, v16);
  }
LABEL_57:
  if ( this->fields.updateFlg )
  {
    v95 = Method_BattleResultBondsComponent_OpenEnd__;
    if ( (*((_BYTE *)Method_BattleResultBondsComponent_OpenEnd__ + 83) & 2) != 0 )
      v95 = (_QWORD *)sub_1C13D3C(Method_BattleResultBondsComponent_OpenEnd__);
    v96 = (System_Reflection_MethodBase_o *)sub_1C13D08(v95, v95[4]);
    if ( !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    CommonSeName = SeManager__GetCommonSeName(15, 0LL);
    v98 = OverwriteAssetSoundName__PlaySe(v96, CommonSeName, 0, 0LL);
    this->fields.MeterSePlayer = v98;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.MeterSePlayer,
      (int64_t)v98,
      v99,
      v100,
      v101,
      v102,
      v103,
      v104);
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
  const MethodInfo *v36; // x1
  System_Collections_Generic_IEnumerable_T__o *BondsIconArray; // x0
  System_Object_array *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  const MethodInfo *v45; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_4BB7A2A & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__,
      battleData);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__,
      v19);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__,
      v20);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__, v21);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__, v22);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__, v23);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__, v24);
    sub_1C13D24(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo, v25);
    byte_4BB7A2A = 1;
  }
  memset(&v46, 0, sizeof(v46));
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
        sub_1C13F88(bondsList, v27);
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
        v45);
      max_length = waveMyDecks->max_length;
      v32 = v34;
    }
    while ( v34 < (int)max_length );
  }
  v35 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
  bondsList = (System_Collections_Generic_List_object__o *)this->fields.bondsList;
  if ( !bondsList )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    bondsList,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v46,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
  {
    if ( !v46.fields._current )
      sub_1C13F80(0LL, v36);
    BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                      (BattleResultBondsDeckPerWaveComponent_o *)v46.fields._current,
                                                                      v36);
    if ( !v35 )
      sub_1C13F80(BondsIconArray, BondsIconArray);
    System_Collections_Generic_List_object___AddRange(
      v35,
      BondsIconArray,
      (const MethodInfo_362D3D8 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v46,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
  if ( !v35 )
LABEL_21:
    sub_1C13F80(bondsList, v27);
  v38 = System_Collections_Generic_List_object___ToArray(
          v35,
          (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
  this->fields.bondsIconArray = (struct BattleResultBondsIconComponent_array *)v38;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.bondsIconArray, (int64_t)v38, v39, v40, v41, v42, v43, v44);
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
  BattleResultBondsComponent_o *v51; // x20
  Il2CppObject *v52; // x26
  Il2CppObject *v53; // x29
  struct BattleResultBondsDeckPerWaveComponent_o *multiBondsPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *v56; // x1
  UnityEngine_Object_o *v57; // x9
  const MethodInfo *v58; // x3
  const MethodInfo *v59; // x6
  System_Collections_Generic_IEnumerable_TSource__o *rewardInfos; // x21
  BattleResultBondsComponent___c_c *v61; // x0
  System_Func_object__bool__o *_9__49_0; // x20
  Il2CppObject *v63; // x22
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x0
  System_Collections_Generic_List_TSource__o *v72; // x0
  System_Collections_Generic_List_object__o *v73; // x21
  BattleResultBondsComponent_c *v74; // x0
  BattleResultBondsComponent_c *v75; // x0
  Il2CppObject *String_70680264; // x20
  System_Collections_Generic_IEnumerable_T__o *v77; // x0
  BattleResultBondsComponent_c *v78; // x0
  System_String_o *GET_NEW_SVT_KEY; // x22
  System_Object_array *v80; // x20
  System_String_o *v81; // x0
  BattleResultBondsComponent___c_c *v82; // x0
  System_Collections_Generic_IEnumerable_TSource__o *getJoinSvts; // x21
  System_Func_object__bool__o *_9__49_1; // x20
  Il2CppObject *v85; // x22
  struct BattleResultBondsComponent___c_StaticFields *v86; // x0
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v93; // x0
  System_Collections_Generic_List_TSource__o *v94; // x0
  System_Collections_Generic_List_object__o *v95; // x21
  BattleResultBondsComponent_c *v96; // x0
  BattleResultBondsComponent_c *v97; // x0
  Il2CppObject *v98; // x20
  System_Collections_Generic_IEnumerable_T__o *v99; // x0
  BattleResultBondsComponent_c *v100; // x0
  System_String_o *GET_EXIST_SVT_KEY; // x22
  System_Object_array *v102; // x20
  System_String_o *v103; // x0
  struct BattleDeckServantData_array *svts; // x21
  int max_length; // w8
  unsigned int v106; // w19
  int32_t v107; // w22
  BattleDeckServantData_o *v108; // x25
  Il2CppObject *v109; // x28
  UserServantEntity_o *v110; // x24
  il2cpp_array_size_t v111; // w21
  BattleResultBondsComponent_o *SvtId; // x0
  const MethodInfo *v113; // x3
  UserServantCollectionEntity_o *ServantCollection; // x27
  const MethodInfo *v115; // x7
  signed int v116; // w8
  ServantEntity_o *v117; // x22
  unsigned int v118; // w20
  BattleUserServantData_o *v119; // x26
  __int128 v120; // q0
  const MethodInfo *v121; // x5
  int32_t afterLimitCount; // w25
  int32_t v123; // w29
  const MethodInfo *v124; // x7
  BattleResultBondsIconComponent_o *v125; // x20
  int afterIconLimitCount; // w8
  bool v127; // zf
  struct BattleBuddyPointInfo_array *buddyPointInfos; // x20
  BattleBuddyPointInfo_o *v129; // x26
  System_Func_object__bool__o *v130; // x26
  BattleResultBondsIconComponent_o *v131; // x28
  struct BattleResultBondsIconComponent_array *v132; // x8
  const MethodInfo *v133; // x3
  const MethodInfo *v134; // x2
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  bool v136; // w20
  const MethodInfo *v137; // x2
  const MethodInfo *v138; // x1
  bool v139; // w8
  bool updateFlg; // w20
  bool v141; // w8
  const MethodInfo *v142; // x1
  struct BattleResultBondsIconComponent_array *v143; // x8
  int64_t v144; // x2
  int32_t v145; // w3
  System_String_o *v146; // x4
  BattleSetupInfo_o *v147; // x5
  FollowerInfo_o *v148; // x6
  PartyListViewItem_o *v149; // x7
  __int64 v150; // x8
  _QWORD *v151; // x9
  __int64 v152; // x10
  __int64 v153; // x8
  int32_t cnt; // [xsp+Ch] [xbp-104h]
  ServantLimitImageMaster_o *svtLimitImageMaster; // [xsp+10h] [xbp-100h]
  UserServantCollectionMaster_o *MasterData_object; // [xsp+20h] [xbp-F0h]
  BattleResultBondsDeckPerWaveComponent_o *Object_object; // [xsp+28h] [xbp-E8h]
  UnityEngine_Object_o *x; // [xsp+30h] [xbp-E0h]
  struct BattleDeckServantData_array *v160; // [xsp+38h] [xbp-D8h]
  Il2CppObject *v161; // [xsp+40h] [xbp-D0h]
  Il2CppObject *v162; // [xsp+48h] [xbp-C8h]
  int32_t Type; // [xsp+5Ch] [xbp-B4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v167; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v168; // [xsp+90h] [xbp-80h]

  if ( (byte_4BB7A2B & 1) == 0 )
  {
    sub_1C13D24(&Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___, myDeck);
    sub_1C13D24(&Method_BasicHelper_Find_BattleBuddyPointInfo___, v14);
    sub_1C13D24(&BattleResultBondsComponent_TypeInfo, v15);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v16);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v17);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantMaster___, v18);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v19);
    sub_1C13D24(&DataManager_TypeInfo, v20);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1C13D24(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v22);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToList_GetSvts___, v23);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToList_QuestRewardInfo___, v24);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_GetSvts___, v25);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_QuestRewardInfo___, v26);
    sub_1C13D24(&System_Func_GetSvts__bool__TypeInfo, v27);
    sub_1C13D24(&System_Func_BattleBuddyPointInfo__bool__TypeInfo, v28);
    sub_1C13D24(&System_Func_QuestRewardInfo__bool__TypeInfo, v29);
    sub_1C13D24(&Method_JsonManager_DeserializeArray_GetSvts___, v30);
    sub_1C13D24(&Method_JsonManager_DeserializeArray_QuestRewardInfo___, v31);
    sub_1C13D24(&JsonManager_TypeInfo, v32);
    sub_1C13D24(&Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__, v33);
    sub_1C13D24(&Method_System_Collections_Generic_List_GetSvts__AddRange__, v34);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__, v35);
    sub_1C13D24(&Method_System_Collections_Generic_List_GetSvts__ToArray__, v36);
    sub_1C13D24(&Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__, v37);
    sub_1C13D24(&Method_System_Collections_Generic_List_GetSvts__get_Count__, v38);
    sub_1C13D24(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__, v39);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v40);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v41);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42);
    sub_1C13D24(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__, v43);
    sub_1C13D24(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__, v44);
    sub_1C13D24(&Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__, v45);
    sub_1C13D24(&BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo, v46);
    sub_1C13D24(&BattleResultBondsComponent___c_TypeInfo, v47);
    byte_4BB7A2B = 1;
  }
  Type = Follower__getType(followerType, 0LL);
  if ( Type )
    v48 = 5;
  else
    v48 = 6;
  cnt = v48;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_143;
  MasterData_object = (UserServantCollectionMaster_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  v51 = this;
  if ( !Instance )
    goto LABEL_143;
  v52 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_143;
  v53 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( this->fields.isMultiDeck )
  {
    Instance = (int64_t)this->fields.multiBondsRoot;
    if ( !Instance )
      goto LABEL_143;
    multiBondsPrefab = this->fields.multiBondsPrefab;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    v56 = (Il2CppObject *)multiBondsPrefab;
    v51 = this;
    Object_object = (BattleResultBondsDeckPerWaveComponent_o *)BaseMonoBehaviour__createObject_object_(
                                                                 (BaseMonoBehaviour_o *)this,
                                                                 v56,
                                                                 transform,
                                                                 0LL,
                                                                 (const MethodInfo_2F79D4C *)Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___);
    if ( this->fields.isMultiDeck )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      svtLimitImageMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
      goto LABEL_143;
    Instance = BattleData__IsWarBoard((BattleData_o *)x, 0LL);
    v51->fields.isWarboard = Instance & 1;
    if ( (Instance & 1) != 0 )
    {
      if ( !battleResult )
        goto LABEL_143;
      rewardInfos = (System_Collections_Generic_IEnumerable_TSource__o *)battleResult->fields.rewardInfos;
      v61 = BattleResultBondsComponent___c_TypeInfo;
      if ( !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
        v61 = BattleResultBondsComponent___c_TypeInfo;
      }
      _9__49_0 = (System_Func_object__bool__o *)v61->static_fields->__9__49_0;
      if ( !_9__49_0 )
      {
        if ( !v61->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v61);
          v61 = BattleResultBondsComponent___c_TypeInfo;
        }
        v63 = (Il2CppObject *)v61->static_fields->__9;
        _9__49_0 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_QuestRewardInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__49_0,
          v63,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__,
          0LL);
        static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
        static_fields->__9__49_0 = (struct System_Func_QuestRewardInfo__bool__o *)_9__49_0;
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&static_fields->__9__49_0,
          (int64_t)_9__49_0,
          v65,
          v66,
          v67,
          v68,
          v69,
          v70);
      }
      v71 = System_Linq_Enumerable__Where_object_(
              rewardInfos,
              (System_Func_TSource__bool__o *)_9__49_0,
              (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_QuestRewardInfo___);
      v72 = System_Linq_Enumerable__ToList_object_(
              v71,
              (const MethodInfo_2FCCA90 *)Method_System_Linq_Enumerable_ToList_QuestRewardInfo___);
      if ( v72 )
      {
        v73 = (System_Collections_Generic_List_object__o *)v72;
        if ( v72->fields._size >= 1 )
        {
          v74 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v74 = BattleResultBondsComponent_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v74->static_fields->GET_NEW_SVT_KEY, 0LL) )
          {
            v75 = BattleResultBondsComponent_TypeInfo;
            if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
              v75 = BattleResultBondsComponent_TypeInfo;
            }
            String_70680264 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70680264(
                                                v75->static_fields->GET_NEW_SVT_KEY,
                                                0LL);
            if ( !JsonManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            v77 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_object_(
                                                                   String_70680264,
                                                                   (const MethodInfo_2FF6CCC *)Method_JsonManager_DeserializeArray_QuestRewardInfo___);
            System_Collections_Generic_List_object___AddRange(
              v73,
              v77,
              (const MethodInfo_362D3D8 *)Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__);
          }
          v78 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v78 = BattleResultBondsComponent_TypeInfo;
          }
          GET_NEW_SVT_KEY = v78->static_fields->GET_NEW_SVT_KEY;
          v80 = System_Collections_Generic_List_object___ToArray(
                  v73,
                  (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          v81 = JsonManager__toJson(&v80->obj, 0, 0, 0LL);
          UnityEngine_PlayerPrefs__SetString(GET_NEW_SVT_KEY, v81, 0LL);
        }
      }
      v82 = BattleResultBondsComponent___c_TypeInfo;
      getJoinSvts = (System_Collections_Generic_IEnumerable_TSource__o *)battleResult->fields.getJoinSvts;
      if ( !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo);
        v82 = BattleResultBondsComponent___c_TypeInfo;
      }
      _9__49_1 = (System_Func_object__bool__o *)v82->static_fields->__9__49_1;
      if ( !_9__49_1 )
      {
        if ( !v82->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v82);
          v82 = BattleResultBondsComponent___c_TypeInfo;
        }
        v85 = (Il2CppObject *)v82->static_fields->__9;
        _9__49_1 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_GetSvts__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__49_1,
          v85,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__,
          0LL);
        v86 = BattleResultBondsComponent___c_TypeInfo->static_fields;
        v86->__9__49_1 = (struct System_Func_GetSvts__bool__o *)_9__49_1;
        sub_1C13CC8((PartyOrganizationUtility_o *)&v86->__9__49_1, (int64_t)_9__49_1, v87, v88, v89, v90, v91, v92);
      }
      v93 = System_Linq_Enumerable__Where_object_(
              getJoinSvts,
              (System_Func_TSource__bool__o *)_9__49_1,
              (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_GetSvts___);
      v94 = System_Linq_Enumerable__ToList_object_(
              v93,
              (const MethodInfo_2FCCA90 *)Method_System_Linq_Enumerable_ToList_GetSvts___);
      if ( v94 )
      {
        v95 = (System_Collections_Generic_List_object__o *)v94;
        if ( v94->fields._size >= 1 )
        {
          v96 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v96 = BattleResultBondsComponent_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v96->static_fields->GET_EXIST_SVT_KEY, 0LL) )
          {
            v97 = BattleResultBondsComponent_TypeInfo;
            if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
              v97 = BattleResultBondsComponent_TypeInfo;
            }
            v98 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70680264(
                                    v97->static_fields->GET_EXIST_SVT_KEY,
                                    0LL);
            if ( !JsonManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
            v99 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_object_(
                                                                   v98,
                                                                   (const MethodInfo_2FF6CCC *)Method_JsonManager_DeserializeArray_GetSvts___);
            System_Collections_Generic_List_object___AddRange(
              v95,
              v99,
              (const MethodInfo_362D3D8 *)Method_System_Collections_Generic_List_GetSvts__AddRange__);
          }
          v100 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo);
            v100 = BattleResultBondsComponent_TypeInfo;
          }
          GET_EXIST_SVT_KEY = v100->static_fields->GET_EXIST_SVT_KEY;
          v102 = System_Collections_Generic_List_object___ToArray(
                   v95,
                   (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_GetSvts__ToArray__);
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
          v103 = JsonManager__toJson(&v102->obj, 0, 0, 0LL);
          UnityEngine_PlayerPrefs__SetString(GET_EXIST_SVT_KEY, v103, 0LL);
        }
      }
      UnityEngine_PlayerPrefs__Save(0LL);
      v51 = this;
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
    v106 = 0;
    v107 = 0;
    v161 = v53;
    v162 = v52;
    v160 = myDeck->fields.svts;
    while ( 1 )
    {
      if ( v106 >= max_length )
LABEL_144:
        sub_1C13F88(Instance, userSvtId);
      v108 = svts->m_Items[v106];
      v109 = (Il2CppObject *)sub_1C13F70(BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo);
      System_Object___ctor(v109, 0LL);
      if ( !v108 || !v109 )
        goto LABEL_143;
      userSvtId = (const MethodInfo *)v108->fields.userSvtId;
      v109[1].klass = (Il2CppClass *)userSvtId;
      if ( (__int64)userSvtId < 1 )
      {
        Instance = (int64_t)x;
        if ( !x )
          goto LABEL_143;
        Instance = BattleData__IsInterruptionQuest((BattleData_o *)x, 0LL);
        if ( (Instance & 1) == 0 )
          goto LABEL_129;
        if ( v51->fields.isMultiDeck )
        {
          Instance = (int64_t)Object_object;
          if ( !Object_object )
            goto LABEL_143;
          Instance = (int64_t)BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(Object_object, userSvtId);
          v125 = (BattleResultBondsIconComponent_o *)Instance;
          if ( !Instance )
            goto LABEL_143;
        }
        else
        {
          v143 = v51->fields.collects;
          if ( !v143 )
            goto LABEL_143;
          if ( v107 >= v143->max_length )
            goto LABEL_144;
          v125 = v143->m_Items[v107];
          if ( !v125 )
            goto LABEL_143;
        }
        BattleResultBondsIconComponent__setServantData(v125, 0LL, 0LL, 0, 0, 0, 0, v124);
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v125, 0LL);
        if ( !Instance )
          goto LABEL_143;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        v51 = this;
      }
      else
      {
        if ( !v52 )
          goto LABEL_143;
        Instance = (int64_t)DataMasterBase_object__object__long___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v52,
                              (int64_t)userSvtId,
                              (const MethodInfo_323AB80 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !Instance )
          goto LABEL_143;
        v110 = (UserServantEntity_o *)Instance;
        v111 = v107;
        SvtId = (BattleResultBondsComponent_o *)UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
        ServantCollection = BattleResultBondsComponent__getServantCollection(SvtId, oldCollects, (int32_t)SvtId, v113);
        Instance = UserServantEntity__getSvtId(v110, 0LL);
        if ( !v53 )
          goto LABEL_143;
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v53,
                              Instance,
                              (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !usrSvts )
          goto LABEL_143;
        v116 = usrSvts->max_length;
        v117 = (ServantEntity_o *)Instance;
        if ( v116 < 1 )
        {
LABEL_86:
          afterLimitCount = -1;
          v123 = -1;
        }
        else
        {
          v118 = 0;
          while ( 1 )
          {
            if ( v118 >= v116 )
              goto LABEL_144;
            v119 = usrSvts->m_Items[v118];
            if ( !v119 )
              goto LABEL_143;
            v120 = *(_OWORD *)&v119->fields.id.fields.fakeValue;
            *(_OWORD *)&v168.fields.currentCryptoKey = *(_OWORD *)&v119->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v168.fields.fakeValue = v120;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v167 = v168;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v167, 0LL);
            if ( (Il2CppClass *)Instance == v109[1].klass )
              break;
            v116 = usrSvts->max_length;
            if ( (int)++v118 >= v116 )
              goto LABEL_86;
          }
          if ( this->fields.isMultiDeck )
            BattleResultBondsComponent__UpdateAfterLimitCount(
              (BattleResultBondsComponent_o *)Instance,
              (BattleData_o *)x,
              v119,
              v108,
              svtLimitImageMaster,
              v121);
          Instance = UserServantEntity__getIconLimitCount((UserServantEntity_o *)v119, 0, 0LL);
          afterIconLimitCount = v119->fields.afterIconLimitCount;
          afterLimitCount = v119->fields.afterLimitCount;
          v127 = afterIconLimitCount < 0 || (_DWORD)Instance == afterIconLimitCount;
          v123 = v127 ? Instance : v119->fields.afterIconLimitCount;
        }
        if ( !battleResult )
          goto LABEL_143;
        buddyPointInfos = battleResult->fields.buddyPointInfos;
        if ( buddyPointInfos )
        {
          v129 = 0LL;
          if ( *(_QWORD *)&buddyPointInfos->max_length && !isHideBuddyPointResult )
          {
            v130 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_BattleBuddyPointInfo__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v130,
              v109,
              Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__,
              0LL);
            Instance = (int64_t)BasicHelper__Find_object_(
                                  (System_Object_array *)buddyPointInfos,
                                  (System_Func_T__bool__o *)v130,
                                  (const MethodInfo_2F7AFA4 *)Method_BasicHelper_Find_BattleBuddyPointInfo___);
            v129 = (BattleBuddyPointInfo_o *)Instance;
          }
        }
        else
        {
          v129 = 0LL;
        }
        if ( this->fields.isMultiDeck )
        {
          Instance = (int64_t)Object_object;
          if ( !Object_object )
            goto LABEL_143;
          Instance = (int64_t)BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(Object_object, userSvtId);
          v131 = (BattleResultBondsIconComponent_o *)Instance;
          if ( !Instance )
            goto LABEL_143;
        }
        else
        {
          v132 = this->fields.collects;
          if ( !v132 )
            goto LABEL_143;
          if ( v111 >= v132->max_length )
            goto LABEL_144;
          v131 = v132->m_Items[v111];
          if ( !v131 )
            goto LABEL_143;
        }
        BattleResultBondsIconComponent__setServantData(
          v131,
          ServantCollection,
          v110,
          v123,
          this->fields.baseFriendshipExp,
          Type == 0,
          afterLimitCount,
          v115);
        BattleResultBondsIconComponent__SetBuddyPointInfo(v131, v129, battleResult->fields.eventId, v133);
        if ( !v117 )
          goto LABEL_143;
        v53 = v161;
        v52 = v162;
        if ( ServantEntity__checkIsHeroineSvt(v117, 0LL) && !UserServantEntity__IsAddFriendShipHeroine(v110, 0LL) )
        {
          updateFlg = this->fields.updateFlg;
          v141 = updateFlg | BattleResultBondsIconComponent__setNextServantData(v131, ServantCollection, v134);
          v51 = this;
          v107 = v111;
          this->fields.updateFlg = v141;
          v131->fields.isNoFriendship = 1;
        }
        else
        {
          Instance = (int64_t)MasterData_object;
          if ( !MasterData_object )
            goto LABEL_143;
          v107 = v111;
          EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                               MasterData_object,
                               v131->fields.userId,
                               v131->fields.svtId,
                               0LL);
          v136 = this->fields.updateFlg;
          v139 = v136 | BattleResultBondsIconComponent__setNextServantData(v131, EntityDefinitely, v137);
          v51 = this;
          this->fields.updateFlg = v139;
        }
        svts = v160;
        BattleResultBondsIconComponent__ChangeGauge(v131, 0.0, v138);
        BattleResultBondsIconComponent__InitBuddyPointInfo(v131, v142);
        if ( v51->fields.isMultiDeck )
        {
          Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v131, 0LL);
          if ( !Instance )
            goto LABEL_143;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        }
      }
      ++v107;
LABEL_129:
      max_length = svts->max_length;
      if ( (int)++v106 >= max_length )
        goto LABEL_132;
    }
  }
  v107 = 0;
LABEL_132:
  if ( !v51->fields.isMultiDeck )
  {
    BattleResultBondsComponent__NormalBondsInit(v51, v107, cnt, Type == 0, battleResult, isHideBuddyPointResult, v59);
    return;
  }
  if ( !Object_object )
    goto LABEL_143;
  BattleResultBondsDeckPerWaveComponent__SetWaveCount(Object_object, currentWave, maxWave, v58);
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Object_object, 0LL);
  if ( !Instance )
    goto LABEL_143;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)Object_object->fields.iconRoot;
  if ( !Instance
    || ((*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 440LL))(
          Instance,
          *(_QWORD *)(*(_QWORD *)Instance + 448LL)),
        (Instance = (int64_t)v51->fields.multiBondsRoot) == 0)
    || ((*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 440LL))(
          Instance,
          *(_QWORD *)(*(_QWORD *)Instance + 448LL)),
        (Instance = (int64_t)v51->fields.bondsList) == 0)
    || (v150 = *(_QWORD *)(Instance + 16),
        v151 = Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__,
        ++*(_DWORD *)(Instance + 28),
        !v150) )
  {
LABEL_143:
    sub_1C13F80(Instance, userSvtId);
  }
  v152 = *(int *)(Instance + 24);
  if ( (unsigned int)v152 >= *(_DWORD *)(v150 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)Object_object,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v151[4] + 192LL) + 112LL));
  }
  else
  {
    v153 = v150 + 8 * v152;
    *(_DWORD *)(Instance + 24) = v152 + 1;
    *(_QWORD *)(v153 + 32) = Object_object;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v153 + 32), (int64_t)Object_object, v144, v145, v146, v147, v148, v149);
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
        sub_1C13F88(BondsIconArray, v4);
      BondsIconArray = (BattleResultBondsIconComponent_array *)v6->m_Items[v7];
      if ( !BondsIconArray )
        break;
      BattleResultBondsIconComponent__FinishBuddyPointInfoUpdate((BattleResultBondsIconComponent_o *)BondsIconArray, v4);
      max_length = v6->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_7;
    }
LABEL_9:
    sub_1C13F80(BondsIconArray, v4);
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

  if ( (byte_4BB7A3C & 1) == 0 )
  {
    sub_1C13D24(&ImageLimitCount_TypeInfo, battleData);
    this = (BattleResultBondsComponent_o *)sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    byte_4BB7A3C = 1;
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
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v27, 0LL);
  this = (BattleResultBondsComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                           userSvtData->fields.limitCount,
                                           0LL);
  if ( !svtLimitImageMaster )
LABEL_26:
    sub_1C13F80(this, battleData);
  if ( ServantLimitImageMaster__IsServantLimitCountSeal(svtLimitImageMaster, v16, (int32_t)this, 0LL) )
  {
    v18 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v28.fields.currentCryptoKey = v18;
    *(_QWORD *)&v28.fields.fakeValue = v17;
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v28, 0LL);
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
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v29, 0LL);
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
        sub_1C13F88(BondsIconArray, v5);
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
    sub_1C13F80(BondsIconArray, v5);
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
    sub_1C13F88(this, method);
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
    sub_1C13F80(this, method);
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
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  const MethodInfo *v32; // x4
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

  if ( (byte_4BB7A31 & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, text);
    sub_1C13D24(&BattleResultBondsComponent_TypeInfo, v13);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___, v14);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__Add__, v16);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v17);
    sub_1C13D24(&StringLiteral_17558/*"bit_result_name_reveal"*/, v18);
    byte_4BB7A31 = 1;
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
  v43.fields.y = -112.0 - posY;
  v43.fields.x = 0.0;
  v43.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v43, 0LL);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 v21,
                                 (const MethodInfo_2FDFC60 *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
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
          (const MethodInfo_2FDFC60 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
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
      (System_String_o *)StringLiteral_17558/*"bit_result_name_reveal"*/,
      v32);
    if ( ComponentInChildren_object )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)ComponentInChildren_object, 0LL);
      Object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)ComponentInChildren_object,
                                             0LL);
      if ( Object )
      {
        LODWORD(v34) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Object, 0LL);
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
              goto LABEL_31;
            }
          }
        }
      }
    }
LABEL_36:
    sub_1C13F80(Object, v20);
  }
LABEL_31:
  Object = (UnityEngine_GameObject_o *)this->fields.conflist;
  if ( !Object )
    goto LABEL_36;
  v39 = *(_QWORD *)&Object->fields.m_CachedPtr;
  v40 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(Object[1].klass);
  if ( !v39 )
    goto LABEL_36;
  klass_low = SLODWORD(Object[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(v39 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Object,
      (Il2CppObject *)v21,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    v42 = v39 + 8 * klass_low;
    LODWORD(Object[1].klass) = klass_low + 1;
    *(_QWORD *)(v42 + 32) = v21;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v42 + 32), (int64_t)v21, v26, v27, v28, v29, v30, v31);
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
  int64_t v18; // x22
  System_Collections_Generic_List_object__o *conflist; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  const MethodInfo *v27; // x1
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int32_t colIndex; // w8
  __int64 v36; // x9
  int32_t v37; // w10
  __int64 v38; // x11
  __int64 *v39; // x8
  __int64 v40; // x20
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 *v47; // x21
  Il2CppObject *current; // x22
  struct System_Collections_Generic_List_GameObject__o *v49; // x8
  int32_t size; // w2
  int v51; // w9
  UnityEngine_Object_o *levelUpSimpleAnim; // x22
  System_Collections_Generic_List_object__c *klass; // x8
  System_Collections_Generic_List_object__o *v54; // x22
  __int64 v55; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v57; // x0
  UnityEngine_Object_o *levelUpAnim; // x22
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  __int64 v65; // x9
  __int64 v66; // x8
  __int64 v67; // x9
  struct BattleResultBondsIconComponent_o *v68; // x1
  UnityEngine_Object_o *figureMoveRoot; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o **v71; // x21
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  UnityEngine_GameObject_o *v78; // x0
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  struct BattleResultBondsIconComponent_o *openCollect; // x8
  int32_t svtId; // w22
  int32_t svtLimit; // w23
  BattleResultBondsFigureComponent_o *bondsFigure; // x19
  UnityEngine_GameObject_o *v89; // x21
  System_Action_o *v90; // x24
  const MethodInfo *v91; // [xsp+0h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o v92; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v93; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BB7A2F & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__Clear__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v9);
    sub_1C13D24(&SimpleAnimation_State_TypeInfo, v10);
    sub_1C13D24(&BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo, v11);
    sub_1C13D24(&Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__, v12);
    sub_1C13D24(&BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo, v13);
    sub_1C13D24(&StringLiteral_17542/*"bit_raidreset"*/, v14);
    sub_1C13D24(&StringLiteral_3620/*"CLICK_USER_SERVANT_COIN"*/, v15);
    sub_1C13D24(&StringLiteral_5590/*"END_OPENING_MOVIE"*/, v16);
    sub_1C13D24(&StringLiteral_3623/*"CLOSE"*/, v17);
    byte_4BB7A2F = 1;
  }
  memset(&v93, 0, sizeof(v93));
  v18 = sub_1C13F70(BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_68;
  *(_QWORD *)(v18 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v18 + 16), (int64_t)this, v21, v22, v23, v24, v25, v26);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v27);
  *(_QWORD *)(v18 + 24) = BondsIconArray;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v18 + 24), (int64_t)BondsIconArray, v29, v30, v31, v32, v33, v34);
  colIndex = this->fields.colIndex;
  v36 = *(_QWORD *)(v18 + 24);
  *(_DWORD *)(v18 + 32) = colIndex;
  if ( !v36 )
    goto LABEL_68;
  v37 = *(_DWORD *)(v36 + 24);
  if ( colIndex >= v37 )
    goto LABEL_12;
  do
  {
    if ( colIndex >= (unsigned int)v37 )
    {
      this->fields.colIndex = colIndex;
      sub_1C13F88(conflist, v20);
    }
    v38 = *(_QWORD *)(v36 + 8LL * colIndex + 32);
    if ( !v38 )
    {
      this->fields.colIndex = colIndex;
      sub_1C13F80(conflist, v20);
    }
    if ( *(_BYTE *)(v38 + 128) && *(_DWORD *)(v38 + 176) != *(_DWORD *)(v38 + 184) )
    {
      this->fields.colIndex = colIndex;
      v40 = sub_1C13F70(BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v40, 0LL);
      if ( !v40 )
        goto LABEL_68;
      *(_QWORD *)(v40 + 24) = v18;
      v47 = (__int64 *)(v40 + 24);
      sub_1C13CC8((PartyOrganizationUtility_o *)(v40 + 24), v18, v41, v42, v43, v44, v45, v46);
      conflist = (System_Collections_Generic_List_object__o *)this->fields.conflist;
      if ( !conflist )
        goto LABEL_68;
      if ( conflist->fields._size >= 1 )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v92,
          conflist,
          (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
        v93 = v92;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v93,
                  (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
        {
          current = v93.fields._current;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_70721988((UnityEngine_Object_o *)current, 0LL);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v93,
          (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
        v49 = this->fields.conflist;
        if ( !v49 )
          goto LABEL_68;
        size = v49->fields._size;
        v51 = v49->fields._version + 1;
        v49->fields._size = 0;
        v49->fields._version = v51;
        if ( size >= 1 )
          System_Array__Clear((System_Array_o *)v49->fields._items, 0, size, 0LL);
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
                                                                  (System_String_o *)StringLiteral_17542/*"bit_raidreset"*/,
                                                                  0LL);
        if ( !conflist )
          goto LABEL_68;
        klass = conflist->klass;
        v54 = conflist;
        v55 = *(unsigned __int16 *)(&conflist->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&conflist->klass->_2.bitflags2 + 3) )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v55;
            p_offset += 2;
            if ( !v55 )
              goto LABEL_41;
          }
          v57 = (__int64)(&klass->vtable._4_unknown.method + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_41:
          v57 = sub_1C65D04(conflist, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(System_Collections_Generic_List_object__o *, _QWORD, float))v57)(
          v54,
          *(_QWORD *)(v57 + 8),
          0.0);
        conflist = (System_Collections_Generic_List_object__o *)this->fields.levelUpSimpleAnim;
        if ( !conflist )
          goto LABEL_68;
        conflist = (System_Collections_Generic_List_object__o *)SimpleAnimation__Play_65106228(
                                                                  (SimpleAnimation_o *)conflist,
                                                                  (System_String_o *)StringLiteral_17542/*"bit_raidreset"*/,
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
                                                                    (System_String_o *)StringLiteral_17542/*"bit_raidreset"*/,
                                                                    0LL);
          if ( !conflist )
            goto LABEL_68;
          UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)conflist, 0.0, 0LL);
          conflist = (System_Collections_Generic_List_object__o *)this->fields.levelUpAnim;
          if ( !conflist )
            goto LABEL_68;
          conflist = (System_Collections_Generic_List_object__o *)UnityEngine_Animation__Play_70466396(
                                                                    (UnityEngine_Animation_o *)conflist,
                                                                    (System_String_o *)StringLiteral_17542/*"bit_raidreset"*/,
                                                                    0LL);
        }
      }
      v65 = *v47;
      if ( *v47 )
      {
        v66 = *(_QWORD *)(v65 + 24);
        if ( v66 )
        {
          v67 = *(int *)(v65 + 32);
          if ( (unsigned int)v67 >= *(_DWORD *)(v66 + 24) )
            sub_1C13F88(conflist, v20);
          v68 = *(struct BattleResultBondsIconComponent_o **)(v66 + 8 * v67 + 32);
          this->fields.openCollect = v68;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&this->fields.openCollect,
            (int64_t)v68,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64);
          figureMoveRoot = (UnityEngine_Object_o *)this->fields.figureMoveRoot;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(figureMoveRoot, 0LL, 0LL) )
          {
            conflist = (System_Collections_Generic_List_object__o *)this->fields.figureMoveRoot;
            if ( !conflist )
              goto LABEL_68;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)conflist, 0LL);
            *(_QWORD *)(v40 + 16) = gameObject;
            v71 = (UnityEngine_GameObject_o **)(v40 + 16);
            sub_1C13CC8((PartyOrganizationUtility_o *)(v40 + 16), (int64_t)gameObject, v72, v73, v74, v75, v76, v77);
            conflist = *(System_Collections_Generic_List_object__o **)(v40 + 16);
            if ( !conflist )
              goto LABEL_68;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)conflist, 0, 0LL);
          }
          else
          {
            conflist = (System_Collections_Generic_List_object__o *)this->fields.figureRoot;
            if ( !conflist )
              goto LABEL_68;
            v78 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)conflist, 0LL);
            *(_QWORD *)(v40 + 16) = v78;
            v71 = (UnityEngine_GameObject_o **)(v40 + 16);
            sub_1C13CC8((PartyOrganizationUtility_o *)(v40 + 16), (int64_t)v78, v79, v80, v81, v82, v83, v84);
          }
          openCollect = this->fields.openCollect;
          if ( openCollect )
          {
            svtId = openCollect->fields.svtId;
            svtLimit = openCollect->fields.svtLimit;
            bondsFigure = this->fields.bondsFigure;
            v89 = *v71;
            v90 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
            System_Action___ctor(
              v90,
              (Il2CppObject *)v40,
              Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__,
              0LL);
            if ( bondsFigure )
            {
              BattleResultBondsFigureComponent__SetupFigure(bondsFigure, v89, svtId, svtLimit, 7, 0, 51, v90, v91);
              return;
            }
          }
        }
      }
LABEL_68:
      sub_1C13F80(conflist, v20);
    }
    *(_DWORD *)(v18 + 32) = ++colIndex;
  }
  while ( colIndex < v37 );
  this->fields.colIndex = colIndex - 1;
LABEL_12:
  conflist = (System_Collections_Generic_List_object__o *)this->fields.myFsm;
  if ( !this->fields.openBoundsFlg )
  {
    if ( conflist )
    {
      v39 = &StringLiteral_3620/*"CLICK_USER_SERVANT_COIN"*/;
      goto LABEL_27;
    }
    goto LABEL_68;
  }
  if ( !conflist )
    goto LABEL_68;
  if ( this->fields.isMultiDeck )
    v39 = &StringLiteral_3623/*"CLOSE"*/;
  else
    v39 = &StringLiteral_5590/*"END_OPENING_MOVIE"*/;
LABEL_27:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)conflist, (System_String_o *)*v39, 0LL);
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

  if ( (byte_4BB7A35 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_BattleResultBondsComponent__checkShow_b__67_0__, v3);
    sub_1C13D24(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v4);
    byte_4BB7A35 = 1;
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
        v8 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
        System_Action___ctor(v8, (Il2CppObject *)this, Method_BattleResultBondsComponent__checkShow_b__67_0__, 0LL);
        if ( Instance )
        {
          SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)Instance, v8, 0LL);
          return;
        }
        goto LABEL_23;
      }
      parentComp = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
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
    sub_1C13F80(parentComp, method);
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

  if ( (byte_4BB7A36 & 1) == 0 )
  {
    sub_1C13D24(&Method_BattleResultBondsComponent_closeBondUp__, method);
    sub_1C13D24(&Method_BattleResultBondsComponent_endCloseBondUp__, v3);
    sub_1C13D24(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_UIUnityRenderer__Clear__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Count__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__, v7);
    byte_4BB7A36 = 1;
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
                       (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
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
    v13 = (_QWORD *)sub_1C13D3C(Method_BattleResultBondsComponent_closeBondUp__);
  v14 = (System_Reflection_MethodBase_o *)sub_1C13D08(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0LL);
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (effectUIList = parentComp->fields.obj_fronttouch) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effectUIList, 0, 0LL),
        (effectUIList = this->fields.bondsFigure) == 0LL)
    || (BattleResultBondsFigureComponent__DestroyFigure((BattleResultBondsFigureComponent_o *)effectUIList, v8),
        confwindow = this->fields.confwindow,
        v17 = (BattleWindowComponent_EndCall_o *)sub_1C13F70(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v17,
          (Il2CppObject *)this,
          Method_BattleResultBondsComponent_endCloseBondUp__,
          0LL),
        !confwindow) )
  {
LABEL_19:
    sub_1C13F80(effectUIList, v8);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))confwindow->klass->vtable._12_Close.method)(
    confwindow,
    v17,
    confwindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultBondsComponent__endClose(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  const MethodInfo *v10; // x1
  ServantFaceIconComponent_o *BondsIconArray; // x0
  __int64 v12; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  ServantFaceIconComponent_o *v14; // x20
  int v15; // w21
  int v16; // w22
  __int64 v17; // x8

  if ( (byte_4BB7A39 & 1) == 0 )
  {
    sub_1C13D24(&OptionManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_5590/*"END_OPENING_MOVIE"*/, v9);
    byte_4BB7A39 = 1;
  }
  this->fields.resultAssetData = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.resultAssetData, 0LL, v2, v3, v4, v5, v6, v7);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    BondsIconArray = (ServantFaceIconComponent_o *)BattleResultBondsComponent__GetBondsIconArray(this, v10);
    if ( !BondsIconArray )
      goto LABEL_17;
    m_CancellationTokenSource = BondsIconArray->fields.m_CancellationTokenSource;
    v14 = BondsIconArray;
    v15 = (_DWORD)m_CancellationTokenSource - 1;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        v17 = *((_QWORD *)&v14->fields.backSprite + v16);
        if ( !v17 )
          break;
        BondsIconArray = *(ServantFaceIconComponent_o **)(v17 + 48);
        if ( !BondsIconArray )
          break;
        ServantFaceIconComponent__ClearFaceAtlas(BondsIconArray, 0LL);
        if ( v15 == v16 )
          goto LABEL_14;
        if ( (unsigned int)++v16 >= LODWORD(v14->fields.m_CancellationTokenSource) )
          sub_1C13F88(BondsIconArray, v12);
      }
LABEL_17:
      sub_1C13F80(BondsIconArray, v12);
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_5590/*"END_OPENING_MOVIE"*/, 0LL);
}


void __fastcall BattleResultBondsComponent__endCloseBondUp(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BB7A37 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_5590/*"END_OPENING_MOVIE"*/, method);
    byte_4BB7A37 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C13F80(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5590/*"END_OPENING_MOVIE"*/, 0LL);
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
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  struct System_Object_array *items; // x8
  _QWORD *v98; // x9
  __int64 size; // x10
  Il2CppClass **v100; // x0
  System_Object_array *v101; // x0
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  int v108; // w20
  UnityEngine_Transform_o *confRoot; // x21
  unsigned int localPosition; // s0
  int v111; // w8
  float v112; // s1
  int v113; // w20
  float v114; // s1
  int v115; // s2
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *rankupConfLabel; // x21
  struct BattleWindowComponent_o *confwindow; // x20
  BattleWindowComponent_EndCall_o *v119; // x21
  ServantEntity_o *v120; // [xsp+0h] [xbp-D0h]
  System_Text_StringBuilder_o *v121; // [xsp+8h] [xbp-C8h]
  int32_t key; // [xsp+14h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v123; // [xsp+18h] [xbp-B8h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+30h] [xbp-A0h] BYREF
  System_String_o *countText; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v126; // [xsp+40h] [xbp-90h] BYREF
  System_String_o *nameText; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4BB7A33 & 1) == 0 )
  {
    sub_1C13D24(&Method_BattleResultBondsComponent_endMoveFigure__, method);
    sub_1C13D24(&Method_BattleResultBondsComponent_openedBondUp__, v3);
    sub_1C13D24(&BattleResultBondsComponent_TypeInfo, v4);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5);
    sub_1C13D24(&Method_DataManager_GetMaster_ItemMaster___, v6);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_1C13D24(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v9);
    sub_1C13D24(&DataManager_TypeInfo, v10);
    sub_1C13D24(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v11);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1C13D24(&BattleWindowComponent_EndCall_TypeInfo, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__, v16);
    sub_1C13D24(&int_TypeInfo, v17);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__, v18);
    sub_1C13D24(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__, v19);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__, v20);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__, v21);
    sub_1C13D24(&System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo, v22);
    sub_1C13D24(&LocalizationManager_TypeInfo, v23);
    sub_1C13D24(&NetworkManager_TypeInfo, v24);
    sub_1C13D24(&ServantCommentManager_TypeInfo, v25);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1C13D24(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v27);
    sub_1C13D24(&System_Text_StringBuilder_TypeInfo, v28);
    sub_1C13D24(&StringLiteral_11280/*"REST"*/, v29);
    sub_1C13D24(&StringLiteral_11283/*"RESTRICTION_NOT_SATISFY_DIALOG_TITLE"*/, v30);
    sub_1C13D24(&StringLiteral_11282/*"RESTRICTION_NOT_SATISFY_DIALOG_REQUIRED"*/, v31);
    sub_1C13D24(&StringLiteral_11278/*"RESET_DIGGING_CONFIRM_DIALOG_MESSAGE"*/, v32);
    sub_1C13D24(&StringLiteral_11276/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, v33);
    sub_1C13D24(&StringLiteral_25417/*"{0} / {1}"*/, v34);
    sub_1C13D24(&StringLiteral_1/*""*/, v35);
    sub_1C13D24(&StringLiteral_11277/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, v36);
    byte_4BB7A33 = 1;
  }
  memset(&v126, 0, sizeof(v126));
  nameText = 0LL;
  entity = 0LL;
  countText = 0LL;
  v37 = (System_Text_StringBuilder_o *)sub_1C13F70(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v37, 0LL);
  v38 = Method_BattleResultBondsComponent_endMoveFigure__;
  if ( (*((_BYTE *)Method_BattleResultBondsComponent_endMoveFigure__ + 83) & 2) != 0 )
    v38 = (_QWORD *)sub_1C13D3C(Method_BattleResultBondsComponent_endMoveFigure__);
  v39 = (System_Reflection_MethodBase_o *)sub_1C13D08(v38, v38[4]);
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
  lvComp = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !lvComp )
    goto LABEL_117;
  v121 = v37;
  lvComp = (__int64)clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
                      (clsQuestCheck_o *)lvComp,
                      svtId,
                      friendshipRank,
                      8,
                      0LL);
  if ( lvComp )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v123,
      (System_Collections_Generic_List_object__o *)lvComp,
      (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    v45 = 0;
    v126 = v123;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v126,
              (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
    {
      current = v126.fields._current;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v47 = LocalizationManager__Get((System_String_o *)StringLiteral_11280/*"REST"*/, 0LL);
      if ( !current )
        sub_1C13F80(v47, v48);
      v49 = v47;
      QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0LL);
      v51 = System_String__Format(v49, QuestName, 0LL);
      BattleResultBondsComponent__addConfObject(this, v51, (float)v45 * 22.0, -1, 0, 0, v52);
      v45 += 3;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v126,
      (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  }
  else
  {
    v45 = 0;
  }
  v53 = this->fields.openCollect;
  if ( !v53 )
    goto LABEL_117;
  svtLimit = v53->fields.svtLimit;
  lvComp = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lvComp )
    goto LABEL_117;
  lvComp = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)lvComp,
                      (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
    v56 = &StringLiteral_11283/*"RESTRICTION_NOT_SATISFY_DIALOG_TITLE"*/;
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
  lvComp = ServantCommentManager__IsOpenByServantFriendShip_41656988(
             svtId,
             friendshipRank,
             ServantLimitCountSealAfter,
             0LL);
  if ( (lvComp & 1) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v56 = &StringLiteral_11282/*"RESTRICTION_NOT_SATISFY_DIALOG_REQUIRED"*/;
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
    v62 = LocalizationManager__Get((System_String_o *)StringLiteral_11276/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
    BattleResultBondsComponent__addConfObject(this, v62, (float)v45 * 22.0, -1, 0, 0, v63);
    v45 += 2;
  }
  if ( this->fields.rewardInfos )
  {
    v64 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v64,
      (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ItemMaster___);
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
          sub_1C13F88(lvComp, v41);
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
                    (const MethodInfo_3238624 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( v73 && LODWORD(v73[3].klass) == 29 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v74 = LocalizationManager__Get((System_String_o *)StringLiteral_11277/*"RESET_DIGGING_CONFIRM_DIALOG_DECIDE"*/, 0LL);
              LODWORD(v123.fields._list) = v72->fields.num;
              v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v123, v75, v76, v77);
              countText = System_String__Format(v74, v78, 0LL);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantMaster___);
              if ( !lvComp )
                goto LABEL_117;
              v79 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)lvComp,
                      key,
                      (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( v79 )
              {
                v120 = (ServantEntity_o *)v79;
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                if ( !byte_4BAF1E5 )
                {
                  sub_1C13D24(&NetworkManager_TypeInfo, v41);
                  byte_4BAF1E5 = 1;
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
                  lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
                Name = (Il2CppObject *)ServantEntity__getName(v120, v81, -1, 0LL);
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v86 = LocalizationManager__Get((System_String_o *)StringLiteral_11278/*"RESET_DIGGING_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
                nameText = System_String__Format_62982316(v86, (Il2CppObject *)nameText, Name, 0LL);
              }
              v84 = 1;
            }
            else
            {
              v84 = 0;
            }
            v87 = System_String__Format_62982316(
                    (System_String_o *)StringLiteral_25417/*"{0} / {1}"*/,
                    (Il2CppObject *)nameText,
                    (Il2CppObject *)countText,
                    0LL);
            IconImageId = GiftEntity__getIconImageId(v72, 0LL);
            BattleResultBondsComponent__addConfObject(this, v87, (float)v45 * 22.0, IconImageId, v84, 0, v89);
          }
          else
          {
            v82 = System_String__Format_62982316(
                    (System_String_o *)StringLiteral_25417/*"{0} / {1}"*/,
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
            v98 = Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__;
            ++v64->fields._version;
            if ( !items )
              goto LABEL_117;
            size = v64->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v64,
                (Il2CppObject *)v71,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
            }
            else
            {
              v100 = &items->obj.klass + size;
              v64->fields._size = size + 1;
              v100[4] = (Il2CppClass *)v71;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v100 + 4), (int64_t)v71, v91, v92, v93, v94, v95, v96);
            }
          }
        }
        max_length = rewardInfos->max_length;
        ++v68;
      }
      while ( v68 < max_length );
      if ( !v64 )
LABEL_117:
        sub_1C13F80(lvComp, v41);
    }
    v101 = System_Collections_Generic_List_object___ToArray(
             v64,
             (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__);
    this->fields.showList = (struct BattleFriendshipRewardInfo_array *)v101;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.showList, (int64_t)v101, v102, v103, v104, v105, v106, v107);
    this->fields.showIndex = 0;
  }
  else
  {
    CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
  }
  lvComp = (__int64)this->fields.confSprite;
  if ( v45 )
    v108 = v45;
  else
    v108 = 1;
  if ( !lvComp )
    goto LABEL_117;
  UIWidget__set_height((UIWidget_o *)lvComp, CONF_SERVANT_COIN_PLUS_HEIGHT + 22 * v108 + 120, 0LL);
  confRoot = this->fields.confRoot;
  if ( !confRoot )
    goto LABEL_117;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.confRoot, 0LL);
  if ( CONF_SERVANT_COIN_PLUS_HEIGHT >= 0 )
    v111 = CONF_SERVANT_COIN_PLUS_HEIGHT;
  else
    v111 = CONF_SERVANT_COIN_PLUS_HEIGHT + 1;
  v112 = (float)v108;
  v113 = v111 >> 1;
  v114 = (float)(v112 * 11.0) + (float)(v111 >> 1);
  v115 = 0;
  UnityEngine_Transform__set_localPosition(confRoot, *(UnityEngine_Vector3_o *)&localPosition, 0LL);
  if ( CONF_SERVANT_COIN_PLUS_HEIGHT )
  {
    lvComp = (__int64)this->fields.confwindow;
    if ( !lvComp )
      goto LABEL_117;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lvComp, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, (float)-v113, 0LL);
    lvComp = (__int64)this->fields.confwindow;
    if ( !lvComp )
      goto LABEL_117;
    lvComp = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)lvComp + 424LL))(
               lvComp,
               *(_QWORD *)(*(_QWORD *)lvComp + 432LL));
  }
  if ( !v121 )
    goto LABEL_117;
  rankupConfLabel = this->fields.rankupConfLabel;
  lvComp = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v121->klass->vtable._3_ToString.method)(
             v121,
             v121->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !rankupConfLabel )
    goto LABEL_117;
  UILabel__set_text(rankupConfLabel, (System_String_o *)lvComp, 0LL);
  confwindow = this->fields.confwindow;
  v119 = (BattleWindowComponent_EndCall_o *)sub_1C13F70(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v119,
    (Il2CppObject *)this,
    Method_BattleResultBondsComponent_openedBondUp__,
    0LL);
  if ( !confwindow )
    goto LABEL_117;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))confwindow->klass->vtable._10_Open.method)(
    confwindow,
    v119,
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
        sub_1C13F88(this, collects);
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
    sub_1C13F80(this, collects);
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
    sub_1C13F80(this, deck);
  max_length = svts->max_length;
  if ( max_length < 1 )
    return 0LL;
  v6 = 0;
  while ( 1 )
  {
    if ( max_length == v6 )
      sub_1C13F88(this, deck);
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
    sub_1C13F80(this, method);
  return (signed int)oldCollections->max_length > 1;
}


void __fastcall BattleResultBondsComponent__openedBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *parentComp; // x0
  struct BattleResultComponent_o *v4; // x8

  if ( (byte_4BB7A34 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_5585/*"END_NP"*/, method);
    byte_4BB7A34 = 1;
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
    sub_1C13F80(parentComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)parentComp, (System_String_o *)StringLiteral_5585/*"END_NP"*/, 0LL);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB7A40 & 1) == 0 )
  {
    sub_1C13D24(&BattleResultBondsComponent___c_TypeInfo, v1);
    byte_4BB7A40 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(BattleResultBondsComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleResultBondsComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultBondsComponent___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)BattleResultBondsComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C13F80(this, 0LL);
  return col->fields.isUse;
}


bool __fastcall BattleResultBondsComponent___c___SetResultDataLocal_b__49_0(
        BattleResultBondsComponent___c_o *this,
        QuestRewardInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields.type == 7 && x->fields.isNew;
}


bool __fastcall BattleResultBondsComponent___c___SetResultDataLocal_b__49_1(
        BattleResultBondsComponent___c_o *this,
        GetSvts_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
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
    sub_1C13F80(this, 0LL);
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  BattleResultBondsComponent___c__DisplayClass61_1_o *v26; // x21
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  BattleResultBondsComponent___c__DisplayClass61_1_o *v36; // x22
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  BattleResultBondsComponent___c__DisplayClass61_1_o *v52; // x22
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  BattleResultBondsComponent___c__DisplayClass61_1_o *v68; // x22
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v75; // x8
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  BattleResultBondsComponent___c__DisplayClass61_1_o *v82; // x22
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  System_Collections_Hashtable_o *v95; // x0
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v96; // x8
  struct BattleResultBondsComponent_o *v97; // x8
  const MethodInfo *v98; // x2
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v99; // x8
  struct BattleResultBondsIconComponent_array *bondsIcons; // x9
  __int64 i; // x10
  __int64 v102; // x0
  char v103[4]; // [xsp+4h] [xbp-3Ch] BYREF
  int v104; // [xsp+8h] [xbp-38h] BYREF
  int v105; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_4BB7A41 & 1) == 0 )
  {
    sub_1C13D24(&bool_TypeInfo, method);
    sub_1C13D24(&object___TypeInfo, v3);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v4);
    sub_1C13D24(&float_TypeInfo, v5);
    sub_1C13D24(&StringLiteral_25141/*"wipeinEx"*/, v6);
    sub_1C13D24(&StringLiteral_9802/*"OK_CONTINUE_ITEM"*/, v7);
    sub_1C13D24(&StringLiteral_24320/*"textarea"*/, v8);
    sub_1C13D24(&StringLiteral_22645/*"onFetchStorePromotionVisibilityFailed"*/, v9);
    sub_1C13D24(&StringLiteral_19308/*"encoding="*/, v10);
    sub_1C13D24(&StringLiteral_21179/*"isSkillShiftInfo"*/, v11);
    sub_1C13D24(&StringLiteral_22643/*"onFetchStorePromotionOrderFailed"*/, v12);
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C13D24(&iTween_TypeInfo, v13);
    byte_4BB7A41 = 1;
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
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C13DCC(object___TypeInfo, 10LL);
  if ( !this )
    goto LABEL_69;
  v26 = this;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_25141/*"wipeinEx"*/;
  if ( StringLiteral_25141/*"wipeinEx"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C13E60(
                                                                   StringLiteral_25141/*"wipeinEx"*/,
                                                                   v26->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_25141/*"wipeinEx"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( !LODWORD(v26->fields.CS___8__locals1) )
    goto LABEL_70;
  v26[1].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)method;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v26[1], (int64_t)method, v20, v21, v22, v23, v24, v25);
  v105 = -1007026176;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(
                                                                 float_TypeInfo,
                                                                 &v105,
                                                                 v27,
                                                                 v28,
                                                                 v29);
  v36 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C13E60(this, v26->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v26->fields.CS___8__locals1) <= 1 )
    goto LABEL_70;
  v26[1].monitor = v36;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v26[1].monitor, (int64_t)v36, v30, v31, v32, v33, v34, v35);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_24320/*"textarea"*/;
  if ( StringLiteral_24320/*"textarea"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C13E60(
                                                                   StringLiteral_24320/*"textarea"*/,
                                                                   v26->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_24320/*"textarea"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v26->fields.CS___8__locals1) <= 2 )
    goto LABEL_70;
  v26[1].fields.parent = (struct UnityEngine_GameObject_o *)method;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v26[1].fields, (int64_t)method, v37, v38, v39, v40, v41, v42);
  v104 = 1061997773;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(
                                                                 float_TypeInfo,
                                                                 &v104,
                                                                 v43,
                                                                 v44,
                                                                 v45);
  v52 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C13E60(this, v26->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v26->fields.CS___8__locals1) <= 3 )
    goto LABEL_70;
  v26[1].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v52;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v26[1].fields.CS___8__locals1, (int64_t)v52, v46, v47, v48, v49, v50, v51);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_21179/*"isSkillShiftInfo"*/;
  if ( StringLiteral_21179/*"isSkillShiftInfo"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C13E60(
                                                                   StringLiteral_21179/*"isSkillShiftInfo"*/,
                                                                   v26->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_21179/*"isSkillShiftInfo"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v26->fields.CS___8__locals1) <= 4 )
    goto LABEL_70;
  v26[2].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)method;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v26[2], (int64_t)method, v53, v54, v55, v56, v57, v58);
  v103[0] = 1;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(bool_TypeInfo, v103, v59, v60, v61);
  v68 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C13E60(this, v26->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v26->fields.CS___8__locals1) <= 5 )
    goto LABEL_70;
  v26[2].monitor = v68;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v26[2].monitor, (int64_t)v68, v62, v63, v64, v65, v66, v67);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_22645/*"onFetchStorePromotionVisibilityFailed"*/;
  if ( StringLiteral_22645/*"onFetchStorePromotionVisibilityFailed"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C13E60(
                                                                   StringLiteral_22645/*"onFetchStorePromotionVisibilityFailed"*/,
                                                                   v26->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_22645/*"onFetchStorePromotionVisibilityFailed"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v26->fields.CS___8__locals1) <= 6 )
    goto LABEL_70;
  v26[2].fields.parent = (struct UnityEngine_GameObject_o *)method;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v26[2].fields, (int64_t)method, v69, v70, v71, v72, v73, v74);
  v75 = v2->fields.CS___8__locals1;
  if ( !v75 || (this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v75->fields.__4__this) == 0LL )
LABEL_69:
    sub_1C13F80(this, method);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
  v82 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C13E60(this, v26->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v26->fields.CS___8__locals1) <= 7 )
    goto LABEL_70;
  v26[2].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v82;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v26[2].fields.CS___8__locals1, (int64_t)v82, v76, v77, v78, v79, v80, v81);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_22643/*"onFetchStorePromotionOrderFailed"*/;
  if ( StringLiteral_22643/*"onFetchStorePromotionOrderFailed"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C13E60(
                                                                   StringLiteral_22643/*"onFetchStorePromotionOrderFailed"*/,
                                                                   v26->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_22643/*"onFetchStorePromotionOrderFailed"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v26->fields.CS___8__locals1) <= 8 )
    goto LABEL_70;
  v26[3].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)method;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v26[3], (int64_t)method, v83, v84, v85, v86, v87, v88);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_19308/*"encoding="*/;
  if ( !StringLiteral_19308/*"encoding="*/ )
  {
    method = 0LL;
    goto LABEL_57;
  }
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1C13E60(
                                                                 StringLiteral_19308/*"encoding="*/,
                                                                 v26->klass->_1.element_class);
  if ( !this )
  {
LABEL_71:
    v102 = sub_1C13FA4(this);
    sub_1C13E4C(v102, 0LL);
  }
  method = (const MethodInfo *)StringLiteral_19308/*"encoding="*/;
LABEL_57:
  if ( LODWORD(v26->fields.CS___8__locals1) <= 9 )
    goto LABEL_70;
  v26[3].monitor = (void *)method;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v26[3].monitor, (int64_t)method, v89, v90, v91, v92, v93, v94);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v95 = iTween__Hash((System_Object_array *)v26, 0LL);
  iTween__MoveFrom_61507004(parent, v95, 0LL);
LABEL_61:
  v96 = v2->fields.CS___8__locals1;
  if ( !v96 )
    goto LABEL_69;
  v97 = v96->fields.__4__this;
  if ( !v97 )
    goto LABEL_69;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v97->fields.myFsm;
  v97->fields.openBoundsFlg = 1;
  if ( !this )
    goto LABEL_69;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9802/*"OK_CONTINUE_ITEM"*/, 0LL);
  v99 = v2->fields.CS___8__locals1;
  if ( !v99 )
    goto LABEL_69;
  bondsIcons = v99->fields.bondsIcons;
  if ( !bondsIcons )
    goto LABEL_69;
  i = v99->fields.i;
  if ( (unsigned int)i >= bondsIcons->max_length )
LABEL_70:
    sub_1C13F88(this, method);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v99->fields.__4__this;
  if ( !this )
    goto LABEL_69;
  BattleResultBondsComponent__CheckFormalJoin((BattleResultBondsComponent_o *)this, bondsIcons->m_Items[i], v98);
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

  if ( (byte_4BB7A42 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4BB7A42 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v4);
  CommonUI__CreateServantCoinConfirmDialog((CommonUI_o *)Instance, 1, this->fields.coin, 0LL, 0LL);
}