void SoundPlayerComponent___ctor(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SoundPlayerComponent__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  if ( (byte_4D27DFE & 1) == 0 )
  {
    sub_1C94098(&SoundPlayerComponent_TypeInfo);
    byte_4D27DFE = 1;
  }
  SoundPlayerComponent_TypeInfo->static_fields->isContinueDevice = 1;
}


void SoundPlayerComponent__DestroyMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4D27E04 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    byte_4D27E04 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseMyRoomSoundAtlas(0);
}


void SoundPlayerComponent__InitPlaySoundData(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  SoundPlayerMenu_o *soundPlayerMenu; // x0

  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu )
    sub_1C942F0(0, method);
  SoundPlayerMenu__InitPlaySoundData(soundPlayerMenu, method);
}


void SoundPlayerComponent__LoginProcess(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *name_low; // x1
  System_Object_array *Entitys; // x20
  System_Collections_Generic_List_int__o *v4; // x19
  int max_length; // w8
  unsigned int v6; // w25
  Il2CppClass **v7; // x8
  Il2CppClass *v8; // x21
  int32_t element_class; // w22
  struct System_Int32_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x21
  unsigned __int64 v16; // x22
  GrandQuestFolderBoardItem_o *v17; // x23
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_String_o *v24; // x0
  SoundPlayerMenu_c *v25; // x8
  System_String_o *v26; // x19
  int32_t Item; // [xsp+4h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D27DFF & 1) == 0 )
  {
    sub_1C94098(&CondType_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_BgmReleaseMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C94098(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
    sub_1C94098(&Method_DataMasterBase_BgmMaster__BgmEntity__int__getEntitys__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&SoundPlayerComponent_TypeInfo);
    sub_1C94098(&SoundPlayerMenu_TypeInfo);
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&StringLiteral_808/*","*/);
    byte_4D27DFF = 1;
  }
  entity = 0;
  Item = 0;
  if ( SoundPlayerComponent_TypeInfo->static_fields->isContinueDevice )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    DataManager__GetMasterData_object_(
      Instance,
      (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_BgmReleaseMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !Instance )
      goto LABEL_37;
    Entitys = DataMasterBase_object__object__int___getEntitys(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                (const MethodInfo_345A744 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__getEntitys__);
    v4 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v4,
      (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !Entitys )
      goto LABEL_37;
    max_length = Entitys->max_length;
    if ( max_length >= 1 )
    {
      v6 = 0;
      while ( 1 )
      {
        if ( v6 >= max_length )
LABEL_38:
          sub_1C942F8(Instance);
        v7 = &Entitys->obj.klass + (int)v6;
        v8 = v7[4];
        if ( !v8 )
          goto LABEL_37;
        Instance = (DataManager_o *)BgmEntity__HasFlag((BgmEntity_o *)v7[4], 1, 0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          element_class = (int32_t)v8->_1.element_class;
          if ( !element_class )
            break;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          Instance = (DataManager_o *)CondType__IsPurchaseShop(element_class, 1, 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            goto LABEL_21;
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_37;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ShopMaster___);
          if ( !Instance )
            goto LABEL_37;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                        &entity,
                                        element_class,
                                        (const MethodInfo_345B50C *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            break;
        }
LABEL_26:
        max_length = Entitys->max_length;
        if ( (int)++v6 >= max_length )
          goto LABEL_27;
      }
      Instance = (DataManager_o *)SoundPlayerListViewItem__isBgmLock((int32_t)v8->_1.name, name_low);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        goto LABEL_26;
LABEL_21:
      if ( !v4 )
        goto LABEL_37;
      name_low = (const MethodInfo *)LODWORD(v8->_1.name);
      items = v4->fields._items;
      v11 = Method_System_Collections_Generic_List_int__Add__;
      ++v4->fields._version;
      if ( !items )
        goto LABEL_37;
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v4,
          (int32_t)name_low,
          *(const MethodInfo_384DE10 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
      }
      else
      {
        v4->fields._size = size + 1;
        items->m_Items[size] = (int)name_low;
      }
      goto LABEL_26;
    }
LABEL_27:
    if ( !v4 )
LABEL_37:
      sub_1C942F0(Instance, name_low);
    v13 = (unsigned int)v4->fields._size;
    v14 = sub_1C94140(string___TypeInfo, (unsigned int)v13);
    v15 = v14;
    if ( (int)v13 >= 1 )
    {
      v16 = 0;
      v17 = (GrandQuestFolderBoardItem_o *)(v14 + 32);
      do
      {
        Item = System_Collections_Generic_List_int___get_Item(
                 v4,
                 v16,
                 (const MethodInfo_384DB20 *)Method_System_Collections_Generic_List_int__get_Item__);
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&Item, 0);
        if ( !v15 )
          goto LABEL_37;
        if ( v16 >= *(unsigned int *)(v15 + 24) )
          goto LABEL_38;
        v17->klass = (GrandQuestFolderBoardItem_c *)Instance;
        sub_1C9403C(v17, (int32_t)Instance, v18, v19, v20, v21, v22, v23);
        ++v16;
        v17 = (GrandQuestFolderBoardItem_o *)((char *)v17 + 8);
      }
      while ( v13 != v16 );
    }
    v24 = System_String__Join((System_String_o *)StringLiteral_808/*","*/, (System_String_array *)v15, 0);
    v25 = SoundPlayerMenu_TypeInfo;
    v26 = v24;
    if ( !SoundPlayerMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundPlayerMenu_TypeInfo);
      v25 = SoundPlayerMenu_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetString(v25->static_fields->SOUND_PLAYER_NEW_KEY, v26, 0);
    UnityEngine_PlayerPrefs__Save(0);
    SoundPlayerComponent_TypeInfo->static_fields->isContinueDevice = 0;
  }
}


void SoundPlayerComponent__SetEnableBlockTouch(SoundPlayerComponent_o *this, bool enable, const MethodInfo *method)
{
  struct SoundPlayerMenu_o *soundPlayerMenu; // x8

  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu || (this = (SoundPlayerComponent_o *)soundPlayerMenu->fields.maskColl) == 0 )
    sub_1C942F0(this, enable);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, enable, 0);
}


