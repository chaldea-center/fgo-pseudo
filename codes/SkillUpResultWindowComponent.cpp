void __fastcall SkillUpResultWindowComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4A5EA97 & 1) == 0 )
  {
    sub_1B885B0(&SkillUpResultWindowComponent_TypeInfo);
    byte_4A5EA97 = 1;
  }
  *SkillUpResultWindowComponent_TypeInfo->static_fields = (struct SkillUpResultWindowComponent_StaticFields)xmmword_BB53C0;
}


void __fastcall SkillUpResultWindowComponent___ctor(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A5EA96 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5EA96 = 1;
  }
  this->fields.svtTransformCount = 1;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SkillUpResultWindowComponent__Close(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x0
  System_Action_o *v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4A5EA91 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SkillUpResultWindowComponent_EndClose__);
    byte_4A5EA91 = 1;
  }
  v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndClose__, 0LL);
  SkillUpResultWindowComponent__Close_45019760(this, v4, v5);
}


void __fastcall SkillUpResultWindowComponent__Close_45019760(
        SkillUpResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20

  if ( (byte_4A5EA92 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SkillUpResultWindowComponent_EndClose__);
    byte_4A5EA92 = 1;
  }
  v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
}


void __fastcall SkillUpResultWindowComponent__EndClose(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  SkillUpResultWindowComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        SkillUpResultWindowComponent__SetChildrenActive(this, 0, v5),
        (gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.friendshipInfo, 0LL)) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
  {
    sub_1B8880C(gameObject, v4);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall SkillUpResultWindowComponent__EndOpen(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct System_Action_o *openCallBack; // x19
  ServantStatusBattleListViewItem_o *p_openCallBack; // x0

  openCallBack = this->fields.openCallBack;
  if ( openCallBack )
  {
    p_openCallBack = (ServantStatusBattleListViewItem_o *)&this->fields.openCallBack;
    p_openCallBack->klass = 0LL;
    sub_1B88554(p_openCallBack, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))openCallBack->fields.m_target)(
      openCallBack->fields.original_method_info,
      *(_QWORD *)&openCallBack->fields.extra_arg);
  }
}


ServantSkillEntity_o *__fastcall SkillUpResultWindowComponent__GetServantSkillEntity(
        SkillUpResultWindowComponent_o *this,
        int32_t svtId,
        int32_t num,
        int32_t skillId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4A5EA94 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EA94 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantSkillMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v9);
  }
  return ServantSkillMaster__getEntityFromSkillId((ServantSkillMaster_o *)Instance, svtId, num, skillId, 0LL);
}


SkillEntity_o *__fastcall SkillUpResultWindowComponent__GetSkillEntity(
        SkillUpResultWindowComponent_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5EA93 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EA93 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v5);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    skillId,
    (const MethodInfo_311D988 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
  return (SkillEntity_o *)entity;
}


