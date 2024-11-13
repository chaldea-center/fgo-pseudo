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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct BattleResultBondsComponent_StaticFields *static_fields; // x0
  int64_t v13; // x1
  int64_t v14; // x1
  struct BattleResultBondsComponent_StaticFields *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B194AA & 1) == 0 )
  {
    sub_1BCA7E0(&BattleResultBondsComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_7144/*"GetNewSvt"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_7130/*"GetExistSvt"*/, v10, v11);
    byte_4B194AA = 1;
  }
  static_fields = BattleResultBondsComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SVT_GAP_5 = 0x4316000043320000LL;
  *(_QWORD *)&static_fields->CONF_LABEL_MAX_WIDTH = 0x12000001D0LL;
  v13 = StringLiteral_7144/*"GetNewSvt"*/;
  static_fields->GET_NEW_SVT_KEY = (struct System_String_o *)StringLiteral_7144/*"GetNewSvt"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->GET_NEW_SVT_KEY, v13, v2, v3, v4, v5, v6, v7);
  v14 = StringLiteral_7130/*"GetExistSvt"*/;
  v15 = BattleResultBondsComponent_TypeInfo->static_fields;
  v15->GET_EXIST_SVT_KEY = (struct System_String_o *)StringLiteral_7130/*"GetExistSvt"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v15->GET_EXIST_SVT_KEY, v14, v16, v17, v18, v19, v20, v21);
}


void __fastcall BattleResultBondsComponent___ctor(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Collections_Generic_List_object__o *v23; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  BattleResultBondsFigureComponent_o *v33; // x20
  const MethodInfo *v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7

  if ( (byte_4B194A9 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleResultBondsFigureComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v11, v12);
    byte_4B194A9 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.conflist = (struct System_Collections_Generic_List_GameObject__o *)v13;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.conflist, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  this->fields.buddyPointInfoWindowHeight = 366;
  this->fields.tempSaveTimeScale = 1.0;
  v23 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__TypeInfo,
                                                       v20,
                                                       v21,
                                                       v22);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent___ctor__);
  this->fields.bondsList = (struct System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__o *)v23;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bondsList, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  v33 = (BattleResultBondsFigureComponent_o *)sub_1BCAA2C(BattleResultBondsFigureComponent_TypeInfo, v30, v31, v32);
  BattleResultBondsFigureComponent___ctor(v33, v34);
  this->fields.bondsFigure = v33;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bondsFigure, (int64_t)v33, v35, v36, v37, v38, v39, v40);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleResultBondsComponent__CheckFormalJoin(
        BattleResultBondsComponent_o *this,
        BattleResultBondsIconComponent_o *collect,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  DataManager_o *Instance; // x0
  __int64 v38; // x1
  struct GetSvts_array *getJoinSvtList; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v40; // x21
  __int64 v41; // x26
  int max_length; // w9
  GetSvts_o *v43; // x8
  UserServantEntity_o *v44; // x24
  __int64 v45; // x2
  __int64 v46; // x3
  EventServantEntity_o *EventServant; // x22
  BattleResultBondsComponent___c_c *v48; // x0
  System_Action_o *_9__62_0; // x23
  Il2CppObject *v50; // x25
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  Il2CppObject *Master_object; // x25
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x24
  int64_t v62; // x23
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  int64_t v66; // x25
  Il2CppObject *v67; // x8
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
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  System_String_o *v83; // x24
  Il2CppObject *v84; // x25
  __int64 v85; // x0
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4B1949B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, collect, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SvtCoinMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v13, v14);
    sub_1BCA7E0(&GetSvtCoin___TypeInfo, v15, v16);
    sub_1BCA7E0(&GetSvtCoin_TypeInfo, v17, v18);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    sub_1BCA7E0(&Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__, v25, v26);
    sub_1BCA7E0(&Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__, v27, v28);
    sub_1BCA7E0(&BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo, v29, v30);
    sub_1BCA7E0(&BattleResultBondsComponent___c_TypeInfo, v31, v32);
    sub_1BCA7E0(&StringLiteral_12499/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_18803/*"dialogIgnoreTime"*/, v35, v36);
    byte_4B1949B = 1;
  }
  entity = 0LL;
  if ( this->fields.getJoinSvtList && !this->fields.isWarboard )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___),
          (getJoinSvtList = this->fields.getJoinSvtList) == 0LL) )
    {
LABEL_45:
      sub_1BCAA3C(Instance, v38);
    }
    v40 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v41 = 0LL;
    while ( 1 )
    {
      max_length = getJoinSvtList->max_length;
      if ( (int)v41 >= max_length )
        break;
      if ( (unsigned int)v41 >= max_length )
        goto LABEL_46;
      v43 = getJoinSvtList->m_Items[v41];
      if ( !v43 )
        goto LABEL_45;
      if ( v43->fields.isNew )
      {
        UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_18803/*"dialogIgnoreTime"*/, 1, 0LL);
        UnityEngine_PlayerPrefs__Save(0LL);
      }
      else
      {
        if ( !v40 )
          goto LABEL_45;
        Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                      v40,
                                      v43->fields.userSvtId,
                                      (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( Instance )
        {
          v44 = (UserServantEntity_o *)Instance;
          Instance = (DataManager_o *)UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
          if ( !collect )
            goto LABEL_45;
          if ( (_DWORD)Instance == collect->fields.svtId )
          {
            EventServant = UserServantEntity__getEventServant(v44, 0LL);
            if ( EventServant
              || (Instance = (DataManager_o *)UserServantEntity__getEventServantIgnoreEnd(v44, 0LL),
                  (EventServant = (EventServantEntity_o *)Instance) != 0LL) )
            {
              v48 = BattleResultBondsComponent___c_TypeInfo;
              if ( !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo, v38);
                v48 = BattleResultBondsComponent___c_TypeInfo;
              }
              _9__62_0 = v48->static_fields->__9__62_0;
              if ( !_9__62_0 )
              {
                if ( !v48->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v48, v38);
                  v48 = BattleResultBondsComponent___c_TypeInfo;
                }
                v50 = (Il2CppObject *)v48->static_fields->__9;
                _9__62_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v38, v45, v46);
                System_Action___ctor(
                  _9__62_0,
                  v50,
                  Method_BattleResultBondsComponent___c__CheckFormalJoin_b__62_0__,
                  0LL);
                static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
                static_fields->__9__62_0 = _9__62_0;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&static_fields->__9__62_0,
                  (int64_t)_9__62_0,
                  v52,
                  v53,
                  v54,
                  v55,
                  v56,
                  v57);
              }
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v38);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SvtCoinMaster___);
              Instance = (DataManager_o *)UserServantEntity__getSvtId(v44, 0LL);
              if ( !Master_object )
                goto LABEL_45;
              Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                            &entity,
                                            (int32_t)Instance,
                                            (const MethodInfo_31B2E94 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !entity )
                  goto LABEL_45;
                if ( SHIDWORD(entity[1].klass) >= 1 )
                {
                  v61 = sub_1BCAA2C(BattleResultBondsComponent___c__DisplayClass62_0_TypeInfo, v38, v59, v60);
                  System_Object___ctor((Il2CppObject *)v61, 0LL);
                  v62 = sub_1BCA888(GetSvtCoin___TypeInfo, 1LL);
                  v66 = sub_1BCAA2C(GetSvtCoin_TypeInfo, v63, v64, v65);
                  GetSvtCoin___ctor((GetSvtCoin_o *)v66, 0LL);
                  v67 = entity;
                  if ( !entity )
                    goto LABEL_45;
                  if ( !v66 )
                    goto LABEL_45;
                  *(_DWORD *)(v66 + 16) = entity[1].klass;
                  *(int32x2_t *)(v66 + 20) = vrev64_s32(*(int32x2_t *)((char *)&v67[1].klass + 4));
                  if ( !v62 )
                    goto LABEL_45;
                  Instance = (DataManager_o *)sub_1BCA91C(v66, *(_QWORD *)(*(_QWORD *)v62 + 64LL));
                  if ( !Instance )
                  {
                    v85 = sub_1BCAA60(0LL);
                    sub_1BCA908(v85, 0LL);
                  }
                  if ( !*(_DWORD *)(v62 + 24) )
LABEL_46:
                    sub_1BCAA44(Instance, v38);
                  *(_QWORD *)(v62 + 32) = v66;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v62 + 32), v66, v68, v69, v70, v71, v72, v73);
                  if ( !v61 )
                    goto LABEL_45;
                  *(_QWORD *)(v61 + 16) = v62;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v61 + 16), v62, v74, v75, v76, v77, v78, v79);
                  _9__62_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v80, v81, v82);
                  System_Action___ctor(
                    _9__62_0,
                    (Il2CppObject *)v61,
                    Method_BattleResultBondsComponent___c__DisplayClass62_0__CheckFormalJoin_b__1__,
                    0LL);
                }
              }
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38);
              v83 = LocalizationManager__Get((System_String_o *)StringLiteral_12499/*"SUMMON_EVENT_SERVANT_TITLE_GET"*/, 0LL);
              v84 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              Instance = (DataManager_o *)EventServantEntity__GetGetMessage(EventServant, 0LL);
              if ( !v84 )
                goto LABEL_45;
              CommonUI__OpenNotificationDialog(
                (CommonUI_o *)v84,
                v83,
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
      ++v41;
      if ( !getJoinSvtList )
        goto LABEL_45;
    }
  }
}


void __fastcall BattleResultBondsComponent__Close(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct BattleWindowComponent_o *multiDeckWindow; // x20
  BattleWindowComponent_EndCall_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B194A3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultBondsComponent_endClose__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v5, v6);
    byte_4B194A3 = 1;
  }
  if ( this->fields.isMultiDeck )
    multiDeckWindow = this->fields.multiDeckWindow;
  else
    multiDeckWindow = this->fields.window;
  v8 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, method, v2, v3);
  BattleWindowComponent_EndCall___ctor(v8, (Il2CppObject *)this, Method_BattleResultBondsComponent_endClose__, 0LL);
  if ( !multiDeckWindow )
    sub_1BCAA3C(v9, v10);
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))multiDeckWindow->klass->vtable._12_Close.method)(
    multiDeckWindow,
    v8,
    multiDeckWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleResultBondsComponent__CloseBondUpRoot(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *upRoot; // x0

  if ( (byte_4B194A8 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B194A8 = 1;
  }
  upRoot = this->fields.upRoot;
  if ( !upRoot
    || (UnityEngine_GameObject__SetActive(upRoot, 0, 0LL),
        (upRoot = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1BCAA3C(upRoot, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)upRoot, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  Il2CppObject *Object_object__49237568; // x21
  BattleResultBondsComponent_o *v19; // x21
  BattleResultBondsComponent_o *v20; // x22
  __int64 v21; // x2
  BattleResultBondsComponent_o *v22; // x22
  __int64 v23; // x2
  BattleResultBondsComponent_o *v24; // x22
  int m_CancellationTokenSource; // w8
  BattleResultBondsComponent_o *v26; // x21
  unsigned int v27; // w22

  v8 = this;
  if ( (byte_4B1949D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, data, targetIcon);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v13, v14);
    this = (BattleResultBondsComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B1949D = 1;
  }
  if ( !data )
    goto LABEL_23;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              data,
                              effectName,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  this = (BattleResultBondsComponent_o *)UnityEngine_Object__Instantiate_object_(
                                           Object_object__49237568,
                                           (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_23;
  v19 = this;
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !targetIcon )
    goto LABEL_23;
  v20 = this;
  this = (BattleResultBondsComponent_o *)UnityEngine_Component__get_transform(
                                           (UnityEngine_Component_o *)targetIcon,
                                           0LL);
  if ( !v20 )
    goto LABEL_23;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v20, (UnityEngine_Transform_o *)this, 0LL);
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v19, 0LL);
  v22 = this;
  if ( !byte_4B109C1 )
  {
    this = (BattleResultBondsComponent_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, data, v21);
    byte_4B109C1 = 1;
  }
  if ( !v22 )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v22,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v19, 0LL);
  v24 = this;
  if ( !byte_4B109C6 )
  {
    this = (BattleResultBondsComponent_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, data, v23);
    byte_4B109C6 = 1;
  }
  if ( !v24 )
    goto LABEL_23;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v24,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  this = (BattleResultBondsComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                           (UnityEngine_GameObject_o *)v19,
                                           (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIUnityRenderer___);
  if ( !this )
    goto LABEL_23;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v26 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      if ( v27 >= m_CancellationTokenSource )
        sub_1BCAA44(this, data);
      this = (BattleResultBondsComponent_o *)*((_QWORD *)&v26->fields.parentComp + (int)v27);
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, targetIcon->fields.mDepth - 1, 0LL);
      m_CancellationTokenSource = (int)v26->fields.m_CancellationTokenSource;
      if ( (int)++v27 >= m_CancellationTokenSource )
        goto LABEL_21;
    }
LABEL_23:
    sub_1BCAA3C(this, data);
  }
LABEL_21:
  this = (BattleResultBondsComponent_o *)v8->fields.effectUIList;
  if ( !this )
    goto LABEL_23;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)v26,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_UIUnityRenderer__AddRange__);
}


void __fastcall BattleResultBondsComponent__DeleteGetJoinSvtData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  BattleResultBondsComponent_c *v3; // x0

  if ( (byte_4B19492 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleResultBondsComponent_TypeInfo, v1, v2);
    byte_4B19492 = 1;
  }
  v3 = BattleResultBondsComponent_TypeInfo;
  if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, v1);
    v3 = BattleResultBondsComponent_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3->static_fields->GET_EXIST_SVT_KEY, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(BattleResultBondsComponent_TypeInfo->static_fields->GET_NEW_SVT_KEY, 0LL);
}


