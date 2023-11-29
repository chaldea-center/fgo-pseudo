void __fastcall SoundPlayerComponent___cctor(const MethodInfo *method)
{
  ;
}


void __fastcall SoundPlayerComponent___ctor(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SoundPlayerComponent__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  SoundPlayerComponent_c *v2; // x0

  if ( (byte_40F9D0A & 1) == 0 )
  {
    sub_B16FFC(&SoundPlayerComponent_TypeInfo, v1);
    byte_40F9D0A = 1;
  }
  v2 = SoundPlayerComponent_TypeInfo;
  if ( (BYTE3(SoundPlayerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SoundPlayerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerComponent_TypeInfo);
    v2 = SoundPlayerComponent_TypeInfo;
  }
  v2->static_fields->isContinueDevice = 1;
}


void __fastcall SoundPlayerComponent__DestroyMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  if ( (byte_40F9D10 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    byte_40F9D10 = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseMyRoomSoundAtlas(0LL);
}


void __fastcall SoundPlayerComponent__LoginProcess(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
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
  SoundPlayerComponent_c *v17; // x0
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v19; // x0
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x0
  WarQuestSelectionEntity_array *Entitys_WarQuestSelectionEntity; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Collections_Generic_List_int__o *v26; // x19
  System_String_o *HasFlag; // x0
  const MethodInfo *v28; // x1
  System_String_array **v29; // x2
  int max_length; // w8
  int i; // w25
  Il2CppClass **v32; // x8
  Il2CppClass *v33; // x21
  int32_t element_class; // w22
  WebViewManager_o *v35; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v36; // x0
  int size; // w21
  __int64 v38; // x0
  System_String_array *v39; // x20
  unsigned __int64 v40; // x23
  signed __int64 v41; // x24
  BattleServantConfConponent_o *v42; // x21
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x22
  System_String_o *v49; // x19
  SoundPlayerMenu_c *v50; // x8
  SoundPlayerComponent_c *v51; // x0
  int32_t v52; // [xsp+4h] [xbp-5Ch] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40F9D0B & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, v1);
    sub_B16FFC(&Method_DataManager_GetMasterData_BgmMaster___, v2);
    sub_B16FFC(&Method_DataManager_GetMasterData_BgmReleaseMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__, v5);
    sub_B16FFC(&Method_DataMasterBase_getEntitys_BgmEntity___, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v10);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B16FFC(&SoundPlayerComponent_TypeInfo, v13);
    sub_B16FFC(&SoundPlayerMenu_TypeInfo, v14);
    sub_B16FFC(&string___TypeInfo, v15);
    sub_B16FFC(&StringLiteral_698, v16);
    byte_40F9D0B = 1;
  }
  entity = 0LL;
  v52 = 0;
  v17 = SoundPlayerComponent_TypeInfo;
  if ( (BYTE3(SoundPlayerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SoundPlayerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerComponent_TypeInfo);
    v17 = SoundPlayerComponent_TypeInfo;
  }
  if ( v17->static_fields->isContinueDevice )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    DataManager__GetMasterData_WarQuestSelectionMaster_(
      (DataManager_o *)Instance,
      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BgmReleaseMaster___);
    v19 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v19 )
      goto LABEL_46;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v19,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_46;
    Entitys_WarQuestSelectionEntity = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                        MasterData_WarQuestSelectionMaster,
                                        (const MethodInfo_18C3B58 *)Method_DataMasterBase_getEntitys_BgmEntity___);
    v26 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v22,
                                                      v23,
                                                      v24,
                                                      v25);
    System_Collections_Generic_List_int____ctor(
      v26,
      (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !Entitys_WarQuestSelectionEntity )
      goto LABEL_46;
    max_length = Entitys_WarQuestSelectionEntity->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
        {
LABEL_47:
          sub_B17100(HasFlag, v28, v29);
          sub_B170A0();
        }
        v32 = &Entitys_WarQuestSelectionEntity->obj.klass + i;
        v33 = v32[4];
        if ( !v33 )
          goto LABEL_46;
        HasFlag = (System_String_o *)BgmEntity__HasFlag((BgmEntity_o *)v32[4], 1, 0LL);
        if ( ((unsigned __int8)HasFlag & 1) == 0 )
        {
          element_class = (int32_t)v33->_1.element_class;
          if ( !element_class )
            goto LABEL_24;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          if ( CondType__IsPurchaseShop(element_class, 1, 0LL) )
          {
LABEL_25:
            if ( !v26 )
              goto LABEL_46;
            System_Collections_Generic_List_int___Add(
              v26,
              (int32_t)v33->_1.name,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
            goto LABEL_27;
          }
          v35 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v35 )
            goto LABEL_46;
          v36 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)v35,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___);
          if ( !v36 )
            goto LABEL_46;
          HasFlag = (System_String_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                         v36,
                                         &entity,
                                         element_class,
                                         (const MethodInfo_266F3E4 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)HasFlag & 1) == 0 )
          {
LABEL_24:
            HasFlag = (System_String_o *)SoundPlayerListViewItem__isBgmLock((int32_t)v33->_1.name, v28);
            if ( ((unsigned __int8)HasFlag & 1) == 0 )
              goto LABEL_25;
          }
        }
