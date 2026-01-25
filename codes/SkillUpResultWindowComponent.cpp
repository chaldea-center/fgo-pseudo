void SkillUpResultWindowComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4CF2823 & 1) == 0 )
  {
    sub_1C7BAE8(&SkillUpResultWindowComponent_TypeInfo);
    byte_4CF2823 = 1;
  }
  *SkillUpResultWindowComponent_TypeInfo->static_fields = (struct SkillUpResultWindowComponent_StaticFields)xmmword_CF66C0;
}


void SkillUpResultWindowComponent___ctor(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4CF2822 & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    byte_4CF2822 = 1;
  }
  this->fields.svtTransformCount = 1;
  *(_QWORD *)&this->fields.skillInfoOffset = 0x40C00000C1700000LL;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SkillUpResultWindowComponent__Close(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x0
  System_Action_o *v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4CF281B & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SkillUpResultWindowComponent_EndClose__);
    byte_4CF281B = 1;
  }
  v3 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndClose__, 0);
  SkillUpResultWindowComponent__Close_49319228(this, v4, v5);
}


void SkillUpResultWindowComponent__CloseToNext(
        SkillUpResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Action_o *v14; // x20

  if ( (byte_4CF281D & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SkillUpResultWindowComponent___c__DisplayClass104_0__CloseToNext_b__0__);
    sub_1C7BAE8(&SkillUpResultWindowComponent___c__DisplayClass104_0_TypeInfo);
    byte_4CF281D = 1;
  }
  v5 = sub_1C7BD34(SkillUpResultWindowComponent___c__DisplayClass104_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C7BD40(v6, v7);
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  v14 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_SkillUpResultWindowComponent___c__DisplayClass104_0__CloseToNext_b__0__,
    0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v14, 0);
}


void SkillUpResultWindowComponent__Close_49319228(
        SkillUpResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20

  if ( (byte_4CF281C & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SkillUpResultWindowComponent_EndClose__);
    byte_4CF281C = 1;
  }
  v4 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0);
}


void SkillUpResultWindowComponent__EndClose(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  SkillUpResultWindowComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0),
        SkillUpResultWindowComponent__SetChildrenActive(this, 0, v5),
        (gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.friendshipInfo, 0)) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0 )
  {
    sub_1C7BD40(gameObject, v4);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void SkillUpResultWindowComponent__EndOpen(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Action_o *openCallBack; // x19
  GrandQuestFolderBoardItem_o *p_openCallBack; // x0

  openCallBack = this->fields.openCallBack;
  if ( openCallBack )
  {
    p_openCallBack = (GrandQuestFolderBoardItem_o *)&this->fields.openCallBack;
    p_openCallBack->klass = 0;
    sub_1C7BA8C(p_openCallBack, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))openCallBack->fields.invoke_impl)(
      openCallBack->fields.method_code,
      openCallBack->fields.method);
  }
}


ServantSkillEntity_o *SkillUpResultWindowComponent__GetServantSkillEntity(
        SkillUpResultWindowComponent_o *this,
        int32_t svtId,
        int32_t num,
        int32_t skillId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4CF281F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CF281F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantSkillMaster___)) == 0 )
  {
    sub_1C7BD40(Instance, v9);
  }
  return ServantSkillMaster__getEntityFromSkillId((ServantSkillMaster_o *)Instance, svtId, num, skillId, 0);
}


SkillEntity_o *SkillUpResultWindowComponent__GetSkillEntity(
        SkillUpResultWindowComponent_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CF281E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CF281E = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0 )
  {
    sub_1C7BD40(Instance, v5);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    skillId,
    (const MethodInfo_342E348 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
  return (SkillEntity_o *)entity;
}


void SkillUpResultWindowComponent__Init(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C7BD40(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void SkillUpResultWindowComponent__OpenCostumeChangeMessage(
        SkillUpResultWindowComponent_o *this,
        System_String_o *costumeName,
        System_String_o *formatKey,
        System_Action_o *callback,
        const MethodInfo *method)
{
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  UILabel_o *costumeChangeLabel; // x23
  System_String_o *v16; // x0

  if ( (byte_4CF2821 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SkillUpResultWindowComponent_OpenCostumeChangeMessage__);
    byte_4CF2821 = 1;
  }
  v9 = Method_SkillUpResultWindowComponent_OpenCostumeChangeMessage__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenCostumeChangeMessage__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1C7BB00(Method_SkillUpResultWindowComponent_OpenCostumeChangeMessage__);
  v10 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 6, 0, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  SkillUpResultWindowComponent__SetupWindowBg(this, v13);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v14);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.costumeChangeInfo, 0);
  if ( !gameObject )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.costumeChangeInfo;
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  costumeChangeLabel = this->fields.costumeChangeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get(formatKey, 0);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v16, (Il2CppObject *)costumeName, 0);
  if ( !costumeChangeLabel )
LABEL_13:
    sub_1C7BD40(gameObject, v12);
  UILabel__set_text(costumeChangeLabel, (System_String_o *)gameObject, 0);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0, 0);
}