BattleResultBondsIconComponent_array *__fastcall BattleResultBondsComponent__GetBondsIconArray(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  PartyOrganizationUtility_o *p_bondsIconArray; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Collections_Generic_List_object__o *v22; // x20
  __int64 v23; // x1
  System_Collections_Generic_List_object__o *bondsList; // x0
  const MethodInfo *v25; // x1
  System_Collections_Generic_IEnumerable_T__o *BondsIconArray; // x0
  System_Object_array *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B194A5 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__, v8, v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__,
      v10,
      v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo, v16, v17);
    byte_4B194A5 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  if ( this->fields.isMultiDeck )
  {
    p_bondsIconArray = (PartyOrganizationUtility_o *)&this->fields.bondsIconArray;
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.bondsIconArray, 0LL) )
    {
      v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo,
                                                           v19,
                                                           v20,
                                                           v21);
      System_Collections_Generic_List_object____ctor(
        v22,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
      bondsList = (System_Collections_Generic_List_object__o *)this->fields.bondsList;
      if ( !bondsList )
        goto LABEL_17;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v35,
        bondsList,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v35,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
      {
        if ( !v35.fields._current )
          sub_1BCAA3C(0LL, v25);
        BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                          (BattleResultBondsDeckPerWaveComponent_o *)v35.fields._current,
                                                                          v25);
        if ( !v22 )
          sub_1BCAA3C(BondsIconArray, BondsIconArray);
        System_Collections_Generic_List_object___AddRange(
          v22,
          BondsIconArray,
          (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v35,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
      if ( !v22 )
LABEL_17:
        sub_1BCAA3C(bondsList, v23);
      v27 = System_Collections_Generic_List_object___ToArray(
              v22,
              (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
      p_bondsIconArray->klass = (PartyOrganizationUtility_c *)v27;
      sub_1BCA784(p_bondsIconArray, (int64_t)v27, v28, v29, v30, v31, v32, v33);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  BattleWindowComponent_o *window; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Collections_Generic_List_object__o *v12; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  UnityEngine_Object_o *multiDeckWindow; // x20

  if ( (byte_4B19493 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIUnityRenderer___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_UIUnityRenderer__TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B19493 = 1;
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
  v12 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UIUnityRenderer__TypeInfo,
                                                       v9,
                                                       v10,
                                                       v11);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UIUnityRenderer___ctor__);
  this->fields.effectUIList = (struct System_Collections_Generic_List_UIUnityRenderer__o *)v12;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.effectUIList, (int64_t)v12, v13, v14, v15, v16, v17, v18);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
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
    sub_1BCAA3C(window, method);
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
  __int64 v33; // x1
  UnityEngine_Object_o *multiDeckWindow; // x20
  __int64 v35; // x1
  UnityEngine_Object_o *multiBondsPrefab; // x20
  __int64 v37; // x1
  UnityEngine_Object_o *multiBondsRoot; // x20

  v14 = inIsMultiDeck;
  if ( (byte_4B19494 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, oldCollects, inRewardInfos);
    byte_4B19494 = 1;
  }
  this->fields.oldCollections = oldCollects;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.oldCollections,
    (int64_t)oldCollects,
    (int64_t)inRewardInfos,
    (int32_t)resultAsset,
    *(System_String_o **)&baseFriendshipExp,
    (BattleSetupInfo_o *)getJoinSvts,
    (FollowerInfo_o *)inIsMultiDeck,
    (PartyListViewItem_o *)method);
  this->fields.rewardInfos = inRewardInfos;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.rewardInfos,
    (int64_t)inRewardInfos,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.resultAssetData = resultAsset;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.resultAssetData,
    (int64_t)resultAsset,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.getJoinSvtList = getJoinSvts;
  sub_1BCA784(
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
  if ( UnityEngine_Object__op_Equality(multiDeckWindow, 0LL, 0LL) )
    goto LABEL_12;
  multiBondsPrefab = (UnityEngine_Object_o *)this->fields.multiBondsPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
  if ( UnityEngine_Object__op_Equality(multiBondsPrefab, 0LL, 0LL) )
    goto LABEL_12;
  multiBondsRoot = (UnityEngine_Object_o *)this->fields.multiBondsRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
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
  __int64 v15; // x2
  struct BattleResultBondsIconComponent_array *collects; // x8
  const MethodInfo *v17; // x3
  struct BattleResultBondsIconComponent_array *v18; // x8
  struct BattleResultBondsIconComponent_array *v19; // x8
  struct BattleResultBondsIconComponent_array *v20; // x8
  struct UISprite_o *bgFrame; // x8
  float v22; // s8
  struct BattleResultBondsIconComponent_array *v23; // x8
  il2cpp_array_size_t v24; // w24
  float v25; // s9
  int v26; // w25
  float v27; // s10
  struct BattleResultBondsIconComponent_array *v28; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct BattleBuddyPointInfo_array *buddyPointInfos; // x8
  UnityEngine_Object_o *v31; // x20
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  v12 = targetIndex;
  v13 = this;
  if ( (byte_4B194A6 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleResultBondsComponent_TypeInfo, *(_QWORD *)&targetIndex, *(_QWORD *)&cnt);
    this = (BattleResultBondsComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    byte_4B194A6 = 1;
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
      v18 = v13->fields.collects;
      if ( !v18 )
        goto LABEL_49;
      if ( v12 >= v18->max_length )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)v18->m_Items[v12];
      if ( !this )
        goto LABEL_49;
      BattleResultBondsIconComponent__SetBuddyPointInfo((BattleResultBondsIconComponent_o *)this, 0LL, 0, v17);
      v19 = v13->fields.collects;
      if ( !v19 )
        goto LABEL_49;
      if ( v12 >= v19->max_length )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)v19->m_Items[v12];
      if ( !this )
        goto LABEL_49;
      this = (BattleResultBondsComponent_o *)BattleResultBondsIconComponent__changeGauge(
                                               (BattleResultBondsIconComponent_o *)this,
                                               0.0,
                                               *(const MethodInfo **)&targetIndex);
      v20 = v13->fields.collects;
      if ( !v20 )
        goto LABEL_49;
      if ( v12 >= v20->max_length )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)v20->m_Items[v12];
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
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, *(_QWORD *)&targetIndex);
    this = (BattleResultBondsComponent_o *)BattleResultBondsComponent_TypeInfo;
  }
  bgFrame = this->fields.bgFrame;
  if ( isNoFollower )
    bgFrame = (struct UISprite_o *)((char *)bgFrame + 4);
  v22 = *(float *)&bgFrame->klass;
  if ( !isNoFollower )
  {
    v23 = v13->fields.collects;
    if ( !v23 )
      goto LABEL_49;
    if ( v23->max_length <= cnt )
LABEL_50:
      sub_1BCAA44(this, *(_QWORD *)&targetIndex);
    this = (BattleResultBondsComponent_o *)v23->m_Items[cnt];
    if ( !this )
      goto LABEL_49;
    this = (BattleResultBondsComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_49;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  if ( cnt >= 1 )
  {
    v24 = 0;
    v25 = 0.0;
    v26 = 4;
    v27 = (float)(1 - cnt) * 0.5;
    do
    {
      v28 = v13->fields.collects;
      if ( isNoFollower )
        v25 = (float)v26;
      if ( !v28 )
        goto LABEL_49;
      if ( v24 >= v28->max_length )
        goto LABEL_50;
      this = (BattleResultBondsComponent_o *)v28->m_Items[v24];
      if ( !this )
        goto LABEL_49;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionX(gameObject, (float)(v22 * v27) - v25, 0LL);
      ++v24;
      v27 = v27 + 1.0;
      v26 -= 2;
    }
    while ( cnt != v24 );
  }
  if ( !battleResult )
    goto LABEL_49;
  buddyPointInfos = battleResult->fields.buddyPointInfos;
  if ( buddyPointInfos && *(_QWORD *)&buddyPointInfos->max_length && !isHideBuddyPointResult )
  {
    v31 = (UnityEngine_Object_o *)v13->fields.bgFrame;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&targetIndex);
    if ( UnityEngine_Object__op_Inequality(v31, 0LL, 0LL) )
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
      || (v32.fields.x = 0.0,
          v32.fields.y = 13.0,
          v32.fields.z = 0.0,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v32, 0LL),
          (this = (BattleResultBondsComponent_o *)v13->fields.window) == 0LL) )
    {
LABEL_49:
      sub_1BCAA3C(this, *(_QWORD *)&targetIndex);
    }
    (*(void (__fastcall **)(BattleResultBondsComponent_o *, Il2CppClass *))&this->klass[1]._1.this_arg.bits)(
      this,
      this->klass[1]._1.element_class);
  }
}


void __fastcall BattleResultBondsComponent__Open(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  BattleResultBondsComponent___c_c *v22; // x8
  System_Object_array *v23; // x20
  System_Func_object__bool__o *_9__53_0; // x21
  Il2CppObject *v25; // x22
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  _BOOL4 isMultiDeck; // w8
  struct BattleWindowComponent_o *v39; // x20
  __int64 *v40; // x8
  BattleWindowComponent_EndCall_o *v41; // x21

  if ( (byte_4B19497 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_BattleResultBondsIconComponent___, method, v2);
    sub_1BCA7E0(&Method_BattleResultBondsComponent_OpenEnd__, v4, v5);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Func_BattleResultBondsIconComponent__bool__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_BattleResultBondsComponent___c__Open_b__53_0__, v10, v11);
    sub_1BCA7E0(&BattleResultBondsComponent___c_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_5560/*"END_OPEN"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_12310/*"SKIP"*/, v16, v17);
    byte_4B19497 = 1;
  }
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, method);
  v22 = BattleResultBondsComponent___c_TypeInfo;
  v23 = (System_Object_array *)BondsIconArray;
  if ( !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo, v19);
    v22 = BattleResultBondsComponent___c_TypeInfo;
  }
  _9__53_0 = (System_Func_object__bool__o *)v22->static_fields->__9__53_0;
  if ( !_9__53_0 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22, v19);
      v22 = BattleResultBondsComponent___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__53_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_BattleResultBondsIconComponent__bool__TypeInfo,
                                                v19,
                                                v20,
                                                v21);
    System_Func_object__bool____ctor(_9__53_0, v25, Method_BattleResultBondsComponent___c__Open_b__53_0__, 0LL);
    static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
    static_fields->__9__53_0 = (struct System_Func_BattleResultBondsIconComponent__bool__o *)_9__53_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__53_0,
      (int64_t)_9__53_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  if ( BasicHelper__Any_object__49274176(
         v23,
         (System_Func_T__bool__o *)_9__53_0,
         (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_BattleResultBondsIconComponent___) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      isMultiDeck = this->fields.isMultiDeck;
      this->fields.openBoundsFlg = 0;
      this->fields.colIndex = 0;
      this->fields.bondsCountUp = 1;
      v39 = isMultiDeck ? this->fields.multiDeckWindow : this->fields.window;
      v41 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v35, v36, v37);
      BattleWindowComponent_EndCall___ctor(
        v41,
        (Il2CppObject *)this,
        (intptr_t)Method_BattleResultBondsComponent_OpenEnd__,
        0LL);
      if ( v39 )
      {
        ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v39->klass->vtable._10_Open.method)(
          v39,
          v41,
          v39->klass->vtable._11_CompOpen.methodPtr);
        gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
        if ( gameObject )
        {
          v40 = &StringLiteral_5560/*"END_OPEN"*/;
          goto LABEL_19;
        }
      }
    }
LABEL_20:
    sub_1BCAA3C(gameObject, v33);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.myFsm;
  if ( !gameObject )
    goto LABEL_20;
  v40 = &StringLiteral_12310/*"SKIP"*/;
LABEL_19:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)*v40, 0LL);
}