LABEL_27:
        max_length = Entitys_WarQuestSelectionEntity->max_length;
      }
    }
    if ( !v26 )
LABEL_46:
      sub_B170D4();
    size = v26->fields._size;
    v38 = sub_B17014(string___TypeInfo, (unsigned int)size, v29);
    v39 = (System_String_array *)v38;
    if ( size >= 1 )
    {
      v40 = 0LL;
      v41 = size;
      v42 = (BattleServantConfConponent_o *)(v38 + 32);
      do
      {
        if ( v40 >= (unsigned int)v26->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v52 = v26->fields._items->m_Items[v40 + 1];
        HasFlag = System_Int32__ToString((int32_t)&v52, 0LL);
        if ( !v39 )
          goto LABEL_46;
        v48 = (System_Int32_array **)HasFlag;
        if ( HasFlag )
        {
          HasFlag = (System_String_o *)sub_B170BC(HasFlag, v39->obj.klass->_1.element_class);
          if ( !HasFlag )
          {
            sub_B170F4(0LL);
            sub_B170A0();
          }
        }
        if ( v40 >= v39->max_length )
          goto LABEL_47;
        v42->klass = (BattleServantConfConponent_c *)v48;
        sub_B16F98(v42, v48, v29, v43, v44, v45, v46, v47);
        ++v40;
        v42 = (BattleServantConfConponent_o *)((char *)v42 + 8);
      }
      while ( (__int64)v40 < v41 );
    }
    v49 = System_String__Join((System_String_o *)StringLiteral_698, v39, 0LL);
    v50 = SoundPlayerMenu_TypeInfo;
    if ( (BYTE3(SoundPlayerMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundPlayerMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundPlayerMenu_TypeInfo);
      v50 = SoundPlayerMenu_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetString(v50->static_fields->SOUND_PLAYER_NEW_KEY, v49, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
    v51 = SoundPlayerComponent_TypeInfo;
    if ( (BYTE3(SoundPlayerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundPlayerComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundPlayerComponent_TypeInfo);
      v51 = SoundPlayerComponent_TypeInfo;
    }
    v51->static_fields->isContinueDevice = 0;
  }
}


void __fastcall SoundPlayerComponent__SetEnableBlockTouch(
        SoundPlayerComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  struct SoundPlayerMenu_o *soundPlayerMenu; // x8
  UnityEngine_Collider_o *maskColl; // x0

  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu || (maskColl = (UnityEngine_Collider_o *)soundPlayerMenu->fields.maskColl) == 0LL )
    sub_B170D4();
  UnityEngine_Collider__set_enabled(maskColl, enable, 0LL);
}


void __fastcall SoundPlayerComponent___openMenu_b__10_0(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0
  MyRoomControl_o *myRoomCtrl; // x0

  if ( (byte_40F9D13 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6864, method);
    byte_40F9D13 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm
    || (PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6864, 0LL),
        (myRoomCtrl = this->fields.myRoomCtrl) == 0LL) )
  {
    sub_B170D4();
  }
  MyRoomControl__SetBackButtonIgnore(myRoomCtrl, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SoundPlayerComponent__checkOpen(
        BgmReleaseEntity_o *releaseEntity,
        int32_t kind,
        const MethodInfo *method)
{
  BgmReleaseEntity_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *targetIds; // x9
  __int64 v10; // x10
  unsigned __int64 v11; // x24
  int32_t v12; // w21
  unsigned __int64 v13; // x26
  unsigned __int64 max_length; // x9
  int64_t v15; // x22
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x23
  int64_t UserId; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  signed __int64 v21; // [xsp+8h] [xbp-58h]

  v4 = releaseEntity;
  if ( (byte_40F9D0C & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    releaseEntity = (BgmReleaseEntity_o *)sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40F9D0C = 1;
  }
  if ( !v4 )
LABEL_29:
    sub_B170D4();
  vals = v4->fields.vals;
  if ( !vals )
    return 0;
  targetIds = v4->fields.targetIds;
  if ( !targetIds )
    return 0;
  v10 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v10 < 1 )
    return 0;
  v21 = (int)v10;
  v11 = 0LL;
LABEL_8:
  if ( v11 >= targetIds->max_length )
  {
LABEL_32:
    sub_B17100(releaseEntity, *(_QWORD *)&kind, method);
    sub_B170A0();
  }
  v12 = targetIds->m_Items[v11 + 1];
  v13 = 0LL;
  while ( 1 )
  {
    max_length = vals->max_length;
    if ( (__int64)v13 >= (int)max_length )
    {
      if ( (__int64)++v11 >= v21 )
        return 0;
      targetIds = v4->fields.targetIds;
      if ( !targetIds )
        goto LABEL_29;
      goto LABEL_8;
    }
    if ( v13 >= max_length )
      goto LABEL_32;
    v15 = vals->m_Items[v13 + 1];
    if ( kind != 17 )
      break;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_29;
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                         MasterData_WarQuestSelectionMaster,
                         UserId,
                         v12,
                         0LL);
    if ( !EntityDefinitely )
      goto LABEL_29;
    releaseEntity = (BgmReleaseEntity_o *)UserServantCollectionEntity__IsPlayed(EntityDefinitely, v15, 0LL);
    if ( ((unsigned __int8)releaseEntity & 1) != 0 )
      return 1;
LABEL_25:
    vals = v4->fields.vals;
    ++v13;
    if ( !vals )
      goto LABEL_29;
  }
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  releaseEntity = (BgmReleaseEntity_o *)CondType__IsOpen(kind, v12, v15, 0, 0LL);
  if ( ((unsigned __int8)releaseEntity & 1) == 0 )
    goto LABEL_25;
  return 1;
}


bool __fastcall SoundPlayerComponent__closeMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  BaseMenu_o *soundPlayerMenu; // x20
  System_Action_o *v8; // x21

  if ( (byte_40F9D0E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SoundPlayerComponent_onClose__, v6);
    byte_40F9D0E = 1;
  }
  soundPlayerMenu = (BaseMenu_o *)this->fields.soundPlayerMenu;
  v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SoundPlayerComponent_onClose__, 0LL);
  if ( !soundPlayerMenu )
    sub_B170D4();
  BaseMenu__Close(soundPlayerMenu, v8, 0LL);
  return 1;
}