void SkillUpResultWindowComponent__OpenFriendshipUpResultInfo(
        SkillUpResultWindowComponent_o *this,
        UserServantEntity_o *usrSvtData,
        int32_t oldFriendShipRank,
        System_Action_o *callback,
        const MethodInfo *method)
{
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Text_StringBuilder_o *v20; // x20
  int32_t SvtId; // w22
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  System_Collections_Generic_List_object__o *v24; // x0
  Il2CppObject *current; // x23
  System_String_o *v26; // x0
  __int64 v27; // x1
  System_String_o *v28; // x24
  Il2CppObject *QuestName; // x1
  System_String_o *v30; // x0
  int32_t v31; // w23
  UILabel_o *friendshipLabel; // x22
  UnityEngine_GameObject_o *v33; // x20
  UILabel_o *friendshipCurrentLvLabel; // x20
  UILabel_o *friendshipResultLvLabel; // x20
  UIWidget_o *v36; // x20
  SkillUpResultWindowComponent_c *v37; // x8
  struct UILabel_o *v38; // x8
  System_Action_o *v39; // x20
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+0h] [xbp-90h] BYREF
  int32_t FriendShipRank; // [xsp+1Ch] [xbp-74h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-70h] BYREF
  int32_t oldFriendShipRanka; // [xsp+3Ch] [xbp-54h] BYREF

  oldFriendShipRanka = oldFriendShipRank;
  if ( (byte_4CF2817 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&ServantCommentManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C7BAE8(&Method_SkillUpResultWindowComponent_EndOpen__);
    sub_1C7BAE8(&Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__);
    sub_1C7BAE8(&SkillUpResultWindowComponent_TypeInfo);
    sub_1C7BAE8(&System_Text_StringBuilder_TypeInfo);
    sub_1C7BAE8(&StringLiteral_11155/*"RESULT_BOUNDS_OPENQUEST"*/);
    sub_1C7BAE8(&StringLiteral_11157/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/);
    sub_1C7BAE8(&StringLiteral_11150/*"RESULT_BOUNDS_GETVOICE"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF2817 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  FriendShipRank = 0;
  if ( !this->fields.state )
  {
    v9 = Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1C7BB00(Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 6, 0, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      SkillUpResultWindowComponent__SetChildrenActive(this, 0, v13);
      gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.friendshipInfo, 0);
      if ( gameObject )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 1, 0);
          gameObject = this->fields.friendshipInfo;
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 1, 0);
            this->fields.openCallBack = callback;
            sub_1C7BA8C(
              (GrandQuestFolderBoardItem_o *)&this->fields.openCallBack,
              (int32_t)callback,
              v14,
              v15,
              v16,
              v17,
              v18,
              v19);
            gameObject = (UnityEngine_GameObject_o *)this->fields.friendshipLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
              v20 = (System_Text_StringBuilder_o *)sub_1C7BD34(System_Text_StringBuilder_TypeInfo);
              System_Text_StringBuilder___ctor(v20, 0);
              if ( usrSvtData )
              {
                SvtId = UserServantEntity__getSvtId(usrSvtData, 0);
                gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( gameObject )
                {
                  MasterData_object = DataManager__GetMasterData_object_(
                                        (DataManager_o *)gameObject,
                                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  if ( !byte_4CE827C )
                  {
                    sub_1C7BAE8(&NetworkManager_TypeInfo);
                    byte_4CE827C = 1;
                  }
                  gameObject = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                    gameObject = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
                  }
                  if ( MasterData_object )
                  {
                    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                                         (UserServantCollectionMaster_o *)MasterData_object,
                                         *(_QWORD *)(gameObject[7].fields.m_CachedPtr + 64),
                                         SvtId,
                                         0);
                    gameObject = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                    if ( gameObject )
                    {
                      v24 = (System_Collections_Generic_List_object__o *)clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
                                                                           (clsQuestCheck_o *)gameObject,
                                                                           SvtId,
                                                                           oldFriendShipRank,
                                                                           8,
                                                                           0);
                      if ( v24 )
                      {
                        System_Collections_Generic_List_object___GetEnumerator(
                          (System_Collections_Generic_List_Enumerator_T__o *)&v40,
                          v24,
                          (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
                        v42 = v40;
                        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                                  &v42,
                                  (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
                        {
                          current = v42.fields._current;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v26 = LocalizationManager__Get((System_String_o *)StringLiteral_11155/*"RESULT_BOUNDS_OPENQUEST"*/, 0);
                          if ( !current )
                            sub_1C7BD40(v26, v27);
                          v28 = v26;
                          QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0);
                          v30 = System_String__Format(v28, QuestName, 0);
                          if ( !v20 )
                            sub_1C7BD40(v30, v30);
                          System_Text_StringBuilder__AppendLine_64262096(v20, v30, 0);
                        }
                        System_Collections_Generic_List_Enumerator_object___Dispose(
                          &v42,
                          (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
                      }
                      v31 = oldFriendShipRanka;
                      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
                      gameObject = (UnityEngine_GameObject_o *)ServantCommentManager__IsOpenByServantFriendShip(
                                                                 SvtId,
                                                                 v31,
                                                                 0);
                      if ( ((unsigned __int8)gameObject & 1) != 0 )
                      {
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_11157/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/,
                                                                   0);
                        if ( !v20 )
                          goto LABEL_60;
                        gameObject = (UnityEngine_GameObject_o *)System_Text_StringBuilder__AppendLine_64262096(
                                                                   v20,
                                                                   (System_String_o *)gameObject,
                                                                   0);
                      }
                      if ( !EntityDefinitely )
                        goto LABEL_60;
                      gameObject = (UnityEngine_GameObject_o *)ServantVoiceMaster__isOpenByServantFriendShip(
                                                                 SvtId,
                                                                 EntityDefinitely->fields.maxLimitCount,
                                                                 oldFriendShipRanka,
                                                                 0);
                      if ( ((unsigned __int8)gameObject & 1) != 0 )
                      {
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_11150/*"RESULT_BOUNDS_GETVOICE"*/,
                                                                   0);
                        if ( !v20 )
                          goto LABEL_60;
                        System_Text_StringBuilder__AppendLine_64262096(v20, (System_String_o *)gameObject, 0);
                      }
                      else if ( !v20 )
                      {
                        goto LABEL_60;
                      }
                      friendshipLabel = this->fields.friendshipLabel;
                      gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v20->klass->vtable._3_ToString.methodPtr)(
                                                                 v20,
                                                                 v20->klass->vtable._3_ToString.method);
                      if ( friendshipLabel )
                      {
                        UILabel__set_text(friendshipLabel, (System_String_o *)gameObject, 0);
                        gameObject = this->fields.friendshipLvInfo;
                        if ( gameObject )
                        {
                          v33 = UnityEngine_GameObject__get_gameObject(gameObject, 0);
                          gameObject = (UnityEngine_GameObject_o *)UserServantCollectionEntity__getFriendShipRank(
                                                                     EntityDefinitely,
                                                                     0);
                          if ( v33 )
                          {
                            UnityEngine_GameObject__SetActive(v33, (int)gameObject > oldFriendShipRanka, 0);
                            friendshipCurrentLvLabel = this->fields.friendshipCurrentLvLabel;
                            gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString(
                                                                       (int32_t)&oldFriendShipRanka,
                                                                       0);
                            if ( friendshipCurrentLvLabel )
                            {
                              UILabel__set_text(friendshipCurrentLvLabel, (System_String_o *)gameObject, 0);
                              friendshipResultLvLabel = this->fields.friendshipResultLvLabel;
                              FriendShipRank = UserServantCollectionEntity__getFriendShipRank(EntityDefinitely, 0);
                              gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString(
                                                                         (int32_t)&FriendShipRank,
                                                                         0);
                              if ( friendshipResultLvLabel )
                              {
                                UILabel__set_text(friendshipResultLvLabel, (System_String_o *)gameObject, 0);
                                gameObject = (UnityEngine_GameObject_o *)this->fields.friendshipResultLvLabel;
                                if ( gameObject )
                                {
                                  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                                             (UnityEngine_Component_o *)gameObject,
                                                                             (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
                                  v36 = (UIWidget_o *)gameObject;
                                  v37 = SkillUpResultWindowComponent_TypeInfo;
                                  if ( !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
                                    v37 = SkillUpResultWindowComponent_TypeInfo;
                                  }
                                  if ( v36 )
                                  {
                                    UIWidget__set_color(v36, v37->static_fields->COLOR_VAL, 0);
                                    v38 = this->fields.friendshipLabel;
                                    if ( v38 )
                                    {
                                      if ( !System_String__IsNullOrEmpty(v38->fields.mText, 0) )
                                      {
LABEL_58:
                                        v39 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
                                        System_Action___ctor(
                                          v39,
                                          (Il2CppObject *)this,
                                          Method_SkillUpResultWindowComponent_EndOpen__,
                                          0);
                                        BaseDialog__Open((BaseDialog_o *)this, v39, 0, 0, 0);
                                        return;
                                      }
                                      gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(
                                                                                 this->fields.friendshipInfo,
                                                                                 0);
                                      if ( gameObject )
                                      {
                                        gameObject = UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)gameObject,
                                                       0);
                                        if ( gameObject )
                                        {
                                          UnityEngine_GameObject__SetActive(gameObject, 0, 0);
                                          goto LABEL_58;
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
LABEL_60:
    sub_1C7BD40(gameObject, v12);
  }
}


void SkillUpResultWindowComponent__OpenNextNpUpResultInfo(
        SkillUpResultWindowComponent_o *this,
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *addManager,
        int32_t index,
        System_String_o *titleText,
        bool isRankUp,
        UserServantEntity_o *userSvtData,
        System_Action_o *callback,
        const MethodInfo *method)
{
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x7

  if ( (byte_4CF2814 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__);
    byte_4CF2814 = 1;
  }
  v15 = Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1C7BB00(Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__);
  v16 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 6, 0, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v19);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.npInfo, 0);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.npInfo;
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.npInfoAddRoot;
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.npInfoNormalRoot;
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = this->fields.npInfoHeroineNpChangeRoot;
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0), (gameObject = this->fields.npInfoNpChangeRoot) == 0)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0), (gameObject = this->fields.npInfoNpChangeRoot) == 0)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.npInfoAddResultComponent) == 0) )
  {
LABEL_16:
    sub_1C7BD40(gameObject, v18);
  }
  NpInfoAddResultComponent__SetDisplay(
    (NpInfoAddResultComponent_o *)gameObject,
    addManager,
    index,
    titleText,
    isRankUp,
    this->fields.svtTransformCount,
    userSvtData,
    v20);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0, 0);
}


void SkillUpResultWindowComponent__OpenNpUpResultInfo(
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
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3

  if ( (byte_4CF2812 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__);
    byte_4CF2812 = 1;
  }
  v13 = Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1C7BB00(Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__);
  v14 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 6, 0, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v17);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.npInfo, 0);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.npInfo;
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.npInfoNormalRoot;
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = this->fields.npInfoHeroineNpChangeRoot;
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.npInfoNpChangeRoot;
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0), (gameObject = this->fields.npInfoAddRoot) == 0)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoOld) == 0)
    || (HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, oldTargetId, oldTargetLv, v18),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoNow) == 0) )
  {
LABEL_16:
    sub_1C7BD40(gameObject, v16);
  }
  HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, nowTargetId, nowTargetLv, v19);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0, 0);
}


void SkillUpResultWindowComponent__OpenNpUpResultInfo_49283916(
        SkillUpResultWindowComponent_o *this,
        int32_t oldTargetId,
        int32_t oldTargetLv,
        int32_t nowTargetId,
        int32_t nowTargetLv,
        int32_t exTargetId,
        int32_t exTargetLv,
        System_Action_o *callback,
        ServantCostumeEntity_o *svtCostumeEnt,
        const MethodInfo *method)
{
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3
  UnityEngine_Object_o *heroineNpChangeInfoExtra; // x23
  const MethodInfo *v28; // x3

  if ( (byte_4CF2813 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___78899672);
    byte_4CF2813 = 1;
  }
  v18 = Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___78899672;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___78899672 + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_1C7BB00(Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___78899672);
  v19 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v18, v18[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 6, 0, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  SkillUpResultWindowComponent__SetupWindowBg(this, v22);
  SkillUpResultWindowComponent__SetupSpecialNpChange(this, svtCostumeEnt, v23);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v24);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.npInfo, 0);
  if ( !gameObject )
    goto LABEL_23;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.npInfo;
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.npInfoNormalRoot;
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = this->fields.npInfoHeroineNpChangeRoot;
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.npInfoNpChangeRoot;
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = this->fields.npInfoAddRoot;
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoOld;
  if ( !gameObject )
    goto LABEL_23;
  HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, oldTargetId, oldTargetLv, v25);
  gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoNow;
  if ( !gameObject )
    goto LABEL_23;
  HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, nowTargetId, nowTargetLv, v26);
  if ( exTargetId >= 1 && this->fields.isSpecialEffect )
  {
    heroineNpChangeInfoExtra = (UnityEngine_Object_o *)this->fields.heroineNpChangeInfoExtra;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(heroineNpChangeInfoExtra, 0, 0) )
    {
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.heroineNpChangeInfoExtra, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoExtra;
      if ( gameObject )
      {
        HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, exTargetId, exTargetLv, v28);
        goto LABEL_22;
      }
LABEL_23:
      sub_1C7BD40(gameObject, v21);
    }
  }
LABEL_22:
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0, 0);
}


