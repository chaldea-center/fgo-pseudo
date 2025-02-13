void __fastcall SoundPlayerComponent___ctor(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SoundPlayerComponent__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  if ( (byte_4BD7EE9 & 1) == 0 )
  {
    sub_1C21E38(&SoundPlayerComponent_TypeInfo);
    byte_4BD7EE9 = 1;
  }
  SoundPlayerComponent_TypeInfo->static_fields->isContinueDevice = 1;
}


void __fastcall SoundPlayerComponent__DestroyMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4BD7EEF & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    byte_4BD7EEF = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseMyRoomSoundAtlas(0LL);
}


void __fastcall SoundPlayerComponent__LoginProcess(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v2; // x1
  DataManager_o *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x20
  System_Collections_Generic_List_int__o *v6; // x19
  int v7; // w8
  unsigned int v8; // w25
  __int64 v9; // x8
  __int64 v10; // x21
  int32_t v11; // w22
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  __int64 v15; // x20
  __int64 v16; // x0
  System_String_array *v17; // x21
  unsigned __int64 v18; // x22
  _QWORD *v19; // x23
  System_String_o *v20; // x0
  SoundPlayerMenu_c *v21; // x8
  System_String_o *v22; // x19
  int32_t Item; // [xsp+4h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BD7EEA & 1) == 0 )
  {
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_BgmReleaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C21E38(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_DataMasterBase_BgmMaster__BgmEntity__int__getEntitys_BgmEntity___);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&SoundPlayerComponent_TypeInfo);
    sub_1C21E38(&SoundPlayerMenu_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_866/*","*/);
    byte_4BD7EEA = 1;
  }
  entity = 0LL;
  Item = 0;
  if ( SoundPlayerComponent_TypeInfo->static_fields->isContinueDevice )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    DataManager__GetMasterData_object_(
      Instance,
      (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_BgmReleaseMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !Instance )
      goto LABEL_37;
    v3 = Instance;
    v4 = sub_1C21F6C(*((_QWORD *)&Instance->klass->vtable._1_Finalize.methodPtr
                     + 2
                     * *((unsigned __int16 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__getEntitys_BgmEntity___
                       + 40)));
    v5 = (*(__int64 (__fastcall **)(DataManager_o *, __int64))(v4 + 8))(v3, v4);
    v6 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v6,
      (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !v5 )
      goto LABEL_37;
    v7 = *(_DWORD *)(v5 + 24);
    if ( v7 >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= v7 )
LABEL_38:
          sub_1C2209C(Instance, v2);
        v9 = v5 + 8LL * (int)v8;
        v10 = *(_QWORD *)(v9 + 32);
        if ( !v10 )
          goto LABEL_37;
        Instance = (DataManager_o *)BgmEntity__HasFlag(*(BgmEntity_o **)(v9 + 32), 1, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          v11 = *(_DWORD *)(v10 + 64);
          if ( !v11 )
            break;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          Instance = (DataManager_o *)CondType__IsPurchaseShop(v11, 1, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            goto LABEL_21;
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_37;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ShopMaster___);
          if ( !Instance )
            goto LABEL_37;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                        &entity,
                                        v11,
                                        (const MethodInfo_325BE14 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            break;
        }
LABEL_26:
        v7 = *(_DWORD *)(v5 + 24);
        if ( (int)++v8 >= v7 )
          goto LABEL_27;
      }
      Instance = (DataManager_o *)SoundPlayerListViewItem__isBgmLock(*(_DWORD *)(v10 + 16), v2);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        goto LABEL_26;
LABEL_21:
      if ( !v6 )
        goto LABEL_37;
      v2 = (const MethodInfo *)*(unsigned int *)(v10 + 16);
      items = v6->fields._items;
      v13 = Method_System_Collections_Generic_List_int__Add__;
      ++v6->fields._version;
      if ( !items )
        goto LABEL_37;
      size = v6->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v6,
          (int32_t)v2,
          *(const MethodInfo_3632090 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
      }
      else
      {
        v6->fields._size = size + 1;
        items->m_Items[size + 1] = (int)v2;
      }
      goto LABEL_26;
    }
LABEL_27:
    if ( !v6 )
LABEL_37:
      sub_1C22094(Instance, v2);
    v15 = (unsigned int)v6->fields._size;
    v16 = sub_1C21EE0(string___TypeInfo, (unsigned int)v15);
    v17 = (System_String_array *)v16;
    if ( (int)v15 >= 1 )
    {
      v18 = 0LL;
      v19 = (_QWORD *)(v16 + 32);
      do
      {
        Item = System_Collections_Generic_List_int___get_Item(
                 v6,
                 v18,
                 (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&Item, 0LL);
        if ( !v17 )
          goto LABEL_37;
        if ( v18 >= v17->max_length )
          goto LABEL_38;
        *v19 = Instance;
        sub_1C21DDC(v19, Instance);
        ++v18;
        ++v19;
      }
      while ( v15 != v18 );
    }
    v20 = System_String__Join((System_String_o *)StringLiteral_866/*","*/, v17, 0LL);
    v21 = SoundPlayerMenu_TypeInfo;
    v22 = v20;
    if ( !SoundPlayerMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundPlayerMenu_TypeInfo);
      v21 = SoundPlayerMenu_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetString(v21->static_fields->SOUND_PLAYER_NEW_KEY, v22, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
    SoundPlayerComponent_TypeInfo->static_fields->isContinueDevice = 0;
  }
}


void __fastcall SoundPlayerComponent__SetEnableBlockTouch(
        SoundPlayerComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  struct SoundPlayerMenu_o *soundPlayerMenu; // x8

  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu || (this = (SoundPlayerComponent_o *)soundPlayerMenu->fields.maskColl) == 0LL )
    sub_1C22094(this, enable);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, enable, 0LL);
}


