void __fastcall SkillUpResultWindowComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B6A670 & 1) == 0 )
  {
    sub_1BE4ACC(&SkillUpResultWindowComponent_TypeInfo, v1);
    byte_4B6A670 = 1;
  }
  *SkillUpResultWindowComponent_TypeInfo->static_fields = (struct SkillUpResultWindowComponent_StaticFields)xmmword_BE2AF0;
}


void __fastcall SkillUpResultWindowComponent___ctor(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4B6A66F & 1) == 0 )
  {
    sub_1BE4ACC(&BaseDialog_TypeInfo, method);
    byte_4B6A66F = 1;
  }
  this->fields.svtTransformCount = 1;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SkillUpResultWindowComponent__Close(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x0
  System_Action_o *v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4B6A66A & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_SkillUpResultWindowComponent_EndClose__, v3);
    byte_4B6A66A = 1;
  }
  v4 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndClose__, 0LL);
  SkillUpResultWindowComponent__Close_46105540(this, v5, v6);
}


void __fastcall SkillUpResultWindowComponent__Close_46105540(
        SkillUpResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4B6A66B & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, callback);
    sub_1BE4ACC(&Method_SkillUpResultWindowComponent_EndClose__, v4);
    byte_4B6A66B = 1;
  }
  v5 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
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
    sub_1BE4D28(gameObject, v4);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall SkillUpResultWindowComponent__EndOpen(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_o *openCallBack; // x19
  PartyOrganizationUtility_o *p_openCallBack; // x0

  openCallBack = this->fields.openCallBack;
  if ( openCallBack )
  {
    p_openCallBack = (PartyOrganizationUtility_o *)&this->fields.openCallBack;
    p_openCallBack->klass = 0LL;
    sub_1BE4A70(p_openCallBack, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))openCallBack->fields.m_target)(
      openCallBack->fields.original_method_info,
      *(_QWORD *)&openCallBack->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
ServantSkillEntity_o *__fastcall SkillUpResultWindowComponent__GetServantSkillEntity(
        SkillUpResultWindowComponent_o *this,
        int32_t svtId,
        int32_t num,
        int32_t skillId,
        const MethodInfo *method)
{
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4B6A66D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantSkillMaster___, *(_QWORD *)&svtId);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B6A66D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantSkillMaster___)) == 0LL )
  {
    sub_1BE4D28(Instance, v10);
  }
  return ServantSkillMaster__getEntityFromSkillId((ServantSkillMaster_o *)Instance, svtId, num, skillId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
SkillEntity_o *__fastcall SkillUpResultWindowComponent__GetSkillEntity(
        SkillUpResultWindowComponent_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B6A66C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_SkillMaster___, *(_QWORD *)&skillId);
    sub_1BE4ACC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B6A66C = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_1BE4D28(Instance, v7);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    skillId,
    (const MethodInfo_31FD818 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
  return (SkillEntity_o *)entity;
}


void __fastcall SkillUpResultWindowComponent__Init(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BE4D28(0LL, v4);
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
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  __int64 gameObject; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x2
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Text_StringBuilder_o *v39; // x20
  int32_t SvtId; // w22
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  System_Collections_Generic_List_object__o *v43; // x0
  Il2CppObject *current; // x23
  System_String_o *v45; // x0
  __int64 v46; // x1
  System_String_o *v47; // x24
  Il2CppObject *QuestName; // x1
  System_String_o *v49; // x0
  int32_t v50; // w23
  UILabel_o *friendshipLabel; // x22
  UnityEngine_GameObject_o *v52; // x20
  UILabel_o *friendshipCurrentLvLabel; // x20
  UILabel_o *friendshipResultLvLabel; // x20
  UIWidget_o *v55; // x20
  SkillUpResultWindowComponent_c *v56; // x8
  struct UILabel_o *v57; // x8
  System_Action_o *v58; // x20
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+0h] [xbp-90h] BYREF
  int32_t FriendShipRank; // [xsp+1Ch] [xbp-74h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+20h] [xbp-70h] BYREF
  int32_t oldFriendShipRanka; // [xsp+3Ch] [xbp-54h] BYREF

  oldFriendShipRanka = oldFriendShipRank;
  if ( (byte_4B6A668 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, usrSvtData);
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_UIWidget___, v9);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__, v14);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v15);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v16);
    sub_1BE4ACC(&ServantCommentManager_TypeInfo, v17);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BE4ACC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v19);
    sub_1BE4ACC(&Method_SkillUpResultWindowComponent_EndOpen__, v20);
    sub_1BE4ACC(&Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__, v21);
    sub_1BE4ACC(&SkillUpResultWindowComponent_TypeInfo, v22);
    sub_1BE4ACC(&System_Text_StringBuilder_TypeInfo, v23);
    sub_1BE4ACC(&StringLiteral_11254/*"RESULT_BOUNDS_OPENQUEST"*/, v24);
    sub_1BE4ACC(&StringLiteral_11256/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/, v25);
    sub_1BE4ACC(&StringLiteral_11250/*"RESULT_BOUNDS_GETVOICE"*/, v26);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v27);
    byte_4B6A668 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  FriendShipRank = 0;
  if ( !this->fields.state )
  {
    v28 = Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__ + 83) & 2) != 0 )
      v28 = (_QWORD *)sub_1BE4AE4(Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__);
    v29 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v28, v28[4]);
    OverwriteAssetSoundName__PlaySystemSe(v29, 6, 0LL);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      SkillUpResultWindowComponent__SetChildrenActive(this, 0, v32);
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
            sub_1BE4A70(
              (PartyOrganizationUtility_o *)&this->fields.openCallBack,
              (int64_t)callback,
              v33,
              v34,
              v35,
              v36,
              v37,
              v38);
            gameObject = (__int64)this->fields.friendshipLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              v39 = (System_Text_StringBuilder_o *)sub_1BE4D18(System_Text_StringBuilder_TypeInfo);
              System_Text_StringBuilder___ctor(v39, 0LL);
              if ( usrSvtData )
              {
                SvtId = UserServantEntity__getSvtId(usrSvtData, 0LL);
                gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( gameObject )
                {
                  MasterData_object = DataManager__GetMasterData_object_(
                                        (DataManager_o *)gameObject,
                                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  if ( !byte_4B61717 )
                  {
                    sub_1BE4ACC(&NetworkManager_TypeInfo, v31);
                    byte_4B61717 = 1;
                  }
                  gameObject = (__int64)NetworkManager_TypeInfo;
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                    gameObject = (__int64)NetworkManager_TypeInfo;
                  }
                  if ( MasterData_object )
                  {
                    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                                         (UserServantCollectionMaster_o *)MasterData_object,
                                         *(_QWORD *)(*(_QWORD *)(gameObject + 184) + 64LL),
                                         SvtId,
                                         0LL);
                    gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                    if ( gameObject )
                    {
                      v43 = (System_Collections_Generic_List_object__o *)clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
                                                                           (clsQuestCheck_o *)gameObject,
                                                                           SvtId,
                                                                           oldFriendShipRank,
                                                                           8,
                                                                           0LL);
                      if ( v43 )
                      {
                        System_Collections_Generic_List_object___GetEnumerator(
                          (System_Collections_Generic_List_Enumerator_T__o *)&v59,
                          v43,
                          (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
                        v61 = v59;
                        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                                  &v61,
                                  (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
                        {
                          current = v61.fields._current;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v45 = LocalizationManager__Get((System_String_o *)StringLiteral_11254/*"RESULT_BOUNDS_OPENQUEST"*/, 0LL);
                          if ( !current )
                            sub_1BE4D28(v45, v46);
                          v47 = v45;
                          QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0LL);
                          v49 = System_String__Format(v47, QuestName, 0LL);
                          if ( !v39 )
                            sub_1BE4D28(v49, v49);
                          System_Text_StringBuilder__AppendLine_61861184(v39, v49, 0LL);
                        }
                        System_Collections_Generic_List_Enumerator_object___Dispose(
                          &v61,
                          (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
                      }
                      v50 = oldFriendShipRanka;
                      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
                      gameObject = ServantCommentManager__IsOpenByServantFriendShip(SvtId, v50, 0LL);
                      if ( (gameObject & 1) != 0 )
                      {
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11256/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/, 0LL);
                        if ( !v39 )
                          goto LABEL_60;
                        gameObject = (__int64)System_Text_StringBuilder__AppendLine_61861184(
                                                v39,
                                                (System_String_o *)gameObject,
                                                0LL);
                      }
                      if ( !EntityDefinitely )
                        goto LABEL_60;
                      gameObject = ServantVoiceMaster__isOpenByServantFriendShip(
                                     SvtId,
                                     EntityDefinitely->fields.maxLimitCount,
                                     oldFriendShipRanka,
                                     0LL);
                      if ( (gameObject & 1) != 0 )
                      {
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11250/*"RESULT_BOUNDS_GETVOICE"*/, 0LL);
                        if ( !v39 )
                          goto LABEL_60;
                        System_Text_StringBuilder__AppendLine_61861184(v39, (System_String_o *)gameObject, 0LL);
                      }
                      else if ( !v39 )
                      {
                        goto LABEL_60;
                      }
                      friendshipLabel = this->fields.friendshipLabel;
                      gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v39->klass->vtable._3_ToString.method)(
                                     v39,
                                     v39->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                      if ( friendshipLabel )
                      {
                        UILabel__set_text(friendshipLabel, (System_String_o *)gameObject, 0LL);
                        gameObject = (__int64)this->fields.friendshipLvInfo;
                        if ( gameObject )
                        {
                          v52 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0LL);
                          gameObject = UserServantCollectionEntity__getFriendShipRank(EntityDefinitely, 0LL);
                          if ( v52 )
                          {
                            UnityEngine_GameObject__SetActive(v52, (int)gameObject > oldFriendShipRanka, 0LL);
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
                                                          (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
                                  v55 = (UIWidget_o *)gameObject;
                                  v56 = SkillUpResultWindowComponent_TypeInfo;
                                  if ( !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
                                    v56 = SkillUpResultWindowComponent_TypeInfo;
                                  }
                                  if ( v55 )
                                  {
                                    UIWidget__set_color(v55, v56->static_fields->COLOR_VAL, 0LL);
                                    v57 = this->fields.friendshipLabel;
                                    if ( v57 )
                                    {
                                      if ( !System_String__IsNullOrEmpty(v57->fields.mText, 0LL) )
                                      {
LABEL_58:
                                        v58 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
                                        System_Action___ctor(
                                          v58,
                                          (Il2CppObject *)this,
                                          Method_SkillUpResultWindowComponent_EndOpen__,
                                          0LL);
                                        BaseDialog__Open((BaseDialog_o *)this, v58, 0, 0LL);
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
    sub_1BE4D28(gameObject, v31);
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

  if ( (byte_4B6A665 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__, addManager);
    byte_4B6A665 = 1;
  }
  v13 = Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1BE4AE4(Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__);
  v14 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v13, v13[4]);
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
    sub_1BE4D28(gameObject, v16);
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


// local variable allocation has failed, the output may be wrong!
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
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3

  if ( (byte_4B6A664 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__, *(_QWORD *)&oldTargetId);
    byte_4B6A664 = 1;
  }
  v13 = Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1BE4AE4(Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__);
  v14 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v13, v13[4]);
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
    || (HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, oldTargetId, oldTargetLv, v18),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoNow) == 0LL) )
  {
LABEL_16:
    sub_1BE4D28(gameObject, v16);
  }
  HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, nowTargetId, nowTargetLv, v19);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0LL);
}


void __fastcall SkillUpResultWindowComponent__OpenNpUpResultInfo_46100612(
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  _BOOL4 v32; // w26
  _BOOL4 v33; // w27
  _BOOL4 IsHeroine; // w28
  _BOOL4 v35; // w20
  int v36; // w27
  int v37; // w28
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x7
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x6
  struct ServantTreasureDeviceAddEntity_o *tdAddEntity_k__BackingField; // x8
  struct System_String_array *titles; // x8
  System_String_o *titleText; // x3
  System_Action_o *v46; // x20
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v47; // [xsp+0h] [xbp-70h]
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B6A666 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, usrSvtData);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v18);
    sub_1BE4ACC(&Method_SkillUpResultWindowComponent_EndOpen__, v19);
    sub_1BE4ACC(&Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___77269544, v20);
    byte_4B6A666 = 1;
  }
  transformInfo = 0LL;
  if ( !this->fields.state )
  {
    v21 = Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___77269544;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___77269544 + 83) & 2) != 0 )
      v21 = (_QWORD *)sub_1BE4AE4(Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___77269544);
    v22 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v21, v21[4]);
    OverwriteAssetSoundName__PlaySystemSe(v22, 6, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      SkillUpResultWindowComponent__SetChildrenActive(this, 0, v25);
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
            sub_1BE4A70(
              (PartyOrganizationUtility_o *)&this->fields.openCallBack,
              (int64_t)callback,
              v26,
              v27,
              v28,
              v29,
              v30,
              v31);
            if ( usrSvtData )
            {
              gameObject = (UnityEngine_GameObject_o *)UserServantEntity__GetTransformCount(usrSvtData, 1, 0LL);
              this->fields.svtTransformCount = (int)gameObject;
              if ( addManager )
              {
                v47 = addManager;
                v32 = addManager->fields._tdAddEntity_k__BackingField != 0LL;
                v33 = (int)gameObject > 1;
                IsHeroine = UserServantEntity__IsHeroine(usrSvtData, 0LL);
                v35 = targetIdOld != targetId;
                if ( targetIdOld == targetId && UserServantEntity__IsHeroine(usrSvtData, 0LL) )
                  targetIdOld = 0;
                gameObject = this->fields.npInfoAddRoot;
                if ( gameObject )
                {
                  v36 = v33 || v32;
                  UnityEngine_GameObject__SetActive(gameObject, v36, 0LL);
                  gameObject = this->fields.npInfoNormalRoot;
                  if ( gameObject )
                  {
                    v37 = targetLvOld != targetLv && IsHeroine && v35;
                    UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)(v37 | (kind == 18) | v36) != 1, 0LL);
                    gameObject = this->fields.npInfoHeroineNpChangeRoot;
                    if ( gameObject )
                    {
                      UnityEngine_GameObject__SetActive(gameObject, v37, 0LL);
                      gameObject = this->fields.npInfoNpChangeRoot;
                      if ( gameObject )
                      {
                        UnityEngine_GameObject__SetActive(gameObject, kind == 18, 0LL);
                        if ( v37 )
                        {
                          gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoOld;
                          if ( gameObject )
                          {
                            HeroineNpChangeInfoComponent__Setup(
                              (HeroineNpChangeInfoComponent_o *)gameObject,
                              targetIdOld,
                              targetLvOld,
                              v38);
                            gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoNow;
                            if ( gameObject )
                            {
                              HeroineNpChangeInfoComponent__Setup(
                                (HeroineNpChangeInfoComponent_o *)gameObject,
                                targetId,
                                targetLv,
                                v40);
LABEL_40:
                              v46 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
                              System_Action___ctor(
                                v46,
                                (Il2CppObject *)this,
                                Method_SkillUpResultWindowComponent_EndOpen__,
                                0LL);
                              BaseDialog__Open((BaseDialog_o *)this, v46, 0, 0LL);
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
                              v38);
                            gameObject = (UnityEngine_GameObject_o *)this->fields.npChangeInfoNow;
                            if ( gameObject )
                            {
                              HeroineNpChangeInfoComponent__SetupForNpChange(
                                (HeroineNpChangeInfoComponent_o *)gameObject,
                                targetId,
                                targetLv,
                                v41);
                              goto LABEL_40;
                            }
                          }
                        }
                        else
                        {
                          if ( !v36 )
                          {
                            SkillUpResultWindowComponent__SetupNpUpResultInfoNormal(
                              this,
                              usrSvtData,
                              targetId,
                              targetLv,
                              targetIdOld,
                              targetLvOld,
                              kind,
                              v39);
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
                                                                         (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                              if ( gameObject )
                              {
                                UIWidget__set_height((UIWidget_o *)gameObject, 300, 0LL);
                                gameObject = (UnityEngine_GameObject_o *)UserServantEntity__GetTransformedServantInfo(
                                                                           usrSvtData,
                                                                           &transformInfo,
                                                                           0,
                                                                           0LL);
                                tdAddEntity_k__BackingField = v47->fields._tdAddEntity_k__BackingField;
                                if ( !tdAddEntity_k__BackingField )
                                  goto LABEL_35;
                                titles = tdAddEntity_k__BackingField->fields.titles;
                                if ( !titles )
                                  goto LABEL_35;
                                if ( !titles->max_length )
                                  sub_1BE4D30(gameObject, v24);
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
                                    v47,
                                    0,
                                    titleText,
                                    kind == 8,
                                    this->fields.svtTransformCount,
                                    v42);
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
    sub_1BE4D28(gameObject, v24);
  }
}


void __fastcall SkillUpResultWindowComponent__OpenPowerUpResultInfo(
        SkillUpResultWindowComponent_o *this,
        UserServantEntity_o *usrSvtData,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *v26; // x21
  __int64 v27; // x20
  __int64 v28; // x22
  Il2CppObject *Entity; // x0
  UILabel_o *powerupLabel; // x20
  Il2CppObject *v31; // x21
  System_Action_o *v32; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4B6A669 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, usrSvtData);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v9);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BE4ACC(&Method_SkillUpResultWindowComponent_EndOpen__, v12);
    sub_1BE4ACC(&Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__, v13);
    sub_1BE4ACC(&StringLiteral_11255/*"RESULT_BOUNDS_POWERUP"*/, v14);
    byte_4B6A669 = 1;
  }
  if ( !this->fields.state )
  {
    v15 = Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_1BE4AE4(Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__);
    v16 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v15, v15[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 6, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    SkillUpResultWindowComponent__SetChildrenActive(this, 0, v19);
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
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.openCallBack,
      (int64_t)callback,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_20;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !usrSvtData )
      goto LABEL_20;
    v26 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
    v28 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
    v27 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v33.fields.currentCryptoKey = v28;
    *(_QWORD *)&v33.fields.fakeValue = v27;
    gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                               v33,
                                               0LL);
    if ( !v26 )
      goto LABEL_20;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v26,
               (int32_t)gameObject,
               (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    powerupLabel = this->fields.powerupLabel;
    v31 = Entity;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11255/*"RESULT_BOUNDS_POWERUP"*/, 0LL);
    if ( !v31
      || (gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                     (System_String_o *)gameObject,
                                                     (Il2CppObject *)v31[4].monitor,
                                                     0LL),
          !powerupLabel) )
    {
LABEL_20:
      sub_1BE4D28(gameObject, v18);
    }
    UILabel__set_text(powerupLabel, (System_String_o *)gameObject, 0LL);
    v32 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v32, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v32, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillUpResultWindowComponent__OpenSkillChangeMessage(
        SkillUpResultWindowComponent_o *this,
        int32_t svtId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  System_String_o *BattleName; // x0
  UILabel_o *costumeChangeLabel; // x21
  Il2CppObject *v19; // x22
  System_String_o *v20; // x0

  if ( (byte_4B6A662 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v8);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BE4ACC(&Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__, v10);
    sub_1BE4ACC(&StringLiteral_3935/*"COSTUME_CHANGE_DESCRIPTION"*/, v11);
    byte_4B6A662 = 1;
  }
  v12 = Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1BE4AE4(Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__);
  v13 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 6, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v16);
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
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)gameObject,
                                             (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                             svtId,
                                             (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !gameObject )
    goto LABEL_16;
  BattleName = ServantEntity__getBattleName((ServantEntity_o *)gameObject, 0, -1, 0LL);
  costumeChangeLabel = this->fields.costumeChangeLabel;
  v19 = (Il2CppObject *)BattleName;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3935/*"COSTUME_CHANGE_DESCRIPTION"*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v20, v19, 0LL);
  if ( !costumeChangeLabel )
LABEL_16:
    sub_1BE4D28(gameObject, v15);
  UILabel__set_text(costumeChangeLabel, (System_String_o *)gameObject, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v15; // x1
  __int64 v16; // x1
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  UILabel_o *skillChangeInfoTitle; // x26
  System_String_o *v23; // x0
  const MethodInfo *v24; // x5

  if ( (byte_4B6A663 & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, *(_QWORD *)&oldSkillId);
    sub_1BE4ACC(&Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__, v15);
    sub_1BE4ACC(&StringLiteral_3936/*"COSTUME_CHANGE_SKILL_TITLE"*/, v16);
    byte_4B6A663 = 1;
  }
  v17 = Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__ + 83) & 2) != 0 )
    v17 = (_QWORD *)sub_1BE4AE4(Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__);
  v18 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v17, v17[4]);
  OverwriteAssetSoundName__PlaySystemSe(v18, 6, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v21);
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
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3936/*"COSTUME_CHANGE_SKILL_TITLE"*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v23, (Il2CppObject *)costumeName, 0LL);
  if ( !skillChangeInfoTitle )
LABEL_13:
    sub_1BE4D28(gameObject, v20);
  UILabel__set_text(skillChangeInfoTitle, (System_String_o *)gameObject, 0LL);
  SkillUpResultWindowComponent__SetSkillInfo(this, oldSkillId, oldSkillLv, nowSkillId, nowSkillLv, v24);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
        bool isForceRelease,
        const MethodInfo *method)
{
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
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v41; // x1
  const MethodInfo *v42; // x2
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  char v49; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v50; // x21
  SkillEntity_o *v51; // x29
  int32_t v52; // w24
  il2cpp_array_size_t max_length; // w8
  int32_t v54; // w9
  ServantSkillMaster_o *v55; // x20
  ServantSkillEntity_o *v56; // x26
  int32_t v57; // w28
  int32_t skillNum; // w22
  int32_t IconCnt; // w22
  UnityEngine_GameObject_o *skillAfter; // x8
  UILabel_o *skillBefChargeTimeLb; // x21
  UnityEngine_GameObject_o *beforeChargeTimeInfo; // x21
  bool v63; // w27
  UILabel_o *skillAftChargeTimeLb; // x25
  UnityEngine_GameObject_o *AfterChargeTimeInfo; // x25
  System_String_o *v66; // x25
  System_String_o *v67; // x20
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  Il2CppObject *v71; // x0
  System_String_o *v72; // x0
  UnityEngine_Object_o *skillAftForceReleaseLb; // x25
  System_String_o *v74; // x1
  UnityEngine_Object_o *servantSkillStrengthStatusAfter; // x22
  System_String_o *PATH; // x20
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  ServantSkillStrengthStatus_o *v85; // x22
  UILabel_o *skillAftTitleLb; // x25
  UILabel_o *v87; // x22
  int32_t m_CachedPtr; // w22
  UILabel_o *v89; // x21
  UILabel_o *skillBefTitleLb; // x21
  System_String_o *v91; // x22
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  System_String_o *v95; // x20
  int32_t v96; // w8
  Il2CppObject *v97; // x0
  System_String_o *v98; // x0
  int32_t v99; // w21
  int32_t v100; // w21
  ServantSkillEntity_o *EntityFromSkillId; // x0
  int32_t v102; // w21
  UnityEngine_Object_o *skillBefForceReleaseLb; // x22
  System_String_o *v104; // x1
  int32_t StrengthStatus; // w0
  int32_t v106; // w21
  int32_t v107; // w22
  ServantSkillEntity_o *v108; // x0
  ServantSkillEntity_o *v109; // x20
  int32_t v110; // w0
  UnityEngine_Object_o *servantSkillStrengthStatusBefore; // x23
  struct ServantSkillStrengthStatus_o **p_servantSkillStrengthStatusBefore; // x20
  System_String_o *v113; // x23
  UnityEngine_Transform_o *v114; // x0
  Il2CppObject *v115; // x0
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  UILabel_o *v122; // x20
  System_Action_o *v123; // x20
  ServantSkillMaster_o *v124; // [xsp+28h] [xbp-A8h]
  int32_t svtId; // [xsp+34h] [xbp-9Ch]
  System_String_o *str1; // [xsp+38h] [xbp-98h]
  int32_t v127; // [xsp+50h] [xbp-80h]
  int key; // [xsp+54h] [xbp-7Ch]
  int32_t v129; // [xsp+58h] [xbp-78h] BYREF
  int32_t EffectChargeTurn; // [xsp+5Ch] [xbp-74h] BYREF
  System_String_o *detail; // [xsp+60h] [xbp-70h] BYREF
  System_String_o *name; // [xsp+68h] [xbp-68h] BYREF
  UnityEngine_Vector2Int_o v133; // 0:x6.8
  UnityEngine_Vector2Int_o v134; // 0:x6.8

  if ( (byte_4B6A661 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&targetId);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantSkillMaster___, v22);
    sub_1BE4ACC(&Method_DataManager_GetMaster_SkillMaster___, v23);
    sub_1BE4ACC(&DataManager_TypeInfo, v24);
    sub_1BE4ACC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v25);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, v26);
    sub_1BE4ACC(&int_TypeInfo, v27);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v28);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v29);
    sub_1BE4ACC(&ServantSkillStrengthStatus_TypeInfo, v30);
    sub_1BE4ACC(&Method_SkillUpResultWindowComponent_EndOpen__, v31);
    sub_1BE4ACC(&Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__, v32);
    sub_1BE4ACC(&StringLiteral_2134/*"APPEND_SKILL_RESULT_AFTER_LV"*/, v33);
    sub_1BE4ACC(&StringLiteral_12335/*"SKILL_COMBINE_FORCE_RELEASE_NAME"*/, v34);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v35);
    sub_1BE4ACC(&StringLiteral_12332/*"SKILL_COMBINE_EFFFECT_UNRELEASE"*/, v36);
    sub_1BE4ACC(&StringLiteral_2135/*"APPEND_SKILL_RESULT_LV"*/, v37);
    byte_4B6A661 = 1;
  }
  detail = 0LL;
  name = 0LL;
  EffectChargeTurn = 0;
  if ( this->fields.state )
    return;
  v38 = Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__ + 83) & 2) != 0 )
    v38 = (_QWORD *)sub_1BE4AE4(Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__);
  v39 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v38, v38[4]);
  OverwriteAssetSoundName__PlaySystemSe(v39, 6, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_147;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v42);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.skillInfo, 0LL);
  if ( !gameObject )
    goto LABEL_147;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_147;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.skillInfo;
  if ( !gameObject )
    goto LABEL_147;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.openCallBack = callback;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.openCallBack, (int64_t)callback, v43, v44, v45, v46, v47, v48);
  gameObject = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(dispBattleName, 0LL);
  if ( !this->fields.titleLabel )
    goto LABEL_147;
  v49 = (char)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.titleLabel, 0LL);
  if ( !gameObject )
    goto LABEL_147;
  UnityEngine_GameObject__SetActive(gameObject, (v49 ^ 1) & 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel;
  if ( !gameObject )
    goto LABEL_147;
  UILabel__set_text((UILabel_o *)gameObject, dispBattleName, 0LL);
  if ( (v49 & 1) == 0 && !this->fields.changedLayout )
  {
    GameObjectExtensions__AddLocalPositionY(this->fields.skillInfo, this->fields.skillInfoOffset, 0LL);
    this->fields.changedLayout = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !gameObject )
    goto LABEL_147;
  v127 = targetLvOld;
  v50 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
  gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                             targetId,
                                             (const MethodInfo_31FD7C4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !skillList )
    goto LABEL_147;
  v51 = (SkillEntity_o *)gameObject;
  v52 = 0;
  max_length = skillList->max_length;
  while ( v52 < (int)max_length )
  {
    if ( v52 >= max_length )
      sub_1BE4D30(gameObject, v41);
    v54 = skillList->m_Items[++v52];
    if ( v54 == targetId )
      goto LABEL_26;
  }
  v52 = 0;
LABEL_26:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantSkillMaster___);
  if ( !gameObject )
    goto LABEL_147;
  v55 = (ServantSkillMaster_o *)gameObject;
  svtId = baseSvtId;
  gameObject = (UnityEngine_GameObject_o *)ServantSkillMaster__getEntityFromSkillId(
                                             (ServantSkillMaster_o *)gameObject,
                                             baseSvtId,
                                             v52,
                                             targetId,
                                             0LL);
  if ( !v51 )
    goto LABEL_147;
  v56 = (ServantSkillEntity_o *)gameObject;
  SkillEntity__getSkillMessageInfo(v51, &name, &detail, targetLv, 0LL);
  key = targetIdOld;
  v57 = targetIdOld >= 1 ? v127 : targetLv - 1;
  if ( v56 )
  {
    skillNum = v56->fields.skillNum;
    if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
    IconCnt = ServantSkillStrengthStatus__GetIconCnt(skillNum, 0LL);
  }
  else
  {
    IconCnt = 0;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12335/*"SKILL_COMBINE_FORCE_RELEASE_NAME"*/, 0LL);
  skillAfter = this->fields.skillAfter;
  str1 = (System_String_o *)gameObject;
  if ( !skillAfter )
    goto LABEL_147;
  v124 = v55;
  if ( isOpen )
  {
    UnityEngine_GameObject__SetActive(skillAfter, 0, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconBef;
    if ( !gameObject )
      goto LABEL_147;
    SkillIconComponent__Set_39141652((SkillIconComponent_o *)gameObject, targetId, targetLv, 0LL);
    skillBefChargeTimeLb = this->fields.skillBefChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v51, targetLv, 0LL);
    gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&EffectChargeTurn, 0LL);
    if ( !skillBefChargeTimeLb )
      goto LABEL_147;
    UILabel__set_text(skillBefChargeTimeLb, (System_String_o *)gameObject, 0LL);
    beforeChargeTimeInfo = this->fields.beforeChargeTimeInfo;
    gameObject = (UnityEngine_GameObject_o *)SkillEntity__getEffectChargeTurn(v51, v57, 0LL);
    v63 = isForceRelease;
    if ( !beforeChargeTimeInfo )
      goto LABEL_147;
  }
  else
  {
    UnityEngine_GameObject__SetActive(skillAfter, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconAft;
    if ( !gameObject )
      goto LABEL_147;
    SkillIconComponent__Set_39141652((SkillIconComponent_o *)gameObject, targetId, targetLv, 0LL);
    skillAftChargeTimeLb = this->fields.skillAftChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v51, targetLv, 0LL);
    gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&EffectChargeTurn, 0LL);
    if ( !skillAftChargeTimeLb )
      goto LABEL_147;
    UILabel__set_text(skillAftChargeTimeLb, (System_String_o *)gameObject, 0LL);
    AfterChargeTimeInfo = this->fields.AfterChargeTimeInfo;
    gameObject = (UnityEngine_GameObject_o *)SkillEntity__getEffectChargeTurn(v51, targetLv, 0LL);
    if ( !AfterChargeTimeInfo )
      goto LABEL_147;
    UnityEngine_GameObject__SetActive(AfterChargeTimeInfo, (int)gameObject > 0, 0LL);
    if ( isDispLv )
    {
      v66 = name;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v67 = LocalizationManager__Get((System_String_o *)StringLiteral_2134/*"APPEND_SKILL_RESULT_AFTER_LV"*/, 0LL);
      v129 = targetLv;
      v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v129, v68, v69, v70);
      v72 = System_String__Format(v67, v71, 0LL);
      name = System_String__Concat_62698808(v66, v72, 0LL);
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftTitleLb;
    if ( !gameObject )
      goto LABEL_147;
    UILabel__set_text((UILabel_o *)gameObject, name, 0LL);
    skillAftForceReleaseLb = (UnityEngine_Object_o *)this->fields.skillAftForceReleaseLb;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillAftForceReleaseLb, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftForceReleaseLb;
      if ( !gameObject )
        goto LABEL_147;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_147;
      UnityEngine_GameObject__SetActive(gameObject, IconCnt > 0 && isForceRelease, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftForceReleaseLb;
      if ( !gameObject )
        goto LABEL_147;
      if ( isForceRelease )
        v74 = str1;
      else
        v74 = (System_String_o *)StringLiteral_1/*""*/;
      UILabel__set_text((UILabel_o *)gameObject, v74, 0LL);
    }
    if ( v56 && IconCnt >= 1 )
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
          goto LABEL_147;
        PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
        gameObject = BaseMonoBehaviour__createObject_39146996((BaseMonoBehaviour_o *)this, PATH, transform, 0LL, 0LL);
        if ( !gameObject )
          goto LABEL_147;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
        this->fields.servantSkillStrengthStatusAfter = (struct ServantSkillStrengthStatus_o *)Component_object;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&this->fields.servantSkillStrengthStatusAfter,
          (int64_t)Component_object,
          v79,
          v80,
          v81,
          v82,
          v83,
          v84);
      }
      v85 = this->fields.servantSkillStrengthStatusAfter;
      skillAftTitleLb = this->fields.skillAftTitleLb;
      gameObject = (UnityEngine_GameObject_o *)ServantSkillEntity__GetStrengthStatus(v56, 0LL);
      if ( !v85 )
        goto LABEL_147;
      v133 = (UnityEngine_Vector2Int_o)0x1200000014LL;
      ServantSkillStrengthStatus__Set(
        v85,
        skillAftTitleLb,
        (int32_t)gameObject,
        v56->fields.skillNum,
        20,
        -9,
        v133,
        280,
        this->fields.skillAftForceReleaseLb,
        1,
        0LL);
    }
    else
    {
      if ( !IconCnt && isForceRelease )
      {
        v87 = this->fields.skillAftTitleLb;
        gameObject = (UnityEngine_GameObject_o *)System_String__Concat_62698808(name, str1, 0LL);
        if ( !v87 )
          goto LABEL_147;
        UILabel__set_text(v87, (System_String_o *)gameObject, 0LL);
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftTitleLb;
      if ( !gameObject )
        goto LABEL_147;
      UILabel__SetCondensedScale((UILabel_o *)gameObject, 280, 0, 0LL);
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftdetailLb;
    if ( !gameObject )
      goto LABEL_147;
    m_CachedPtr = gameObject[17].fields.m_CachedPtr;
    WrapControlText__textBBCodeAdjust((UILabel_o *)gameObject, detail, m_CachedPtr, 0, 0LL);
    if ( key < 1 )
    {
      SkillEntity__getSkillMessageInfo(v51, &name, &detail, v57, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconBef;
      if ( !gameObject )
        goto LABEL_147;
      SkillIconComponent__Set_39141652((SkillIconComponent_o *)gameObject, targetId, v57, 0LL);
      v63 = isForceRelease;
    }
    else
    {
      gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                                 v50,
                                                 key,
                                                 (const MethodInfo_31FD7C4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( !gameObject )
        goto LABEL_147;
      v51 = (SkillEntity_o *)gameObject;
      SkillEntity__getSkillMessageInfo((SkillEntity_o *)gameObject, &name, &detail, v57, 0LL);
      v63 = isForceRelease;
      if ( !isRelease && !isForceRelease )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        detail = LocalizationManager__Get((System_String_o *)StringLiteral_12332/*"SKILL_COMBINE_EFFFECT_UNRELEASE"*/, 0LL);
        WrapControlText__textBBCodeAdjust(this->fields.skillAftdetailLb, detail, m_CachedPtr, 0, 0LL);
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconBef;
      if ( !gameObject )
        goto LABEL_147;
      SkillIconComponent__Set_39141652((SkillIconComponent_o *)gameObject, key, v57, 0LL);
    }
    v89 = this->fields.skillBefChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v51, v57, 0LL);
    gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&EffectChargeTurn, 0LL);
    if ( !v89 )
      goto LABEL_147;
    UILabel__set_text(v89, (System_String_o *)gameObject, 0LL);
    beforeChargeTimeInfo = this->fields.beforeChargeTimeInfo;
    gameObject = (UnityEngine_GameObject_o *)SkillEntity__getEffectChargeTurn(v51, v57, 0LL);
    if ( !beforeChargeTimeInfo )
      goto LABEL_147;
  }
  UnityEngine_GameObject__SetActive(beforeChargeTimeInfo, (int)gameObject > 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefTitleLb;
  if ( !gameObject )
    goto LABEL_147;
  UILabel__set_text((UILabel_o *)gameObject, name, 0LL);
  if ( isDispLv )
  {
    skillBefTitleLb = this->fields.skillBefTitleLb;
    v91 = name;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v95 = LocalizationManager__Get((System_String_o *)StringLiteral_2135/*"APPEND_SKILL_RESULT_LV"*/, 0LL);
    v96 = v127;
    if ( isOpen )
      v96 = targetLv;
    v129 = v96;
    v97 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v129, v92, v93, v94);
    v98 = System_String__Format(v95, v97, 0LL);
    gameObject = (UnityEngine_GameObject_o *)System_String__Concat_62698808(v91, v98, 0LL);
    if ( !skillBefTitleLb )
      goto LABEL_147;
    UILabel__set_text(skillBefTitleLb, (System_String_o *)gameObject, 0LL);
  }
  if ( v56 )
  {
    v99 = v56->fields.skillNum;
    if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
    v100 = ServantSkillStrengthStatus__GetIconCnt(v99, 0LL);
    if ( key >= 1 )
    {
      EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(v124, svtId, v52, key, 0LL);
      if ( EntityFromSkillId )
      {
        v102 = EntityFromSkillId->fields.skillNum;
        if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
        v100 = ServantSkillStrengthStatus__GetIconCnt(v102, 0LL);
      }
    }
  }
  else
  {
    v100 = 0;
  }
  skillBefForceReleaseLb = (UnityEngine_Object_o *)this->fields.skillBefForceReleaseLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillBefForceReleaseLb, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefForceReleaseLb;
    if ( !gameObject )
      goto LABEL_147;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_147;
    UnityEngine_GameObject__SetActive(gameObject, v100 > 0 && v63, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefForceReleaseLb;
    if ( !gameObject )
      goto LABEL_147;
    if ( v63 )
      v104 = str1;
    else
      v104 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v104, 0LL);
  }
  if ( v56 && v100 >= 1 )
  {
    StrengthStatus = ServantSkillEntity__GetStrengthStatus(v56, 0LL);
    v106 = v56->fields.skillNum;
    v107 = StrengthStatus;
    if ( key >= 1 )
    {
      v108 = ServantSkillMaster__getEntityFromSkillId(v124, svtId, v52, key, 0LL);
      if ( v108 )
      {
        v109 = v108;
        v110 = ServantSkillEntity__GetStrengthStatus(v108, 0LL);
        v106 = v109->fields.skillNum;
        v107 = v110;
      }
    }
    servantSkillStrengthStatusBefore = (UnityEngine_Object_o *)this->fields.servantSkillStrengthStatusBefore;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_servantSkillStrengthStatusBefore = &this->fields.servantSkillStrengthStatusBefore;
    if ( !UnityEngine_Object__op_Equality(servantSkillStrengthStatusBefore, 0LL, 0LL) )
      goto LABEL_136;
    if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefTitleLb;
    if ( gameObject )
    {
      v113 = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
      v114 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      gameObject = BaseMonoBehaviour__createObject_39146996((BaseMonoBehaviour_o *)this, v113, v114, 0LL, 0LL);
      if ( gameObject )
      {
        v115 = UnityEngine_GameObject__GetComponent_object_(
                 gameObject,
                 (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
        *p_servantSkillStrengthStatusBefore = (struct ServantSkillStrengthStatus_o *)v115;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&this->fields.servantSkillStrengthStatusBefore,
          (int64_t)v115,
          v116,
          v117,
          v118,
          v119,
          v120,
          v121);
LABEL_136:
        gameObject = (UnityEngine_GameObject_o *)*p_servantSkillStrengthStatusBefore;
        if ( !*p_servantSkillStrengthStatusBefore )
          goto LABEL_147;
        v134 = (UnityEngine_Vector2Int_o)0x1200000014LL;
        ServantSkillStrengthStatus__Set(
          (ServantSkillStrengthStatus_o *)gameObject,
          this->fields.skillBefTitleLb,
          v107,
          v106,
          20,
          -9,
          v134,
          280,
          this->fields.skillBefForceReleaseLb,
          1,
          0LL);
        goto LABEL_144;
      }
    }
LABEL_147:
    sub_1BE4D28(gameObject, v41);
  }
  if ( !v100 && v63 )
  {
    v122 = this->fields.skillBefTitleLb;
    gameObject = (UnityEngine_GameObject_o *)System_String__Concat_62698808(name, str1, 0LL);
    if ( !v122 )
      goto LABEL_147;
    UILabel__set_text(v122, (System_String_o *)gameObject, 0LL);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefTitleLb;
  if ( !gameObject )
    goto LABEL_147;
  UILabel__SetCondensedScale((UILabel_o *)gameObject, 280, 0, 0LL);
LABEL_144:
  gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefdetailLb;
  if ( !gameObject )
    goto LABEL_147;
  WrapControlText__textBBCodeAdjust((UILabel_o *)gameObject, detail, gameObject[17].fields.m_CachedPtr, 0, 0LL);
  v123 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v123, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v123, 0, 0LL);
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
    sub_1BE4D28(skillInfo, enable);
  }
  UnityEngine_GameObject__SetActive(skillInfo, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillUpResultWindowComponent__SetSkillInfo(
        SkillUpResultWindowComponent_o *this,
        int32_t oldSkillId,
        int32_t oldSkillLv,
        int32_t nowSkillId,
        int32_t nowSkillLv,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UILabel_o *skillChangeInfoSubTitleOld; // x24
  System_String_o *SkillEntity; // x0
  __int64 v16; // x1
  SkillUpResultWindowComponent_o *v17; // x0
  const MethodInfo *v18; // x2
  UILabel_o *skillChangeInfoNameOld; // x22
  System_String_o *v20; // x0
  UILabel_o *skillChangeInfoSubTitleNow; // x22
  SkillUpResultWindowComponent_o *v22; // x0
  const MethodInfo *v23; // x2
  UILabel_o *skillChangeInfoNameNow; // x20
  System_String_o *v25; // x0
  System_String_o *text; // [xsp+0h] [xbp-60h] BYREF
  System_String_o *v27; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B6A66E & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, *(_QWORD *)&oldSkillId);
    sub_1BE4ACC(&StringLiteral_7064/*"GET_SKILL_NAME"*/, v11);
    sub_1BE4ACC(&StringLiteral_2055/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, v12);
    sub_1BE4ACC(&StringLiteral_3037/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, v13);
    byte_4B6A66E = 1;
  }
  detail = 0LL;
  name = 0LL;
  text = 0LL;
  v27 = 0LL;
  skillChangeInfoSubTitleOld = this->fields.skillChangeInfoSubTitleOld;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SkillEntity = LocalizationManager__Get((System_String_o *)StringLiteral_3037/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, 0LL);
  if ( !skillChangeInfoSubTitleOld )
    goto LABEL_14;
  UILabel__set_text(skillChangeInfoSubTitleOld, SkillEntity, 0LL);
  SkillEntity = (System_String_o *)SkillUpResultWindowComponent__GetSkillEntity(v17, oldSkillId, v18);
  if ( !SkillEntity )
    goto LABEL_14;
  SkillEntity__getSkillMessageInfo((SkillEntity_o *)SkillEntity, &name, &detail, oldSkillLv, 0LL);
  skillChangeInfoNameOld = this->fields.skillChangeInfoNameOld;
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_7064/*"GET_SKILL_NAME"*/, 0LL);
  SkillEntity = System_String__Format(v20, (Il2CppObject *)name, 0LL);
  if ( !skillChangeInfoNameOld )
    goto LABEL_14;
  UILabel__set_text(skillChangeInfoNameOld, SkillEntity, 0LL);
  SkillEntity = (System_String_o *)this->fields.skillChangeInfoDetailOld;
  if ( !SkillEntity )
    goto LABEL_14;
  WrapControlText__textBBCodeAdjust((UILabel_o *)SkillEntity, detail, SkillEntity[17].fields._stringLength, 0, 0LL);
  skillChangeInfoSubTitleNow = this->fields.skillChangeInfoSubTitleNow;
  SkillEntity = LocalizationManager__Get((System_String_o *)StringLiteral_2055/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, 0LL);
  if ( !skillChangeInfoSubTitleNow )
    goto LABEL_14;
  UILabel__set_text(skillChangeInfoSubTitleNow, SkillEntity, 0LL);
  SkillEntity = (System_String_o *)SkillUpResultWindowComponent__GetSkillEntity(v22, nowSkillId, v23);
  if ( !SkillEntity
    || (SkillEntity__getSkillMessageInfo((SkillEntity_o *)SkillEntity, &v27, &text, nowSkillLv, 0LL),
        skillChangeInfoNameNow = this->fields.skillChangeInfoNameNow,
        v25 = LocalizationManager__Get((System_String_o *)StringLiteral_7064/*"GET_SKILL_NAME"*/, 0LL),
        SkillEntity = System_String__Format(v25, (Il2CppObject *)v27, 0LL),
        !skillChangeInfoNameNow)
    || (UILabel__set_text(skillChangeInfoNameNow, SkillEntity, 0LL),
        (SkillEntity = (System_String_o *)this->fields.skillChangeInfoDetailNow) == 0LL) )
  {
LABEL_14:
    sub_1BE4D28(SkillEntity, v16);
  }
  WrapControlText__textBBCodeAdjust((UILabel_o *)SkillEntity, text, SkillEntity[17].fields._stringLength, 0, 0LL);
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  TreasureDvcMaster_o *Master_object; // x0
  __int64 v23; // x1
  TreasureDvcMaster_o *v24; // x26
  __int64 v25; // x27
  __int64 v26; // x28
  TreasureDvcEntity_o *v27; // x25
  TreasureDvcLvEntity_o *v28; // x22
  bool v29; // w26
  UILabel_o *currentNpLvLb; // x24
  UILabel_o *resNpLvLb; // x24
  UIWidget_o *v32; // x24
  SkillUpResultWindowComponent_c *v33; // x8
  System_String_o **v34; // x8
  UIWidget_o *v35; // x24
  SkillUpResultWindowComponent_c *v36; // x8
  UILabel_o *npBefDetailLb; // x20
  struct UILabel_o *v38; // x8
  System_String_o *v39; // x1
  System_String_o *DetalShort_40989808; // x21
  TreasureDvcLvEntity_o *v41; // x0
  int32_t mFontSize; // w2
  System_String_o *v43; // x1
  UILabel_o *resNpLvFirstLb; // x24
  struct UILabel_o *v45; // x20
  struct UILabel_o *v46; // x8
  UILabel_o *npAftDetailLb; // x20
  struct UILabel_o *v48; // x8
  int32_t v49; // [xsp+Ch] [xbp-74h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-70h] BYREF
  int32_t lv; // [xsp+1Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  lv = targetLv;
  if ( (byte_4B6A667 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_UIWidget___, usrSvtData);
    sub_1BE4ACC(&Method_DataManager_GetMaster_TreasureDvcLvMaster___, v15);
    sub_1BE4ACC(&Method_DataManager_GetMaster_TreasureDvcMaster___, v16);
    sub_1BE4ACC(&DataManager_TypeInfo, v17);
    sub_1BE4ACC(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v18);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_1BE4ACC(&SkillUpResultWindowComponent_TypeInfo, v20);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v21);
    byte_4B6A667 = 1;
  }
  entity = 0LL;
  v49 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (TreasureDvcMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !usrSvtData )
    goto LABEL_69;
  v24 = Master_object;
  v26 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v52.fields.currentCryptoKey = v26;
  *(_QWORD *)&v52.fields.fakeValue = v25;
  Master_object = (TreasureDvcMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v52, 0LL);
  if ( !v24 )
    goto LABEL_69;
  v27 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v24, (int32_t)Master_object, targetId, 0LL);
  Master_object = (TreasureDvcMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
  if ( !v27 || !Master_object )
    goto LABEL_69;
  v28 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Master_object, v27->fields.id, targetLv, 0LL);
  Master_object = (TreasureDvcMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)v24,
                                           &entity,
                                           targetIdOld,
                                           (const MethodInfo_31FD818 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    targetIdOld = 0;
  if ( !this->fields.npRubyNameLb )
    goto LABEL_69;
  UILabel__set_text(this->fields.npRubyNameLb, v27->fields.ruby, 0LL);
  Master_object = (TreasureDvcMaster_o *)this->fields.npNameLb;
  if ( !Master_object )
    goto LABEL_69;
  v29 = kind != 5;
  UILabel__set_text((UILabel_o *)Master_object, v27->fields.name, 0LL);
  NoblePhantasmNameOverwriter__SetOverwriteNpLabel(usrSvtData, this->fields.npNameLb, this->fields.npRubyNameLb, 0LL);
  v49 = targetLvOld;
  if ( targetIdOld > 0 || kind == 5 )
  {
    Master_object = (TreasureDvcMaster_o *)this->fields.npRankInfo;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v29, 0LL);
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v29, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npRankupBeforeLb;
    if ( !Master_object )
      goto LABEL_69;
    v34 = (System_String_o **)(entity ? &entity[2].monitor : &StringLiteral_1/*""*/);
    UILabel__set_text((UILabel_o *)Master_object, *v34, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npRankupAfterLb;
    if ( !Master_object )
      goto LABEL_69;
    UILabel__set_text((UILabel_o *)Master_object, v27->fields.rank, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npRankupAfterLb;
    if ( !Master_object )
      goto LABEL_69;
    Master_object = (TreasureDvcMaster_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)Master_object,
                                             (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    v35 = (UIWidget_o *)Master_object;
    v36 = SkillUpResultWindowComponent_TypeInfo;
    if ( !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
      v36 = SkillUpResultWindowComponent_TypeInfo;
    }
    if ( !v35 )
      goto LABEL_69;
    UIWidget__set_color(v35, v36->static_fields->COLOR_VAL, 0LL);
    v49 = targetLvOld;
    if ( !v28 )
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
    if ( !v28 )
    {
LABEL_61:
      Master_object = (TreasureDvcMaster_o *)this->fields.npBefDetailLb;
      if ( Master_object )
      {
        UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        Master_object = (TreasureDvcMaster_o *)this->fields.npAftDetailLb;
        if ( Master_object )
        {
          v39 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_64;
        }
      }
      goto LABEL_69;
    }
  }
  else
  {
    currentNpLvLb = this->fields.currentNpLvLb;
    Master_object = (TreasureDvcMaster_o *)System_Int32__ToString((int32_t)&v49, 0LL);
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
                                             (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    v32 = (UIWidget_o *)Master_object;
    v33 = SkillUpResultWindowComponent_TypeInfo;
    if ( !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
      v33 = SkillUpResultWindowComponent_TypeInfo;
    }
    if ( !v32 )
      goto LABEL_69;
    UIWidget__set_color(v32, v33->static_fields->COLOR_VAL, 0LL);
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
    if ( !v28 )
      goto LABEL_61;
  }
  if ( kind == 5 )
  {
    npBefDetailLb = this->fields.npBefDetailLb;
    Master_object = (TreasureDvcMaster_o *)TreasureDvcLvEntity__getDetalShort_40989808(v28, lv, 0LL);
    v38 = this->fields.npBefDetailLb;
    if ( v38 )
    {
      WrapControlText__textAdjust(npBefDetailLb, (System_String_o *)Master_object, v38->fields.mFontSize, 0, 0LL);
      Master_object = (TreasureDvcMaster_o *)this->fields.npAftDetailLb;
      if ( Master_object )
      {
        v39 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_64:
        UILabel__set_text((UILabel_o *)Master_object, v39, 0LL);
        return;
      }
    }
LABEL_69:
    sub_1BE4D28(Master_object, v23);
  }
  if ( targetIdOld < 1 )
  {
    v45 = this->fields.npBefDetailLb;
    Master_object = (TreasureDvcMaster_o *)TreasureDvcLvEntity__getDetalShort_40989808(v28, v49, 0LL);
    v46 = this->fields.npBefDetailLb;
    if ( !v46 )
      goto LABEL_69;
    mFontSize = v46->fields.mFontSize;
    v43 = (System_String_o *)Master_object;
    Master_object = (TreasureDvcMaster_o *)v45;
  }
  else
  {
    DetalShort_40989808 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (TreasureDvcMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !Master_object )
      goto LABEL_69;
    v41 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Master_object, targetIdOld, targetLvOld, 0LL);
    if ( v41 )
      DetalShort_40989808 = TreasureDvcLvEntity__getDetalShort_40989808(v41, v49, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npBefDetailLb;
    if ( !Master_object )
      goto LABEL_69;
    mFontSize = Master_object[5].fields.revision;
    v43 = DetalShort_40989808;
  }
  WrapControlText__textBBCodeAdjust((UILabel_o *)Master_object, v43, mFontSize, 0, 0LL);
  npAftDetailLb = this->fields.npAftDetailLb;
  Master_object = (TreasureDvcMaster_o *)TreasureDvcLvEntity__getDetalShort_40989808(v28, lv, 0LL);
  v48 = this->fields.npAftDetailLb;
  if ( !v48 )
    goto LABEL_69;
  WrapControlText__textBBCodeAdjust(npAftDetailLb, (System_String_o *)Master_object, v48->fields.mFontSize, 0, 0LL);
}