void __fastcall SkillUpResultWindowComponent__Init(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SkillUpResultWindowComponent__OpenFriendshipUpResultInfo(
        SkillUpResultWindowComponent_o *this,
        UserServantEntity_o *usrSvtData,
        int32_t oldFriendShipRank,
        System_Action_o *callback,
        const MethodInfo *method)
{
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  __int64 gameObject; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  int32_t v14; // w2
  int32_t v15; // w3
  System_Text_StringBuilder_o *v16; // x21
  int32_t SvtId; // w22
  Il2CppObject *MasterData_object; // x20
  UserServantCollectionEntity_o *EntityDefinitely; // x20
  System_Collections_Generic_List_object__o *v20; // x0
  Il2CppObject *current; // x23
  System_String_o *v22; // x0
  __int64 v23; // x1
  System_String_o *v24; // x24
  Il2CppObject *QuestName; // x1
  System_String_o *v26; // x0
  int32_t v27; // w23
  UILabel_o *friendshipLabel; // x22
  UnityEngine_GameObject_o *v29; // x21
  UILabel_o *friendshipCurrentLvLabel; // x21
  UILabel_o *friendshipResultLvLabel; // x21
  UIWidget_o *v32; // x20
  SkillUpResultWindowComponent_c *v33; // x8
  struct UILabel_o *v34; // x8
  System_Action_o *v35; // x20
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+0h] [xbp-90h] BYREF
  int32_t FriendShipRank; // [xsp+1Ch] [xbp-74h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-70h] BYREF
  int32_t oldFriendShipRanka; // [xsp+3Ch] [xbp-54h] BYREF

  oldFriendShipRanka = oldFriendShipRank;
  if ( (byte_4A5EA8F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1B885B0(&Method_SkillUpResultWindowComponent_EndOpen__);
    sub_1B885B0(&Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__);
    sub_1B885B0(&SkillUpResultWindowComponent_TypeInfo);
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&StringLiteral_11086/*"RESULT_BOUNDS_OPENQUEST"*/);
    sub_1B885B0(&StringLiteral_11088/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/);
    sub_1B885B0(&StringLiteral_11083/*"RESULT_BOUNDS_GETVOICE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EA8F = 1;
  }
  memset(&v38, 0, sizeof(v38));
  FriendShipRank = 0;
  if ( !this->fields.state )
  {
    v9 = Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1B885C8(Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__);
    v10 = (System_Reflection_MethodBase_o *)sub_1B88594(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 6, 0LL);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      SkillUpResultWindowComponent__SetChildrenActive(this, 0, v13);
      gameObject = (__int64)GameObjectExtensions__GetParent(this->fields.friendshipInfo, 0LL);
      if ( gameObject )
      {
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          gameObject = (__int64)this->fields.friendshipInfo;
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
            this->fields.openCallBack = callback;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallBack, (int32_t)callback, v14, v15);
            gameObject = (__int64)this->fields.friendshipLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              v16 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
              System_Text_StringBuilder___ctor(v16, 0LL);
              if ( usrSvtData )
              {
                SvtId = UserServantEntity__getSvtId(usrSvtData, 0LL);
                gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( gameObject )
                {
                  MasterData_object = DataManager__GetMasterData_object_(
                                        (DataManager_o *)gameObject,
                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  gameObject = NetworkManager__get_UserId(0LL);
                  if ( MasterData_object )
                  {
                    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                                         (UserServantCollectionMaster_o *)MasterData_object,
                                         gameObject,
                                         SvtId,
                                         0LL);
                    gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                    if ( gameObject )
                    {
                      v20 = (System_Collections_Generic_List_object__o *)clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
                                                                           (clsQuestCheck_o *)gameObject,
                                                                           SvtId,
                                                                           oldFriendShipRank,
                                                                           8,
                                                                           0LL);
                      if ( v20 )
                      {
                        System_Collections_Generic_List_object___GetEnumerator(
                          (System_Collections_Generic_List_Enumerator_T__o *)&v36,
                          v20,
                          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
                        v38 = v36;
                        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                                  &v38,
                                  (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
                        {
                          current = v38.fields._current;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v22 = LocalizationManager__Get((System_String_o *)StringLiteral_11086/*"RESULT_BOUNDS_OPENQUEST"*/, 0LL);
                          if ( !current )
                            sub_1B8880C(v22, v23);
                          v24 = v22;
                          QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0LL);
                          v26 = System_String__Format(v24, QuestName, 0LL);
                          if ( !v16 )
                            sub_1B8880C(v26, v26);
                          System_Text_StringBuilder__AppendLine_60870152(v16, v26, 0LL);
                        }
                        System_Collections_Generic_List_Enumerator_object___Dispose(
                          &v38,
                          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
                      }
                      v27 = oldFriendShipRanka;
                      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
                      gameObject = ServantCommentManager__IsOpenByServantFriendShip(SvtId, v27, 0LL);
                      if ( (gameObject & 1) != 0 )
                      {
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11088/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/, 0LL);
                        if ( !v16 )
                          goto LABEL_56;
                        gameObject = (__int64)System_Text_StringBuilder__AppendLine_60870152(
                                                v16,
                                                (System_String_o *)gameObject,
                                                0LL);
                      }
                      if ( !EntityDefinitely )
                        goto LABEL_56;
                      gameObject = ServantVoiceMaster__isOpenByServantFriendShip(
                                     SvtId,
                                     EntityDefinitely->fields.maxLimitCount,
                                     oldFriendShipRanka,
                                     0LL);
                      if ( (gameObject & 1) != 0 )
                      {
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11083/*"RESULT_BOUNDS_GETVOICE"*/, 0LL);
                        if ( !v16 )
                          goto LABEL_56;
                        System_Text_StringBuilder__AppendLine_60870152(v16, (System_String_o *)gameObject, 0LL);
                      }
                      else if ( !v16 )
                      {
                        goto LABEL_56;
                      }
                      friendshipLabel = this->fields.friendshipLabel;
                      gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v16->klass->vtable._3_ToString.method)(
                                     v16,
                                     v16->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                      if ( friendshipLabel )
                      {
                        UILabel__set_text(friendshipLabel, (System_String_o *)gameObject, 0LL);
                        gameObject = (__int64)this->fields.friendshipLvInfo;
                        if ( gameObject )
                        {
                          v29 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0LL);
                          gameObject = UserServantCollectionEntity__getFriendShipRank(EntityDefinitely, 0LL);
                          if ( v29 )
                          {
                            UnityEngine_GameObject__SetActive(v29, (int)gameObject > oldFriendShipRanka, 0LL);
                            friendshipCurrentLvLabel = this->fields.friendshipCurrentLvLabel;
                            gameObject = (__int64)System_Int32__ToString((int32_t)&oldFriendShipRanka, 0LL);
                            if ( friendshipCurrentLvLabel )
                            {
                              UILabel__set_text(friendshipCurrentLvLabel, (System_String_o *)gameObject, 0LL);
                              friendshipResultLvLabel = this->fields.friendshipResultLvLabel;
                              FriendShipRank = UserServantCollectionEntity__getFriendShipRank(EntityDefinitely, 0LL);
                              gameObject = (__int64)System_Int32__ToString((int32_t)&FriendShipRank, 0LL);
                              if ( friendshipResultLvLabel )
                              {
                                UILabel__set_text(friendshipResultLvLabel, (System_String_o *)gameObject, 0LL);
                                gameObject = (__int64)this->fields.friendshipResultLvLabel;
                                if ( gameObject )
                                {
                                  gameObject = (__int64)UnityEngine_Component__GetComponent_object_(
                                                          (UnityEngine_Component_o *)gameObject,
                                                          (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
                                  v32 = (UIWidget_o *)gameObject;
                                  v33 = SkillUpResultWindowComponent_TypeInfo;
                                  if ( !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
                                    v33 = SkillUpResultWindowComponent_TypeInfo;
                                  }
                                  if ( v32 )
                                  {
                                    UIWidget__set_color(v32, v33->static_fields->COLOR_VAL, 0LL);
                                    v34 = this->fields.friendshipLabel;
                                    if ( v34 )
                                    {
                                      if ( !System_String__IsNullOrEmpty(v34->fields.mText, 0LL) )
                                      {
LABEL_54:
                                        v35 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                                        System_Action___ctor(
                                          v35,
                                          (Il2CppObject *)this,
                                          Method_SkillUpResultWindowComponent_EndOpen__,
                                          0LL);
                                        BaseDialog__Open((BaseDialog_o *)this, v35, 0, 0LL);
                                        return;
                                      }
                                      gameObject = (__int64)GameObjectExtensions__GetParent(
                                                              this->fields.friendshipInfo,
                                                              0LL);
                                      if ( gameObject )
                                      {
                                        gameObject = (__int64)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)gameObject,
                                                                0LL);
                                        if ( gameObject )
                                        {
                                          UnityEngine_GameObject__SetActive(
                                            (UnityEngine_GameObject_o *)gameObject,
                                            0,
                                            0LL);
                                          goto LABEL_54;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_56:
    sub_1B8880C(gameObject, v12);
  }
}


void __fastcall SkillUpResultWindowComponent__OpenNextNpUpResultInfo(
        SkillUpResultWindowComponent_o *this,
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *addManager,
        int32_t index,
        System_String_o *titleText,
        bool isRankUp,
        System_Action_o *callback,
        const MethodInfo *method)
{
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x6

  if ( (byte_4A5EA8C & 1) == 0 )
  {
    sub_1B885B0(&Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__);
    byte_4A5EA8C = 1;
  }
  v13 = Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1B885C8(Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__);
  v14 = (System_Reflection_MethodBase_o *)sub_1B88594(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 6, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v17);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.npInfo, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.npInfo;
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.npInfoAddRoot;
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.npInfoNormalRoot;
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = this->fields.npInfoHeroineNpChangeRoot;
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.npInfoNpChangeRoot) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.npInfoNpChangeRoot) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.npInfoAddResultComponent) == 0LL) )
  {
LABEL_16:
    sub_1B8880C(gameObject, v16);
  }
  NpInfoAddResultComponent__SetDisplay(
    (NpInfoAddResultComponent_o *)gameObject,
    addManager,
    index,
    titleText,
    isRankUp,
    this->fields.svtTransformCount,
    v18);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0LL);
}


void __fastcall SkillUpResultWindowComponent__OpenNpUpResultInfo(
        SkillUpResultWindowComponent_o *this,
        int32_t oldTargetId,
        int32_t oldTargetLv,
        int32_t nowTargetId,
        int32_t nowTargetLv,
        System_Action_o *callback,
        const MethodInfo *method)
{
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2

  if ( (byte_4A5EA8B & 1) == 0 )
  {
    sub_1B885B0(&Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__);
    byte_4A5EA8B = 1;
  }
  v13 = Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1B885C8(Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__);
  v14 = (System_Reflection_MethodBase_o *)sub_1B88594(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 6, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v17);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.npInfo, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.npInfo;
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.npInfoNormalRoot;
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = this->fields.npInfoHeroineNpChangeRoot;
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.npInfoNpChangeRoot;
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.npInfoAddRoot) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoOld) == 0LL)
    || (HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, oldTargetId, oldTargetLv, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoNow) == 0LL) )
  {
LABEL_16:
    sub_1B8880C(gameObject, v16);
  }
  HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, nowTargetId, nowTargetLv, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0LL);
}