void __fastcall BattleResultBondsComponent__OpenEnd(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  UnityEngine_GameObject_o *gameObject; // x20
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  const MethodInfo *v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Object_array *v35; // x21
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x22
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x22
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
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  int64_t v92; // x22
  __int64 v93; // x1
  System_Collections_Hashtable_o *v94; // x0
  const MethodInfo *v95; // x1
  int max_length; // w8
  BattleResultBondsIconComponent_array *v97; // x20
  unsigned int v98; // w21
  _QWORD *v99; // x0
  __int64 v100; // x1
  System_Reflection_MethodBase_o *v101; // x20
  System_String_o *CommonSeName; // x0
  struct SePlayer_o *v103; // x0
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  __int64 v110; // x0
  int v111; // [xsp+Ch] [xbp-44h] BYREF
  int v112; // [xsp+18h] [xbp-38h] BYREF
  int v113; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4B19498 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultBondsComponent_OpenEnd__, method, v2);
    sub_1BCA7E0(&object___TypeInfo, v4, v5);
    sub_1BCA7E0(&SeManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&float_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_19858/*"from"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_22521/*"onupdate"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_15361/*"UpdateValue"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_24219/*"to"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_19638/*"finishUpdateValue"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v22, v23);
    sub_1BCA7E0(&iTween_TypeInfo, v24, v25);
    byte_4B19498 = 1;
  }
  if ( !this->fields.bondsCountUp )
    return;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1BCA888(object___TypeInfo, 10LL);
  if ( !BondsIconArray )
LABEL_65:
    sub_1BCAA3C(BondsIconArray, v28);
  v35 = (System_Object_array *)BondsIconArray;
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_19858/*"from"*/;
  if ( StringLiteral_19858/*"from"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1BCA91C(
                                                               StringLiteral_19858/*"from"*/,
                                                               v35->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v28 = (const MethodInfo *)StringLiteral_19858/*"from"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( !v35->max_length )
    goto LABEL_64;
  v35->m_Items[0] = (Il2CppObject *)v28;
  sub_1BCA784((PartyOrganizationUtility_o *)v35->m_Items, (int64_t)v28, v29, v30, v31, v32, v33, v34);
  v113 = 0;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v113);
  v42 = (int64_t)BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1BCA91C(
                                                               BondsIconArray,
                                                               v35->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
  }
  if ( v35->max_length <= 1 )
    goto LABEL_64;
  v35->m_Items[1] = (Il2CppObject *)v42;
  sub_1BCA784((PartyOrganizationUtility_o *)&v35->m_Items[1], v42, v36, v37, v38, v39, v40, v41);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_24219/*"to"*/;
  if ( StringLiteral_24219/*"to"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1BCA91C(
                                                               StringLiteral_24219/*"to"*/,
                                                               v35->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v28 = (const MethodInfo *)StringLiteral_24219/*"to"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v35->max_length <= 2 )
    goto LABEL_64;
  v35->m_Items[2] = (Il2CppObject *)v28;
  sub_1BCA784((PartyOrganizationUtility_o *)&v35->m_Items[2], (int64_t)v28, v43, v44, v45, v46, v47, v48);
  v112 = 1065353216;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v112);
  v55 = (int64_t)BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1BCA91C(
                                                               BondsIconArray,
                                                               v35->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
  }
  if ( v35->max_length <= 3 )
    goto LABEL_64;
  v35->m_Items[3] = (Il2CppObject *)v55;
  sub_1BCA784((PartyOrganizationUtility_o *)&v35->m_Items[3], v55, v49, v50, v51, v52, v53, v54);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_22521/*"onupdate"*/;
  if ( StringLiteral_22521/*"onupdate"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1BCA91C(
                                                               StringLiteral_22521/*"onupdate"*/,
                                                               v35->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v28 = (const MethodInfo *)StringLiteral_22521/*"onupdate"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v35->max_length <= 4 )
    goto LABEL_64;
  v35->m_Items[4] = (Il2CppObject *)v28;
  sub_1BCA784((PartyOrganizationUtility_o *)&v35->m_Items[4], (int64_t)v28, v56, v57, v58, v59, v60, v61);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_15361/*"UpdateValue"*/;
  if ( StringLiteral_15361/*"UpdateValue"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1BCA91C(
                                                               StringLiteral_15361/*"UpdateValue"*/,
                                                               v35->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v28 = (const MethodInfo *)StringLiteral_15361/*"UpdateValue"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v35->max_length <= 5 )
    goto LABEL_64;
  v35->m_Items[5] = (Il2CppObject *)v28;
  sub_1BCA784((PartyOrganizationUtility_o *)&v35->m_Items[5], (int64_t)v28, v62, v63, v64, v65, v66, v67);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_22513/*"oncomplete"*/;
  if ( StringLiteral_22513/*"oncomplete"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1BCA91C(
                                                               StringLiteral_22513/*"oncomplete"*/,
                                                               v35->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v28 = (const MethodInfo *)StringLiteral_22513/*"oncomplete"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v35->max_length <= 6 )
    goto LABEL_64;
  v35->m_Items[6] = (Il2CppObject *)v28;
  sub_1BCA784((PartyOrganizationUtility_o *)&v35->m_Items[6], (int64_t)v28, v68, v69, v70, v71, v72, v73);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_19638/*"finishUpdateValue"*/;
  if ( StringLiteral_19638/*"finishUpdateValue"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1BCA91C(
                                                               StringLiteral_19638/*"finishUpdateValue"*/,
                                                               v35->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v28 = (const MethodInfo *)StringLiteral_19638/*"finishUpdateValue"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v35->max_length <= 7 )
    goto LABEL_64;
  v35->m_Items[7] = (Il2CppObject *)v28;
  sub_1BCA784((PartyOrganizationUtility_o *)&v35->m_Items[7], (int64_t)v28, v74, v75, v76, v77, v78, v79);
  BondsIconArray = (BattleResultBondsIconComponent_array *)StringLiteral_24178/*"time"*/;
  if ( StringLiteral_24178/*"time"*/ )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1BCA91C(
                                                               StringLiteral_24178/*"time"*/,
                                                               v35->obj.klass->_1.element_class);
    if ( !BondsIconArray )
      goto LABEL_66;
    v28 = (const MethodInfo *)StringLiteral_24178/*"time"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v35->max_length <= 8 )
    goto LABEL_64;
  v35->m_Items[8] = (Il2CppObject *)v28;
  sub_1BCA784((PartyOrganizationUtility_o *)&v35->m_Items[8], (int64_t)v28, v80, v81, v82, v83, v84, v85);
  v111 = 1072064102;
  BondsIconArray = (BattleResultBondsIconComponent_array *)j_il2cpp_value_box_0(float_TypeInfo, &v111);
  v92 = (int64_t)BondsIconArray;
  if ( BondsIconArray )
  {
    BondsIconArray = (BattleResultBondsIconComponent_array *)sub_1BCA91C(
                                                               BondsIconArray,
                                                               v35->obj.klass->_1.element_class);
    if ( !BondsIconArray )
    {
LABEL_66:
      v110 = sub_1BCAA60(BondsIconArray);
      sub_1BCA908(v110, 0LL);
    }
  }
  if ( v35->max_length <= 9 )
    goto LABEL_64;
  v35->m_Items[9] = (Il2CppObject *)v92;
  sub_1BCA784((PartyOrganizationUtility_o *)&v35->m_Items[9], v92, v86, v87, v88, v89, v90, v91);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v93);
  v94 = iTween__Hash(v35, 0LL);
  iTween__ValueTo(gameObject, v94, 0LL);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v95);
  if ( !BondsIconArray )
    goto LABEL_65;
  max_length = BondsIconArray->max_length;
  v97 = BondsIconArray;
  if ( max_length >= 1 )
  {
    v98 = 0;
    while ( v98 < max_length )
    {
      BondsIconArray = (BattleResultBondsIconComponent_array *)v97->m_Items[v98];
      if ( !BondsIconArray )
        goto LABEL_65;
      BattleResultBondsIconComponent__StartUpdateBuddyPoint((BattleResultBondsIconComponent_o *)BondsIconArray, v28);
      max_length = v97->max_length;
      if ( (int)++v98 >= max_length )
        goto LABEL_57;
    }
LABEL_64:
    sub_1BCAA44(BondsIconArray, v28);
  }
LABEL_57:
  if ( this->fields.updateFlg )
  {
    v99 = Method_BattleResultBondsComponent_OpenEnd__;
    if ( (*((_BYTE *)Method_BattleResultBondsComponent_OpenEnd__ + 83) & 2) != 0 )
      v99 = (_QWORD *)sub_1BCA7F8(Method_BattleResultBondsComponent_OpenEnd__);
    v101 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v99, v99[4]);
    if ( !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v100);
    CommonSeName = SeManager__GetCommonSeName(15, 0LL);
    v103 = OverwriteAssetSoundName__PlaySe(v101, CommonSeName, 0LL);
    this->fields.MeterSePlayer = v103;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.MeterSePlayer,
      (int64_t)v103,
      v104,
      v105,
      v106,
      v107,
      v108,
      v109);
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
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_List_object__o *bondsList; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  struct BattleInfoData_o *battle_info; // x9
  struct DeckData_array *waveMyDecks; // x26
  __int64 maxWave; // x27
  BattleUserServantData_array *userSvt; // x24
  unsigned __int64 v41; // x8
  il2cpp_array_size_t max_length; // w9
  signed __int64 v43; // x29
  System_Collections_Generic_List_object__o *v44; // x20
  const MethodInfo *v45; // x1
  System_Collections_Generic_IEnumerable_T__o *BondsIconArray; // x0
  System_Object_array *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  const MethodInfo *v54; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_4B19495 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__,
      battleData,
      oldCollects);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__,
      v19,
      v20);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__get_Current__,
      v21,
      v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__, v23, v24);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__,
      v25,
      v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__, v29, v30);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo, v31, v32);
    byte_4B19495 = 1;
  }
  memset(&v55, 0, sizeof(v55));
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
    v41 = 0LL;
    max_length = *(_QWORD *)&waveMyDecks->max_length;
    do
    {
      if ( v41 >= max_length )
        sub_1BCAA44(bondsList, v34);
      v43 = v41 + 1;
      BattleResultBondsComponent__SetResultDataLocal(
        this,
        waveMyDecks->m_Items[v41],
        oldCollects,
        followerType,
        userSvt,
        battleResult,
        isHideBuddyPointResult,
        battleData,
        v41 + 1,
        maxWave,
        v54);
      max_length = waveMyDecks->max_length;
      v41 = v43;
    }
    while ( v43 < (int)max_length );
  }
  v44 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleResultBondsIconComponent__TypeInfo,
                                                       v34,
                                                       v35,
                                                       v36);
  System_Collections_Generic_List_object____ctor(
    v44,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent___ctor__);
  bondsList = (System_Collections_Generic_List_object__o *)this->fields.bondsList;
  if ( !bondsList )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v55,
    bondsList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v55,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__MoveNext__) )
  {
    if ( !v55.fields._current )
      sub_1BCAA3C(0LL, v45);
    BondsIconArray = (System_Collections_Generic_IEnumerable_T__o *)BattleResultBondsDeckPerWaveComponent__GetBondsIconArray(
                                                                      (BattleResultBondsDeckPerWaveComponent_o *)v55.fields._current,
                                                                      v45);
    if ( !v44 )
      sub_1BCAA3C(BondsIconArray, BondsIconArray);
    System_Collections_Generic_List_object___AddRange(
      v44,
      BondsIconArray,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v55,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleResultBondsDeckPerWaveComponent__Dispose__);
  if ( !v44 )
LABEL_21:
    sub_1BCAA3C(bondsList, v34);
  v47 = System_Collections_Generic_List_object___ToArray(
          v44,
          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleResultBondsIconComponent__ToArray__);
  this->fields.bondsIconArray = (struct BattleResultBondsIconComponent_array *)v47;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bondsIconArray, (int64_t)v47, v48, v49, v50, v51, v52, v53);
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
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x1
  __int64 v81; // x2
  int v82; // w8
  int64_t Instance; // x0
  const MethodInfo *userSvtId; // x1
  BattleResultBondsComponent_o *v85; // x20
  Il2CppObject *v86; // x26
  Il2CppObject *v87; // x29
  struct BattleResultBondsDeckPerWaveComponent_o *multiBondsPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *v90; // x1
  UnityEngine_Object_o *v91; // x9
  __int64 v92; // x2
  const MethodInfo *v93; // x3
  const MethodInfo *v94; // x6
  System_Collections_Generic_IEnumerable_TSource__o *rewardInfos; // x21
  BattleResultBondsComponent___c_c *v96; // x0
  System_Func_object__bool__o *_9__49_0; // x20
  Il2CppObject *v98; // x22
  struct BattleResultBondsComponent___c_StaticFields *static_fields; // x0
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v106; // x0
  System_Collections_Generic_List_TSource__o *v107; // x0
  __int64 v108; // x1
  __int64 v109; // x2
  __int64 v110; // x3
  System_Collections_Generic_List_object__o *v111; // x21
  BattleResultBondsComponent_c *v112; // x0
  __int64 v113; // x1
  BattleResultBondsComponent_c *v114; // x0
  __int64 v115; // x1
  Il2CppObject *String_70112520; // x20
  System_Collections_Generic_IEnumerable_T__o *v117; // x0
  BattleResultBondsComponent_c *v118; // x0
  System_String_o *GET_NEW_SVT_KEY; // x22
  __int64 v120; // x1
  System_Object_array *v121; // x20
  System_String_o *v122; // x0
  BattleResultBondsComponent___c_c *v123; // x0
  System_Collections_Generic_IEnumerable_TSource__o *getJoinSvts; // x21
  System_Func_object__bool__o *_9__49_1; // x20
  Il2CppObject *v126; // x22
  struct BattleResultBondsComponent___c_StaticFields *v127; // x0
  int64_t v128; // x2
  int32_t v129; // w3
  System_String_o *v130; // x4
  BattleSetupInfo_o *v131; // x5
  FollowerInfo_o *v132; // x6
  PartyListViewItem_o *v133; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v134; // x0
  System_Collections_Generic_List_TSource__o *v135; // x0
  __int64 v136; // x1
  System_Collections_Generic_List_object__o *v137; // x21
  BattleResultBondsComponent_c *v138; // x0
  __int64 v139; // x1
  BattleResultBondsComponent_c *v140; // x0
  __int64 v141; // x1
  Il2CppObject *v142; // x20
  System_Collections_Generic_IEnumerable_T__o *v143; // x0
  BattleResultBondsComponent_c *v144; // x0
  System_String_o *GET_EXIST_SVT_KEY; // x22
  __int64 v146; // x1
  System_Object_array *v147; // x20
  System_String_o *v148; // x0
  struct BattleDeckServantData_array *svts; // x21
  int max_length; // w8
  unsigned int v151; // w19
  int32_t v152; // w22
  BattleDeckServantData_o *v153; // x25
  Il2CppObject *v154; // x28
  UserServantEntity_o *v155; // x24
  il2cpp_array_size_t v156; // w21
  BattleResultBondsComponent_o *SvtId; // x0
  const MethodInfo *v158; // x3
  UserServantCollectionEntity_o *ServantCollection; // x27
  __int64 v160; // x2
  __int64 v161; // x3
  const MethodInfo *v162; // x7
  signed int v163; // w8
  ServantEntity_o *v164; // x22
  unsigned int v165; // w20
  BattleUserServantData_o *v166; // x26
  __int128 v167; // q0
  const MethodInfo *v168; // x5
  int32_t afterLimitCount; // w25
  int32_t v170; // w29
  const MethodInfo *v171; // x7
  BattleResultBondsIconComponent_o *v172; // x20
  int afterIconLimitCount; // w8
  bool v174; // zf
  struct BattleBuddyPointInfo_array *buddyPointInfos; // x20
  BattleBuddyPointInfo_o *v176; // x26
  System_Func_object__bool__o *v177; // x26
  BattleResultBondsIconComponent_o *v178; // x28
  struct BattleResultBondsIconComponent_array *v179; // x8
  const MethodInfo *v180; // x3
  const MethodInfo *v181; // x2
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  bool v183; // w20
  const MethodInfo *v184; // x2
  const MethodInfo *v185; // x1
  bool v186; // w8
  bool updateFlg; // w20
  bool v188; // w8
  const MethodInfo *v189; // x1
  struct BattleResultBondsIconComponent_array *v190; // x8
  int64_t v191; // x2
  int32_t v192; // w3
  System_String_o *v193; // x4
  BattleSetupInfo_o *v194; // x5
  FollowerInfo_o *v195; // x6
  PartyListViewItem_o *v196; // x7
  __int64 v197; // x8
  _QWORD *v198; // x9
  __int64 v199; // x10
  __int64 v200; // x8
  int32_t cnt; // [xsp+Ch] [xbp-104h]
  ServantLimitImageMaster_o *svtLimitImageMaster; // [xsp+10h] [xbp-100h]
  UserServantCollectionMaster_o *MasterData_object; // [xsp+20h] [xbp-F0h]
  BattleResultBondsDeckPerWaveComponent_o *Object_object; // [xsp+28h] [xbp-E8h]
  UnityEngine_Object_o *x; // [xsp+30h] [xbp-E0h]
  struct BattleDeckServantData_array *v207; // [xsp+38h] [xbp-D8h]
  Il2CppObject *v208; // [xsp+40h] [xbp-D0h]
  Il2CppObject *v209; // [xsp+48h] [xbp-C8h]
  int32_t Type; // [xsp+5Ch] [xbp-B4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v214; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v215; // [xsp+90h] [xbp-80h]

  if ( (byte_4B19496 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___, myDeck, oldCollects);
    sub_1BCA7E0(&Method_BasicHelper_Find_BattleBuddyPointInfo___, v14, v15);
    sub_1BCA7E0(&BattleResultBondsComponent_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v18, v19);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v20, v21);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v22, v23);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v24, v25);
    sub_1BCA7E0(&DataManager_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v28, v29);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v30, v31);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_GetSvts___, v32, v33);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_QuestRewardInfo___, v34, v35);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_GetSvts___, v36, v37);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_QuestRewardInfo___, v38, v39);
    sub_1BCA7E0(&System_Func_GetSvts__bool__TypeInfo, v40, v41);
    sub_1BCA7E0(&System_Func_BattleBuddyPointInfo__bool__TypeInfo, v42, v43);
    sub_1BCA7E0(&System_Func_QuestRewardInfo__bool__TypeInfo, v44, v45);
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_GetSvts___, v46, v47);
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_QuestRewardInfo___, v48, v49);
    sub_1BCA7E0(&JsonManager_TypeInfo, v50, v51);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__, v52, v53);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GetSvts__AddRange__, v54, v55);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__, v56, v57);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GetSvts__ToArray__, v58, v59);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__, v60, v61);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GetSvts__get_Count__, v62, v63);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestRewardInfo__get_Count__, v64, v65);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v66, v67);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v68, v69);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v70, v71);
    sub_1BCA7E0(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__, v72, v73);
    sub_1BCA7E0(&Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__, v74, v75);
    sub_1BCA7E0(&Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__, v76, v77);
    sub_1BCA7E0(&BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo, v78, v79);
    sub_1BCA7E0(&BattleResultBondsComponent___c_TypeInfo, v80, v81);
    byte_4B19496 = 1;
  }
  Type = Follower__getType(followerType, 0LL);
  if ( Type )
    v82 = 5;
  else
    v82 = 6;
  cnt = v82;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_143;
  MasterData_object = (UserServantCollectionMaster_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  v85 = this;
  if ( !Instance )
    goto LABEL_143;
  v86 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_143;
  v87 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( this->fields.isMultiDeck )
  {
    Instance = (int64_t)this->fields.multiBondsRoot;
    if ( !Instance )
      goto LABEL_143;
    multiBondsPrefab = this->fields.multiBondsPrefab;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    v90 = (Il2CppObject *)multiBondsPrefab;
    v85 = this;
    Object_object = (BattleResultBondsDeckPerWaveComponent_o *)BaseMonoBehaviour__createObject_object_(
                                                                 (BaseMonoBehaviour_o *)this,
                                                                 v90,
                                                                 transform,
                                                                 0LL,
                                                                 (const MethodInfo_2EFD548 *)Method_BaseMonoBehaviour_createObject_BattleResultBondsDeckPerWaveComponent___);
    if ( this->fields.isMultiDeck )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, userSvtId);
      svtLimitImageMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      goto LABEL_17;
    }
  }
  else
  {
    Object_object = 0LL;
  }
  svtLimitImageMaster = 0LL;
LABEL_17:
  v91 = x;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, userSvtId);
    v91 = x;
  }
  Instance = UnityEngine_Object__op_Inequality(v91, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)x;
    if ( !x )
      goto LABEL_143;
    Instance = BattleData__IsWarBoard((BattleData_o *)x, 0LL);
    v85->fields.isWarboard = Instance & 1;
    if ( (Instance & 1) != 0 )
    {
      if ( !battleResult )
        goto LABEL_143;
      rewardInfos = (System_Collections_Generic_IEnumerable_TSource__o *)battleResult->fields.rewardInfos;
      v96 = BattleResultBondsComponent___c_TypeInfo;
      if ( !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo, userSvtId);
        v96 = BattleResultBondsComponent___c_TypeInfo;
      }
      _9__49_0 = (System_Func_object__bool__o *)v96->static_fields->__9__49_0;
      if ( !_9__49_0 )
      {
        if ( !v96->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v96, userSvtId);
          v96 = BattleResultBondsComponent___c_TypeInfo;
        }
        v98 = (Il2CppObject *)v96->static_fields->__9;
        _9__49_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                    System_Func_QuestRewardInfo__bool__TypeInfo,
                                                    userSvtId,
                                                    v92,
                                                    v93);
        System_Func_object__bool____ctor(
          _9__49_0,
          v98,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_0__,
          0LL);
        static_fields = BattleResultBondsComponent___c_TypeInfo->static_fields;
        static_fields->__9__49_0 = (struct System_Func_QuestRewardInfo__bool__o *)_9__49_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__49_0,
          (int64_t)_9__49_0,
          v100,
          v101,
          v102,
          v103,
          v104,
          v105);
      }
      v106 = System_Linq_Enumerable__Where_object_(
               rewardInfos,
               (System_Func_TSource__bool__o *)_9__49_0,
               (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_QuestRewardInfo___);
      v107 = System_Linq_Enumerable__ToList_object_(
               v106,
               (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_QuestRewardInfo___);
      if ( v107 )
      {
        v111 = (System_Collections_Generic_List_object__o *)v107;
        if ( v107->fields._size >= 1 )
        {
          v112 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, v108);
            v112 = BattleResultBondsComponent_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v112->static_fields->GET_NEW_SVT_KEY, 0LL) )
          {
            v114 = BattleResultBondsComponent_TypeInfo;
            if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, v113);
              v114 = BattleResultBondsComponent_TypeInfo;
            }
            String_70112520 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70112520(
                                                v114->static_fields->GET_NEW_SVT_KEY,
                                                0LL);
            if ( !JsonManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v115);
            v117 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_object_(
                                                                    String_70112520,
                                                                    (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_QuestRewardInfo___);
            System_Collections_Generic_List_object___AddRange(
              v111,
              v117,
              (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_QuestRewardInfo__AddRange__);
          }
          v118 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, v113);
            v118 = BattleResultBondsComponent_TypeInfo;
          }
          GET_NEW_SVT_KEY = v118->static_fields->GET_NEW_SVT_KEY;
          v121 = System_Collections_Generic_List_object___ToArray(
                   v111,
                   (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_QuestRewardInfo__ToArray__);
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v120);
          v122 = JsonManager__toJson(&v121->obj, 0, 0, 0LL);
          UnityEngine_PlayerPrefs__SetString(GET_NEW_SVT_KEY, v122, 0LL);
        }
      }
      v123 = BattleResultBondsComponent___c_TypeInfo;
      getJoinSvts = (System_Collections_Generic_IEnumerable_TSource__o *)battleResult->fields.getJoinSvts;
      if ( !BattleResultBondsComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent___c_TypeInfo, v108);
        v123 = BattleResultBondsComponent___c_TypeInfo;
      }
      _9__49_1 = (System_Func_object__bool__o *)v123->static_fields->__9__49_1;
      if ( !_9__49_1 )
      {
        if ( !v123->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v123, v108);
          v123 = BattleResultBondsComponent___c_TypeInfo;
        }
        v126 = (Il2CppObject *)v123->static_fields->__9;
        _9__49_1 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_GetSvts__bool__TypeInfo, v108, v109, v110);
        System_Func_object__bool____ctor(
          _9__49_1,
          v126,
          Method_BattleResultBondsComponent___c__SetResultDataLocal_b__49_1__,
          0LL);
        v127 = BattleResultBondsComponent___c_TypeInfo->static_fields;
        v127->__9__49_1 = (struct System_Func_GetSvts__bool__o *)_9__49_1;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v127->__9__49_1,
          (int64_t)_9__49_1,
          v128,
          v129,
          v130,
          v131,
          v132,
          v133);
      }
      v134 = System_Linq_Enumerable__Where_object_(
               getJoinSvts,
               (System_Func_TSource__bool__o *)_9__49_1,
               (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_GetSvts___);
      v135 = System_Linq_Enumerable__ToList_object_(
               v134,
               (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_GetSvts___);
      if ( v135 )
      {
        v137 = (System_Collections_Generic_List_object__o *)v135;
        if ( v135->fields._size >= 1 )
        {
          v138 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, v136);
            v138 = BattleResultBondsComponent_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__HasKey(v138->static_fields->GET_EXIST_SVT_KEY, 0LL) )
          {
            v140 = BattleResultBondsComponent_TypeInfo;
            if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, v139);
              v140 = BattleResultBondsComponent_TypeInfo;
            }
            v142 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70112520(
                                     v140->static_fields->GET_EXIST_SVT_KEY,
                                     0LL);
            if ( !JsonManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v141);
            v143 = (System_Collections_Generic_IEnumerable_T__o *)JsonManager__DeserializeArray_object_(
                                                                    v142,
                                                                    (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_GetSvts___);
            System_Collections_Generic_List_object___AddRange(
              v137,
              v143,
              (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_GetSvts__AddRange__);
          }
          v144 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, v139);
            v144 = BattleResultBondsComponent_TypeInfo;
          }
          GET_EXIST_SVT_KEY = v144->static_fields->GET_EXIST_SVT_KEY;
          v147 = System_Collections_Generic_List_object___ToArray(
                   v137,
                   (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_GetSvts__ToArray__);
          if ( !JsonManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v146);
          v148 = JsonManager__toJson(&v147->obj, 0, 0, 0LL);
          UnityEngine_PlayerPrefs__SetString(GET_EXIST_SVT_KEY, v148, 0LL);
        }
      }
      UnityEngine_PlayerPrefs__Save(0LL);
      v85 = this;
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
    v151 = 0;
    v152 = 0;
    v208 = v87;
    v209 = v86;
    v207 = myDeck->fields.svts;
    while ( 1 )
    {
      if ( v151 >= max_length )
LABEL_144:
        sub_1BCAA44(Instance, userSvtId);
      v153 = svts->m_Items[v151];
      v154 = (Il2CppObject *)sub_1BCAA2C(BattleResultBondsComponent___c__DisplayClass49_0_TypeInfo, userSvtId, v92, v93);
      System_Object___ctor(v154, 0LL);
      if ( !v153 || !v154 )
        goto LABEL_143;
      userSvtId = (const MethodInfo *)v153->fields.userSvtId;
      v154[1].klass = (Il2CppClass *)userSvtId;
      if ( (__int64)userSvtId < 1 )
      {
        Instance = (int64_t)x;
        if ( !x )
          goto LABEL_143;
        Instance = BattleData__IsInterruptionQuest((BattleData_o *)x, 0LL);
        if ( (Instance & 1) == 0 )
          goto LABEL_129;
        if ( v85->fields.isMultiDeck )
        {
          Instance = (int64_t)Object_object;
          if ( !Object_object )
            goto LABEL_143;
          Instance = (int64_t)BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(Object_object, userSvtId);
          v172 = (BattleResultBondsIconComponent_o *)Instance;
          if ( !Instance )
            goto LABEL_143;
        }
        else
        {
          v190 = v85->fields.collects;
          if ( !v190 )
            goto LABEL_143;
          if ( v152 >= v190->max_length )
            goto LABEL_144;
          v172 = v190->m_Items[v152];
          if ( !v172 )
            goto LABEL_143;
        }
        BattleResultBondsIconComponent__setServantData(v172, 0LL, 0LL, 0, 0, 0, 0, v171);
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v172, 0LL);
        if ( !Instance )
          goto LABEL_143;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        v85 = this;
      }
      else
      {
        if ( !v86 )
          goto LABEL_143;
        Instance = (int64_t)DataMasterBase_object__object__long___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v86,
                              (int64_t)userSvtId,
                              (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !Instance )
          goto LABEL_143;
        v155 = (UserServantEntity_o *)Instance;
        v156 = v152;
        SvtId = (BattleResultBondsComponent_o *)UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
        ServantCollection = BattleResultBondsComponent__getServantCollection(SvtId, oldCollects, (int32_t)SvtId, v158);
        Instance = UserServantEntity__getSvtId(v155, 0LL);
        if ( !v87 )
          goto LABEL_143;
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v87,
                              Instance,
                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !usrSvts )
          goto LABEL_143;
        v163 = usrSvts->max_length;
        v164 = (ServantEntity_o *)Instance;
        if ( v163 < 1 )
        {
LABEL_86:
          afterLimitCount = -1;
          v170 = -1;
        }
        else
        {
          v165 = 0;
          while ( 1 )
          {
            if ( v165 >= v163 )
              goto LABEL_144;
            v166 = usrSvts->m_Items[v165];
            if ( !v166 )
              goto LABEL_143;
            v167 = *(_OWORD *)&v166->fields.id.fields.fakeValue;
            *(_OWORD *)&v215.fields.currentCryptoKey = *(_OWORD *)&v166->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v215.fields.fakeValue = v167;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userSvtId);
            v214 = v215;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v214, 0LL);
            if ( (Il2CppClass *)Instance == v154[1].klass )
              break;
            v163 = usrSvts->max_length;
            if ( (int)++v165 >= v163 )
              goto LABEL_86;
          }
          if ( this->fields.isMultiDeck )
            BattleResultBondsComponent__UpdateAfterLimitCount(
              (BattleResultBondsComponent_o *)Instance,
              (BattleData_o *)x,
              v166,
              v153,
              svtLimitImageMaster,
              v168);
          Instance = UserServantEntity__getIconLimitCount((UserServantEntity_o *)v166, 0, 0LL);
          afterIconLimitCount = v166->fields.afterIconLimitCount;
          afterLimitCount = v166->fields.afterLimitCount;
          v174 = afterIconLimitCount < 0 || (_DWORD)Instance == afterIconLimitCount;
          v170 = v174 ? Instance : v166->fields.afterIconLimitCount;
        }
        if ( !battleResult )
          goto LABEL_143;
        buddyPointInfos = battleResult->fields.buddyPointInfos;
        if ( buddyPointInfos )
        {
          v176 = 0LL;
          if ( *(_QWORD *)&buddyPointInfos->max_length && !isHideBuddyPointResult )
          {
            v177 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                    System_Func_BattleBuddyPointInfo__bool__TypeInfo,
                                                    userSvtId,
                                                    v160,
                                                    v161);
            System_Func_object__bool____ctor(
              v177,
              v154,
              Method_BattleResultBondsComponent___c__DisplayClass49_0__SetResultDataLocal_b__2__,
              0LL);
            Instance = (int64_t)BasicHelper__Find_object_(
                                  (System_Object_array *)buddyPointInfos,
                                  (System_Func_T__bool__o *)v177,
                                  (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_BattleBuddyPointInfo___);
            v176 = (BattleBuddyPointInfo_o *)Instance;
          }
        }
        else
        {
          v176 = 0LL;
        }
        if ( this->fields.isMultiDeck )
        {
          Instance = (int64_t)Object_object;
          if ( !Object_object )
            goto LABEL_143;
          Instance = (int64_t)BattleResultBondsDeckPerWaveComponent__CreateBondsIcon(Object_object, userSvtId);
          v178 = (BattleResultBondsIconComponent_o *)Instance;
          if ( !Instance )
            goto LABEL_143;
        }
        else
        {
          v179 = this->fields.collects;
          if ( !v179 )
            goto LABEL_143;
          if ( v156 >= v179->max_length )
            goto LABEL_144;
          v178 = v179->m_Items[v156];
          if ( !v178 )
            goto LABEL_143;
        }
        BattleResultBondsIconComponent__setServantData(
          v178,
          ServantCollection,
          v155,
          v170,
          this->fields.baseFriendshipExp,
          Type == 0,
          afterLimitCount,
          v162);
        BattleResultBondsIconComponent__SetBuddyPointInfo(v178, v176, battleResult->fields.eventId, v180);
        if ( !v164 )
          goto LABEL_143;
        v87 = v208;
        v86 = v209;
        if ( ServantEntity__checkIsHeroineSvt(v164, 0LL) && !UserServantEntity__IsAddFriendShipHeroine(v155, 0LL) )
        {
          updateFlg = this->fields.updateFlg;
          v188 = updateFlg | BattleResultBondsIconComponent__setNextServantData(v178, ServantCollection, v181);
          v85 = this;
          v152 = v156;
          this->fields.updateFlg = v188;
          v178->fields.isHeroine = 1;
        }
        else
        {
          Instance = (int64_t)MasterData_object;
          if ( !MasterData_object )
            goto LABEL_143;
          v152 = v156;
          EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                               MasterData_object,
                               v178->fields.userId,
                               v178->fields.svtId,
                               0LL);
          v183 = this->fields.updateFlg;
          v186 = v183 | BattleResultBondsIconComponent__setNextServantData(v178, EntityDefinitely, v184);
          v85 = this;
          this->fields.updateFlg = v186;
        }
        svts = v207;
        BattleResultBondsIconComponent__changeGauge(v178, 0.0, v185);
        BattleResultBondsIconComponent__InitBuddyPointInfo(v178, v189);
        if ( v85->fields.isMultiDeck )
        {
          Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v178, 0LL);
          if ( !Instance )
            goto LABEL_143;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        }
      }
      ++v152;
LABEL_129:
      max_length = svts->max_length;
      if ( (int)++v151 >= max_length )
        goto LABEL_132;
    }
  }
  v152 = 0;
LABEL_132:
  if ( !v85->fields.isMultiDeck )
  {
    BattleResultBondsComponent__NormalBondsInit(v85, v152, cnt, Type == 0, battleResult, isHideBuddyPointResult, v94);
    return;
  }
  if ( !Object_object )
    goto LABEL_143;
  BattleResultBondsDeckPerWaveComponent__SetWaveCount(Object_object, currentWave, maxWave, v93);
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Object_object, 0LL);
  if ( !Instance )
    goto LABEL_143;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)Object_object->fields.iconRoot;
  if ( !Instance
    || ((*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 440LL))(
          Instance,
          *(_QWORD *)(*(_QWORD *)Instance + 448LL)),
        (Instance = (int64_t)v85->fields.multiBondsRoot) == 0)
    || ((*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 440LL))(
          Instance,
          *(_QWORD *)(*(_QWORD *)Instance + 448LL)),
        (Instance = (int64_t)v85->fields.bondsList) == 0)
    || (v197 = *(_QWORD *)(Instance + 16),
        v198 = Method_System_Collections_Generic_List_BattleResultBondsDeckPerWaveComponent__Add__,
        ++*(_DWORD *)(Instance + 28),
        !v197) )
  {
LABEL_143:
    sub_1BCAA3C(Instance, userSvtId);
  }
  v199 = *(int *)(Instance + 24);
  if ( (unsigned int)v199 >= *(_DWORD *)(v197 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)Object_object,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v198[4] + 192LL) + 112LL));
  }
  else
  {
    v200 = v197 + 8 * v199;
    *(_DWORD *)(Instance + 24) = v199 + 1;
    *(_QWORD *)(v200 + 32) = Object_object;
    sub_1BCA784((PartyOrganizationUtility_o *)(v200 + 32), (int64_t)Object_object, v191, v192, v193, v194, v195, v196);
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
        sub_1BCAA44(BondsIconArray, v4);
      BondsIconArray = (BattleResultBondsIconComponent_array *)v6->m_Items[v7];
      if ( !BondsIconArray )
        break;
      BattleResultBondsIconComponent__FinishBuddyPointInfoUpdate((BattleResultBondsIconComponent_o *)BondsIconArray, v4);
      max_length = v6->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_7;
    }
LABEL_9:
    sub_1BCAA3C(BondsIconArray, v4);
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
  __int64 v11; // x2
  struct BattleEntity_o *battle_ent; // x8
  int32_t FollowerType; // w0
  int32_t Type; // w0
  __int64 v15; // x1
  __int64 v16; // x21
  __int64 v17; // x22
  int32_t v18; // w21
  __int64 v19; // x1
  __int64 v20; // x21
  __int64 v21; // x22
  int32_t v22; // w21
  int32_t IconLimitCount; // w0
  int ServantImageLimitSealAfter; // w0
  __int64 v25; // x1
  __int64 v26; // x20
  __int64 v27; // x21
  int32_t v28; // w0
  __int64 v29; // x1
  int32_t afterLimitCount; // w20
  int32_t v31; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4B194A7 & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, battleData, userSvtData);
    this = (BattleResultBondsComponent_o *)sub_1BCA7E0(
                                             &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                             v10,
                                             v11);
    byte_4B194A7 = 1;
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
  v17 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
  *(_QWORD *)&v32.fields.currentCryptoKey = v17;
  *(_QWORD *)&v32.fields.fakeValue = v16;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v32, 0LL);
  this = (BattleResultBondsComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                           userSvtData->fields.limitCount,
                                           0LL);
  if ( !svtLimitImageMaster )
LABEL_26:
    sub_1BCAA3C(this, battleData);
  if ( ServantLimitImageMaster__IsServantLimitCountSeal(svtLimitImageMaster, v18, (int32_t)this, 0LL) )
  {
    v21 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
    v20 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    *(_QWORD *)&v33.fields.currentCryptoKey = v21;
    *(_QWORD *)&v33.fields.fakeValue = v20;
    v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v33, 0LL);
    IconLimitCount = UserServantEntity__getIconLimitCount((UserServantEntity_o *)userSvtData, 0, 0LL);
    ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                   svtLimitImageMaster,
                                   v22,
                                   IconLimitCount,
                                   0LL);
    if ( ServantImageLimitSealAfter >= 11 )
    {
      userSvtData->fields.afterLimitCount = ServantImageLimitSealAfter;
    }
    else
    {
      userSvtData->fields.afterLimitCount = 2 * ServantImageLimitSealAfter;
      v27 = *(_QWORD *)&userSvtData->fields.svtId.fields.currentCryptoKey;
      v26 = *(_QWORD *)&userSvtData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25);
      *(_QWORD *)&v34.fields.currentCryptoKey = v27;
      *(_QWORD *)&v34.fields.fakeValue = v26;
      v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v34, 0LL);
      afterLimitCount = userSvtData->fields.afterLimitCount;
      v31 = v28;
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v29);
      ServantImageLimitSealAfter = ImageLimitCount__GetImageLimitCount(v31, afterLimitCount, 0LL);
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
        sub_1BCAA44(BondsIconArray, v5);
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
    sub_1BCAA3C(BondsIconArray, v5);
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
    sub_1BCAA44(this, method);
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
    sub_1BCAA3C(this, method);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_GameObject_o *Object; // x0
  __int64 v26; // x1
  UnityEngine_GameObject_o *v27; // x20
  __int64 v28; // x1
  Il2CppObject *ComponentInChildren_object; // x23
  __int64 v30; // x1
  BattleResultBondsComponent_c *v31; // x0
  __int64 v32; // x1
  Il2CppObject *v33; // x24
  bool v34; // w0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  const MethodInfo *v41; // x4
  UnityEngine_Transform_o *transform; // x21
  float v43; // s8
  float y; // s9
  int v45; // s2
  float v46; // s0
  float v47; // s1
  __int64 v48; // x8
  _QWORD *v49; // x9
  __int64 klass_low; // x10
  __int64 v51; // x8
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1949C & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, text, *(_QWORD *)&iconImageId);
    sub_1BCA7E0(&BattleResultBondsComponent_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___, v15, v16);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v19, v20);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v21, v22);
    sub_1BCA7E0(&StringLiteral_17470/*"bit_reward_shine02"*/, v23, v24);
    byte_4B1949C = 1;
  }
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             this->fields.confPrefab,
             this->fields.confRoot,
             0LL,
             0LL);
  if ( !Object )
    goto LABEL_36;
  v27 = Object;
  Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Object, 0LL);
  if ( !Object )
    goto LABEL_36;
  v52.fields.y = -112.0 - posY;
  v52.fields.x = 0.0;
  v52.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v52, 0LL);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 v27,
                                 (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_UILabel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
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
      v31 = BattleResultBondsComponent_TypeInfo;
      if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, v30);
        v31 = BattleResultBondsComponent_TypeInfo;
      }
      UILabel__SetCondensedScale(
        (UILabel_o *)ComponentInChildren_object,
        v31->static_fields->CONF_LABEL_MAX_WIDTH - 36,
        0LL);
    }
    else
    {
      if ( isSaintGraph )
        UIWidget__set_height((UIWidget_o *)ComponentInChildren_object, 100, 0LL);
      UILabel__set_text((UILabel_o *)ComponentInChildren_object, text, 0LL);
    }
  }
  v33 = UnityEngine_GameObject__GetComponentInChildren_object_(
          v27,
          (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
  v34 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v33, 0LL, 0LL);
  if ( (iconImageId & 0x80000000) == 0 && v34 )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v26);
    if ( isCoin )
      AtlasManager__SetCoin((UISprite_o *)v33, iconImageId, 0LL);
    else
      AtlasManager__SetItem((UISprite_o *)v33, iconImageId, 0LL);
    BattleResultBondsComponent__CreateRewardEffect(
      this,
      this->fields.resultAssetData,
      (UISprite_o *)v33,
      (System_String_o *)StringLiteral_17470/*"bit_reward_shine02"*/,
      v41);
    if ( ComponentInChildren_object )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)ComponentInChildren_object, 0LL);
      Object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)ComponentInChildren_object,
                                             0LL);
      if ( Object )
      {
        LODWORD(v43) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Object, 0LL);
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
            *(UnityEngine_Vector3_o *)(&v45 - 2) = UnityEngine_Transform__get_localPosition(
                                                     (UnityEngine_Transform_o *)Object,
                                                     0LL);
            if ( transform )
            {
              v46 = v43 + 36.0;
              v47 = y;
              UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v45 - 2), 0LL);
              goto LABEL_31;
            }
          }
        }
      }
    }