void __fastcall SoundPlayerComponent___openMenu_b__10_0(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4BD7EF2 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_7114/*"GO_NEXT"*/);
    byte_4BD7EF2 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm
    || (PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_7114/*"GO_NEXT"*/, 0LL),
        (myRoomFsm = (PlayMakerFSM_o *)this->fields.myRoomCtrl) == 0LL) )
  {
    sub_1C22094(myRoomFsm, method);
  }
  MyRoomControl__SetBackButtonIgnore((MyRoomControl_o *)myRoomFsm, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SoundPlayerComponent__checkOpen(
        BgmReleaseEntity_o *releaseEntity,
        int32_t kind,
        const MethodInfo *method)
{
  BgmReleaseEntity_o *v4; // x20
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *targetIds; // x9
  unsigned __int64 v7; // x25
  int32_t v8; // w22
  unsigned __int64 v9; // x27
  unsigned __int64 max_length; // x9
  int64_t v11; // x23
  Il2CppObject *MasterData_object; // x24
  __int64 v14; // [xsp+8h] [xbp-68h]

  v4 = releaseEntity;
  if ( (byte_4BD7EEB & 1) == 0 )
  {
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    releaseEntity = (BgmReleaseEntity_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD7EEB = 1;
  }
  if ( !v4 )
LABEL_31:
    sub_1C22094(releaseEntity, *(_QWORD *)&kind);
  vals = v4->fields.vals;
  if ( !vals )
    return 0;
  targetIds = v4->fields.targetIds;
  if ( !targetIds || (int)*(_QWORD *)&targetIds->max_length < 1 )
    return 0;
  v14 = (unsigned int)*(_QWORD *)&targetIds->max_length;
  v7 = 0LL;
LABEL_8:
  if ( v7 >= targetIds->max_length )
LABEL_34:
    sub_1C2209C(releaseEntity, *(_QWORD *)&kind);
  v8 = targetIds->m_Items[v7 + 1];
  v9 = 0LL;
  while ( 1 )
  {
    max_length = vals->max_length;
    if ( (__int64)v9 >= (int)max_length )
    {
      if ( ++v7 == v14 )
        return 0;
      targetIds = v4->fields.targetIds;
      if ( !targetIds )
        goto LABEL_31;
      goto LABEL_8;
    }
    if ( v9 >= max_length )
      goto LABEL_34;
    v11 = vals->m_Items[v9 + 1];
    if ( kind != 17 )
      break;
    releaseEntity = (BgmReleaseEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !releaseEntity )
      goto LABEL_31;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)releaseEntity,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BD6FF5 )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD6FF5 = 1;
    }
    releaseEntity = (BgmReleaseEntity_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      releaseEntity = (BgmReleaseEntity_o *)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_31;
    releaseEntity = (BgmReleaseEntity_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                            (UserServantCollectionMaster_o *)MasterData_object,
                                            *(_QWORD *)(*(_QWORD *)&releaseEntity[3].fields.bgmId + 64LL),
                                            v8,
                                            0LL);
    if ( !releaseEntity )
      goto LABEL_31;
    releaseEntity = (BgmReleaseEntity_o *)UserServantCollectionEntity__IsPlayed(
                                            (UserServantCollectionEntity_o *)releaseEntity,
                                            v11,
                                            0LL);
    if ( ((unsigned __int8)releaseEntity & 1) != 0 )
      return 1;
LABEL_27:
    vals = v4->fields.vals;
    ++v9;
    if ( !vals )
      goto LABEL_31;
  }
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  releaseEntity = (BgmReleaseEntity_o *)CondType__IsOpen(kind, v8, v11, 0, 0LL, 0LL);
  if ( ((unsigned __int8)releaseEntity & 1) == 0 )
    goto LABEL_27;
  return 1;
}