void __fastcall SkillUpResultWindowComponent__OpenNpUpResultInfo_45014852(
        SkillUpResultWindowComponent_o *this,
        UserServantEntity_o *usrSvtData,
        int32_t targetId,
        int32_t targetLv,
        System_Action_o *callback,
        int32_t targetIdOld,
        int32_t targetLvOld,
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *addManager,
        int32_t kind,
        const MethodInfo *method)
{
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  int32_t v23; // w2
  int32_t v24; // w3
  _BOOL4 v25; // w26
  _BOOL4 v26; // w27
  _BOOL4 IsHeroine; // w28
  _BOOL4 v28; // w20
  int v29; // w27
  int v30; // w28
  const MethodInfo *v31; // x7
  const MethodInfo *v32; // x6
  struct ServantTreasureDeviceAddEntity_o *tdAddEntity_k__BackingField; // x8
  struct System_String_array *titles; // x8
  System_String_o *titleText; // x3
  System_Action_o *v36; // x20
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v37; // [xsp+0h] [xbp-70h]
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5EA8D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1B885B0(&Method_SkillUpResultWindowComponent_EndOpen__);
    sub_1B885B0(&Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___76194056);
    byte_4A5EA8D = 1;
  }
  transformInfo = 0LL;
  if ( !this->fields.state )
  {
    v18 = Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___76194056;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___76194056 + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1B885C8(Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___76194056);
    v19 = (System_Reflection_MethodBase_o *)sub_1B88594(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 6, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      SkillUpResultWindowComponent__SetChildrenActive(this, 0, v22);
      gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.npInfo, 0LL);
      if ( gameObject )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          gameObject = this->fields.npInfo;
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
            this->fields.openCallBack = callback;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallBack, (int32_t)callback, v23, v24);
            if ( usrSvtData )
            {
              gameObject = (UnityEngine_GameObject_o *)UserServantEntity__GetTransformCount(usrSvtData, 1, 0LL);
              this->fields.svtTransformCount = (int)gameObject;
              if ( addManager )
              {
                v37 = addManager;
                v25 = addManager->fields._tdAddEntity_k__BackingField != 0LL;
                v26 = (int)gameObject > 1;
                IsHeroine = UserServantEntity__IsHeroine(usrSvtData, 0LL);
                v28 = targetIdOld != targetId;
                if ( targetIdOld == targetId && UserServantEntity__IsHeroine(usrSvtData, 0LL) )
                  targetIdOld = 0;
                gameObject = this->fields.npInfoAddRoot;
                if ( gameObject )
                {
                  v29 = v26 || v25;
                  UnityEngine_GameObject__SetActive(gameObject, v29, 0LL);
                  gameObject = this->fields.npInfoNormalRoot;
                  if ( gameObject )
                  {
                    v30 = targetLvOld != targetLv && IsHeroine && v28;
                    UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)(v30 | (kind == 18) | v29) != 1, 0LL);
                    gameObject = this->fields.npInfoHeroineNpChangeRoot;
                    if ( gameObject )
                    {
                      UnityEngine_GameObject__SetActive(gameObject, v30, 0LL);
                      gameObject = this->fields.npInfoNpChangeRoot;
                      if ( gameObject )
                      {
                        UnityEngine_GameObject__SetActive(gameObject, kind == 18, 0LL);
                        if ( v30 )
                        {
                          gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoOld;
                          if ( gameObject )
                          {
                            HeroineNpChangeInfoComponent__Setup(
                              (HeroineNpChangeInfoComponent_o *)gameObject,
                              targetIdOld,
                              targetLvOld,
                              0LL);
                            gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoNow;
                            if ( gameObject )
                            {
                              HeroineNpChangeInfoComponent__Setup(
                                (HeroineNpChangeInfoComponent_o *)gameObject,
                                targetId,
                                targetLv,
                                0LL);
LABEL_40:
                              v36 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                              System_Action___ctor(
                                v36,
                                (Il2CppObject *)this,
                                Method_SkillUpResultWindowComponent_EndOpen__,
                                0LL);
                              BaseDialog__Open((BaseDialog_o *)this, v36, 0, 0LL);
                              return;
                            }
                          }
                        }
                        else if ( kind == 18 )
                        {
                          gameObject = (UnityEngine_GameObject_o *)this->fields.npChangeInfoOld;
                          if ( gameObject )
                          {
                            HeroineNpChangeInfoComponent__SetupForNpChange(
                              (HeroineNpChangeInfoComponent_o *)gameObject,
                              targetIdOld,
                              targetLvOld,
                              0LL);
                            gameObject = (UnityEngine_GameObject_o *)this->fields.npChangeInfoNow;
                            if ( gameObject )
                            {
                              HeroineNpChangeInfoComponent__SetupForNpChange(
                                (HeroineNpChangeInfoComponent_o *)gameObject,
                                targetId,
                                targetLv,
                                0LL);
                              goto LABEL_40;
                            }
                          }
                        }
                        else
                        {
                          if ( !v29 )
                          {
                            SkillUpResultWindowComponent__SetupNpUpResultInfoNormal(
                              this,
                              usrSvtData,
                              targetId,
                              targetLv,
                              targetIdOld,
                              targetLvOld,
                              kind,
                              v31);
                            goto LABEL_40;
                          }
                          gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(
                                                                     this->fields.npInfo,
                                                                     0LL);
                          if ( gameObject )
                          {
                            gameObject = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                            if ( gameObject )
                            {
                              gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                         gameObject,
                                                                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                              if ( gameObject )
                              {
                                UIWidget__set_height((UIWidget_o *)gameObject, 300, 0LL);
                                gameObject = (UnityEngine_GameObject_o *)UserServantEntity__GetTransformedServantInfo(
                                                                           usrSvtData,
                                                                           &transformInfo,
                                                                           0,
                                                                           0LL);
                                tdAddEntity_k__BackingField = v37->fields._tdAddEntity_k__BackingField;
                                if ( !tdAddEntity_k__BackingField )
                                  goto LABEL_35;
                                titles = tdAddEntity_k__BackingField->fields.titles;
                                if ( !titles )
                                  goto LABEL_35;
                                if ( !titles->max_length )
                                  sub_1B88814(gameObject, v21);
                                titleText = titles->m_Items[0];
                                if ( !titleText )
                                {
LABEL_35:
                                  if ( !transformInfo )
                                    goto LABEL_42;
                                  titleText = transformInfo->fields.titleText;
                                }
                                gameObject = (UnityEngine_GameObject_o *)this->fields.npInfoAddResultComponent;
                                if ( gameObject )
                                {
                                  NpInfoAddResultComponent__SetDisplay(
                                    (NpInfoAddResultComponent_o *)gameObject,
                                    v37,
                                    0,
                                    titleText,
                                    kind == 8,
                                    this->fields.svtTransformCount,
                                    v32);
                                  goto LABEL_40;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_42:
    sub_1B8880C(gameObject, v21);
  }
}


void __fastcall SkillUpResultWindowComponent__OpenPowerUpResultInfo(
        SkillUpResultWindowComponent_o *this,
        UserServantEntity_o *usrSvtData,
        System_Action_o *callback,
        const MethodInfo *method)
{
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  int32_t v12; // w2
  int32_t v13; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x21
  __int64 v15; // x20
  __int64 v16; // x22
  Il2CppObject *Entity; // x0
  UILabel_o *powerupLabel; // x20
  Il2CppObject *v19; // x21
  System_Action_o *v20; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4A5EA90 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SkillUpResultWindowComponent_EndOpen__);
    sub_1B885B0(&Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__);
    sub_1B885B0(&StringLiteral_11087/*"RESULT_BOUNDS_POWERUP"*/);
    byte_4A5EA90 = 1;
  }
  if ( !this->fields.state )
  {
    v7 = Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B885C8(Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B88594(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 6, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    SkillUpResultWindowComponent__SetChildrenActive(this, 0, v11);
    gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.friendshipInfo, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = this->fields.powerupInfo;
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.openCallBack = callback;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallBack, (int32_t)callback, v12, v13);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_20;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !usrSvtData )
      goto LABEL_20;
    v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
    v16 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v21.fields.currentCryptoKey = v16;
    *(_QWORD *)&v21.fields.fakeValue = v15;
    gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                               v21,
                                               0LL);
    if ( !v14 )
      goto LABEL_20;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v14,
               (int32_t)gameObject,
               (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    powerupLabel = this->fields.powerupLabel;
    v19 = Entity;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11087/*"RESULT_BOUNDS_POWERUP"*/, 0LL);
    if ( !v19
      || (gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                     (System_String_o *)gameObject,
                                                     (Il2CppObject *)v19[4].monitor,
                                                     0LL),
          !powerupLabel) )
    {
LABEL_20:
      sub_1B8880C(gameObject, v10);
    }
    UILabel__set_text(powerupLabel, (System_String_o *)gameObject, 0LL);
    v20 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v20, 0, 0LL);
  }
}


void __fastcall SkillUpResultWindowComponent__OpenSkillChangeMessage(
        SkillUpResultWindowComponent_o *this,
        int32_t svtId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  System_String_o *BattleName; // x0
  UILabel_o *costumeChangeLabel; // x21
  Il2CppObject *v14; // x22
  System_String_o *v15; // x0

  if ( (byte_4A5EA89 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__);
    sub_1B885B0(&StringLiteral_3892/*"COSTUME_CHANGE_DESCRIPTION"*/);
    byte_4A5EA89 = 1;
  }
  v7 = Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B885C8(Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B88594(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 6, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v11);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.costumeChangeInfo, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.costumeChangeInfo;
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)gameObject,
                                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                             svtId,
                                             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !gameObject )
    goto LABEL_16;
  BattleName = ServantEntity__getBattleName((ServantEntity_o *)gameObject, 0, -1, 0LL);
  costumeChangeLabel = this->fields.costumeChangeLabel;
  v14 = (Il2CppObject *)BattleName;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3892/*"COSTUME_CHANGE_DESCRIPTION"*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v15, v14, 0LL);
  if ( !costumeChangeLabel )
LABEL_16:
    sub_1B8880C(gameObject, v10);
  UILabel__set_text(costumeChangeLabel, (System_String_o *)gameObject, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0LL);
}


void __fastcall SkillUpResultWindowComponent__OpenSkillChangeResultInfo(
        SkillUpResultWindowComponent_o *this,
        int32_t oldSkillId,
        int32_t oldSkillLv,
        int32_t nowSkillId,
        int32_t nowSkillLv,
        System_String_o *costumeName,
        System_Action_o *callback,
        const MethodInfo *method)
{
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  UILabel_o *skillChangeInfoTitle; // x26
  System_String_o *v21; // x0
  const MethodInfo *v22; // x5

  if ( (byte_4A5EA8A & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__);
    sub_1B885B0(&StringLiteral_3893/*"COSTUME_CHANGE_SKILL_TITLE"*/);
    byte_4A5EA8A = 1;
  }
  v15 = Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1B885C8(Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__);
  v16 = (System_Reflection_MethodBase_o *)sub_1B88594(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 6, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v19);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.skillChangeInfo, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.skillChangeInfo;
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  skillChangeInfoTitle = this->fields.skillChangeInfoTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3893/*"COSTUME_CHANGE_SKILL_TITLE"*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v21, (Il2CppObject *)costumeName, 0LL);
  if ( !skillChangeInfoTitle )
LABEL_13:
    sub_1B8880C(gameObject, v18);
  UILabel__set_text(skillChangeInfoTitle, (System_String_o *)gameObject, 0LL);
  SkillUpResultWindowComponent__SetSkillInfo(this, oldSkillId, oldSkillLv, nowSkillId, nowSkillLv, v22);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0LL);
}


void __fastcall SkillUpResultWindowComponent__OpenSkillUpResultInfo(
        SkillUpResultWindowComponent_o *this,
        int32_t targetId,
        int32_t targetLv,
        System_Action_o *callback,
        int32_t targetIdOld,
        int32_t targetLvOld,
        int32_t baseSvtId,
        System_Int32_array *skillList,
        bool isOpen,
        bool isRelease,
        bool isDispLv,
        System_String_o *dispBattleName,
        const MethodInfo *method)
{
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  int32_t v26; // w2
  int32_t v27; // w3
  char v28; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v29; // x21
  bool v30; // w22
  SkillEntity_o *v31; // x28
  il2cpp_array_size_t max_length; // w8
  int32_t v33; // w25
  int32_t v34; // w9
  ServantSkillEntity_o *v35; // x26
  int32_t v36; // w29
  UILabel_o *skillBefChargeTimeLb; // x21
  SkillEntity_o *v38; // x0
  int32_t v39; // w1
  UILabel_o *skillAftChargeTimeLb; // x22
  UnityEngine_GameObject_o *AfterChargeTimeInfo; // x22
  UILabel_o *skillAftTitleLb; // x22
  System_String_o *v43; // x27
  System_String_o *v44; // x20
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  Il2CppObject *v48; // x0
  System_String_o *v49; // x0
  UnityEngine_Object_o *servantSkillStrengthStatusAfter; // x22
  System_String_o *PATH; // x20
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  int32_t v56; // w20
  ServantSkillStrengthStatus_o *v57; // x22
  UILabel_o *v58; // x27
  int32_t m_CachedPtr; // w22
  int32_t v60; // w1
  UnityEngine_GameObject_o *beforeChargeTimeInfo; // x21
  bool v62; // w28
  UILabel_o *skillBefTitleLb; // x21
  System_String_o *v64; // x22
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  System_String_o *v68; // x20
  int32_t v69; // w8
  Il2CppObject *v70; // x0
  System_String_o *v71; // x0
  int32_t StrengthStatus; // w0
  int32_t v73; // w21
  int32_t skillNum; // w20
  UnityEngine_Object_o *servantSkillStrengthStatusBefore; // x23
  struct ServantSkillStrengthStatus_o **p_servantSkillStrengthStatusBefore; // x22
  System_String_o *v77; // x23
  UnityEngine_Transform_o *v78; // x0
  Il2CppObject *v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  System_Action_o *v82; // x20
  int32_t v83; // [xsp+4h] [xbp-9Ch]
  ServantSkillMaster_o *v84; // [xsp+10h] [xbp-90h]
  int32_t v85; // [xsp+1Ch] [xbp-84h]
  int32_t v86; // [xsp+24h] [xbp-7Ch]
  int32_t v87; // [xsp+28h] [xbp-78h] BYREF
  int32_t EffectChargeTurn; // [xsp+2Ch] [xbp-74h] BYREF
  System_String_o *detail; // [xsp+30h] [xbp-70h] BYREF
  System_String_o *name; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector2Int_o v91; // 0:x6.8
  UnityEngine_Vector2Int_o v92; // 0:x6.8

  if ( (byte_4A5EA88 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantSkillStrengthStatus_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SkillUpResultWindowComponent_EndOpen__);
    sub_1B885B0(&Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__);
    sub_1B885B0(&StringLiteral_2109/*"APPEND_SKILL_RESULT_AFTER_LV"*/);
    sub_1B885B0(&StringLiteral_12144/*"SKILL_COMBINE_EFFFECT_UNRELEASE"*/);
    sub_1B885B0(&StringLiteral_2110/*"APPEND_SKILL_RESULT_LV"*/);
    byte_4A5EA88 = 1;
  }
  detail = 0LL;
  name = 0LL;
  EffectChargeTurn = 0;
  if ( !this->fields.state )
  {
    v21 = Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__ + 83) & 2) != 0 )
      v21 = (_QWORD *)sub_1B885C8(Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__);
    v22 = (System_Reflection_MethodBase_o *)sub_1B88594(v21, v21[4]);
    OverwriteAssetSoundName__PlaySystemSe(v22, 6, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      SkillUpResultWindowComponent__SetChildrenActive(this, 0, v25);
      gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.skillInfo, 0LL);
      if ( gameObject )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          gameObject = this->fields.skillInfo;
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
            this->fields.openCallBack = callback;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallBack, (int32_t)callback, v26, v27);
            gameObject = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(dispBattleName, 0LL);
            if ( this->fields.titleLabel )
            {
              v28 = (char)gameObject;
              gameObject = UnityEngine_Component__get_gameObject(
                             (UnityEngine_Component_o *)this->fields.titleLabel,
                             0LL);
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive(gameObject, (v28 ^ 1) & 1, 0LL);
                gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel;
                if ( gameObject )
                {
                  UILabel__set_text((UILabel_o *)gameObject, dispBattleName, 0LL);
                  if ( (v28 & 1) == 0 && !this->fields.changedLayout )
                  {
                    GameObjectExtensions__AddLocalPositionY(this->fields.skillInfo, this->fields.skillInfoOffset, 0LL);
                    this->fields.changedLayout = 1;
                  }
                  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( gameObject )
                  {
                    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)gameObject,
                                                               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
                    if ( gameObject )
                    {
                      v86 = targetLvOld;
                      v29 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
                      gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                                 targetId,
                                                                 (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
                      if ( skillList )
                      {
                        v30 = isOpen;
                        v31 = (SkillEntity_o *)gameObject;
                        max_length = skillList->max_length;
                        v33 = 0;
                        while ( v33 < (int)max_length )
                        {
                          if ( v33 >= max_length )
                            sub_1B88814(gameObject, v24);
                          v34 = skillList->m_Items[++v33];
                          if ( v34 == targetId )
                            goto LABEL_25;
                        }
                        v33 = 0;
LABEL_25:
                        gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( gameObject )
                        {
                          gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                                     (DataManager_o *)gameObject,
                                                                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
                          if ( gameObject )
                          {
                            v84 = (ServantSkillMaster_o *)gameObject;
                            v85 = baseSvtId;
                            gameObject = (UnityEngine_GameObject_o *)ServantSkillMaster__getEntityFromSkillId(
                                                                       (ServantSkillMaster_o *)gameObject,
                                                                       baseSvtId,
                                                                       v33,
                                                                       targetId,
                                                                       0LL);
                            if ( v31 )
                            {
                              v35 = (ServantSkillEntity_o *)gameObject;
                              SkillEntity__getSkillMessageInfo(v31, &name, &detail, targetLv, 0LL);
                              gameObject = this->fields.skillAfter;
                              v36 = targetIdOld >= 1 ? v86 : targetLv - 1;
                              if ( gameObject )
                              {
                                if ( isOpen )
                                {
                                  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
                                  gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconBef;
                                  if ( !gameObject )
                                    goto LABEL_96;
                                  SkillIconComponent__Set_38235592(
                                    (SkillIconComponent_o *)gameObject,
                                    targetId,
                                    targetLv,
                                    0LL);
                                  skillBefChargeTimeLb = this->fields.skillBefChargeTimeLb;
                                  v38 = v31;
                                  v39 = targetLv;
                                }
                                else
                                {
                                  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                                  gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconAft;
                                  if ( !gameObject )
                                    goto LABEL_96;
                                  SkillIconComponent__Set_38235592(
                                    (SkillIconComponent_o *)gameObject,
                                    targetId,
                                    targetLv,
                                    0LL);
                                  skillAftChargeTimeLb = this->fields.skillAftChargeTimeLb;
                                  EffectChargeTurn = SkillEntity__getEffectChargeTurn(v31, targetLv, 0LL);
                                  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString(
                                                                             (int32_t)&EffectChargeTurn,
                                                                             0LL);
                                  if ( !skillAftChargeTimeLb )
                                    goto LABEL_96;
                                  UILabel__set_text(skillAftChargeTimeLb, (System_String_o *)gameObject, 0LL);
                                  AfterChargeTimeInfo = this->fields.AfterChargeTimeInfo;
                                  gameObject = (UnityEngine_GameObject_o *)SkillEntity__getEffectChargeTurn(
                                                                             v31,
                                                                             targetLv,
                                                                             0LL);
                                  if ( !AfterChargeTimeInfo )
                                    goto LABEL_96;
                                  UnityEngine_GameObject__SetActive(AfterChargeTimeInfo, (int)gameObject > 0, 0LL);
                                  gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftTitleLb;
                                  if ( !gameObject )
                                    goto LABEL_96;
                                  UILabel__set_text((UILabel_o *)gameObject, name, 0LL);
                                  if ( isDispLv )
                                  {
                                    v83 = targetIdOld;
                                    skillAftTitleLb = this->fields.skillAftTitleLb;
                                    v43 = name;
                                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_2109/*"APPEND_SKILL_RESULT_AFTER_LV"*/, 0LL);
                                    v87 = targetLv;
                                    v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v87, v45, v46, v47);
                                    v49 = System_String__Format(v44, v48, 0LL);
                                    gameObject = (UnityEngine_GameObject_o *)System_String__Concat_61707032(
                                                                               v43,
                                                                               v49,
                                                                               0LL);
                                    if ( !skillAftTitleLb )
                                      goto LABEL_96;
                                    UILabel__set_text(skillAftTitleLb, (System_String_o *)gameObject, 0LL);
                                    targetIdOld = v83;
                                  }
                                  gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftTitleLb;
                                  if ( !gameObject )
                                    goto LABEL_96;
                                  UILabel__SetCondensedScale((UILabel_o *)gameObject, 255, 0LL);
                                  if ( v35 )
                                  {
                                    servantSkillStrengthStatusAfter = (UnityEngine_Object_o *)this->fields.servantSkillStrengthStatusAfter;
                                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                    if ( UnityEngine_Object__op_Equality(servantSkillStrengthStatusAfter, 0LL, 0LL) )
                                    {
                                      if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                                        j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                                      gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftTitleLb;
                                      if ( !gameObject )
                                        goto LABEL_96;
                                      PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
                                      transform = UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)gameObject,
                                                    0LL);
                                      gameObject = BaseMonoBehaviour__createObject_38240928(
                                                     (BaseMonoBehaviour_o *)this,
                                                     PATH,
                                                     transform,
                                                     0LL,
                                                     0LL);
                                      if ( !gameObject )
                                        goto LABEL_96;
                                      Component_object = UnityEngine_GameObject__GetComponent_object_(
                                                           gameObject,
                                                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
                                      this->fields.servantSkillStrengthStatusAfter = (struct ServantSkillStrengthStatus_o *)Component_object;
                                      sub_1B88554(
                                        (ServantStatusBattleListViewItem_o *)&this->fields.servantSkillStrengthStatusAfter,
                                        (int32_t)Component_object,
                                        v54,
                                        v55);
                                    }
                                    v56 = targetIdOld;
                                    v57 = this->fields.servantSkillStrengthStatusAfter;
                                    v58 = this->fields.skillAftTitleLb;
                                    gameObject = (UnityEngine_GameObject_o *)ServantSkillEntity__GetStrengthStatus(
                                                                               v35,
                                                                               0LL);
                                    if ( !v57 )
                                      goto LABEL_96;
                                    v91 = (UnityEngine_Vector2Int_o)0x1200000014LL;
                                    ServantSkillStrengthStatus__Set(
                                      v57,
                                      v58,
                                      (int32_t)gameObject,
                                      v35->fields.skillNum,
                                      20,
                                      -9,
                                      v91,
                                      0LL);
                                    targetIdOld = v56;
                                  }
                                  gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftdetailLb;
                                  if ( !gameObject )
                                    goto LABEL_96;
                                  m_CachedPtr = gameObject[17].fields.m_CachedPtr;
                                  WrapControlText__textBBCodeAdjust(
                                    (UILabel_o *)gameObject,
                                    detail,
                                    m_CachedPtr,
                                    0,
                                    0,
                                    0LL);
                                  if ( targetIdOld < 1 )
                                  {
                                    SkillEntity__getSkillMessageInfo(v31, &name, &detail, v36, 0LL);
                                    gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconBef;
                                    if ( !gameObject )
                                      goto LABEL_96;
                                    v60 = targetId;
                                  }
                                  else
                                  {
                                    gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                                                               v29,
                                                                               targetIdOld,
                                                                               (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
                                    if ( !gameObject )
                                      goto LABEL_96;
                                    v31 = (SkillEntity_o *)gameObject;
                                    SkillEntity__getSkillMessageInfo(
                                      (SkillEntity_o *)gameObject,
                                      &name,
                                      &detail,
                                      v36,
                                      0LL);
                                    if ( !isRelease )
                                    {
                                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                      detail = LocalizationManager__Get((System_String_o *)StringLiteral_12144/*"SKILL_COMBINE_EFFFECT_UNRELEASE"*/, 0LL);
                                      WrapControlText__textBBCodeAdjust(
                                        this->fields.skillAftdetailLb,
                                        detail,
                                        m_CachedPtr,
                                        0,
                                        0,
                                        0LL);
                                    }
                                    gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconBef;
                                    if ( !gameObject )
                                      goto LABEL_96;
                                    v60 = targetIdOld;
                                  }
                                  SkillIconComponent__Set_38235592((SkillIconComponent_o *)gameObject, v60, v36, 0LL);
                                  v30 = isOpen;
                                  skillBefChargeTimeLb = this->fields.skillBefChargeTimeLb;
                                  v38 = v31;
                                  v39 = v36;
                                }
                                EffectChargeTurn = SkillEntity__getEffectChargeTurn(v38, v39, 0LL);
                                gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString(
                                                                           (int32_t)&EffectChargeTurn,
                                                                           0LL);
                                if ( !skillBefChargeTimeLb )
                                  goto LABEL_96;
                                UILabel__set_text(skillBefChargeTimeLb, (System_String_o *)gameObject, 0LL);
                                beforeChargeTimeInfo = this->fields.beforeChargeTimeInfo;
                                gameObject = (UnityEngine_GameObject_o *)SkillEntity__getEffectChargeTurn(v31, v36, 0LL);
                                if ( !beforeChargeTimeInfo )
                                  goto LABEL_96;
                                UnityEngine_GameObject__SetActive(beforeChargeTimeInfo, (int)gameObject > 0, 0LL);
                                gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefTitleLb;
                                if ( !gameObject )
                                  goto LABEL_96;
                                UILabel__set_text((UILabel_o *)gameObject, name, 0LL);
                                if ( isDispLv )
                                {
                                  v62 = v30;
                                  skillBefTitleLb = this->fields.skillBefTitleLb;
                                  v64 = name;
                                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                  v68 = LocalizationManager__Get((System_String_o *)StringLiteral_2110/*"APPEND_SKILL_RESULT_LV"*/, 0LL);
                                  v69 = v86;
                                  if ( v62 )
                                    v69 = targetLv;
                                  v87 = v69;
                                  v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v87, v65, v66, v67);
                                  v71 = System_String__Format(v68, v70, 0LL);
                                  gameObject = (UnityEngine_GameObject_o *)System_String__Concat_61707032(v64, v71, 0LL);
                                  if ( !skillBefTitleLb )
                                    goto LABEL_96;
                                  UILabel__set_text(skillBefTitleLb, (System_String_o *)gameObject, 0LL);
                                }
                                gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefTitleLb;
                                if ( !gameObject )
                                  goto LABEL_96;
                                UILabel__SetCondensedScale((UILabel_o *)gameObject, 255, 0LL);
                                if ( v35 )
                                {
                                  StrengthStatus = ServantSkillEntity__GetStrengthStatus(v35, 0LL);
                                  if ( targetIdOld >= 1 )
                                  {
                                    gameObject = (UnityEngine_GameObject_o *)ServantSkillMaster__getEntityFromSkillId(
                                                                               v84,
                                                                               v85,
                                                                               v33,
                                                                               targetIdOld,
                                                                               0LL);
                                    if ( !gameObject )
                                      goto LABEL_96;
                                    v35 = (ServantSkillEntity_o *)gameObject;
                                    StrengthStatus = ServantSkillEntity__GetStrengthStatus(
                                                       (ServantSkillEntity_o *)gameObject,
                                                       0LL);
                                  }
                                  v73 = StrengthStatus;
                                  skillNum = v35->fields.skillNum;
                                  servantSkillStrengthStatusBefore = (UnityEngine_Object_o *)this->fields.servantSkillStrengthStatusBefore;
                                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                  p_servantSkillStrengthStatusBefore = &this->fields.servantSkillStrengthStatusBefore;
                                  if ( UnityEngine_Object__op_Equality(servantSkillStrengthStatusBefore, 0LL, 0LL) )
                                  {
                                    if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                                    gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefTitleLb;
                                    if ( !gameObject )
                                      goto LABEL_96;
                                    v77 = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
                                    v78 = UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)gameObject,
                                            0LL);
                                    gameObject = BaseMonoBehaviour__createObject_38240928(
                                                   (BaseMonoBehaviour_o *)this,
                                                   v77,
                                                   v78,
                                                   0LL,
                                                   0LL);
                                    if ( !gameObject )
                                      goto LABEL_96;
                                    v79 = UnityEngine_GameObject__GetComponent_object_(
                                            gameObject,
                                            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
                                    *p_servantSkillStrengthStatusBefore = (struct ServantSkillStrengthStatus_o *)v79;
                                    sub_1B88554(
                                      (ServantStatusBattleListViewItem_o *)&this->fields.servantSkillStrengthStatusBefore,
                                      (int32_t)v79,
                                      v80,
                                      v81);
                                  }
                                  gameObject = (UnityEngine_GameObject_o *)*p_servantSkillStrengthStatusBefore;
                                  if ( !*p_servantSkillStrengthStatusBefore )
                                    goto LABEL_96;
                                  v92 = (UnityEngine_Vector2Int_o)0x1200000014LL;
                                  ServantSkillStrengthStatus__Set(
                                    (ServantSkillStrengthStatus_o *)gameObject,
                                    this->fields.skillBefTitleLb,
                                    v73,
                                    skillNum,
                                    20,
                                    -9,
                                    v92,
                                    0LL);
                                }
                                gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefdetailLb;
                                if ( gameObject )
                                {
                                  WrapControlText__textBBCodeAdjust(
                                    (UILabel_o *)gameObject,
                                    detail,
                                    gameObject[17].fields.m_CachedPtr,
                                    0,
                                    0,
                                    0LL);
                                  v82 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                                  System_Action___ctor(
                                    v82,
                                    (Il2CppObject *)this,
                                    Method_SkillUpResultWindowComponent_EndOpen__,
                                    0LL);
                                  BaseDialog__Open((BaseDialog_o *)this, v82, 0, 0LL);
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_96:
    sub_1B8880C(gameObject, v24);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillUpResultWindowComponent__SetChildrenActive(
        SkillUpResultWindowComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *skillInfo; // x0
  bool v5; // w21
  bool v7; // w20

  skillInfo = this->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_8;
  v5 = enable;
  UnityEngine_GameObject__SetActive(skillInfo, enable, 0LL);
  skillInfo = this->fields.skillChangeInfo;
  if ( !skillInfo )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(skillInfo, v5, 0LL);
  skillInfo = this->fields.npInfo;
  if ( !skillInfo
    || (UnityEngine_GameObject__SetActive(skillInfo, enable, 0LL), (skillInfo = this->fields.friendshipInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(skillInfo, enable, 0LL), (skillInfo = this->fields.powerupInfo) == 0LL)
    || (v7 = enable,
        UnityEngine_GameObject__SetActive(skillInfo, v7, 0LL),
        (skillInfo = this->fields.costumeChangeInfo) == 0LL) )
  {
LABEL_8:
    sub_1B8880C(skillInfo, enable);
  }
  UnityEngine_GameObject__SetActive(skillInfo, v7, 0LL);
}


void __fastcall SkillUpResultWindowComponent__SetSkillInfo(
        SkillUpResultWindowComponent_o *this,
        int32_t oldSkillId,
        int32_t oldSkillLv,
        int32_t nowSkillId,
        int32_t nowSkillLv,
        const MethodInfo *method)
{
  UILabel_o *skillChangeInfoSubTitleOld; // x24
  System_String_o *SkillEntity; // x0
  __int64 v13; // x1
  SkillUpResultWindowComponent_o *v14; // x0
  const MethodInfo *v15; // x2
  UILabel_o *skillChangeInfoNameOld; // x22
  System_String_o *v17; // x0
  UILabel_o *skillChangeInfoSubTitleNow; // x22
  SkillUpResultWindowComponent_o *v19; // x0
  const MethodInfo *v20; // x2
  UILabel_o *skillChangeInfoNameNow; // x20
  System_String_o *v22; // x0
  System_String_o *text; // [xsp+0h] [xbp-60h] BYREF
  System_String_o *v24; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4A5EA95 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_6921/*"GET_SKILL_NAME"*/);
    sub_1B885B0(&StringLiteral_2053/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/);
    sub_1B885B0(&StringLiteral_3008/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/);
    byte_4A5EA95 = 1;
  }
  detail = 0LL;
  name = 0LL;
  text = 0LL;
  v24 = 0LL;
  skillChangeInfoSubTitleOld = this->fields.skillChangeInfoSubTitleOld;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SkillEntity = LocalizationManager__Get((System_String_o *)StringLiteral_3008/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, 0LL);
  if ( !skillChangeInfoSubTitleOld )
    goto LABEL_14;
  UILabel__set_text(skillChangeInfoSubTitleOld, SkillEntity, 0LL);
  SkillEntity = (System_String_o *)SkillUpResultWindowComponent__GetSkillEntity(v14, oldSkillId, v15);
  if ( !SkillEntity )
    goto LABEL_14;
  SkillEntity__getSkillMessageInfo((SkillEntity_o *)SkillEntity, &name, &detail, oldSkillLv, 0LL);
  skillChangeInfoNameOld = this->fields.skillChangeInfoNameOld;
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_6921/*"GET_SKILL_NAME"*/, 0LL);
  SkillEntity = System_String__Format(v17, (Il2CppObject *)name, 0LL);
  if ( !skillChangeInfoNameOld )
    goto LABEL_14;
  UILabel__set_text(skillChangeInfoNameOld, SkillEntity, 0LL);
  SkillEntity = (System_String_o *)this->fields.skillChangeInfoDetailOld;
  if ( !SkillEntity )
    goto LABEL_14;
  WrapControlText__textBBCodeAdjust((UILabel_o *)SkillEntity, detail, SkillEntity[17].fields._stringLength, 0, 0, 0LL);
  skillChangeInfoSubTitleNow = this->fields.skillChangeInfoSubTitleNow;
  SkillEntity = LocalizationManager__Get((System_String_o *)StringLiteral_2053/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, 0LL);
  if ( !skillChangeInfoSubTitleNow )
    goto LABEL_14;
  UILabel__set_text(skillChangeInfoSubTitleNow, SkillEntity, 0LL);
  SkillEntity = (System_String_o *)SkillUpResultWindowComponent__GetSkillEntity(v19, nowSkillId, v20);
  if ( !SkillEntity
    || (SkillEntity__getSkillMessageInfo((SkillEntity_o *)SkillEntity, &v24, &text, nowSkillLv, 0LL),
        skillChangeInfoNameNow = this->fields.skillChangeInfoNameNow,
        v22 = LocalizationManager__Get((System_String_o *)StringLiteral_6921/*"GET_SKILL_NAME"*/, 0LL),
        SkillEntity = System_String__Format(v22, (Il2CppObject *)v24, 0LL),
        !skillChangeInfoNameNow)
    || (UILabel__set_text(skillChangeInfoNameNow, SkillEntity, 0LL),
        (SkillEntity = (System_String_o *)this->fields.skillChangeInfoDetailNow) == 0LL) )
  {
LABEL_14:
    sub_1B8880C(SkillEntity, v13);
  }
  WrapControlText__textBBCodeAdjust((UILabel_o *)SkillEntity, text, SkillEntity[17].fields._stringLength, 0, 0, 0LL);
}


void __fastcall SkillUpResultWindowComponent__SetupNpUpResultInfoNormal(
        SkillUpResultWindowComponent_o *this,
        UserServantEntity_o *usrSvtData,
        int32_t targetId,
        int32_t targetLv,
        int32_t targetIdOld,
        int32_t targetLvOld,
        int32_t kind,
        const MethodInfo *method)
{
  TreasureDvcMaster_o *Master_object; // x0
  __int64 v16; // x1
  TreasureDvcMaster_o *v17; // x26
  __int64 v18; // x27
  __int64 v19; // x28
  TreasureDvcEntity_o *v20; // x25
  TreasureDvcLvEntity_o *v21; // x22
  bool v22; // w26
  UILabel_o *currentNpLvLb; // x24
  UILabel_o *resNpLvLb; // x24
  UIWidget_o *v25; // x24
  SkillUpResultWindowComponent_c *v26; // x8
  System_String_o **v27; // x8
  UIWidget_o *v28; // x24
  SkillUpResultWindowComponent_c *v29; // x8
  UILabel_o *npBefDetailLb; // x20
  struct UILabel_o *v31; // x8
  System_String_o *v32; // x1
  System_String_o *DetalShort_40032868; // x21
  TreasureDvcLvEntity_o *v34; // x0
  int32_t mFontSize; // w2
  System_String_o *v36; // x1
  UILabel_o *resNpLvFirstLb; // x24
  struct UILabel_o *v38; // x20
  struct UILabel_o *v39; // x8
  UILabel_o *npAftDetailLb; // x20
  struct UILabel_o *v41; // x8
  int32_t v42; // [xsp+Ch] [xbp-74h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-70h] BYREF
  int32_t lv; // [xsp+1Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  lv = targetLv;
  if ( (byte_4A5EA8E & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1B885B0(&Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&SkillUpResultWindowComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EA8E = 1;
  }
  entity = 0LL;
  v42 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (TreasureDvcMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !usrSvtData )
    goto LABEL_69;
  v17 = Master_object;
  v19 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v19;
  *(_QWORD *)&v45.fields.fakeValue = v18;
  Master_object = (TreasureDvcMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v45, 0LL);
  if ( !v17 )
    goto LABEL_69;
  v20 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v17, (int32_t)Master_object, targetId, 0LL);
  Master_object = (TreasureDvcMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
  if ( !v20 || !Master_object )
    goto LABEL_69;
  v21 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Master_object, v20->fields.id, targetLv, 0LL);
  Master_object = (TreasureDvcMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)v17,
                                           &entity,
                                           targetIdOld,
                                           (const MethodInfo_311D988 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    targetIdOld = 0;
  if ( !this->fields.npRubyNameLb )
    goto LABEL_69;
  UILabel__set_text(this->fields.npRubyNameLb, v20->fields.ruby, 0LL);
  Master_object = (TreasureDvcMaster_o *)this->fields.npNameLb;
  if ( !Master_object )
    goto LABEL_69;
  v22 = kind != 5;
  UILabel__set_text((UILabel_o *)Master_object, v20->fields.name, 0LL);
  NoblePhantasmNameOverwriter__SetOverwriteNpLabel(usrSvtData, this->fields.npNameLb, this->fields.npRubyNameLb, 0LL);
  v42 = targetLvOld;
  if ( targetIdOld > 0 || kind == 5 )
  {
    Master_object = (TreasureDvcMaster_o *)this->fields.npRankInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v22, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npLvInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npLvFirstInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npChangeSp;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v22, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npRankupBeforeLb;
    if ( !Master_object )
      goto LABEL_69;
    v27 = (System_String_o **)(entity ? &entity[2].monitor : &StringLiteral_1/*""*/);
    UILabel__set_text((UILabel_o *)Master_object, *v27, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npRankupAfterLb;
    if ( !Master_object )
      goto LABEL_69;
    UILabel__set_text((UILabel_o *)Master_object, v20->fields.rank, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npRankupAfterLb;
    if ( !Master_object )
      goto LABEL_69;
    Master_object = (TreasureDvcMaster_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)Master_object,
                                             (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    v28 = (UIWidget_o *)Master_object;
    v29 = SkillUpResultWindowComponent_TypeInfo;
    if ( !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
      v29 = SkillUpResultWindowComponent_TypeInfo;
    }
    if ( !v28 )
      goto LABEL_69;
    UIWidget__set_color(v28, v29->static_fields->COLOR_VAL, 0LL);
    v42 = targetLvOld;
    if ( !v21 )
      goto LABEL_61;
  }
  else if ( targetLvOld <= 0 )
  {
    Master_object = (TreasureDvcMaster_o *)this->fields.npRankInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npLvInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npLvFirstInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npChangeSp;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    resNpLvFirstLb = this->fields.resNpLvFirstLb;
    Master_object = (TreasureDvcMaster_o *)System_Int32__ToString((int32_t)&lv, 0LL);
    if ( !resNpLvFirstLb )
      goto LABEL_69;
    UILabel__set_text(resNpLvFirstLb, (System_String_o *)Master_object, 0LL);
    if ( !v21 )
    {
LABEL_61:
      Master_object = (TreasureDvcMaster_o *)this->fields.npBefDetailLb;
      if ( Master_object )
      {
        UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        Master_object = (TreasureDvcMaster_o *)this->fields.npAftDetailLb;
        if ( Master_object )
        {
          v32 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_64;
        }
      }
      goto LABEL_69;
    }
  }
  else
  {
    currentNpLvLb = this->fields.currentNpLvLb;
    Master_object = (TreasureDvcMaster_o *)System_Int32__ToString((int32_t)&v42, 0LL);
    if ( !currentNpLvLb )
      goto LABEL_69;
    UILabel__set_text(currentNpLvLb, (System_String_o *)Master_object, 0LL);
    resNpLvLb = this->fields.resNpLvLb;
    Master_object = (TreasureDvcMaster_o *)System_Int32__ToString((int32_t)&lv, 0LL);
    if ( !resNpLvLb )
      goto LABEL_69;
    UILabel__set_text(resNpLvLb, (System_String_o *)Master_object, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.resNpLvLb;
    if ( !Master_object )
      goto LABEL_69;
    Master_object = (TreasureDvcMaster_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)Master_object,
                                             (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    v25 = (UIWidget_o *)Master_object;
    v26 = SkillUpResultWindowComponent_TypeInfo;
    if ( !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
      v26 = SkillUpResultWindowComponent_TypeInfo;
    }
    if ( !v25 )
      goto LABEL_69;
    UIWidget__set_color(v25, v26->static_fields->COLOR_VAL, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npRankInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npLvInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npLvFirstInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    if ( !v21 )
      goto LABEL_61;
  }
  if ( kind == 5 )
  {
    npBefDetailLb = this->fields.npBefDetailLb;
    Master_object = (TreasureDvcMaster_o *)TreasureDvcLvEntity__getDetalShort_40032868(v21, lv, 0LL);
    v31 = this->fields.npBefDetailLb;
    if ( v31 )
    {
      WrapControlText__textAdjust(npBefDetailLb, (System_String_o *)Master_object, v31->fields.mFontSize, 0, 0, 0LL);
      Master_object = (TreasureDvcMaster_o *)this->fields.npAftDetailLb;
      if ( Master_object )
      {
        v32 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_64:
        UILabel__set_text((UILabel_o *)Master_object, v32, 0LL);
        return;
      }
    }
LABEL_69:
    sub_1B8880C(Master_object, v16);
  }
  if ( targetIdOld < 1 )
  {
    v38 = this->fields.npBefDetailLb;
    Master_object = (TreasureDvcMaster_o *)TreasureDvcLvEntity__getDetalShort_40032868(v21, v42, 0LL);
    v39 = this->fields.npBefDetailLb;
    if ( !v39 )
      goto LABEL_69;
    mFontSize = v39->fields.mFontSize;
    v36 = (System_String_o *)Master_object;
    Master_object = (TreasureDvcMaster_o *)v38;
  }
  else
  {
    DetalShort_40032868 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (TreasureDvcMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !Master_object )
      goto LABEL_69;
    v34 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Master_object, targetIdOld, targetLvOld, 0LL);
    if ( v34 )
      DetalShort_40032868 = TreasureDvcLvEntity__getDetalShort_40032868(v34, v42, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npBefDetailLb;
    if ( !Master_object )
      goto LABEL_69;
    mFontSize = Master_object[5].fields.revision;
    v36 = DetalShort_40032868;
  }
  WrapControlText__textBBCodeAdjust((UILabel_o *)Master_object, v36, mFontSize, 0, 0, 0LL);
  npAftDetailLb = this->fields.npAftDetailLb;
  Master_object = (TreasureDvcMaster_o *)TreasureDvcLvEntity__getDetalShort_40032868(v21, lv, 0LL);
  v41 = this->fields.npAftDetailLb;
  if ( !v41 )
    goto LABEL_69;
  WrapControlText__textBBCodeAdjust(npAftDetailLb, (System_String_o *)Master_object, v41->fields.mFontSize, 0, 0, 0LL);
}