LABEL_36:
    sub_1BCAA3C(Object, v26);
  }
LABEL_31:
  Object = (UnityEngine_GameObject_o *)this->fields.conflist;
  if ( !Object )
    goto LABEL_36;
  v48 = *(_QWORD *)&Object->fields.m_CachedPtr;
  v49 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++HIDWORD(Object[1].klass);
  if ( !v48 )
    goto LABEL_36;
  klass_low = SLODWORD(Object[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(v48 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Object,
      (Il2CppObject *)v27,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
  }
  else
  {
    v51 = v48 + 8 * klass_low;
    LODWORD(Object[1].klass) = klass_low + 1;
    *(_QWORD *)(v51 + 32) = v27;
    sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 32), (int64_t)v27, v35, v36, v37, v38, v39, v40);
  }
}


void __fastcall BattleResultBondsComponent__checkBondsUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  int64_t v35; // x22
  System_Collections_Generic_List_object__o *conflist; // x0
  __int64 v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  const MethodInfo *v44; // x1
  BattleResultBondsIconComponent_array *BondsIconArray; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 v52; // x2
  __int64 v53; // x3
  int32_t colIndex; // w8
  __int64 v55; // x9
  int32_t v56; // w10
  __int64 v57; // x11
  __int64 *v58; // x8
  __int64 v59; // x20
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  __int64 *v66; // x21
  __int64 v67; // x1
  Il2CppObject *current; // x22
  struct System_Collections_Generic_List_GameObject__o *v69; // x8
  int32_t size; // w2
  int v71; // w9
  __int64 v72; // x1
  UnityEngine_Object_o *levelUpSimpleAnim; // x22
  System_Collections_Generic_List_object__c *klass; // x8
  System_Collections_Generic_List_object__o *v75; // x22
  __int64 v76; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v78; // x0
  UnityEngine_Object_o *levelUpAnim; // x22
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  __int64 v86; // x9
  __int64 v87; // x8
  __int64 v88; // x9
  struct BattleResultBondsIconComponent_o *v89; // x1
  __int64 v90; // x1
  UnityEngine_Object_o *figureMoveRoot; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o **v93; // x21
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  __int64 v100; // x2
  __int64 v101; // x3
  UnityEngine_GameObject_o *v102; // x0
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  struct BattleResultBondsIconComponent_o *openCollect; // x8
  int32_t svtId; // w22
  int32_t svtLimit; // w23
  BattleResultBondsFigureComponent_o *bondsFigure; // x19
  UnityEngine_GameObject_o *v113; // x21
  System_Action_o *v114; // x24
  const MethodInfo *v115; // [xsp+0h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o v116; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v117; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B1949A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Clear__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v19, v20);
    sub_1BCA7E0(&BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__, v23, v24);
    sub_1BCA7E0(&BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo, v25, v26);
    sub_1BCA7E0(&StringLiteral_17456/*"bit_result_levelup01"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_3608/*"CLOSE"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_3611/*"CLOSE_BOND_UP_ROOT"*/, v33, v34);
    byte_4B1949A = 1;
  }
  memset(&v117, 0, sizeof(v117));
  v35 = sub_1BCAA2C(BattleResultBondsComponent___c__DisplayClass61_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v35, 0LL);
  if ( !v35 )
    goto LABEL_68;
  *(_QWORD *)(v35 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 16), (int64_t)this, v38, v39, v40, v41, v42, v43);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v44);
  *(_QWORD *)(v35 + 24) = BondsIconArray;
  sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 24), (int64_t)BondsIconArray, v46, v47, v48, v49, v50, v51);
  colIndex = this->fields.colIndex;
  v55 = *(_QWORD *)(v35 + 24);
  *(_DWORD *)(v35 + 32) = colIndex;
  if ( !v55 )
    goto LABEL_68;
  v56 = *(_DWORD *)(v55 + 24);
  if ( colIndex >= v56 )
    goto LABEL_12;
  do
  {
    if ( colIndex >= (unsigned int)v56 )
    {
      this->fields.colIndex = colIndex;
      sub_1BCAA44(conflist, v37);
    }
    v57 = *(_QWORD *)(v55 + 8LL * colIndex + 32);
    if ( !v57 )
    {
      this->fields.colIndex = colIndex;
      sub_1BCAA3C(conflist, v37);
    }
    if ( *(_BYTE *)(v57 + 112) && *(_DWORD *)(v57 + 160) != *(_DWORD *)(v57 + 168) )
    {
      this->fields.colIndex = colIndex;
      v59 = sub_1BCAA2C(BattleResultBondsComponent___c__DisplayClass61_1_TypeInfo, v37, v52, v53);
      System_Object___ctor((Il2CppObject *)v59, 0LL);
      if ( !v59 )
        goto LABEL_68;
      *(_QWORD *)(v59 + 24) = v35;
      v66 = (__int64 *)(v59 + 24);
      sub_1BCA784((PartyOrganizationUtility_o *)(v59 + 24), v35, v60, v61, v62, v63, v64, v65);
      conflist = (System_Collections_Generic_List_object__o *)this->fields.conflist;
      if ( !conflist )
        goto LABEL_68;
      if ( conflist->fields._size >= 1 )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v116,
          conflist,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
        v117 = v116;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v117,
                  (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
        {
          current = v117.fields._current;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v67);
          UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)current, 0LL);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v117,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
        v69 = this->fields.conflist;
        if ( !v69 )
          goto LABEL_68;
        size = v69->fields._size;
        v71 = v69->fields._version + 1;
        v69->fields._size = 0;
        v69->fields._version = v71;
        if ( size >= 1 )
          System_Array__Clear((System_Array_o *)v69->fields._items, 0, size, 0LL);
      }
      conflist = (System_Collections_Generic_List_object__o *)this->fields.upRoot;
      if ( !conflist )
        goto LABEL_68;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)conflist, 1, 0LL);
      levelUpSimpleAnim = (UnityEngine_Object_o *)this->fields.levelUpSimpleAnim;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v72);
      if ( UnityEngine_Object__op_Inequality(levelUpSimpleAnim, 0LL, 0LL) )
      {
        conflist = (System_Collections_Generic_List_object__o *)this->fields.levelUpSimpleAnim;
        if ( !conflist )
          goto LABEL_68;
        conflist = (System_Collections_Generic_List_object__o *)SimpleAnimation__get_Item(
                                                                  (SimpleAnimation_o *)conflist,
                                                                  (System_String_o *)StringLiteral_17456/*"bit_result_levelup01"*/,
                                                                  0LL);
        if ( !conflist )
          goto LABEL_68;
        klass = conflist->klass;
        v75 = conflist;
        v76 = *(unsigned __int16 *)(&conflist->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&conflist->klass->_2.bitflags2 + 3) )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v76;
            p_offset += 2;
            if ( !v76 )
              goto LABEL_41;
          }
          v78 = (__int64)(&klass->vtable._4_unknown.method + 2 * *(_DWORD *)p_offset);
        }
        else
        {
LABEL_41:
          v78 = sub_1C1C7C0(conflist, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(System_Collections_Generic_List_object__o *, _QWORD, float))v78)(
          v75,
          *(_QWORD *)(v78 + 8),
          0.0);
        conflist = (System_Collections_Generic_List_object__o *)this->fields.levelUpSimpleAnim;
        if ( !conflist )
          goto LABEL_68;
        conflist = (System_Collections_Generic_List_object__o *)SimpleAnimation__Play_64539336(
                                                                  (SimpleAnimation_o *)conflist,
                                                                  (System_String_o *)StringLiteral_17456/*"bit_result_levelup01"*/,
                                                                  0LL);
      }
      else
      {
        levelUpAnim = (UnityEngine_Object_o *)this->fields.levelUpAnim;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
        conflist = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(levelUpAnim, 0LL, 0LL);
        if ( ((unsigned __int8)conflist & 1) != 0 )
        {
          conflist = (System_Collections_Generic_List_object__o *)this->fields.levelUpAnim;
          if ( !conflist )
            goto LABEL_68;
          conflist = (System_Collections_Generic_List_object__o *)UnityEngine_Animation__get_Item(
                                                                    (UnityEngine_Animation_o *)conflist,
                                                                    (System_String_o *)StringLiteral_17456/*"bit_result_levelup01"*/,
                                                                    0LL);
          if ( !conflist )
            goto LABEL_68;
          UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)conflist, 0.0, 0LL);
          conflist = (System_Collections_Generic_List_object__o *)this->fields.levelUpAnim;
          if ( !conflist )
            goto LABEL_68;
          conflist = (System_Collections_Generic_List_object__o *)UnityEngine_Animation__Play_69899248(
                                                                    (UnityEngine_Animation_o *)conflist,
                                                                    (System_String_o *)StringLiteral_17456/*"bit_result_levelup01"*/,
                                                                    0LL);
        }
      }
      v86 = *v66;
      if ( *v66 )
      {
        v87 = *(_QWORD *)(v86 + 24);
        if ( v87 )
        {
          v88 = *(int *)(v86 + 32);
          if ( (unsigned int)v88 >= *(_DWORD *)(v87 + 24) )
            sub_1BCAA44(conflist, v37);
          v89 = *(struct BattleResultBondsIconComponent_o **)(v87 + 8 * v88 + 32);
          this->fields.openCollect = v89;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.openCollect,
            (int64_t)v89,
            v80,
            v81,
            v82,
            v83,
            v84,
            v85);
          figureMoveRoot = (UnityEngine_Object_o *)this->fields.figureMoveRoot;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v90);
          if ( UnityEngine_Object__op_Inequality(figureMoveRoot, 0LL, 0LL) )
          {
            conflist = (System_Collections_Generic_List_object__o *)this->fields.figureMoveRoot;
            if ( !conflist )
              goto LABEL_68;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)conflist, 0LL);
            *(_QWORD *)(v59 + 16) = gameObject;
            v93 = (UnityEngine_GameObject_o **)(v59 + 16);
            sub_1BCA784((PartyOrganizationUtility_o *)(v59 + 16), (int64_t)gameObject, v94, v95, v96, v97, v98, v99);
            conflist = *(System_Collections_Generic_List_object__o **)(v59 + 16);
            if ( !conflist )
              goto LABEL_68;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)conflist, 0, 0LL);
          }
          else
          {
            conflist = (System_Collections_Generic_List_object__o *)this->fields.figureRoot;
            if ( !conflist )
              goto LABEL_68;
            v102 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)conflist, 0LL);
            *(_QWORD *)(v59 + 16) = v102;
            v93 = (UnityEngine_GameObject_o **)(v59 + 16);
            sub_1BCA784((PartyOrganizationUtility_o *)(v59 + 16), (int64_t)v102, v103, v104, v105, v106, v107, v108);
          }
          openCollect = this->fields.openCollect;
          if ( openCollect )
          {
            svtId = openCollect->fields.svtId;
            svtLimit = openCollect->fields.svtLimit;
            bondsFigure = this->fields.bondsFigure;
            v113 = *v93;
            v114 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v37, v100, v101);
            System_Action___ctor(
              v114,
              (Il2CppObject *)v59,
              Method_BattleResultBondsComponent___c__DisplayClass61_1__checkBondsUp_b__0__,
              0LL);
            if ( bondsFigure )
            {
              BattleResultBondsFigureComponent__SetupFigure(bondsFigure, v113, svtId, svtLimit, 7, 0, 51, v114, v115);
              return;
            }
          }
        }
      }