bool __fastcall SoundPlayerComponent__closeMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  BaseMenu_o *soundPlayerMenu; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4BD7EED & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SoundPlayerComponent_onClose__);
    byte_4BD7EED = 1;
  }
  soundPlayerMenu = (BaseMenu_o *)this->fields.soundPlayerMenu;
  v4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SoundPlayerComponent_onClose__, 0LL);
  if ( !soundPlayerMenu )
    sub_1C22094(v5, v6);
  BaseMenu__Close(soundPlayerMenu, v4, 0LL);
  return 1;
}


System_String_o *__fastcall SoundPlayerComponent__getPlaySoundName(
        SoundPlayerComponent_o *this,
        const MethodInfo *method)
{
  struct SoundPlayerMenu_o *soundPlayerMenu; // x8

  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu )
    sub_1C22094(this, method);
  return soundPlayerMenu->fields.playSoundName;
}


void __fastcall SoundPlayerComponent__hideMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  SoundPlayerMenu_o *soundPlayerMenu; // x0

  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu
    || (SoundPlayerMenu__hideMenu(soundPlayerMenu, method),
        (soundPlayerMenu = (SoundPlayerMenu_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL)) == 0LL) )
  {
    sub_1C22094(soundPlayerMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerMenu, 0, 0LL);
}


void __fastcall SoundPlayerComponent__initMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  SoundPlayerMenu_o *soundPlayerMenu; // x0

  if ( (byte_4BD7EEE & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    byte_4BD7EEE = 1;
  }
  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu
    || (SoundPlayerMenu__Init(soundPlayerMenu, method), (soundPlayerMenu = this->fields.soundPlayerMenu) == 0LL) )
  {
    sub_1C22094(soundPlayerMenu, method);
  }
  SoundPlayerMenu__resetPlaySoundData(soundPlayerMenu, method);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadMyRoomSoundAtlas(0LL, 1, 0LL);
}


void __fastcall SoundPlayerComponent__onClose(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4BD7EF0 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3649/*"CLOSE_MENU"*/);
    byte_4BD7EF0 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3649/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall SoundPlayerComponent__onEndMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4BD7EF1 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3654/*"CLOSE_SOUND_PLAYER"*/);
    byte_4BD7EF1 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3654/*"CLOSE_SOUND_PLAYER"*/, 0LL);
}


bool __fastcall SoundPlayerComponent__openMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *titleInfo; // x0
  const MethodInfo *v5; // x1
  SoundPlayerMenu_o *soundPlayerMenu; // x20
  System_Action_o *v7; // x21
  System_Action_o *v8; // x22
  const MethodInfo *v9; // x3

  if ( (byte_4BD7EEC & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SoundPlayerComponent__openMenu_b__10_0__);
    sub_1C21E38(&Method_SoundPlayerComponent_onEndMenu__);
    byte_4BD7EEC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__ResetPosition(gameObject, 0LL);
  titleInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !titleInfo )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(titleInfo, 1, 0LL);
  titleInfo = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_8;
  TitleInfoControl__changeTitleInfo_38387828((TitleInfoControl_o *)titleInfo, 1, 52, 0, 0LL);
  titleInfo = (UnityEngine_GameObject_o *)this->fields.soundPlayerMenu;
  if ( !titleInfo
    || (SoundPlayerMenu__analyzeNewList((SoundPlayerMenu_o *)titleInfo, v5),
        soundPlayerMenu = this->fields.soundPlayerMenu,
        v7 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(v7, (Il2CppObject *)this, Method_SoundPlayerComponent__openMenu_b__10_0__, 0LL),
        v8 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_SoundPlayerComponent_onEndMenu__, 0LL),
        !soundPlayerMenu) )
  {
LABEL_8:
    sub_1C22094(titleInfo, v5);
  }
  SoundPlayerMenu__open(soundPlayerMenu, v7, v8, v9);
  return 1;
}


void __fastcall SoundPlayerComponent__showMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.soundPlayerMenu) == 0LL) )
  {
    sub_1C22094(gameObject, v4);
  }
  SoundPlayerMenu__Init((SoundPlayerMenu_o *)gameObject, v4);
}