System_String_o *__fastcall SoundPlayerComponent__getPlaySoundName(
        SoundPlayerComponent_o *this,
        const MethodInfo *method)
{
  struct SoundPlayerMenu_o *soundPlayerMenu; // x8

  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu )
    sub_B170D4();
  return soundPlayerMenu->fields.playSoundName;
}


void __fastcall SoundPlayerComponent__hideMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  SoundPlayerMenu_o *soundPlayerMenu; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu
    || (SoundPlayerMenu__hideMenu(soundPlayerMenu, method),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall SoundPlayerComponent__initMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  SoundPlayerMenu_o *soundPlayerMenu; // x0
  const MethodInfo *v4; // x1
  SoundPlayerMenu_o *v5; // x0

  if ( (byte_40F9D0F & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    byte_40F9D0F = 1;
  }
  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu || (SoundPlayerMenu__Init(soundPlayerMenu, method), (v5 = this->fields.soundPlayerMenu) == 0LL) )
    sub_B170D4();
  SoundPlayerMenu__resetPlaySoundData(v5, v4);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadMyRoomSoundAtlas(0LL, 1, 0LL);
}


void __fastcall SoundPlayerComponent__onClose(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_40F9D11 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3094, method);
    byte_40F9D11 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3094, 0LL);
}


void __fastcall SoundPlayerComponent__onEndMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_40F9D12 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3099, method);
    byte_40F9D12 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3099, 0LL);
}


bool __fastcall SoundPlayerComponent__openMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v6; // x0
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v8; // x1
  SoundPlayerMenu_o *soundPlayerMenu; // x0
  SoundPlayerMenu_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Action_o *v20; // x22
  const MethodInfo *v21; // x3

  if ( (byte_40F9D0D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SoundPlayerComponent__openMenu_b__10_0__, v3);
    sub_B16FFC(&Method_SoundPlayerComponent_onEndMenu__, v4);
    byte_40F9D0D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__ResetPosition(gameObject, 0LL);
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v6 )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(v6, 1, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_8;
  TitleInfoControl__changeTitleInfo_19612684(titleInfo, 1, 51, 0, 0LL);
  soundPlayerMenu = this->fields.soundPlayerMenu;
  if ( !soundPlayerMenu
    || (SoundPlayerMenu__analyzeNewList(soundPlayerMenu, v8),
        v10 = this->fields.soundPlayerMenu,
        v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14),
        System_Action___ctor(v15, (Il2CppObject *)this, Method_SoundPlayerComponent__openMenu_b__10_0__, 0LL),
        v20 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19),
        System_Action___ctor(v20, (Il2CppObject *)this, Method_SoundPlayerComponent_onEndMenu__, 0LL),
        !v10) )
  {
LABEL_8:
    sub_B170D4();
  }
  SoundPlayerMenu__open(v10, v15, v20, v21);
  return 1;
}


void __fastcall SoundPlayerComponent__showMenu(SoundPlayerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  SoundPlayerMenu_o *soundPlayerMenu; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (soundPlayerMenu = this->fields.soundPlayerMenu) == 0LL) )
  {
    sub_B170D4();
  }
  SoundPlayerMenu__Init(soundPlayerMenu, v4);
}