void SoundPlayerComponent___openMenu_b__10_0(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4D27E07 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_6989/*"GO_NEXT"*/);
    byte_4D27E07 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm
    || (PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6989/*"GO_NEXT"*/, 0),
        (myRoomFsm = (PlayMakerFSM_o *)this->fields.myRoomCtrl) == 0) )
  {
    sub_1C942F0(myRoomFsm, method);
  }
  MyRoomControl__SetBackButtonIgnore((MyRoomControl_o *)myRoomFsm, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
bool SoundPlayerComponent__checkOpen(BgmReleaseEntity_o *releaseEntity, int32_t kind, const MethodInfo *method)
{
  BgmReleaseEntity_o *v4; // x20
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *targetIds; // x9
  unsigned __int64 v7; // x25
  int32_t v8; // w22
  unsigned __int64 v9; // x27
  unsigned __int64 max_length_low; // x9
  int64_t v11; // x23
  Il2CppObject *MasterData_object; // x24
  __int64 max_length; // [xsp+8h] [xbp-68h]

  v4 = releaseEntity;
  if ( (byte_4D27E00 & 1) == 0 )
  {
    sub_1C94098(&CondType_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C94098(&NetworkManager_TypeInfo);
    releaseEntity = (BgmReleaseEntity_o *)sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D27E00 = 1;
  }
  if ( !v4 )
LABEL_31:
    sub_1C942F0(releaseEntity, *(_QWORD *)&kind);
  vals = v4->fields.vals;
  if ( !vals )
    return 0;
  targetIds = v4->fields.targetIds;
  if ( !targetIds || (int)targetIds->max_length < 1 )
    return 0;
  max_length = (unsigned int)targetIds->max_length;
  v7 = 0;
LABEL_8:
  if ( v7 >= LODWORD(targetIds->max_length) )
LABEL_34:
    sub_1C942F8(releaseEntity);
  v8 = targetIds->m_Items[v7];
  v9 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(vals->max_length);
    if ( (__int64)v9 >= (int)max_length_low )
    {
      if ( ++v7 == max_length )
        return 0;
      targetIds = v4->fields.targetIds;
      if ( !targetIds )
        goto LABEL_31;
      goto LABEL_8;
    }
    if ( v9 >= max_length_low )
      goto LABEL_34;
    v11 = vals->m_Items[v9];
    if ( kind != 17 )
      break;
    releaseEntity = (BgmReleaseEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !releaseEntity )
      goto LABEL_31;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)releaseEntity,
                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4D2633A )
    {
      sub_1C94098(&NetworkManager_TypeInfo);
      byte_4D2633A = 1;
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
                                            0);
    if ( !releaseEntity )
      goto LABEL_31;
    releaseEntity = (BgmReleaseEntity_o *)UserServantCollectionEntity__IsPlayed(
                                            (UserServantCollectionEntity_o *)releaseEntity,
                                            v11,
                                            0);
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
  releaseEntity = (BgmReleaseEntity_o *)CondType__IsOpen(kind, v8, v11, 0, 0, 0);
  if ( ((unsigned __int8)releaseEntity & 1) == 0 )
    goto LABEL_27;
  return 1;
}


