void SoundPlayerComponent___ctor(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SoundPlayerComponent__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  if ( (byte_4C3E6C7 & 1) == 0 )
  {
    sub_1C37058(&SoundPlayerComponent_TypeInfo);
    byte_4C3E6C7 = 1;
  }
  SoundPlayerComponent_TypeInfo->static_fields->isContinueDevice = 1;
}


void SoundPlayerComponent__DestroyMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C3E6CD & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    byte_4C3E6CD = 1;
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
    sub_1C372B4(0);
  SoundPlayerMenu__InitPlaySoundData(soundPlayerMenu, method);
}


void SoundPlayerComponent__LoginProcess(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  System_Object_array *Entitys; // x20
  System_Collections_Generic_List_int__o *v3; // x19
  int max_length; // w8
  unsigned int v5; // w25
  Il2CppClass **v6; // x8
  Il2CppClass *v7; // x21
  const MethodInfo *v8; // x1
  int32_t element_class; // w22
  int32_t name; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  __int64 v14; // x20
  __int64 v15; // x0
  __int64 v16; // x21
  unsigned __int64 v17; // x22
  CGThumbnailListItem_o *v18; // x23
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_String_o *v21; // x0
  SoundPlayerMenu_c *v22; // x8
  System_String_o *v23; // x19
  int32_t Item; // [xsp+4h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C3E6C8 & 1) == 0 )
  {
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_BgmReleaseMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C37058(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
    sub_1C37058(&Method_DataMasterBase_BgmMaster__BgmEntity__int__getEntitys__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&SoundPlayerComponent_TypeInfo);
    sub_1C37058(&SoundPlayerMenu_TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_811/*","*/);
    byte_4C3E6C8 = 1;
  }
  entity = 0;
  Item = 0;
  if ( SoundPlayerComponent_TypeInfo->static_fields->isContinueDevice )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    DataManager__GetMasterData_object_(
      Instance,
      (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_BgmReleaseMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !Instance )
      goto LABEL_37;
    Entitys = DataMasterBase_object__object__int___getEntitys(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                (const MethodInfo_33A0324 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__getEntitys__);
    v3 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v3,
      (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !Entitys )
      goto LABEL_37;
    max_length = Entitys->max_length;
    if ( max_length >= 1 )
    {
      v5 = 0;
      while ( 1 )
      {
        if ( v5 >= max_length )
LABEL_38:
          sub_1C372BC(Instance);
        v6 = &Entitys->obj.klass + (int)v5;
        v7 = v6[4];
        if ( !v7 )
          goto LABEL_37;
        Instance = (DataManager_o *)BgmEntity__HasFlag((BgmEntity_o *)v6[4], 1, 0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          element_class = (int32_t)v7->_1.element_class;
          if ( !element_class )
            break;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          Instance = (DataManager_o *)CondType__IsPurchaseShop(element_class, 1, 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            goto LABEL_21;
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_37;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ShopMaster___);
          if ( !Instance )
            goto LABEL_37;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                        &entity,
                                        element_class,
                                        (const MethodInfo_33A10EC *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            break;
        }
LABEL_26:
        max_length = Entitys->max_length;
        if ( (int)++v5 >= max_length )
          goto LABEL_27;
      }
      Instance = (DataManager_o *)SoundPlayerListViewItem__isBgmLock((int32_t)v7->_1.name, v8);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        goto LABEL_26;
LABEL_21:
      if ( !v3 )
        goto LABEL_37;
      name = (int32_t)v7->_1.name;
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_int__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_37;
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v3,
          name,
          *(const MethodInfo_3786000 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = size + 1;
        items->m_Items[size] = name;
      }
      goto LABEL_26;
    }
LABEL_27:
    if ( !v3 )
LABEL_37:
      sub_1C372B4(Instance);
    v14 = (unsigned int)v3->fields._size;
    v15 = sub_1C37100(string___TypeInfo, (unsigned int)v14);
    v16 = v15;
    if ( (int)v14 >= 1 )
    {
      v17 = 0;
      v18 = (CGThumbnailListItem_o *)(v15 + 32);
      do
      {
        Item = System_Collections_Generic_List_int___get_Item(
                 v3,
                 v17,
                 (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
        Instance = (DataManager_o *)System_Int32__ToString((int32_t)&Item, 0);
        if ( !v16 )
          goto LABEL_37;
        if ( v17 >= *(unsigned int *)(v16 + 24) )
          goto LABEL_38;
        v18->klass = (CGThumbnailListItem_c *)Instance;
        sub_1C36FFC(v18, (int32_t)Instance, v19, v20);
        ++v17;
        v18 = (CGThumbnailListItem_o *)((char *)v18 + 8);
      }
      while ( v14 != v17 );
    }
    v21 = System_String__Join((System_String_o *)StringLiteral_811/*","*/, (System_String_array *)v16, 0);
    v22 = SoundPlayerMenu_TypeInfo;
    v23 = v21;
    if ( !SoundPlayerMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundPlayerMenu_TypeInfo);
      v22 = SoundPlayerMenu_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetString(v22->static_fields->SOUND_PLAYER_NEW_KEY, v23, 0);
    UnityEngine_PlayerPrefs__Save(0);
    SoundPlayerComponent_TypeInfo->static_fields->isContinueDevice = 0;
  }
}


void SoundPlayerComponent__SetEnableBlockTouch(SoundPlayerComponent_o *this, bool enable, const MethodInfo *method)
{
  struct SoundPlayerMenu_o *soundPlayerMenu; // x8

  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu || (this = (SoundPlayerComponent_o *)soundPlayerMenu->fields.maskColl) == 0 )
    sub_1C372B4(this);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, enable, 0);
}


void SoundPlayerComponent___openMenu_b__10_0(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4C3E6D0 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_6979/*"GO_NEXT"*/);
    byte_4C3E6D0 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm
    || (PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6979/*"GO_NEXT"*/, 0),
        (myRoomFsm = (PlayMakerFSM_o *)this->fields.myRoomCtrl) == 0) )
  {
    sub_1C372B4(myRoomFsm);
  }
  MyRoomControl__SetBackButtonIgnore((MyRoomControl_o *)myRoomFsm, 0, 0);
}


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
  if ( (byte_4C3E6C9 & 1) == 0 )
  {
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C37058(&NetworkManager_TypeInfo);
    releaseEntity = (BgmReleaseEntity_o *)sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3E6C9 = 1;
  }
  if ( !v4 )