LABEL_68:
      sub_1BCAA3C(conflist, v37);
    }
    *(_DWORD *)(v35 + 32) = ++colIndex;
  }
  while ( colIndex < v56 );
  this->fields.colIndex = colIndex - 1;
LABEL_12:
  conflist = (System_Collections_Generic_List_object__o *)this->fields.myFsm;
  if ( !this->fields.openBoundsFlg )
  {
    if ( conflist )
    {
      v58 = &StringLiteral_3608/*"CLOSE"*/;
      goto LABEL_27;
    }
    goto LABEL_68;
  }
  if ( !conflist )
    goto LABEL_68;
  if ( this->fields.isMultiDeck )
    v58 = &StringLiteral_3611/*"CLOSE_BOND_UP_ROOT"*/;
  else
    v58 = &StringLiteral_5565/*"END_PROC"*/;
LABEL_27:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)conflist, (System_String_o *)*v58, 0LL);
}


void __fastcall BattleResultBondsComponent__checkShow(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct BattleFriendshipRewardInfo_array *showList; // x8
  __int64 v9; // x8
  Il2CppObject *Instance; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_o *v14; // x21
  SummonAssetManager_o *parentComp; // x0
  struct BattleResultComponent_o *v16; // x8
  struct BattleResultComponent_o *v17; // x8
  const MethodInfo *v18; // x3

  if ( (byte_4B194A0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattleResultBondsComponent__checkShow_b__67_0__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v6, v7);
    byte_4B194A0 = 1;
  }
  showList = this->fields.showList;
  if ( showList )
  {
    v9 = *(_QWORD *)&showList->max_length;
    if ( v9 )
    {
      if ( this->fields.showIndex < (int)v9 )
      {
        this->fields.tempSaveTimeScale = UnityEngine_Time__get_timeScale(0LL);
        UnityEngine_Time__set_timeScale(1.0, 0LL);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
        v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
        System_Action___ctor(v14, (Il2CppObject *)this, Method_BattleResultBondsComponent__checkShow_b__67_0__, 0LL);
        if ( Instance )
        {
          SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)Instance, v14, 0LL);
          return;
        }
        goto LABEL_23;
      }
      parentComp = (SummonAssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      if ( !parentComp )
        goto LABEL_23;
      SummonAssetManager__UnloadSummonAssets(parentComp, 0LL);
    }
  }
  parentComp = (SummonAssetManager_o *)this->fields.parentComp;
  if ( !parentComp )
    goto LABEL_23;
  BattleResultComponent__ResetPlayScreenTouch((BattleResultComponent_o *)parentComp, method);
  v16 = this->fields.parentComp;
  if ( !v16 )
    goto LABEL_23;
  parentComp = (SummonAssetManager_o *)v16->fields.obj_fronttouch;
  if ( !parentComp )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)parentComp, 1, 0LL);
  v17 = this->fields.parentComp;
  if ( !v17 )
    goto LABEL_23;
  parentComp = (SummonAssetManager_o *)v17->fields.obj_basebg;
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
    sub_1BCAA3C(parentComp, method);
  }
  BattleResultComponent__showServantRewardAction((BattleResultComponent_o *)parentComp, 0LL, 1, v18);
}