bool SoundPlayerComponent__closeMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  BaseMenu_o *soundPlayerMenu; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4D27E02 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_SoundPlayerComponent_onClose__);
    byte_4D27E02 = 1;
  }
  soundPlayerMenu = (BaseMenu_o *)this->fields.soundPlayerMenu;
  v4 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SoundPlayerComponent_onClose__, 0);
  if ( !soundPlayerMenu )
    sub_1C942F0(v5, v6);
  BaseMenu__Close(soundPlayerMenu, v4, 0);
  return 1;
}


System_String_o *SoundPlayerComponent__getPlaySoundName(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  struct SoundPlayerMenu_o *soundPlayerMenu; // x8

  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu )
    sub_1C942F0(this, method);
  return soundPlayerMenu->fields.playSoundName;
}


void SoundPlayerComponent__hideMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  SoundPlayerMenu_o *soundPlayerMenu; // x0

  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu
    || (SoundPlayerMenu__hideMenu(soundPlayerMenu, method),
        (soundPlayerMenu = (SoundPlayerMenu_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0)) == 0) )
  {
    sub_1C942F0(soundPlayerMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerMenu, 0, 0);
}


void SoundPlayerComponent__initMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  SoundPlayerMenu_o *soundPlayerMenu; // x0

  if ( (byte_4D27E03 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    byte_4D27E03 = 1;
  }
  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu
    || (SoundPlayerMenu__Init(soundPlayerMenu, method), (soundPlayerMenu = this->fields.soundPlayerMenu) == 0) )
  {
    sub_1C942F0(soundPlayerMenu, method);
  }
  SoundPlayerMenu__resetPlaySoundData(soundPlayerMenu, method);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadMyRoomSoundAtlas(0, 1, 0);
}


void SoundPlayerComponent__onClose(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4D27E05 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_3519/*"CLOSE_MENU"*/);
    byte_4D27E05 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C942F0(0, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3519/*"CLOSE_MENU"*/, 0);
}


void SoundPlayerComponent__onEndMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4D27E06 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_3524/*"CLOSE_SOUND_PLAYER"*/);
    byte_4D27E06 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C942F0(0, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3524/*"CLOSE_SOUND_PLAYER"*/, 0);
}


bool SoundPlayerComponent__openMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *titleInfo; // x0
  const MethodInfo *v5; // x1
  SoundPlayerMenu_o *soundPlayerMenu; // x20
  System_Action_o *v7; // x21
  System_Action_o *v8; // x22
  const MethodInfo *v9; // x3

  if ( (byte_4D27E01 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_SoundPlayerComponent__openMenu_b__10_0__);
    sub_1C94098(&Method_SoundPlayerComponent_onEndMenu__);
    byte_4D27E01 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__ResetPosition(gameObject, 0);
  titleInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !titleInfo )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(titleInfo, 1, 0);
  titleInfo = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_8;
  TitleInfoControl__changeTitleInfo_40661784((TitleInfoControl_o *)titleInfo, 1, 54, 0, 0);
  titleInfo = (UnityEngine_GameObject_o *)this->fields.soundPlayerMenu;
  if ( !titleInfo
    || (SoundPlayerMenu__analyzeNewList((SoundPlayerMenu_o *)titleInfo, v5),
        soundPlayerMenu = this->fields.soundPlayerMenu,
        v7 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo),
        System_Action___ctor(v7, (Il2CppObject *)this, Method_SoundPlayerComponent__openMenu_b__10_0__, 0),
        v8 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_SoundPlayerComponent_onEndMenu__, 0),
        !soundPlayerMenu) )
  {
LABEL_8:
    sub_1C942F0(titleInfo, v5);
  }
  SoundPlayerMenu__open(soundPlayerMenu, v7, v8, v9);
  return 1;
}


void SoundPlayerComponent__showMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.soundPlayerMenu) == 0) )
  {
    sub_1C942F0(gameObject, v4);
  }
  SoundPlayerMenu__Init((SoundPlayerMenu_o *)gameObject, v4);
}