void SkillUpResultWindowComponent__OpenNpUpResultInfo_49314232(
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
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  _BOOL4 v29; // w26
  _BOOL4 v30; // w27
  _BOOL4 IsHeroine; // w28
  _BOOL4 v32; // w21
  int v33; // w27
  _BOOL4 v34; // w28
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x7
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x3
  struct ServantTreasureDeviceAddEntity_o *tdAddEntity_k__BackingField; // x8
  struct System_String_array *titles; // x8
  System_String_o *titleText; // x22
  const MethodInfo *v42; // x7
  System_Action_o *v43; // x20
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v44; // [xsp+0h] [xbp-70h]
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CF2815 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C7BAE8(&Method_SkillUpResultWindowComponent_EndOpen__);
    sub_1C7BAE8(&Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___78899680);
    byte_4CF2815 = 1;
  }
  transformInfo = 0;
  if ( !this->fields.state )
  {
    v18 = Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___78899680;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___78899680 + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1C7BB00(Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___78899680);
    v19 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 6, 0, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      SkillUpResultWindowComponent__SetChildrenActive(this, 0, v22);
      gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.npInfo, 0);
      if ( gameObject )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 1, 0);
          gameObject = this->fields.npInfo;
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 1, 0);
            this->fields.openCallBack = callback;
            sub_1C7BA8C(
              (GrandQuestFolderBoardItem_o *)&this->fields.openCallBack,
              (int32_t)callback,
              v23,
              v24,
              v25,
              v26,
              v27,
              v28);
            if ( usrSvtData )
            {
              gameObject = (UnityEngine_GameObject_o *)UserServantEntity__GetTransformCount(usrSvtData, 1, 0);
              this->fields.svtTransformCount = (int)gameObject;
              if ( addManager )
              {
                v44 = addManager;
                v29 = addManager->fields._tdAddEntity_k__BackingField != 0;
                v30 = (int)gameObject > 1;
                IsHeroine = UserServantEntity__IsHeroine(usrSvtData, 0);
                v32 = targetIdOld != targetId;
                if ( targetIdOld == targetId && UserServantEntity__IsHeroine(usrSvtData, 0) )
                  targetIdOld = 0;
                gameObject = this->fields.npInfoAddRoot;
                if ( gameObject )
                {
                  v33 = v30 || v29;
                  UnityEngine_GameObject__SetActive(gameObject, v33, 0);
                  gameObject = this->fields.npInfoNormalRoot;
                  if ( gameObject )
                  {
                    v34 = targetLvOld != targetLv && IsHeroine && v32;
                    UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)(v34 | (kind == 18) | v33) != 1, 0);
                    gameObject = this->fields.npInfoHeroineNpChangeRoot;
                    if ( gameObject )
                    {
                      UnityEngine_GameObject__SetActive(gameObject, v34, 0);
                      gameObject = this->fields.npInfoNpChangeRoot;
                      if ( gameObject )
                      {
                        UnityEngine_GameObject__SetActive(gameObject, kind == 18, 0);
                        if ( v34 )
                        {
                          gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoOld;
                          if ( gameObject )
                          {
                            HeroineNpChangeInfoComponent__Setup(
                              (HeroineNpChangeInfoComponent_o *)gameObject,
                              targetIdOld,
                              targetLvOld,
                              v35);
                            gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoNow;
                            if ( gameObject )
                            {
                              HeroineNpChangeInfoComponent__Setup(
                                (HeroineNpChangeInfoComponent_o *)gameObject,
                                targetId,
                                targetLv,
                                v37);
LABEL_41:
                              v43 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
                              System_Action___ctor(
                                v43,
                                (Il2CppObject *)this,
                                Method_SkillUpResultWindowComponent_EndOpen__,
                                0);
                              BaseDialog__Open((BaseDialog_o *)this, v43, 0, 0, 0);
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
                              v35);
                            gameObject = (UnityEngine_GameObject_o *)this->fields.npChangeInfoNow;
                            if ( gameObject )
                            {
                              HeroineNpChangeInfoComponent__SetupForNpChange(
                                (HeroineNpChangeInfoComponent_o *)gameObject,
                                targetId,
                                targetLv,
                                v38);
                              goto LABEL_41;
                            }
                          }
                        }
                        else
                        {
                          if ( !v33 )
                          {
                            SkillUpResultWindowComponent__SetupNpUpResultInfoNormal(
                              this,
                              usrSvtData,
                              targetId,
                              targetLv,
                              targetIdOld,
                              targetLvOld,
                              kind,
                              v36);
                            goto LABEL_41;
                          }
                          gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(
                                                                     this->fields.npInfo,
                                                                     0);
                          if ( gameObject )
                          {
                            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                            if ( gameObject )
                            {
                              gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                         gameObject,
                                                                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                              if ( gameObject )
                              {
                                UIWidget__set_height((UIWidget_o *)gameObject, 300, 0);
                                gameObject = (UnityEngine_GameObject_o *)UserServantEntity__GetTransformedServantInfo(
                                                                           usrSvtData,
                                                                           &transformInfo,
                                                                           0,
                                                                           0);
                                tdAddEntity_k__BackingField = v44->fields._tdAddEntity_k__BackingField;
                                if ( !tdAddEntity_k__BackingField )
                                  goto LABEL_35;
                                titles = tdAddEntity_k__BackingField->fields.titles;
                                if ( !titles )
                                  goto LABEL_35;
                                if ( !LODWORD(titles->max_length) )
                                  sub_1C7BD48(gameObject);
                                titleText = titles->m_Items[0];
                                if ( !titleText )
                                {
LABEL_35:
                                  if ( !transformInfo )
                                    goto LABEL_43;
                                  titleText = transformInfo->fields.titleText;
                                }
                                gameObject = (UnityEngine_GameObject_o *)this->fields.windowBgSprite;
                                if ( gameObject )
                                {
                                  UIWidget__set_height((UIWidget_o *)gameObject, 300, 0);
                                  gameObject = (UnityEngine_GameObject_o *)this->fields.npInfoAddResultComponent;
                                  if ( gameObject )
                                  {
                                    NpInfoAddResultComponent__SetDisplay(
                                      (NpInfoAddResultComponent_o *)gameObject,
                                      v44,
                                      0,
                                      titleText,
                                      kind == 8,
                                      this->fields.svtTransformCount,
                                      usrSvtData,
                                      v42);
                                    goto LABEL_41;
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
LABEL_43:
    sub_1C7BD40(gameObject, v21);
  }
}


void SkillUpResultWindowComponent__OpenPowerUpResultInfo(
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
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x21
  __int64 v19; // x20
  __int64 v20; // x22
  Il2CppObject *Entity; // x0
  UILabel_o *powerupLabel; // x20
  Il2CppObject *v23; // x21
  System_Action_o *v24; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4CF2818 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_SkillUpResultWindowComponent_EndOpen__);
    sub_1C7BAE8(&Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__);
    sub_1C7BAE8(&StringLiteral_11156/*"RESULT_BOUNDS_POWERUP"*/);
    byte_4CF2818 = 1;
  }
  if ( !this->fields.state )
  {
    v7 = Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C7BB00(Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 6, 0, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    SkillUpResultWindowComponent__SetChildrenActive(this, 0, v11);
    gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.friendshipInfo, 0);
    if ( !gameObject )
      goto LABEL_20;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = this->fields.powerupInfo;
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    this->fields.openCallBack = callback;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.openCallBack,
      (int32_t)callback,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_20;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !usrSvtData )
      goto LABEL_20;
    v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
    v20 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
    v19 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v25.fields.currentCryptoKey = v20;
    *(_QWORD *)&v25.fields.fakeValue = v19;
    gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v25, 0);
    if ( !v18 )
      goto LABEL_20;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v18,
               (int32_t)gameObject,
               (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    powerupLabel = this->fields.powerupLabel;
    v23 = Entity;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11156/*"RESULT_BOUNDS_POWERUP"*/, 0);
    if ( !v23
      || (gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                     (System_String_o *)gameObject,
                                                     (Il2CppObject *)v23[4].monitor,
                                                     0),
          !powerupLabel) )
    {
LABEL_20:
      sub_1C7BD40(gameObject, v10);
    }
    UILabel__set_text(powerupLabel, (System_String_o *)gameObject, 0);
    v24 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v24, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v24, 0, 0, 0);
  }
}


void SkillUpResultWindowComponent__OpenSkillChangeMessage(
        SkillUpResultWindowComponent_o *this,
        int32_t svtId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  System_String_o *BattleName; // x0
  UILabel_o *costumeChangeLabel; // x21
  Il2CppObject *v15; // x22
  System_String_o *v16; // x0

  if ( (byte_4CF280F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__);
    sub_1C7BAE8(&StringLiteral_3843/*"COSTUME_CHANGE_DESCRIPTION"*/);
    byte_4CF280F = 1;
  }
  v7 = Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C7BB00(Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__);
  v8 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 6, 0, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  SkillUpResultWindowComponent__SetupWindowBg(this, v11);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v12);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.costumeChangeInfo, 0);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.costumeChangeInfo;
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)gameObject,
                                             (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                             svtId,
                                             (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !gameObject )
    goto LABEL_16;
  BattleName = ServantEntity__getBattleName((ServantEntity_o *)gameObject, 0, -1, 0);
  costumeChangeLabel = this->fields.costumeChangeLabel;
  v15 = (Il2CppObject *)BattleName;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3843/*"COSTUME_CHANGE_DESCRIPTION"*/, 0);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v16, v15, 0);
  if ( !costumeChangeLabel )
LABEL_16:
    sub_1C7BD40(gameObject, v10);
  UILabel__set_text(costumeChangeLabel, (System_String_o *)gameObject, 0);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0, 0);
}