void __fastcall BattleResultBondsComponent__closeBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  const MethodInfo *v14; // x1
  void *effectUIList; // x0
  int32_t v16; // w20
  int32_t v17; // w2
  int v18; // w8
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  struct BattleResultComponent_o *parentComp; // x8
  struct BattleWindowComponent_o *confwindow; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  BattleWindowComponent_EndCall_o *v26; // x21

  if ( (byte_4B194A1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultBondsComponent_closeBondUp__, method, v2);
    sub_1BCA7E0(&Method_BattleResultBondsComponent_endCloseBondUp__, v4, v5);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIUnityRenderer__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Count__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__, v12, v13);
    byte_4B194A1 = 1;
  }
  UnityEngine_Time__set_timeScale(this->fields.tempSaveTimeScale, 0LL);
  effectUIList = this->fields.effectUIList;
  if ( !effectUIList )
    goto LABEL_19;
  if ( *((int *)effectUIList + 6) >= 1 )
  {
    v16 = 0;
    do
    {
      effectUIList = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)effectUIList,
                       v16,
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UIUnityRenderer__get_Item__);
      if ( !effectUIList )
        goto LABEL_19;
      effectUIList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectUIList, 0LL);
      if ( !effectUIList )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effectUIList, 0, 0LL);
      effectUIList = this->fields.effectUIList;
      if ( !effectUIList )
        goto LABEL_19;
      v17 = *((_DWORD *)effectUIList + 6);
      ++v16;
    }
    while ( v16 < v17 );
    v18 = *((_DWORD *)effectUIList + 7) + 1;
    *((_DWORD *)effectUIList + 6) = 0;
    *((_DWORD *)effectUIList + 7) = v18;
    if ( v17 >= 1 )
      System_Array__Clear(*((System_Array_o **)effectUIList + 2), 0, v17, 0LL);
  }
  v19 = Method_BattleResultBondsComponent_closeBondUp__;
  if ( (*((_BYTE *)Method_BattleResultBondsComponent_closeBondUp__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_1BCA7F8(Method_BattleResultBondsComponent_closeBondUp__);
  v20 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v19, v19[4]);
  OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0LL);
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (effectUIList = parentComp->fields.obj_fronttouch) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effectUIList, 0, 0LL),
        (effectUIList = this->fields.bondsFigure) == 0LL)
    || (BattleResultBondsFigureComponent__DestroyFigure((BattleResultBondsFigureComponent_o *)effectUIList, v14),
        confwindow = this->fields.confwindow,
        v26 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v23, v24, v25),
        BattleWindowComponent_EndCall___ctor(
          v26,
          (Il2CppObject *)this,
          Method_BattleResultBondsComponent_endCloseBondUp__,
          0LL),
        !confwindow) )
  {
LABEL_19:
    sub_1BCAA3C(effectUIList, v14);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))confwindow->klass->vtable._12_Close.method)(
    confwindow,
    v26,
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
  __int64 v10; // x2
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  ServantFaceIconComponent_o *BondsIconArray; // x0
  __int64 v14; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  ServantFaceIconComponent_o *v16; // x20
  int v17; // w21
  int v18; // w22
  __int64 v19; // x8

  if ( (byte_4B194A4 & 1) == 0 )
  {
    sub_1BCA7E0(&OptionManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, v9, v10);
    byte_4B194A4 = 1;
  }
  this->fields.resultAssetData = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resultAssetData, 0LL, v2, v3, v4, v5, v6, v7);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v11);
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    BondsIconArray = (ServantFaceIconComponent_o *)BattleResultBondsComponent__GetBondsIconArray(this, v12);
    if ( !BondsIconArray )
      goto LABEL_17;
    m_CancellationTokenSource = BondsIconArray->fields.m_CancellationTokenSource;
    v16 = BondsIconArray;
    v17 = (_DWORD)m_CancellationTokenSource - 1;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        v19 = *((_QWORD *)&v16->fields.backSprite + v18);
        if ( !v19 )
          break;
        BondsIconArray = *(ServantFaceIconComponent_o **)(v19 + 48);
        if ( !BondsIconArray )
          break;
        ServantFaceIconComponent__ClearFaceAtlas(BondsIconArray, 0LL);
        if ( v17 == v18 )
          goto LABEL_14;
        if ( (unsigned int)++v18 >= LODWORD(v16->fields.m_CancellationTokenSource) )
          sub_1BCAA44(BondsIconArray, v14);
      }