LABEL_31:
    sub_1C372B4(releaseEntity);
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
    sub_1C372BC(releaseEntity);
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
    releaseEntity = (BgmReleaseEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !releaseEntity )
      goto LABEL_31;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)releaseEntity,
                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C3CD62 )
    {
      sub_1C37058(&NetworkManager_TypeInfo);
      byte_4C3CD62 = 1;
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

  if ( (byte_4C3E6CB & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SoundPlayerComponent_onClose__);
    byte_4C3E6CB = 1;
  }
  soundPlayerMenu = (BaseMenu_o *)this->fields.soundPlayerMenu;
  v4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SoundPlayerComponent_onClose__, 0);
  if ( !soundPlayerMenu )
    sub_1C372B4(v5);
  BaseMenu__Close(soundPlayerMenu, v4, 0);
  return 1;
}


System_String_o *SoundPlayerComponent__getPlaySoundName(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  struct SoundPlayerMenu_o *soundPlayerMenu; // x8

  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu )
    sub_1C372B4(this);
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
    sub_1C372B4(soundPlayerMenu);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerMenu, 0, 0);
}


void SoundPlayerComponent__initMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  SoundPlayerMenu_o *soundPlayerMenu; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C3E6CC & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    byte_4C3E6CC = 1;
  }
  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu
    || (SoundPlayerMenu__Init(soundPlayerMenu, method), (soundPlayerMenu = this->fields.soundPlayerMenu) == 0) )
  {
    sub_1C372B4(soundPlayerMenu);
  }
  SoundPlayerMenu__resetPlaySoundData(soundPlayerMenu, v4);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadMyRoomSoundAtlas(0, 1, 0);
}


void SoundPlayerComponent__onClose(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4C3E6CE & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3514/*"CLOSE_MENU"*/);
    byte_4C3E6CE = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3514/*"CLOSE_MENU"*/, 0);
}


void SoundPlayerComponent__onEndMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4C3E6CF & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3519/*"CLOSE_SOUND_PLAYER"*/);
    byte_4C3E6CF = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3519/*"CLOSE_SOUND_PLAYER"*/, 0);
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

  if ( (byte_4C3E6CA & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SoundPlayerComponent__openMenu_b__10_0__);
    sub_1C37058(&Method_SoundPlayerComponent_onEndMenu__);
    byte_4C3E6CA = 1;
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
  TitleInfoControl__changeTitleInfo_39845736((TitleInfoControl_o *)titleInfo, 1, 54, 0, 0);
  titleInfo = (UnityEngine_GameObject_o *)this->fields.soundPlayerMenu;
  if ( !titleInfo
    || (SoundPlayerMenu__analyzeNewList((SoundPlayerMenu_o *)titleInfo, v5),
        soundPlayerMenu = this->fields.soundPlayerMenu,
        v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(v7, (Il2CppObject *)this, Method_SoundPlayerComponent__openMenu_b__10_0__, 0),
        v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_SoundPlayerComponent_onEndMenu__, 0),
        !soundPlayerMenu) )
  {
LABEL_8:
    sub_1C372B4(titleInfo);
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
    sub_1C372B4(gameObject);
  }
  SoundPlayerMenu__Init((SoundPlayerMenu_o *)gameObject, v4);
}