void SkillUpResultWindowComponent__OpenSkillChangeMessage_49279432(
        SkillUpResultWindowComponent_o *this,
        int32_t svtId,
        System_String_o *formatKey,
        System_Action_o *callback,
        const MethodInfo *method)
{
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  Il2CppObject *BattleName; // x22
  UILabel_o *costumeChangeLabel; // x23
  System_String_o *v17; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CF2810 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SkillUpResultWindowComponent_OpenSkillChangeMessage___78899704);
    sub_1C7BAE8(&string_TypeInfo);
    byte_4CF2810 = 1;
  }
  v9 = Method_SkillUpResultWindowComponent_OpenSkillChangeMessage___78899704;
  entity = 0;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillChangeMessage___78899704 + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1C7BB00(Method_SkillUpResultWindowComponent_OpenSkillChangeMessage___78899704);
  v10 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 6, 0, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  SkillUpResultWindowComponent__SetupWindowBg(this, v13);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v14);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.costumeChangeInfo, 0);
  if ( !gameObject )
    goto LABEL_20;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.costumeChangeInfo;
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !gameObject )
    goto LABEL_20;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
         &entity,
         svtId,
         (const MethodInfo_342E348 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
  {
    gameObject = (UnityEngine_GameObject_o *)entity;
    if ( !entity )
      goto LABEL_20;
    BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)entity, 0, -1, 0);
  }
  else
  {
    BattleName = (Il2CppObject *)string_TypeInfo->static_fields->Empty;
  }
  costumeChangeLabel = this->fields.costumeChangeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get(formatKey, 0);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v17, BattleName, 0);
  if ( !costumeChangeLabel )
LABEL_20:
    sub_1C7BD40(gameObject, v12);
  UILabel__set_text(costumeChangeLabel, (System_String_o *)gameObject, 0);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0, 0);
}


void SkillUpResultWindowComponent__OpenSkillChangeResultInfo(
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
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  UILabel_o *skillChangeInfoTitle; // x26
  System_String_o *v22; // x0
  const MethodInfo *v23; // x5

  if ( (byte_4CF2811 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__);
    sub_1C7BAE8(&StringLiteral_3850/*"COSTUME_CHANGE_SKILL_TITLE"*/);
    byte_4CF2811 = 1;
  }
  v15 = Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1C7BB00(Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__);
  v16 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 6, 0, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  SkillUpResultWindowComponent__SetupWindowBg(this, v19);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v20);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.skillChangeInfo, 0);
  if ( !gameObject )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.skillChangeInfo;
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  skillChangeInfoTitle = this->fields.skillChangeInfoTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3850/*"COSTUME_CHANGE_SKILL_TITLE"*/, 0);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v22, (Il2CppObject *)costumeName, 0);
  if ( !skillChangeInfoTitle )
LABEL_13:
    sub_1C7BD40(gameObject, v18);
  UILabel__set_text(skillChangeInfoTitle, (System_String_o *)gameObject, 0);
  SkillUpResultWindowComponent__SetSkillInfo(this, oldSkillId, oldSkillLv, nowSkillId, nowSkillLv, v23);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0, 0);
}


void SkillUpResultWindowComponent__OpenSkillUpResultInfo(
        SkillUpResultWindowComponent_o *this,
        int32_t targetId,
        int32_t targetLv,
        System_Action_o *callback,
        int32_t targetIdOld,
        int32_t targetLvOld,
        int32_t baseSvtId,
        System_Int32_array *skillList,
        UserServantEntity_o *userServantEntity,
        bool isOpen,
        bool isRelease,
        bool isDispLv,
        System_String_o *multiSkillDisplayTitle,
        bool isForceRelease,
        UnityEngine_Color_o multiSkillDisplayTitleColor,
        UnityEngine_Color_o multiSkillDisplayTitleBgColor,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  float v21; // s12
  float v22; // s13
  float v23; // s14
  float v24; // s15
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v36; // x1
  const MethodInfo *v37; // x2
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  char v44; // w22
  UnityEngine_Object_o *multiSkillDisplayTitleBgSprite; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v46; // x29
  SkillEntity_o *v47; // x28
  int32_t v48; // w25
  int32_t max_length; // w8
  int32_t v50; // w9
  ServantSkillEntity_o *v51; // x27
  ServantLimitImageMaster_o *v52; // x21
  __int64 v53; // x20
  __int64 v54; // x26
  int32_t v55; // w26
  int32_t ServantImageLimitSealAfter; // w26
  Il2CppObject *Master_object; // x21
  int32_t v58; // w22
  int32_t v59; // w20
  int32_t v60; // w26
  int32_t v61; // w21
  int32_t skillNum; // w20
  int32_t IconCnt; // w22
  UnityEngine_GameObject_o *skillAfter; // x8
  UILabel_o *skillBefChargeTimeLb; // x22
  UnityEngine_GameObject_o *beforeChargeTimeInfo; // x22
  bool v67; // w24
  UILabel_o *skillAftChargeTimeLb; // x26
  UnityEngine_GameObject_o *AfterChargeTimeInfo; // x26
  System_String_o *v70; // x26
  System_String_o *v71; // x20
  Il2CppObject *v72; // x0
  System_String_o *v73; // x0
  UnityEngine_Object_o *skillAftForceReleaseLb; // x20
  System_String_o *v75; // x1
  UnityEngine_Object_o *servantSkillStrengthStatusAfter; // x20
  System_String_o *PATH; // x20
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  ServantSkillStrengthStatus_o *v86; // x22
  UILabel_o *skillAftTitleLb; // x26
  UnityEngine_Vector2Int_o v88; // x6
  UILabel_o *v89; // x22
  UILabel_o *v90; // x22
  UILabel_o *skillBefTitleLb; // x21
  System_String_o *v92; // x22
  System_String_o *v93; // x20
  int32_t v94; // w8
  Il2CppObject *v95; // x0
  System_String_o *v96; // x0
  int32_t v97; // w20
  int32_t v98; // w21
  ServantSkillEntity_o *EntityFromSkillId; // x0
  int32_t v100; // w20
  UnityEngine_Object_o *skillBefForceReleaseLb; // x20
  System_String_o *v102; // x1
  int32_t StrengthStatus; // w0
  int32_t v104; // w21
  int32_t v105; // w22
  ServantSkillEntity_o *v106; // x0
  ServantSkillEntity_o *v107; // x20
  int32_t v108; // w0
  UnityEngine_Object_o *servantSkillStrengthStatusBefore; // x23
  struct ServantSkillStrengthStatus_o **p_servantSkillStrengthStatusBefore; // x20
  System_String_o *v111; // x23
  UnityEngine_Transform_o *v112; // x0
  Il2CppObject *v113; // x0
  int32_t v114; // w2
  int32_t v115; // w3
  System_String_o *v116; // x4
  int32_t v117; // w5
  int64_t v118; // x6
  System_String_o *v119; // x7
  UnityEngine_Vector2Int_o v120; // x6
  UILabel_o *v121; // x20
  UILabel_o *openAppendSkillDetailScrollLabel; // x0
  System_String_o *v123; // x1
  int32_t v124; // w2
  System_Action_o *v125; // x20
  ServantSkillMaster_o *v126; // [xsp+20h] [xbp-F0h]
  int32_t svtId; // [xsp+2Ch] [xbp-E4h]
  System_String_o *str1; // [xsp+30h] [xbp-E0h]
  int32_t v129; // [xsp+40h] [xbp-D0h]
  int32_t v130; // [xsp+48h] [xbp-C8h]
  int32_t v131; // [xsp+50h] [xbp-C0h] BYREF
  int32_t EffectChargeTurn; // [xsp+54h] [xbp-BCh] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+58h] [xbp-B8h] BYREF
  System_String_o *detail; // [xsp+60h] [xbp-B0h] BYREF
  System_String_o *name; // [xsp+68h] [xbp-A8h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v136; // 0:x0.16
  UnityEngine_Color_o v137; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v138; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = multiSkillDisplayTitleBgColor.fields.a;
  b = multiSkillDisplayTitleBgColor.fields.b;
  g = multiSkillDisplayTitleBgColor.fields.g;
  r = multiSkillDisplayTitleBgColor.fields.r;
  v21 = multiSkillDisplayTitleColor.fields.a;
  v22 = multiSkillDisplayTitleColor.fields.b;
  v23 = multiSkillDisplayTitleColor.fields.g;
  v24 = multiSkillDisplayTitleColor.fields.r;
  if ( (byte_4CF280E & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
    sub_1C7BAE8(&ImageLimitCount_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&ServantSkillStrengthStatus_TypeInfo);
    sub_1C7BAE8(&Method_SkillUpResultWindowComponent_EndOpen__);
    sub_1C7BAE8(&Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__);
    sub_1C7BAE8(&StringLiteral_2009/*"APPEND_SKILL_RESULT_AFTER_LV"*/);
    sub_1C7BAE8(&StringLiteral_12277/*"SKILL_COMBINE_FORCE_RELEASE_NAME"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_12274/*"SKILL_COMBINE_EFFFECT_UNRELEASE"*/);
    sub_1C7BAE8(&StringLiteral_2010/*"APPEND_SKILL_RESULT_LV"*/);
    byte_4CF280E = 1;
  }
  detail = 0;
  name = 0;
  entity = 0;
  EffectChargeTurn = 0;
  if ( this->fields.state )
    return;
  v33 = Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__ + 83) & 2) != 0 )
    v33 = (_QWORD *)sub_1C7BB00(Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__);
  v34 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v33, v33[4]);
  OverwriteAssetSoundName__PlaySystemSe(v34, 6, 0, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_176;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v37);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.skillInfo, 0);
  if ( !gameObject )
    goto LABEL_176;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_176;
  v130 = targetLvOld;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.skillInfo;
  if ( !gameObject )
    goto LABEL_176;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.openCallBack = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.openCallBack,
    (int32_t)callback,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  gameObject = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(multiSkillDisplayTitle, 0);
  if ( !this->fields.multiSkillDisplayTitleLabel )
    goto LABEL_176;
  v44 = (char)gameObject;
  gameObject = UnityEngine_Component__get_gameObject(
                 (UnityEngine_Component_o *)this->fields.multiSkillDisplayTitleLabel,
                 0);
  if ( !gameObject )
    goto LABEL_176;
  UnityEngine_GameObject__SetActive(gameObject, (v44 ^ 1) & 1, 0);
  if ( (v44 & 1) == 0 )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.multiSkillDisplayTitleLabel;
    if ( !gameObject )
      goto LABEL_176;
    UILabel__set_text((UILabel_o *)gameObject, multiSkillDisplayTitle, 0);
    if ( (float)((float)(v21 * v21) + (float)((float)(v22 * v22) + (float)((float)(v24 * v24) + (float)(v23 * v23)))) >= 1.0e-10 )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.multiSkillDisplayTitleLabel;
      if ( !gameObject )
        goto LABEL_176;
      v137.fields.r = v24;
      v137.fields.g = v23;
      v137.fields.b = v22;
      v137.fields.a = v21;
      UIWidget__set_color((UIWidget_o *)gameObject, v137, 0);
    }
    if ( (float)((float)(a * a) + (float)((float)(b * b) + (float)((float)(r * r) + (float)(g * g)))) >= 1.0e-10 )
    {
      multiSkillDisplayTitleBgSprite = (UnityEngine_Object_o *)this->fields.multiSkillDisplayTitleBgSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(multiSkillDisplayTitleBgSprite, 0, 0) )
      {
        gameObject = (UnityEngine_GameObject_o *)this->fields.multiSkillDisplayTitleBgSprite;
        if ( !gameObject )
          goto LABEL_176;
        v138.fields.a = a;
        v138.fields.r = r;
        v138.fields.g = g;
        v138.fields.b = b;
        UIWidget__set_color((UIWidget_o *)gameObject, v138, 0);
      }
    }
    if ( !this->fields.changedLayout )
    {
      GameObjectExtensions__AddLocalPositionY(this->fields.skillInfo, this->fields.skillInfoOffset, 0);
      GameObjectExtensions__AddLocalPositionY(this->fields.skillAfter, this->fields.afterSkillOffset, 0);
      this->fields.changedLayout = 1;
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.windowBgSprite;
    if ( !gameObject )
      goto LABEL_176;
    UIWidget__set_height((UIWidget_o *)gameObject, 300, 0);
    GameObjectExtensions__SetLocalPositionY(this->fields.skillBefore, 81.0, 0);
    GameObjectExtensions__SetLocalPositionY(this->fields.skillAfter, -57.0, 0);
    ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)this->fields.changeArrowSprite, -1.0, 0);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !gameObject )
    goto LABEL_176;
  v46 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
  gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                             targetId,
                                             (const MethodInfo_342E2FC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !skillList )
    goto LABEL_176;
  v47 = (SkillEntity_o *)gameObject;
  v48 = 0;
  max_length = skillList->max_length;
  while ( v48 < max_length )
  {
    if ( v48 >= (unsigned int)max_length )
      sub_1C7BD48(gameObject);
    v50 = skillList->m_Items[v48++];
    if ( v50 == targetId )
      goto LABEL_37;
  }
  v48 = 0;