LABEL_17:
      sub_1BCAA3C(BondsIconArray, v14);
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultBondsComponent__endCloseBondUp(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B194A2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B194A2 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultBondsComponent__endMoveFigure(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  System_Text_StringBuilder_o *v73; // x21
  _QWORD *v74; // x0
  System_Reflection_MethodBase_o *v75; // x0
  __int64 lvComp; // x0
  __int64 v77; // x1
  struct BattleResultBondsIconComponent_o *openCollect; // x8
  int32_t friendshipRank; // w22
  int32_t svtId; // w25
  int v81; // w28
  __int64 v82; // x1
  Il2CppObject *current; // x23
  System_String_o *v84; // x0
  __int64 v85; // x1
  System_String_o *v86; // x24
  Il2CppObject *QuestName; // x1
  System_String_o *v88; // x1
  const MethodInfo *v89; // x5
  struct BattleResultBondsIconComponent_o *v90; // x8
  int32_t svtLimit; // w23
  __int64 v92; // x1
  int32_t ServantLimitCountSealAfter; // w23
  __int64 v94; // x1
  __int64 *v95; // x8
  int v96; // w20
  bool v97; // w23
  System_String_o *v98; // x0
  const MethodInfo *v99; // x5
  struct BattleResultBondsIconComponent_o *v100; // x8
  __int64 v101; // x2
  __int64 v102; // x3
  System_String_o *v103; // x0
  const MethodInfo *v104; // x5
  System_Collections_Generic_List_object__o *v105; // x22
  __int64 v106; // x1
  struct BattleFriendshipRewardInfo_array *rewardInfos; // x20
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v109; // x23
  int v110; // w21
  int CONF_SERVANT_COIN_PLUS_HEIGHT; // w25
  struct BattleResultBondsIconComponent_o *v112; // x8
  BattleFriendshipRewardInfo_o *v113; // x24
  GiftEntity_o *v114; // x25
  Il2CppObject *v115; // x0
  __int64 v116; // x1
  System_String_o *v117; // x26
  Il2CppObject *v118; // x0
  __int64 v119; // x1
  Il2CppObject *v120; // x0
  __int64 v121; // x1
  ServantEntity_o *v122; // x26
  __int64 v123; // x1
  Il2CppObject *Master_object; // x27
  __int64 v125; // x1
  int32_t v126; // w1
  System_String_o *v127; // x0
  const MethodInfo *v128; // x5
  __int64 v129; // x1
  bool v130; // w26
  __int64 v131; // x1
  Il2CppObject *Name; // x26
  System_String_o *v133; // x0
  System_String_o *v134; // x27
  int32_t IconImageId; // w0
  const MethodInfo *v136; // x5
  BattleResultBondsComponent_c *v137; // x0
  int64_t v138; // x2
  int32_t v139; // w3
  System_String_o *v140; // x4
  BattleSetupInfo_o *v141; // x5
  FollowerInfo_o *v142; // x6
  PartyListViewItem_o *v143; // x7
  struct System_Object_array *items; // x8
  _QWORD *v145; // x9
  __int64 size; // x10
  Il2CppClass **v147; // x0
  System_Object_array *v148; // x0
  int64_t v149; // x2
  int32_t v150; // w3
  System_String_o *v151; // x4
  BattleSetupInfo_o *v152; // x5
  FollowerInfo_o *v153; // x6
  PartyListViewItem_o *v154; // x7
  int v155; // w20
  UnityEngine_Transform_o *confRoot; // x21
  unsigned int localPosition; // s0
  int v158; // w8
  float v159; // s1
  int v160; // w20
  float v161; // s1
  int v162; // s2
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *rankupConfLabel; // x21
  struct BattleWindowComponent_o *confwindow; // x20
  __int64 v166; // x1
  __int64 v167; // x2
  __int64 v168; // x3
  BattleWindowComponent_EndCall_o *v169; // x21
  System_Text_StringBuilder_o *v170; // [xsp+8h] [xbp-C8h]
  int32_t key; // [xsp+14h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v172; // [xsp+18h] [xbp-B8h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+30h] [xbp-A0h] BYREF
  System_String_o *countText; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v175; // [xsp+40h] [xbp-90h] BYREF
  System_String_o *nameText; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4B1949E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultBondsComponent_endMoveFigure__, method, v2);
    sub_1BCA7E0(&Method_BattleResultBondsComponent_openedBondUp__, v5, v6);
    sub_1BCA7E0(&BattleResultBondsComponent_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v17, v18);
    sub_1BCA7E0(&DataManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v21, v22);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v23, v24);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__, v31, v32);
    sub_1BCA7E0(&int_TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__, v35, v36);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__, v37, v38);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__, v39, v40);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__, v41, v42);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo, v43, v44);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v45, v46);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v47, v48);
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v49, v50);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v51, v52);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v53, v54);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v55, v56);
    sub_1BCA7E0(&StringLiteral_11223/*"RESULT_BOUNDS_OPENQUEST"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_11226/*"RESULT_BOUNDS_UPDATE_MATERIAL_SG"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_11225/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_11222/*"RESULT_BOUNDS_GET_COIN_NAME"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_11220/*"RESULT_BOUNDS_GETVOICE"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_25272/*"{0} {1}"*/, v67, v68);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v69, v70);
    sub_1BCA7E0(&StringLiteral_11221/*"RESULT_BOUNDS_GET_COIN_COUNT"*/, v71, v72);
    byte_4B1949E = 1;
  }
  memset(&v175, 0, sizeof(v175));
  nameText = 0LL;
  entity = 0LL;
  countText = 0LL;
  v73 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, method, v2, v3);
  System_Text_StringBuilder___ctor(v73, 0LL);
  v74 = Method_BattleResultBondsComponent_endMoveFigure__;
  if ( (*((_BYTE *)Method_BattleResultBondsComponent_endMoveFigure__ + 83) & 2) != 0 )
    v74 = (_QWORD *)sub_1BCA7F8(Method_BattleResultBondsComponent_endMoveFigure__);
  v75 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v74, v74[4]);
  OverwriteAssetSoundName__PlaySystemSe(v75, 6, 0LL);
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
  lvComp = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !lvComp )
    goto LABEL_113;
  v170 = v73;
  lvComp = (__int64)clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
                      (clsQuestCheck_o *)lvComp,
                      svtId,
                      friendshipRank,
                      8,
                      0LL);
  if ( lvComp )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v172,
      (System_Collections_Generic_List_object__o *)lvComp,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    v81 = 0;
    v175 = v172;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v175,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
    {
      current = v175.fields._current;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v82);
      v84 = LocalizationManager__Get((System_String_o *)StringLiteral_11223/*"RESULT_BOUNDS_OPENQUEST"*/, 0LL);
      if ( !current )
        sub_1BCAA3C(v84, v85);
      v86 = v84;
      QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0LL);
      v88 = System_String__Format(v86, QuestName, 0LL);
      BattleResultBondsComponent__addConfObject(this, v88, (float)v81 * 22.0, -1, 0, 0, v89);
      v81 += 3;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v175,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
  }
  else
  {
    v81 = 0;
  }
  v90 = this->fields.openCollect;
  if ( !v90 )
    goto LABEL_113;
  svtLimit = v90->fields.svtLimit;
  lvComp = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !lvComp )
    goto LABEL_113;
  lvComp = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)lvComp,
                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !lvComp )
    goto LABEL_113;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)lvComp,
                                 svtId,
                                 svtLimit,
                                 0LL);
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v92);
  if ( ServantCommentManager__IsOpenByServantFriendShipAndImageLimit(
         svtId,
         ServantLimitCountSealAfter,
         friendshipRank,
         0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v94);
    v95 = &StringLiteral_11226/*"RESULT_BOUNDS_UPDATE_MATERIAL_SG"*/;
    v96 = 4;
    v97 = 1;
LABEL_32:
    v98 = LocalizationManager__Get((System_String_o *)*v95, 0LL);
    BattleResultBondsComponent__addConfObject(this, v98, (float)v81 * 22.0, -1, 0, v97, v99);
    v81 += v96;
    goto LABEL_33;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v94);
  lvComp = ServantCommentManager__IsOpenByServantFriendShip_41221340(
             svtId,
             friendshipRank,
             ServantLimitCountSealAfter,
             0LL);
  if ( (lvComp & 1) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v77);
    v95 = &StringLiteral_11225/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/;
    v97 = 0;
    v96 = 2;
    goto LABEL_32;
  }
LABEL_33:
  v100 = this->fields.openCollect;
  if ( !v100 )
    goto LABEL_113;
  if ( ServantVoiceMaster__isOpenByServantFriendShip(svtId, v100->fields.maxLimitCount, friendshipRank, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v77);
    v103 = LocalizationManager__Get((System_String_o *)StringLiteral_11220/*"RESULT_BOUNDS_GETVOICE"*/, 0LL);
    BattleResultBondsComponent__addConfObject(this, v103, (float)v81 * 22.0, -1, 0, 0, v104);
    v81 += 2;
  }
  if ( this->fields.rewardInfos )
  {
    v105 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_List_BattleFriendshipRewardInfo__TypeInfo,
                                                          v77,
                                                          v101,
                                                          v102);
    System_Collections_Generic_List_object____ctor(
      v105,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo___ctor__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v106);
    lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
    rewardInfos = this->fields.rewardInfos;
    if ( !rewardInfos )
      goto LABEL_113;
    max_length = rewardInfos->max_length;
    if ( max_length < 1 )
    {
      CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
      if ( !v105 )
        goto LABEL_113;
    }
    else
    {
      key = svtId;
      v109 = (DataMasterBase_TMaster__TEntity__PKType__o *)lvComp;
      v110 = 0;
      CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
      do
      {
        if ( v110 >= (unsigned int)max_length )
          sub_1BCAA44(lvComp, v77);
        v112 = this->fields.openCollect;
        if ( !v112 )
          goto LABEL_113;
        v113 = rewardInfos->m_Items[v110];
        if ( !v113 )
          goto LABEL_113;
        if ( v112->fields.svtId == v113->fields.targetSvtId )
        {
          lvComp = (__int64)BattleFriendshipRewardInfo__getGiftEntity(v113, 0LL);
          if ( !lvComp )
            goto LABEL_113;
          v114 = (GiftEntity_o *)lvComp;
          GiftEntity__GetInfo((GiftEntity_o *)lvComp, &nameText, &countText, 0LL);
          lvComp = GiftEntity__isQp(v114, 0LL);
          if ( (lvComp & 1) != 0 )
          {
            nameText = countText;
            countText = (System_String_o *)StringLiteral_1/*""*/;
          }
          if ( v114->fields.type == 2 )
          {
            if ( !v109 )
              goto LABEL_113;
            v115 = DataMasterBase_object__object__int___GetEntity(
                     v109,
                     v114->fields.objectId,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( v115 && LODWORD(v115[3].klass) == 29 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v116);
              v117 = LocalizationManager__Get((System_String_o *)StringLiteral_11221/*"RESULT_BOUNDS_GET_COIN_COUNT"*/, 0LL);
              LODWORD(v172.fields._list) = v114->fields.num;
              v118 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v172);
              countText = System_String__Format(v117, v118, 0LL);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v119);
              lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
              if ( !lvComp )
                goto LABEL_113;
              v120 = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)lvComp,
                       key,
                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( v120 )
              {
                v122 = (ServantEntity_o *)v120;
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v121);
                Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v123);
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
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v125);
                  lvComp = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
                    v126 = -1;
                  else
                    v126 = lvComp;
                }
                else
                {
                  v126 = -1;
                }
                Name = (Il2CppObject *)ServantEntity__getName(v122, v126, -1, 0LL);
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v131);
                v133 = LocalizationManager__Get((System_String_o *)StringLiteral_11222/*"RESULT_BOUNDS_GET_COIN_NAME"*/, 0LL);
                nameText = System_String__Format_62415592(v133, (Il2CppObject *)nameText, Name, 0LL);
              }
              v130 = 1;
            }
            else
            {
              v130 = 0;
            }
            v134 = System_String__Format_62415592(
                     (System_String_o *)StringLiteral_25272/*"{0} {1}"*/,
                     (Il2CppObject *)nameText,
                     (Il2CppObject *)countText,
                     0LL);
            IconImageId = GiftEntity__getIconImageId(v114, 0LL);
            BattleResultBondsComponent__addConfObject(this, v134, (float)v81 * 22.0, IconImageId, v130, 0, v136);
          }
          else
          {
            v127 = System_String__Format_62415592(
                     (System_String_o *)StringLiteral_25272/*"{0} {1}"*/,
                     (Il2CppObject *)nameText,
                     (Il2CppObject *)countText,
                     0LL);
            BattleResultBondsComponent__addConfObject(this, v127, (float)v81 * 22.0, -1, 0, 0, v128);
          }
          v137 = BattleResultBondsComponent_TypeInfo;
          if ( !BattleResultBondsComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleResultBondsComponent_TypeInfo, v129);
            v137 = BattleResultBondsComponent_TypeInfo;
          }
          v81 += 2;
          CONF_SERVANT_COIN_PLUS_HEIGHT = v137->static_fields->CONF_SERVANT_COIN_PLUS_HEIGHT;
          lvComp = BattleFriendshipRewardInfo__isShow(v113, 0LL);
          if ( (lvComp & 1) != 0 )
          {
            if ( !v105 )
              goto LABEL_113;
            items = v105->fields._items;
            v145 = Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__Add__;
            ++v105->fields._version;
            if ( !items )
              goto LABEL_113;
            size = v105->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v105,
                (Il2CppObject *)v113,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v145[4] + 192LL) + 112LL));
            }
            else
            {
              v147 = &items->obj.klass + size;
              v105->fields._size = size + 1;
              v147[4] = (Il2CppClass *)v113;
              sub_1BCA784((PartyOrganizationUtility_o *)(v147 + 4), (int64_t)v113, v138, v139, v140, v141, v142, v143);
            }
          }
        }
        max_length = rewardInfos->max_length;
        ++v110;
      }
      while ( v110 < max_length );
      if ( !v105 )