LABEL_37:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  if ( !gameObject )
    goto LABEL_176;
  v126 = (ServantSkillMaster_o *)gameObject;
  svtId = baseSvtId;
  gameObject = (UnityEngine_GameObject_o *)ServantSkillMaster__getEntityFromSkillId(
                                             (ServantSkillMaster_o *)gameObject,
                                             baseSvtId,
                                             v48,
                                             targetId,
                                             0);
  if ( !v47 )
    goto LABEL_176;
  v51 = (ServantSkillEntity_o *)gameObject;
  v129 = targetIdOld;
  SkillEntity__getSkillMessageInfo(v47, &name, &detail, targetLv, 0);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !userServantEntity )
    goto LABEL_176;
  v52 = (ServantLimitImageMaster_o *)gameObject;
  v53 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v54 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v136.fields.currentCryptoKey = v53;
  *(_QWORD *)&v136.fields.fakeValue = v54;
  v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v136, 0);
  gameObject = (UnityEngine_GameObject_o *)UserServantEntity__getDispLimitCount(userServantEntity, 0, 0);
  if ( !v52 )
    goto LABEL_176;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(v52, v55, (int32_t)gameObject, 0);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(userServantEntity->fields.svtId, 0);
  v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(userServantEntity->fields.limitCount, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)ImageLimitCount__GetLimitCountByDispLimit(ServantImageLimitSealAfter, v59, 0);
  if ( !Master_object )
    goto LABEL_176;
  v60 = v129;
  if ( ServantLimitAddMaster__TryGetEntity(
         (ServantLimitAddMaster_o *)Master_object,
         &entity,
         v58,
         (int32_t)gameObject,
         0) )
  {
    gameObject = (UnityEngine_GameObject_o *)entity;
    if ( !entity )
      goto LABEL_176;
    if ( ServantLimitAddEntity__HasKeyOverwriteSkillName(entity, 0) )
    {
      gameObject = (UnityEngine_GameObject_o *)entity;
      if ( !entity )
        goto LABEL_176;
      name = ServantLimitAddEntity__GetOverwriteSkillName(entity, v47->fields.id, name, 0);
    }
  }
  v61 = v129 >= 1 ? v130 : targetLv - 1;
  if ( v51 )
  {
    skillNum = v51->fields.skillNum;
    if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
    IconCnt = ServantSkillStrengthStatus__GetIconCnt(skillNum, 0);
  }
  else
  {
    IconCnt = 0;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12277/*"SKILL_COMBINE_FORCE_RELEASE_NAME"*/, 0);
  skillAfter = this->fields.skillAfter;
  str1 = (System_String_o *)gameObject;
  if ( !skillAfter )
    goto LABEL_176;
  if ( isOpen )
  {
    UnityEngine_GameObject__SetActive(skillAfter, 0, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconBef;
    if ( !gameObject )
      goto LABEL_176;
    SkillIconComponent__Set_41676672((SkillIconComponent_o *)gameObject, targetId, targetLv, 0);
    skillBefChargeTimeLb = this->fields.skillBefChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v47, targetLv, 0);
    gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&EffectChargeTurn, 0);
    if ( !skillBefChargeTimeLb )
      goto LABEL_176;
    UILabel__set_text(skillBefChargeTimeLb, (System_String_o *)gameObject, 0);
    beforeChargeTimeInfo = this->fields.beforeChargeTimeInfo;
    gameObject = (UnityEngine_GameObject_o *)SkillEntity__getEffectChargeTurn(v47, v61, 0);
    v67 = isForceRelease;
    if ( !beforeChargeTimeInfo )
      goto LABEL_176;
  }
  else
  {
    UnityEngine_GameObject__SetActive(skillAfter, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconAft;
    if ( !gameObject )
      goto LABEL_176;
    SkillIconComponent__Set_41676672((SkillIconComponent_o *)gameObject, targetId, targetLv, 0);
    skillAftChargeTimeLb = this->fields.skillAftChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v47, targetLv, 0);
    gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&EffectChargeTurn, 0);
    if ( !skillAftChargeTimeLb )
      goto LABEL_176;
    UILabel__set_text(skillAftChargeTimeLb, (System_String_o *)gameObject, 0);
    AfterChargeTimeInfo = this->fields.AfterChargeTimeInfo;
    gameObject = (UnityEngine_GameObject_o *)SkillEntity__getEffectChargeTurn(v47, targetLv, 0);
    if ( !AfterChargeTimeInfo )
      goto LABEL_176;
    UnityEngine_GameObject__SetActive(AfterChargeTimeInfo, (int)gameObject > 0, 0);
    if ( isDispLv )
    {
      v70 = name;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v71 = LocalizationManager__Get((System_String_o *)StringLiteral_2009/*"APPEND_SKILL_RESULT_AFTER_LV"*/, 0);
      v131 = targetLv;
      v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v131);
      v73 = System_String__Format(v71, v72, 0);
      name = System_String__Concat_64176912(v70, v73, 0);
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftTitleLb;
    if ( !gameObject )
      goto LABEL_176;
    UILabel__set_text((UILabel_o *)gameObject, name, 0);
    skillAftForceReleaseLb = (UnityEngine_Object_o *)this->fields.skillAftForceReleaseLb;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillAftForceReleaseLb, 0, 0) )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftForceReleaseLb;
      if ( !gameObject )
        goto LABEL_176;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_176;
      UnityEngine_GameObject__SetActive(gameObject, IconCnt > 0 && isForceRelease, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftForceReleaseLb;
      if ( !gameObject )
        goto LABEL_176;
      if ( isForceRelease )
        v75 = str1;
      else
        v75 = (System_String_o *)StringLiteral_1/*""*/;
      UILabel__set_text((UILabel_o *)gameObject, v75, 0);
    }
    if ( v51 && IconCnt >= 1 )
    {
      servantSkillStrengthStatusAfter = (UnityEngine_Object_o *)this->fields.servantSkillStrengthStatusAfter;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(servantSkillStrengthStatusAfter, 0, 0) )
      {
        if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftTitleLb;
        if ( !gameObject )
          goto LABEL_176;
        PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
        gameObject = BaseMonoBehaviour__createObject_41756748((BaseMonoBehaviour_o *)this, PATH, transform, 0, 0);
        if ( !gameObject )
          goto LABEL_176;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
        this->fields.servantSkillStrengthStatusAfter = (struct ServantSkillStrengthStatus_o *)Component_object;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&this->fields.servantSkillStrengthStatusAfter,
          (int32_t)Component_object,
          v80,
          v81,
          v82,
          v83,
          v84,
          v85);
      }
      v86 = this->fields.servantSkillStrengthStatusAfter;
      skillAftTitleLb = this->fields.skillAftTitleLb;
      gameObject = (UnityEngine_GameObject_o *)ServantSkillEntity__GetStrengthStatus(v51, -1, 0);
      if ( !v86 )
        goto LABEL_176;
      v88 = (UnityEngine_Vector2Int_o)0x1200000014LL;
      ServantSkillStrengthStatus__Set(
        v86,
        skillAftTitleLb,
        (int32_t)gameObject,
        v51->fields.skillNum,
        20,
        -9,
        v88,
        280,
        this->fields.skillAftForceReleaseLb,
        0);
      v60 = v129;
    }
    else
    {
      v60 = v129;
      if ( !IconCnt && isForceRelease )
      {
        v89 = this->fields.skillAftTitleLb;
        gameObject = (UnityEngine_GameObject_o *)System_String__Concat_64176912(name, str1, 0);
        if ( !v89 )
          goto LABEL_176;
        UILabel__set_text(v89, (System_String_o *)gameObject, 0);
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftTitleLb;
      if ( !gameObject )
        goto LABEL_176;
      UILabel__SetCondensedScale((UILabel_o *)gameObject, 280, 0, 0);
    }
    UILabelHelper__SetLabelWithScroll(this->fields.skillAfterDetailScrollLabel, detail, 4, 0);
    if ( v60 < 1 )
    {
      SkillEntity__getSkillMessageInfo(v47, &name, &detail, v61, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconBef;
      if ( !gameObject )
        goto LABEL_176;
      SkillIconComponent__Set_41676672((SkillIconComponent_o *)gameObject, targetId, v61, 0);
      v67 = isForceRelease;
    }
    else
    {
      gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                                 v46,
                                                 v60,
                                                 (const MethodInfo_342E2FC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( !gameObject )
        goto LABEL_176;
      v47 = (SkillEntity_o *)gameObject;
      SkillEntity__getSkillMessageInfo((SkillEntity_o *)gameObject, &name, &detail, v61, 0);
      v67 = isForceRelease;
      if ( !isRelease && !isForceRelease )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        detail = LocalizationManager__Get((System_String_o *)StringLiteral_12274/*"SKILL_COMBINE_EFFFECT_UNRELEASE"*/, 0);
        UILabelHelper__SetLabelWithScroll(this->fields.skillAfterDetailScrollLabel, detail, 4, 0);
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconBef;
      if ( !gameObject )
        goto LABEL_176;
      SkillIconComponent__Set_41676672((SkillIconComponent_o *)gameObject, v60, v61, 0);
    }
    v90 = this->fields.skillBefChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v47, v61, 0);
    gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&EffectChargeTurn, 0);
    if ( !v90 )
      goto LABEL_176;
    UILabel__set_text(v90, (System_String_o *)gameObject, 0);
    beforeChargeTimeInfo = this->fields.beforeChargeTimeInfo;
    gameObject = (UnityEngine_GameObject_o *)SkillEntity__getEffectChargeTurn(v47, v61, 0);
    if ( !beforeChargeTimeInfo )
      goto LABEL_176;
  }
  UnityEngine_GameObject__SetActive(beforeChargeTimeInfo, (int)gameObject > 0, 0);
  if ( entity && ServantLimitAddEntity__HasKeyOverwriteSkillName(entity, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)entity;
    if ( !entity )
      goto LABEL_176;
    name = ServantLimitAddEntity__GetOverwriteSkillName(entity, v47->fields.id, name, 0);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefTitleLb;
  if ( !gameObject )
LABEL_176:
    sub_1C7BD40(gameObject, v36);
  UILabel__set_text((UILabel_o *)gameObject, name, 0);
  if ( isDispLv )
  {
    skillBefTitleLb = this->fields.skillBefTitleLb;
    v92 = name;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v93 = LocalizationManager__Get((System_String_o *)StringLiteral_2010/*"APPEND_SKILL_RESULT_LV"*/, 0);
    v94 = v130;
    if ( isOpen )
      v94 = targetLv;
    v131 = v94;
    v95 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v131);
    v96 = System_String__Format(v93, v95, 0);
    gameObject = (UnityEngine_GameObject_o *)System_String__Concat_64176912(v92, v96, 0);
    if ( !skillBefTitleLb )
      goto LABEL_176;
    UILabel__set_text(skillBefTitleLb, (System_String_o *)gameObject, 0);
  }
  if ( v51 )
  {
    v97 = v51->fields.skillNum;
    if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
    v98 = ServantSkillStrengthStatus__GetIconCnt(v97, 0);
    if ( v60 >= 1 )
    {
      EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(v126, svtId, v48, v60, 0);
      if ( EntityFromSkillId )
      {
        v100 = EntityFromSkillId->fields.skillNum;
        if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
        v98 = ServantSkillStrengthStatus__GetIconCnt(v100, 0);
      }
    }
  }
  else
  {
    v98 = 0;
  }
  skillBefForceReleaseLb = (UnityEngine_Object_o *)this->fields.skillBefForceReleaseLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillBefForceReleaseLb, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefForceReleaseLb;
    if ( !gameObject )
      goto LABEL_176;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_176;
    UnityEngine_GameObject__SetActive(gameObject, v98 > 0 && v67, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefForceReleaseLb;
    if ( !gameObject )
      goto LABEL_176;
    if ( v67 )
      v102 = str1;
    else
      v102 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v102, 0);
  }
  if ( v51 && v98 >= 1 )
  {
    StrengthStatus = ServantSkillEntity__GetStrengthStatus(v51, -1, 0);
    v104 = v51->fields.skillNum;
    v105 = StrengthStatus;
    if ( v60 >= 1 )
    {
      v106 = ServantSkillMaster__getEntityFromSkillId(v126, svtId, v48, v60, 0);
      if ( v106 )
      {
        v107 = v106;
        v108 = ServantSkillEntity__GetStrengthStatus(v106, -1, 0);
        v104 = v107->fields.skillNum;
        v105 = v108;
      }
    }
    servantSkillStrengthStatusBefore = (UnityEngine_Object_o *)this->fields.servantSkillStrengthStatusBefore;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_servantSkillStrengthStatusBefore = &this->fields.servantSkillStrengthStatusBefore;
    if ( !UnityEngine_Object__op_Equality(servantSkillStrengthStatusBefore, 0, 0) )
      goto LABEL_162;
    if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefTitleLb;
    if ( gameObject )
    {
      v111 = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
      v112 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      gameObject = BaseMonoBehaviour__createObject_41756748((BaseMonoBehaviour_o *)this, v111, v112, 0, 0);
      if ( gameObject )
      {
        v113 = UnityEngine_GameObject__GetComponent_object_(
                 gameObject,
                 (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
        *p_servantSkillStrengthStatusBefore = (struct ServantSkillStrengthStatus_o *)v113;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&this->fields.servantSkillStrengthStatusBefore,
          (int32_t)v113,
          v114,
          v115,
          v116,
          v117,
          v118,
          v119);
LABEL_162:
        gameObject = (UnityEngine_GameObject_o *)*p_servantSkillStrengthStatusBefore;
        if ( !*p_servantSkillStrengthStatusBefore )
          goto LABEL_176;
        v120 = (UnityEngine_Vector2Int_o)0x1200000014LL;
        ServantSkillStrengthStatus__Set(
          (ServantSkillStrengthStatus_o *)gameObject,
          this->fields.skillBefTitleLb,
          v105,
          v104,
          20,
          -9,
          v120,
          280,
          this->fields.skillBefForceReleaseLb,
          0);
        goto LABEL_170;
      }
    }
    goto LABEL_176;
  }
  if ( !v98 && v67 )
  {
    v121 = this->fields.skillBefTitleLb;
    gameObject = (UnityEngine_GameObject_o *)System_String__Concat_64176912(name, str1, 0);
    if ( !v121 )
      goto LABEL_176;
    UILabel__set_text(v121, (System_String_o *)gameObject, 0);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefTitleLb;
  if ( !gameObject )
    goto LABEL_176;
  UILabel__SetCondensedScale((UILabel_o *)gameObject, 280, 0, 0);
LABEL_170:
  gameObject = this->fields.openAppendSkillDetailScrollLabelRoot;
  if ( !gameObject )
    goto LABEL_176;
  UnityEngine_GameObject__SetActive(gameObject, isOpen, 0);
  if ( isOpen )
  {
    openAppendSkillDetailScrollLabel = this->fields.openAppendSkillDetailScrollLabel;
    v123 = detail;
    v124 = 10;
  }
  else
  {
    openAppendSkillDetailScrollLabel = this->fields.skillBeforeDetailScrollLabel;
    v123 = detail;
    v124 = 4;
  }
  UILabelHelper__SetLabelWithScroll(openAppendSkillDetailScrollLabel, v123, v124, 0);
  v125 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v125, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v125, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void SkillUpResultWindowComponent__SetChildrenActive(
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
  UnityEngine_GameObject__SetActive(skillInfo, enable, 0);
  skillInfo = this->fields.skillChangeInfo;
  if ( !skillInfo )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(skillInfo, v5, 0);
  skillInfo = this->fields.npInfo;
  if ( !skillInfo
    || (UnityEngine_GameObject__SetActive(skillInfo, enable, 0), (skillInfo = this->fields.friendshipInfo) == 0)
    || (UnityEngine_GameObject__SetActive(skillInfo, enable, 0), (skillInfo = this->fields.powerupInfo) == 0)
    || (v7 = enable,
        UnityEngine_GameObject__SetActive(skillInfo, v7, 0),
        (skillInfo = this->fields.costumeChangeInfo) == 0) )
  {
LABEL_8:
    sub_1C7BD40(skillInfo, enable);
  }
  UnityEngine_GameObject__SetActive(skillInfo, v7, 0);
}


void SkillUpResultWindowComponent__SetSkillInfo(
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

  if ( (byte_4CF2820 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_6975/*"GET_SKILL_NAME"*/);
    sub_1C7BAE8(&StringLiteral_1923/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/);
    sub_1C7BAE8(&StringLiteral_2901/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/);
    byte_4CF2820 = 1;
  }
  detail = 0;
  name = 0;
  text = 0;
  v24 = 0;
  skillChangeInfoSubTitleOld = this->fields.skillChangeInfoSubTitleOld;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SkillEntity = LocalizationManager__Get((System_String_o *)StringLiteral_2901/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, 0);
  if ( !skillChangeInfoSubTitleOld )
    goto LABEL_14;
  UILabel__set_text(skillChangeInfoSubTitleOld, SkillEntity, 0);
  SkillEntity = (System_String_o *)SkillUpResultWindowComponent__GetSkillEntity(v14, oldSkillId, v15);
  if ( !SkillEntity )
    goto LABEL_14;
  SkillEntity__getSkillMessageInfo((SkillEntity_o *)SkillEntity, &name, &detail, oldSkillLv, 0);
  skillChangeInfoNameOld = this->fields.skillChangeInfoNameOld;
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_6975/*"GET_SKILL_NAME"*/, 0);
  SkillEntity = System_String__Format(v17, (Il2CppObject *)name, 0);
  if ( !skillChangeInfoNameOld )
    goto LABEL_14;
  UILabel__set_text(skillChangeInfoNameOld, SkillEntity, 0);
  SkillEntity = (System_String_o *)this->fields.skillChangeInfoDetailOld;
  if ( !SkillEntity )
    goto LABEL_14;
  WrapControlText__textBBCodeAdjust((UILabel_o *)SkillEntity, detail, SkillEntity[17].fields._stringLength, 0, 0);
  skillChangeInfoSubTitleNow = this->fields.skillChangeInfoSubTitleNow;
  SkillEntity = LocalizationManager__Get((System_String_o *)StringLiteral_1923/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, 0);
  if ( !skillChangeInfoSubTitleNow )
    goto LABEL_14;
  UILabel__set_text(skillChangeInfoSubTitleNow, SkillEntity, 0);
  SkillEntity = (System_String_o *)SkillUpResultWindowComponent__GetSkillEntity(v19, nowSkillId, v20);
  if ( !SkillEntity
    || (SkillEntity__getSkillMessageInfo((SkillEntity_o *)SkillEntity, &v24, &text, nowSkillLv, 0),
        skillChangeInfoNameNow = this->fields.skillChangeInfoNameNow,
        v22 = LocalizationManager__Get((System_String_o *)StringLiteral_6975/*"GET_SKILL_NAME"*/, 0),
        SkillEntity = System_String__Format(v22, (Il2CppObject *)v24, 0),
        !skillChangeInfoNameNow)
    || (UILabel__set_text(skillChangeInfoNameNow, SkillEntity, 0),
        (SkillEntity = (System_String_o *)this->fields.skillChangeInfoDetailNow) == 0) )
  {
LABEL_14:
    sub_1C7BD40(SkillEntity, v13);
  }
  WrapControlText__textBBCodeAdjust((UILabel_o *)SkillEntity, text, SkillEntity[17].fields._stringLength, 0, 0);
}


void SkillUpResultWindowComponent__SetupNpUpResultInfoNormal(
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
  System_String_o *v30; // x1
  int32_t v31; // w2
  UILabel_o *openNpDetailScrollLabel; // x0
  System_String_o *v33; // x21
  TreasureDvcLvEntity_o *v34; // x0
  UILabel_o *v35; // x0
  System_String_o *DetalShort_43533160; // x1
  UILabel_o *resNpLvFirstLb; // x24
  struct UILabel_o *npBefDetailLabelScroll; // x20
  struct UILabel_o *npAftDetailLabelScroll; // x19
  int32_t v40; // [xsp+Ch] [xbp-74h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-70h] BYREF
  int32_t lv; // [xsp+1Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  lv = targetLv;
  if ( (byte_4CF2816 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&SkillUpResultWindowComponent_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF2816 = 1;
  }
  entity = 0;
  v40 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (TreasureDvcMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !usrSvtData )
    goto LABEL_63;
  v17 = Master_object;
  v19 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v43.fields.currentCryptoKey = v19;
  *(_QWORD *)&v43.fields.fakeValue = v18;
  Master_object = (TreasureDvcMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v43, 0);
  if ( !v17 )
    goto LABEL_63;
  v20 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v17, (int32_t)Master_object, targetId, 0);
  Master_object = (TreasureDvcMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
  if ( !v20 || !Master_object )
    goto LABEL_63;
  v21 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Master_object, v20->fields.id, targetLv, 0);
  Master_object = (TreasureDvcMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)v17,
                                           &entity,
                                           targetIdOld,
                                           (const MethodInfo_342E348 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    targetIdOld = 0;
  if ( !this->fields.npRubyNameLb )
    goto LABEL_63;
  UILabel__set_text(this->fields.npRubyNameLb, v20->fields.ruby, 0);
  Master_object = (TreasureDvcMaster_o *)this->fields.npNameLb;
  if ( !Master_object )
    goto LABEL_63;
  v22 = kind != 5;
  UILabel__set_text((UILabel_o *)Master_object, v20->fields.name, 0);
  NoblePhantasmNameOverwriter__SetOverwriteNpLabel(usrSvtData, this->fields.npNameLb, this->fields.npRubyNameLb, 0);
  v40 = targetLvOld;
  if ( targetIdOld <= 0 && kind != 5 )
  {
    if ( targetLvOld > 0 )
    {
      currentNpLvLb = this->fields.currentNpLvLb;
      Master_object = (TreasureDvcMaster_o *)System_Int32__ToString((int32_t)&v40, 0);
      if ( !currentNpLvLb )
        goto LABEL_63;
      UILabel__set_text(currentNpLvLb, (System_String_o *)Master_object, 0);
      resNpLvLb = this->fields.resNpLvLb;
      Master_object = (TreasureDvcMaster_o *)System_Int32__ToString((int32_t)&lv, 0);
      if ( !resNpLvLb )
        goto LABEL_63;
      UILabel__set_text(resNpLvLb, (System_String_o *)Master_object, 0);
      Master_object = (TreasureDvcMaster_o *)this->fields.resNpLvLb;
      if ( !Master_object )
        goto LABEL_63;
      Master_object = (TreasureDvcMaster_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)Master_object,
                                               (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      v25 = (UIWidget_o *)Master_object;
      v26 = SkillUpResultWindowComponent_TypeInfo;
      if ( !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
        v26 = SkillUpResultWindowComponent_TypeInfo;
      }
      if ( !v25 )
        goto LABEL_63;
      UIWidget__set_color(v25, v26->static_fields->COLOR_VAL, 0);
      Master_object = (TreasureDvcMaster_o *)this->fields.npRankInfo;
      if ( !Master_object )
        goto LABEL_63;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
      Master_object = (TreasureDvcMaster_o *)this->fields.npLvInfo;
      if ( !Master_object )
        goto LABEL_63;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
      Master_object = (TreasureDvcMaster_o *)this->fields.npLvFirstInfo;
      if ( !Master_object )
        goto LABEL_63;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
      if ( !v21 )
        goto LABEL_59;
      goto LABEL_43;
    }
    Master_object = (TreasureDvcMaster_o *)this->fields.npRankInfo;
    if ( !Master_object )
      goto LABEL_63;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    Master_object = (TreasureDvcMaster_o *)this->fields.npLvInfo;
    if ( !Master_object )
      goto LABEL_63;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    Master_object = (TreasureDvcMaster_o *)this->fields.npLvFirstInfo;
    if ( !Master_object )
      goto LABEL_63;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
    Master_object = (TreasureDvcMaster_o *)this->fields.npChangeSp;
    if ( !Master_object )
      goto LABEL_63;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    resNpLvFirstLb = this->fields.resNpLvFirstLb;
    Master_object = (TreasureDvcMaster_o *)System_Int32__ToString((int32_t)&lv, 0);
    if ( !resNpLvFirstLb )
      goto LABEL_63;
    UILabel__set_text(resNpLvFirstLb, (System_String_o *)Master_object, 0);
    if ( v21 )
      goto LABEL_43;
LABEL_59:
    UILabelHelper__SetLabelWithScroll(this->fields.npBefDetailLabelScroll, (System_String_o *)StringLiteral_1/*""*/, 4, 0);
    UILabelHelper__SetLabelWithScroll(this->fields.npAftDetailLabelScroll, (System_String_o *)StringLiteral_1/*""*/, 4, 0);
    openNpDetailScrollLabel = this->fields.openNpDetailScrollLabel;
    v30 = (System_String_o *)StringLiteral_1/*""*/;
    v31 = 4;
    goto LABEL_62;
  }
  Master_object = (TreasureDvcMaster_o *)this->fields.npRankInfo;
  if ( !Master_object )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v22, 0);
  Master_object = (TreasureDvcMaster_o *)this->fields.npLvInfo;
  if ( !Master_object )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  Master_object = (TreasureDvcMaster_o *)this->fields.npLvFirstInfo;
  if ( !Master_object )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  Master_object = (TreasureDvcMaster_o *)this->fields.npChangeSp;
  if ( !Master_object )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v22, 0);
  Master_object = (TreasureDvcMaster_o *)this->fields.npRankupBeforeLb;
  if ( !Master_object )
    goto LABEL_63;
  v27 = entity ? (System_String_o **)&entity[2].monitor : (System_String_o **)&StringLiteral_1/*""*/;
  UILabel__set_text((UILabel_o *)Master_object, *v27, 0);
  Master_object = (TreasureDvcMaster_o *)this->fields.npRankupAfterLb;
  if ( !Master_object )
    goto LABEL_63;
  UILabel__set_text((UILabel_o *)Master_object, v20->fields.rank, 0);
  Master_object = (TreasureDvcMaster_o *)this->fields.npRankupAfterLb;
  if ( !Master_object )
    goto LABEL_63;
  Master_object = (TreasureDvcMaster_o *)UnityEngine_Component__GetComponent_object_(
                                           (UnityEngine_Component_o *)Master_object,
                                           (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v28 = (UIWidget_o *)Master_object;
  v29 = SkillUpResultWindowComponent_TypeInfo;
  if ( !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
    v29 = SkillUpResultWindowComponent_TypeInfo;
  }
  if ( !v28 )
    goto LABEL_63;
  UIWidget__set_color(v28, v29->static_fields->COLOR_VAL, 0);
  v40 = targetLvOld;
  if ( !v21 )
    goto LABEL_59;
LABEL_43:
  Master_object = (TreasureDvcMaster_o *)this->fields.openNpDetailScrollLabelRoot;
  if ( !Master_object )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, kind == 5, 0);
  if ( kind != 5 )
  {
    if ( targetIdOld < 1 )
    {
      npBefDetailLabelScroll = this->fields.npBefDetailLabelScroll;
      DetalShort_43533160 = TreasureDvcLvEntity__getDetalShort_43533160(v21, v40, 0);
      v35 = npBefDetailLabelScroll;
LABEL_61:
      UILabelHelper__SetLabelWithScroll(v35, DetalShort_43533160, 4, 0);
      npAftDetailLabelScroll = this->fields.npAftDetailLabelScroll;
      v30 = TreasureDvcLvEntity__getDetalShort_43533160(v21, lv, 0);
      v31 = 4;
      openNpDetailScrollLabel = npAftDetailLabelScroll;
      goto LABEL_62;
    }
    v33 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (TreasureDvcMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( Master_object )
    {
      v34 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Master_object, targetIdOld, targetLvOld, 0);
      if ( v34 )
        v33 = TreasureDvcLvEntity__getDetalShort_43533160(v34, v40, 0);
      v35 = this->fields.npBefDetailLabelScroll;
      DetalShort_43533160 = v33;
      goto LABEL_61;
    }
LABEL_63:
    sub_1C7BD40(Master_object, v16);
  }
  UILabelHelper__SetLabelWithScroll(this->fields.npBefDetailLabelScroll, (System_String_o *)StringLiteral_1/*""*/, 4, 0);
  UILabelHelper__SetLabelWithScroll(this->fields.npAftDetailLabelScroll, (System_String_o *)StringLiteral_1/*""*/, 4, 0);
  v30 = TreasureDvcLvEntity__getDetalShort_43533160(v21, lv, 0);
  v31 = 10;
  openNpDetailScrollLabel = this->fields.openNpDetailScrollLabel;
LABEL_62:
  UILabelHelper__SetLabelWithScroll(openNpDetailScrollLabel, v30, v31, 0);
}


void SkillUpResultWindowComponent__SetupSpecialNpChange(
        SkillUpResultWindowComponent_o *this,
        ServantCostumeEntity_o *svtCostumeEnt,
        const MethodInfo *method)
{
  UnityEngine_Object_o *heroineNpChangeInfoTitle; // x21
  bool v6; // w0
  UILabel_o *v7; // x21
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_T__o *heroineNpChangeArrowSprites; // x20
  SkillUpResultWindowComponent___c_c *v12; // x0
  System_Action_object__o *_9__99_0; // x21
  Il2CppObject *v14; // x22
  struct SkillUpResultWindowComponent___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  UnityEngine_Object_o *heroineNpChangeExtraArrowSprite; // x20
  UISprite_o *v23; // x19

  if ( (byte_4CF281A & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_UISprite__TypeInfo);
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_BasicHelper_ForEach_UISprite___);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SkillUpResultWindowComponent___c__SetupSpecialNpChange_b__99_0__);
    sub_1C7BAE8(&SkillUpResultWindowComponent___c_TypeInfo);
    sub_1C7BAE8(&StringLiteral_3847/*"COSTUME_CHANGE_NOBLE_PHANTASM_TITLE"*/);
    sub_1C7BAE8(&StringLiteral_20469/*"img_arrow_change"*/);
    byte_4CF281A = 1;
  }
  if ( this->fields.isSpecialEffect )
  {
    heroineNpChangeInfoTitle = (UnityEngine_Object_o *)this->fields.heroineNpChangeInfoTitle;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality(heroineNpChangeInfoTitle, 0, 0);
    if ( svtCostumeEnt && v6 )
    {
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.heroineNpChangeInfoTitle, 1, 0);
      v7 = this->fields.heroineNpChangeInfoTitle;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3847/*"COSTUME_CHANGE_NOBLE_PHANTASM_TITLE"*/, 0);
      v9 = System_String__Format(v8, (Il2CppObject *)svtCostumeEnt->fields.name, 0);
      if ( !v7 )
        sub_1C7BD40(v9, v10);
      UILabel__set_text(v7, v9, 0);
    }
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.heroineNpChangeArrowSprites, 0) )
    {
      heroineNpChangeArrowSprites = (System_Collections_Generic_IEnumerable_T__o *)this->fields.heroineNpChangeArrowSprites;
      v12 = SkillUpResultWindowComponent___c_TypeInfo;
      if ( !SkillUpResultWindowComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent___c_TypeInfo);
        v12 = SkillUpResultWindowComponent___c_TypeInfo;
      }
      _9__99_0 = (System_Action_object__o *)v12->static_fields->__9__99_0;
      if ( !_9__99_0 )
      {
        if ( !v12->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v12);
          v12 = SkillUpResultWindowComponent___c_TypeInfo;
        }
        v14 = (Il2CppObject *)v12->static_fields->__9;
        _9__99_0 = (System_Action_object__o *)sub_1C7BD34(System_Action_UISprite__TypeInfo);
        System_Action_object____ctor(
          _9__99_0,
          v14,
          Method_SkillUpResultWindowComponent___c__SetupSpecialNpChange_b__99_0__,
          0);
        static_fields = SkillUpResultWindowComponent___c_TypeInfo->static_fields;
        static_fields->__9__99_0 = (struct System_Action_UISprite__o *)_9__99_0;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__99_0,
          (int32_t)_9__99_0,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21);
      }
      BasicHelper__ForEach_object_(
        heroineNpChangeArrowSprites,
        (System_Action_T__o *)_9__99_0,
        (const MethodInfo_315C348 *)Method_BasicHelper_ForEach_UISprite___);
    }
    heroineNpChangeExtraArrowSprite = (UnityEngine_Object_o *)this->fields.heroineNpChangeExtraArrowSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(heroineNpChangeExtraArrowSprite, 0, 0) )
    {
      v23 = this->fields.heroineNpChangeExtraArrowSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetDownloadCommonSprite(v23, (System_String_o *)StringLiteral_20469/*"img_arrow_change"*/, 0);
    }
  }
}


void SkillUpResultWindowComponent__SetupWindowBg(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *windowBgSprite; // x20
  UISprite_o *v4; // x19

  if ( (byte_4CF2819 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_20749/*"img_skillwindow_sp"*/);
    byte_4CF2819 = 1;
  }
  if ( this->fields.isSpecialEffect )
  {
    windowBgSprite = (UnityEngine_Object_o *)this->fields.windowBgSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(windowBgSprite, 0, 0) )
    {
      v4 = this->fields.windowBgSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetDownloadCommonSprite(v4, (System_String_o *)StringLiteral_20749/*"img_skillwindow_sp"*/, 0);
    }
  }
}


void SkillUpResultWindowComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CF2824 & 1) == 0 )
  {
    sub_1C7BAE8(&SkillUpResultWindowComponent___c_TypeInfo);
    byte_4CF2824 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(SkillUpResultWindowComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SkillUpResultWindowComponent___c_TypeInfo->static_fields->__9 = (struct SkillUpResultWindowComponent___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)SkillUpResultWindowComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SkillUpResultWindowComponent___c___ctor(SkillUpResultWindowComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SkillUpResultWindowComponent___c___SetupSpecialNpChange_b__99_0(
        SkillUpResultWindowComponent___c_o *this,
        UISprite_o *sp,
        const MethodInfo *method)
{
  if ( (byte_4CF2825 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_20529/*"img_combine_arrow_sp"*/);
    byte_4CF2825 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite(sp, (System_String_o *)StringLiteral_20529/*"img_combine_arrow_sp"*/, 0);
}


void SkillUpResultWindowComponent___c__DisplayClass104_0___ctor(
        SkillUpResultWindowComponent___c__DisplayClass104_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SkillUpResultWindowComponent___c__DisplayClass104_0___CloseToNext_b__0(
        SkillUpResultWindowComponent___c__DisplayClass104_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}