LABEL_113:
        sub_1BCAA3C(lvComp, v77);
    }
    v148 = System_Collections_Generic_List_object___ToArray(
             v105,
             (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleFriendshipRewardInfo__ToArray__);
    this->fields.showList = (struct BattleFriendshipRewardInfo_array *)v148;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.showList, (int64_t)v148, v149, v150, v151, v152, v153, v154);
    this->fields.showIndex = 0;
  }
  else
  {
    CONF_SERVANT_COIN_PLUS_HEIGHT = 0;
  }
  lvComp = (__int64)this->fields.confSprite;
  if ( v81 )
    v155 = v81;
  else
    v155 = 1;
  if ( !lvComp )
    goto LABEL_113;
  UIWidget__set_height((UIWidget_o *)lvComp, CONF_SERVANT_COIN_PLUS_HEIGHT + 22 * v155 + 120, 0LL);
  confRoot = this->fields.confRoot;
  if ( !confRoot )
    goto LABEL_113;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.confRoot, 0LL);
  if ( CONF_SERVANT_COIN_PLUS_HEIGHT >= 0 )
    v158 = CONF_SERVANT_COIN_PLUS_HEIGHT;
  else
    v158 = CONF_SERVANT_COIN_PLUS_HEIGHT + 1;
  v159 = (float)v155;
  v160 = v158 >> 1;
  v161 = (float)(v159 * 11.0) + (float)(v158 >> 1);
  v162 = 0;
  UnityEngine_Transform__set_localPosition(confRoot, *(UnityEngine_Vector3_o *)&localPosition, 0LL);
  if ( CONF_SERVANT_COIN_PLUS_HEIGHT )
  {
    lvComp = (__int64)this->fields.confwindow;
    if ( !lvComp )
      goto LABEL_113;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lvComp, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, (float)-v160, 0LL);
    lvComp = (__int64)this->fields.confwindow;
    if ( !lvComp )
      goto LABEL_113;
    lvComp = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)lvComp + 424LL))(
               lvComp,
               *(_QWORD *)(*(_QWORD *)lvComp + 432LL));
  }
  if ( !v170 )
    goto LABEL_113;
  rankupConfLabel = this->fields.rankupConfLabel;
  lvComp = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v170->klass->vtable._3_ToString.method)(
             v170,
             v170->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !rankupConfLabel )
    goto LABEL_113;
  UILabel__set_text(rankupConfLabel, (System_String_o *)lvComp, 0LL);
  confwindow = this->fields.confwindow;
  v169 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v166, v167, v168);
  BattleWindowComponent_EndCall___ctor(
    v169,
    (Il2CppObject *)this,
    Method_BattleResultBondsComponent_openedBondUp__,
    0LL);
  if ( !confwindow )
    goto LABEL_113;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))confwindow->klass->vtable._10_Open.method)(
    confwindow,
    v169,
    confwindow->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattleResultBondsComponent__finishUpdateValue(
        BattleResultBondsComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v8; // x1
  void *BondsIconArray; // x0
  const MethodInfo *v10; // x1
  int v11; // w8
  _DWORD *v12; // x20
  unsigned int v13; // w21
  char *v14; // x22
  void **v15; // x22
  void *v16; // t1
  SePlayer_o *MeterSePlayer; // x0

  if ( (byte_4B19499 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9370/*"NEXT"*/, method, v2);
    sub_1BCA7E0(&iTween_TypeInfo, v4, v5);
    byte_4B19499 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v6);
  iTween__Stop_61049892(gameObject, 0LL);
  BondsIconArray = BattleResultBondsComponent__GetBondsIconArray(this, v8);
  if ( !BondsIconArray )
    goto LABEL_18;
  v11 = *((_DWORD *)BondsIconArray + 6);
  v12 = BondsIconArray;
  if ( v11 >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= v11 )
        goto LABEL_17;
      v14 = (char *)&v12[2 * v13];
      v16 = (void *)*((_QWORD *)v14 + 4);
      v15 = (void **)(v14 + 32);
      BondsIconArray = v16;
      if ( !v16 )
        break;
      BondsIconArray = (void *)BattleResultBondsIconComponent__changeGauge(
                                 (BattleResultBondsIconComponent_o *)BondsIconArray,
                                 1.0,
                                 v10);
      if ( v13 >= v12[6] )
LABEL_17:
        sub_1BCAA44(BondsIconArray, v10);
      BondsIconArray = *v15;
      if ( !*v15 )
        break;
      BattleResultBondsIconComponent__LayoutFriendshipValue((BattleResultBondsIconComponent_o *)BondsIconArray, v10);
      v11 = v12[6];
      if ( (int)++v13 >= v11 )
        goto LABEL_13;
    }
LABEL_18:
    sub_1BCAA3C(BondsIconArray, v10);
  }
LABEL_13:
  MeterSePlayer = this->fields.MeterSePlayer;
  if ( MeterSePlayer )
    SePlayer__StopSe(MeterSePlayer, 0.0, 0LL);
  BondsIconArray = this->fields.myFsm;
  this->fields.bondsCountUp = 0;
  if ( !BondsIconArray )
    goto LABEL_18;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BondsIconArray, (System_String_o *)StringLiteral_9370/*"NEXT"*/, 0LL);
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
        sub_1BCAA44(this, collects);
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
    sub_1BCAA3C(this, collects);
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
    sub_1BCAA3C(this, deck);
  max_length = svts->max_length;
  if ( max_length < 1 )
    return 0LL;
  v6 = 0;
  while ( 1 )
  {
    if ( max_length == v6 )
      sub_1BCAA44(this, deck);
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
    sub_1BCAA3C(this, method);
  return (signed int)oldCollections->max_length > 1;
}


void __fastcall BattleResultBondsComponent__openedBondUp(BattleResultBondsComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleResultComponent_o *parentComp; // x0
  struct BattleResultComponent_o *v5; // x8

  if ( (byte_4B1949F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5560/*"END_OPEN"*/, method, v2);
    byte_4B1949F = 1;
  }
  parentComp = this->fields.parentComp;
  if ( !parentComp
    || (BattleResultComponent__ResetPlayScreenTouch(parentComp, method), (v5 = this->fields.parentComp) == 0LL)
    || (parentComp = (BattleResultComponent_o *)v5->fields.obj_fronttouch) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)parentComp, 1, 0LL),
        parentComp = (BattleResultComponent_o *)this->fields.myFsm,
        ++this->fields.colIndex,
        !parentComp) )
  {
    sub_1BCAA3C(parentComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)parentComp, (System_String_o *)StringLiteral_5560/*"END_OPEN"*/, 0LL);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B194AB & 1) == 0 )
  {
    sub_1BCA7E0(&BattleResultBondsComponent___c_TypeInfo, v1, v2);
    byte_4B194AB = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleResultBondsComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleResultBondsComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultBondsComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleResultBondsComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return col->fields.isUse;
}


bool __fastcall BattleResultBondsComponent___c___SetResultDataLocal_b__49_0(
        BattleResultBondsComponent___c_o *this,
        QuestRewardInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.type == 7 && x->fields.isNew;
}


bool __fastcall BattleResultBondsComponent___c___SetResultDataLocal_b__49_1(
        BattleResultBondsComponent___c_o *this,
        GetSvts_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v2; // x2
  BattleResultBondsComponent___c__DisplayClass61_1_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *CS___8__locals1; // x8
  struct BattleResultBondsComponent_o *_4__this; // x8
  UnityEngine_Object_o *figureMoveRoot; // x20
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v29; // x9
  char v30; // w8
  UnityEngine_GameObject_o *parent; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  BattleResultBondsComponent___c__DisplayClass61_1_o *v38; // x21
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  BattleResultBondsComponent___c__DisplayClass61_1_o *v45; // x22
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  BattleResultBondsComponent___c__DisplayClass61_1_o *v58; // x22
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  BattleResultBondsComponent___c__DisplayClass61_1_o *v71; // x22
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v78; // x8
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  BattleResultBondsComponent___c__DisplayClass61_1_o *v85; // x22
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  __int64 v98; // x1
  System_Collections_Hashtable_o *v99; // x0
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v100; // x8
  struct BattleResultBondsComponent_o *v101; // x8
  const MethodInfo *v102; // x2
  struct BattleResultBondsComponent___c__DisplayClass61_0_o *v103; // x8
  struct BattleResultBondsIconComponent_array *bondsIcons; // x9
  __int64 i; // x10
  __int64 v106; // x0
  char v107[4]; // [xsp+4h] [xbp-3Ch] BYREF
  int v108; // [xsp+8h] [xbp-38h] BYREF
  int v109; // [xsp+Ch] [xbp-34h] BYREF

  v3 = this;
  if ( (byte_4B194AC & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, method, v2);
    sub_1BCA7E0(&object___TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&float_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_24997/*"x"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_9754/*"OPEN"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_22515/*"oncompletetarget"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_19206/*"endMoveFigure"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_21060/*"islocal"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v22, v23);
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1BCA7E0(&iTween_TypeInfo, v24, v25);
    byte_4B194AC = 1;
  }
  CS___8__locals1 = v3->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_69;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_69;
  figureMoveRoot = (UnityEngine_Object_o *)_4__this->fields.figureMoveRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)UnityEngine_Object__op_Inequality(
                                                                 figureMoveRoot,
                                                                 0LL,
                                                                 0LL);
  v29 = v3->fields.CS___8__locals1;
  if ( !v29 )
    goto LABEL_69;
  v30 = (char)this;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v29->fields.__4__this;
  if ( !this )
    goto LABEL_69;
  if ( (v30 & 1) == 0 )
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
  parent = v3->fields.parent;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1BCA888(object___TypeInfo, 10LL);
  if ( !this )
    goto LABEL_69;
  v38 = this;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_24997/*"x"*/;
  if ( StringLiteral_24997/*"x"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1BCA91C(
                                                                   StringLiteral_24997/*"x"*/,
                                                                   v38->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_24997/*"x"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( !LODWORD(v38->fields.CS___8__locals1) )
    goto LABEL_70;
  v38[1].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)method;
  sub_1BCA784((PartyOrganizationUtility_o *)&v38[1], (int64_t)method, v32, v33, v34, v35, v36, v37);
  v109 = -1007026176;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(float_TypeInfo, &v109);
  v45 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1BCA91C(this, v38->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v38->fields.CS___8__locals1) <= 1 )
    goto LABEL_70;
  v38[1].monitor = v45;
  sub_1BCA784((PartyOrganizationUtility_o *)&v38[1].monitor, (int64_t)v45, v39, v40, v41, v42, v43, v44);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_24178/*"time"*/;
  if ( StringLiteral_24178/*"time"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1BCA91C(
                                                                   StringLiteral_24178/*"time"*/,
                                                                   v38->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_24178/*"time"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v38->fields.CS___8__locals1) <= 2 )
    goto LABEL_70;
  v38[1].fields.parent = (struct UnityEngine_GameObject_o *)method;
  sub_1BCA784((PartyOrganizationUtility_o *)&v38[1].fields, (int64_t)method, v46, v47, v48, v49, v50, v51);
  v108 = 1061997773;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(float_TypeInfo, &v108);
  v58 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1BCA91C(this, v38->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v38->fields.CS___8__locals1) <= 3 )
    goto LABEL_70;
  v38[1].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v58;
  sub_1BCA784((PartyOrganizationUtility_o *)&v38[1].fields.CS___8__locals1, (int64_t)v58, v52, v53, v54, v55, v56, v57);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_21060/*"islocal"*/;
  if ( StringLiteral_21060/*"islocal"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1BCA91C(
                                                                   StringLiteral_21060/*"islocal"*/,
                                                                   v38->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_21060/*"islocal"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v38->fields.CS___8__locals1) <= 4 )
    goto LABEL_70;
  v38[2].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)method;
  sub_1BCA784((PartyOrganizationUtility_o *)&v38[2], (int64_t)method, v59, v60, v61, v62, v63, v64);
  v107[0] = 1;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)j_il2cpp_value_box_0(bool_TypeInfo, v107);
  v71 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1BCA91C(this, v38->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v38->fields.CS___8__locals1) <= 5 )
    goto LABEL_70;
  v38[2].monitor = v71;
  sub_1BCA784((PartyOrganizationUtility_o *)&v38[2].monitor, (int64_t)v71, v65, v66, v67, v68, v69, v70);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_22515/*"oncompletetarget"*/;
  if ( StringLiteral_22515/*"oncompletetarget"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1BCA91C(
                                                                   StringLiteral_22515/*"oncompletetarget"*/,
                                                                   v38->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_22515/*"oncompletetarget"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v38->fields.CS___8__locals1) <= 6 )
    goto LABEL_70;
  v38[2].fields.parent = (struct UnityEngine_GameObject_o *)method;
  sub_1BCA784((PartyOrganizationUtility_o *)&v38[2].fields, (int64_t)method, v72, v73, v74, v75, v76, v77);
  v78 = v3->fields.CS___8__locals1;
  if ( !v78 || (this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v78->fields.__4__this) == 0LL )
LABEL_69:
    sub_1BCAA3C(this, method);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
  v85 = this;
  if ( this )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1BCA91C(this, v38->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
  }
  if ( LODWORD(v38->fields.CS___8__locals1) <= 7 )
    goto LABEL_70;
  v38[2].fields.CS___8__locals1 = (struct BattleResultBondsComponent___c__DisplayClass61_0_o *)v85;
  sub_1BCA784((PartyOrganizationUtility_o *)&v38[2].fields.CS___8__locals1, (int64_t)v85, v79, v80, v81, v82, v83, v84);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_22513/*"oncomplete"*/;
  if ( StringLiteral_22513/*"oncomplete"*/ )
  {
    this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1BCA91C(
                                                                   StringLiteral_22513/*"oncomplete"*/,
                                                                   v38->klass->_1.element_class);
    if ( !this )
      goto LABEL_71;
    method = (const MethodInfo *)StringLiteral_22513/*"oncomplete"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v38->fields.CS___8__locals1) <= 8 )
    goto LABEL_70;
  v38[3].klass = (BattleResultBondsComponent___c__DisplayClass61_1_c *)method;
  sub_1BCA784((PartyOrganizationUtility_o *)&v38[3], (int64_t)method, v86, v87, v88, v89, v90, v91);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)StringLiteral_19206/*"endMoveFigure"*/;
  if ( !StringLiteral_19206/*"endMoveFigure"*/ )
  {
    method = 0LL;
    goto LABEL_57;
  }
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)sub_1BCA91C(
                                                                 StringLiteral_19206/*"endMoveFigure"*/,
                                                                 v38->klass->_1.element_class);
  if ( !this )
  {
LABEL_71:
    v106 = sub_1BCAA60(this);
    sub_1BCA908(v106, 0LL);
  }
  method = (const MethodInfo *)StringLiteral_19206/*"endMoveFigure"*/;
LABEL_57:
  if ( LODWORD(v38->fields.CS___8__locals1) <= 9 )
    goto LABEL_70;
  v38[3].monitor = (void *)method;
  sub_1BCA784((PartyOrganizationUtility_o *)&v38[3].monitor, (int64_t)method, v92, v93, v94, v95, v96, v97);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v98);
  v99 = iTween__Hash((System_Object_array *)v38, 0LL);
  iTween__MoveFrom_60941024(parent, v99, 0LL);
LABEL_61:
  v100 = v3->fields.CS___8__locals1;
  if ( !v100 )
    goto LABEL_69;
  v101 = v100->fields.__4__this;
  if ( !v101 )
    goto LABEL_69;
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v101->fields.myFsm;
  v101->fields.openBoundsFlg = 1;
  if ( !this )
    goto LABEL_69;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9754/*"OPEN"*/, 0LL);
  v103 = v3->fields.CS___8__locals1;
  if ( !v103 )
    goto LABEL_69;
  bondsIcons = v103->fields.bondsIcons;
  if ( !bondsIcons )
    goto LABEL_69;
  i = v103->fields.i;
  if ( (unsigned int)i >= bondsIcons->max_length )
LABEL_70:
    sub_1BCAA44(this, method);
  this = (BattleResultBondsComponent___c__DisplayClass61_1_o *)v103->fields.__4__this;
  if ( !this )
    goto LABEL_69;
  BattleResultBondsComponent__CheckFormalJoin((BattleResultBondsComponent_o *)this, bondsIcons->m_Items[i], v102);
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
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B194AD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B194AD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  CommonUI__CreateServantCoinConfirmDialog((CommonUI_o *)Instance, 1, this->fields.coin, 0LL, 0LL);
}