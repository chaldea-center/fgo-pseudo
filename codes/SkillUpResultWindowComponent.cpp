void __fastcall SkillUpResultWindowComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A3183C & 1) == 0 )
  {
    sub_1B761C0(&SkillUpResultWindowComponent_TypeInfo, v1);
    byte_4A3183C = 1;
  }
  *SkillUpResultWindowComponent_TypeInfo->static_fields = (struct SkillUpResultWindowComponent_StaticFields)xmmword_BADC50;
}


void __fastcall SkillUpResultWindowComponent___ctor(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A3183B & 1) == 0 )
  {
    sub_1B761C0(&BaseDialog_TypeInfo, method);
    byte_4A3183B = 1;
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

  if ( (byte_4A31836 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&Method_SkillUpResultWindowComponent_EndClose__, v3);
    byte_4A31836 = 1;
  }
  v4 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndClose__, 0LL);
  SkillUpResultWindowComponent__Close_44820240(this, v5, v6);
}


void __fastcall SkillUpResultWindowComponent__Close_44820240(
        SkillUpResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4A31837 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, callback);
    sub_1B761C0(&Method_SkillUpResultWindowComponent_EndClose__, v4);
    byte_4A31837 = 1;
  }
  v5 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
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
    sub_1B7641C(gameObject, v4);
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
    sub_1B76164(p_openCallBack, 0, v2, v3);
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

  if ( (byte_4A31839 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_ServantSkillMaster___, *(_QWORD *)&svtId);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A31839 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_ServantSkillMaster___)) == 0LL )
  {
    sub_1B7641C(Instance, v10);
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

  if ( (byte_4A31838 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_SkillMaster___, *(_QWORD *)&skillId);
    sub_1B761C0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v4);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A31838 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_1B7641C(Instance, v7);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    skillId,
    (const MethodInfo_30FF7D4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
  return (SkillEntity_o *)entity;
}


void __fastcall SkillUpResultWindowComponent__Init(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B7641C(0LL, v4);
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
  int32_t v33; // w2
  int32_t v34; // w3
  System_Text_StringBuilder_o *v35; // x21
  int32_t SvtId; // w22
  Il2CppObject *MasterData_object; // x20
  UserServantCollectionEntity_o *EntityDefinitely; // x20
  System_Collections_Generic_List_object__o *v39; // x0
  Il2CppObject *current; // x23
  System_String_o *v41; // x0
  __int64 v42; // x1
  System_String_o *v43; // x24
  Il2CppObject *QuestName; // x1
  System_String_o *v45; // x0
  int32_t v46; // w23
  UILabel_o *friendshipLabel; // x22
  UnityEngine_GameObject_o *v48; // x21
  UILabel_o *friendshipCurrentLvLabel; // x21
  UILabel_o *friendshipResultLvLabel; // x21
  UIWidget_o *v51; // x20
  SkillUpResultWindowComponent_c *v52; // x8
  struct UILabel_o *v53; // x8
  System_Action_o *v54; // x20
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+0h] [xbp-90h] BYREF
  int32_t FriendShipRank; // [xsp+1Ch] [xbp-74h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+20h] [xbp-70h] BYREF
  int32_t oldFriendShipRanka; // [xsp+3Ch] [xbp-54h] BYREF

  oldFriendShipRanka = oldFriendShipRank;
  if ( (byte_4A31834 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, usrSvtData);
    sub_1B761C0(&Method_UnityEngine_Component_GetComponent_UIWidget___, v9);
    sub_1B761C0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v10);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__, v11);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__, v12);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__, v13);
    sub_1B761C0(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__, v14);
    sub_1B761C0(&LocalizationManager_TypeInfo, v15);
    sub_1B761C0(&NetworkManager_TypeInfo, v16);
    sub_1B761C0(&ServantCommentManager_TypeInfo, v17);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B761C0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v19);
    sub_1B761C0(&Method_SkillUpResultWindowComponent_EndOpen__, v20);
    sub_1B761C0(&Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__, v21);
    sub_1B761C0(&SkillUpResultWindowComponent_TypeInfo, v22);
    sub_1B761C0(&System_Text_StringBuilder_TypeInfo, v23);
    sub_1B761C0(&StringLiteral_11082/*"RESULT_BOUNDS_OPENQUEST"*/, v24);
    sub_1B761C0(&StringLiteral_11084/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/, v25);
    sub_1B761C0(&StringLiteral_11079/*"RESULT_BOUNDS_GETVOICE"*/, v26);
    sub_1B761C0(&StringLiteral_1/*""*/, v27);
    byte_4A31834 = 1;
  }
  memset(&v57, 0, sizeof(v57));
  FriendShipRank = 0;
  if ( !this->fields.state )
  {
    v28 = Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__ + 83) & 2) != 0 )
      v28 = (_QWORD *)sub_1B761D8(Method_SkillUpResultWindowComponent_OpenFriendshipUpResultInfo__);
    v29 = (System_Reflection_MethodBase_o *)sub_1B761A4(v28, v28[4]);
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
            sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.openCallBack, (int32_t)callback, v33, v34);
            gameObject = (__int64)this->fields.friendshipLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              v35 = (System_Text_StringBuilder_o *)sub_1B7640C(System_Text_StringBuilder_TypeInfo);
              System_Text_StringBuilder___ctor(v35, 0LL);
              if ( usrSvtData )
              {
                SvtId = UserServantEntity__getSvtId(usrSvtData, 0LL);
                gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( gameObject )
                {
                  MasterData_object = DataManager__GetMasterData_object_(
                                        (DataManager_o *)gameObject,
                                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
                    gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                    if ( gameObject )
                    {
                      v39 = (System_Collections_Generic_List_object__o *)clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
                                                                           (clsQuestCheck_o *)gameObject,
                                                                           SvtId,
                                                                           oldFriendShipRank,
                                                                           8,
                                                                           0LL);
                      if ( v39 )
                      {
                        System_Collections_Generic_List_object___GetEnumerator(
                          (System_Collections_Generic_List_Enumerator_T__o *)&v55,
                          v39,
                          (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
                        v57 = v55;
                        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                                  &v57,
                                  (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
                        {
                          current = v57.fields._current;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v41 = LocalizationManager__Get((System_String_o *)StringLiteral_11082/*"RESULT_BOUNDS_OPENQUEST"*/, 0LL);
                          if ( !current )
                            sub_1B7641C(v41, v42);
                          v43 = v41;
                          QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0LL);
                          v45 = System_String__Format(v43, QuestName, 0LL);
                          if ( !v35 )
                            sub_1B7641C(v45, v45);
                          System_Text_StringBuilder__AppendLine_60698180(v35, v45, 0LL);
                        }
                        System_Collections_Generic_List_Enumerator_object___Dispose(
                          &v57,
                          (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
                      }
                      v46 = oldFriendShipRanka;
                      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
                      gameObject = ServantCommentManager__IsOpenByServantFriendShip(SvtId, v46, 0LL);
                      if ( (gameObject & 1) != 0 )
                      {
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11084/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/, 0LL);
                        if ( !v35 )
                          goto LABEL_56;
                        gameObject = (__int64)System_Text_StringBuilder__AppendLine_60698180(
                                                v35,
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
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11079/*"RESULT_BOUNDS_GETVOICE"*/, 0LL);
                        if ( !v35 )
                          goto LABEL_56;
                        System_Text_StringBuilder__AppendLine_60698180(v35, (System_String_o *)gameObject, 0LL);
                      }
                      else if ( !v35 )
                      {
                        goto LABEL_56;
                      }
                      friendshipLabel = this->fields.friendshipLabel;
                      gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v35->klass->vtable._3_ToString.method)(
                                     v35,
                                     v35->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                      if ( friendshipLabel )
                      {
                        UILabel__set_text(friendshipLabel, (System_String_o *)gameObject, 0LL);
                        gameObject = (__int64)this->fields.friendshipLvInfo;
                        if ( gameObject )
                        {
                          v48 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0LL);
                          gameObject = UserServantCollectionEntity__getFriendShipRank(EntityDefinitely, 0LL);
                          if ( v48 )
                          {
                            UnityEngine_GameObject__SetActive(v48, (int)gameObject > oldFriendShipRanka, 0LL);
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
                                                          (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
                                  v51 = (UIWidget_o *)gameObject;
                                  v52 = SkillUpResultWindowComponent_TypeInfo;
                                  if ( !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
                                    v52 = SkillUpResultWindowComponent_TypeInfo;
                                  }
                                  if ( v51 )
                                  {
                                    UIWidget__set_color(v51, v52->static_fields->COLOR_VAL, 0LL);
                                    v53 = this->fields.friendshipLabel;
                                    if ( v53 )
                                    {
                                      if ( !System_String__IsNullOrEmpty(v53->fields.mText, 0LL) )
                                      {
LABEL_54:
                                        v54 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
                                        System_Action___ctor(
                                          v54,
                                          (Il2CppObject *)this,
                                          Method_SkillUpResultWindowComponent_EndOpen__,
                                          0LL);
                                        BaseDialog__Open((BaseDialog_o *)this, v54, 0, 0LL);
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
    sub_1B7641C(gameObject, v31);
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

  if ( (byte_4A31831 & 1) == 0 )
  {
    sub_1B761C0(&Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__, addManager);
    byte_4A31831 = 1;
  }
  v13 = Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1B761D8(Method_SkillUpResultWindowComponent_OpenNextNpUpResultInfo__);
  v14 = (System_Reflection_MethodBase_o *)sub_1B761A4(v13, v13[4]);
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
    sub_1B7641C(gameObject, v16);
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

  if ( (byte_4A31830 & 1) == 0 )
  {
    sub_1B761C0(&Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__, *(_QWORD *)&oldTargetId);
    byte_4A31830 = 1;
  }
  v13 = Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1B761D8(Method_SkillUpResultWindowComponent_OpenNpUpResultInfo__);
  v14 = (System_Reflection_MethodBase_o *)sub_1B761A4(v13, v13[4]);
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
    sub_1B7641C(gameObject, v16);
  }
  HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, nowTargetId, nowTargetLv, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0LL);
}


void __fastcall SkillUpResultWindowComponent__OpenNpUpResultInfo_44815332(
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
  int32_t v26; // w2
  int32_t v27; // w3
  _BOOL4 v28; // w26
  _BOOL4 v29; // w27
  _BOOL4 IsHeroine; // w28
  _BOOL4 v31; // w20
  int v32; // w27
  int v33; // w28
  const MethodInfo *v34; // x7
  const MethodInfo *v35; // x6
  struct ServantTreasureDeviceAddEntity_o *tdAddEntity_k__BackingField; // x8
  struct System_String_array *titles; // x8
  System_String_o *titleText; // x3
  System_Action_o *v39; // x20
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v40; // [xsp+0h] [xbp-70h]
  TransformServantInfo_o *transformInfo; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A31832 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, usrSvtData);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v18);
    sub_1B761C0(&Method_SkillUpResultWindowComponent_EndOpen__, v19);
    sub_1B761C0(&Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___76011656, v20);
    byte_4A31832 = 1;
  }
  transformInfo = 0LL;
  if ( !this->fields.state )
  {
    v21 = Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___76011656;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___76011656 + 83) & 2) != 0 )
      v21 = (_QWORD *)sub_1B761D8(Method_SkillUpResultWindowComponent_OpenNpUpResultInfo___76011656);
    v22 = (System_Reflection_MethodBase_o *)sub_1B761A4(v21, v21[4]);
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
            sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.openCallBack, (int32_t)callback, v26, v27);
            if ( usrSvtData )
            {
              gameObject = (UnityEngine_GameObject_o *)UserServantEntity__GetTransformCount(usrSvtData, 1, 0LL);
              this->fields.svtTransformCount = (int)gameObject;
              if ( addManager )
              {
                v40 = addManager;
                v28 = addManager->fields._tdAddEntity_k__BackingField != 0LL;
                v29 = (int)gameObject > 1;
                IsHeroine = UserServantEntity__IsHeroine(usrSvtData, 0LL);
                v31 = targetIdOld != targetId;
                if ( targetIdOld == targetId && UserServantEntity__IsHeroine(usrSvtData, 0LL) )
                  targetIdOld = 0;
                gameObject = this->fields.npInfoAddRoot;
                if ( gameObject )
                {
                  v32 = v29 || v28;
                  UnityEngine_GameObject__SetActive(gameObject, v32, 0LL);
                  gameObject = this->fields.npInfoNormalRoot;
                  if ( gameObject )
                  {
                    v33 = targetLvOld != targetLv && IsHeroine && v31;
                    UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)(v33 | (kind == 18) | v32) != 1, 0LL);
                    gameObject = this->fields.npInfoHeroineNpChangeRoot;
                    if ( gameObject )
                    {
                      UnityEngine_GameObject__SetActive(gameObject, v33, 0LL);
                      gameObject = this->fields.npInfoNpChangeRoot;
                      if ( gameObject )
                      {
                        UnityEngine_GameObject__SetActive(gameObject, kind == 18, 0LL);
                        if ( v33 )
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
                              v39 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
                              System_Action___ctor(
                                v39,
                                (Il2CppObject *)this,
                                Method_SkillUpResultWindowComponent_EndOpen__,
                                0LL);
                              BaseDialog__Open((BaseDialog_o *)this, v39, 0, 0LL);
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
                          if ( !v32 )
                          {
                            SkillUpResultWindowComponent__SetupNpUpResultInfoNormal(
                              this,
                              usrSvtData,
                              targetId,
                              targetLv,
                              targetIdOld,
                              targetLvOld,
                              kind,
                              v34);
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
                                                                         (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                              if ( gameObject )
                              {
                                UIWidget__set_height((UIWidget_o *)gameObject, 300, 0LL);
                                gameObject = (UnityEngine_GameObject_o *)UserServantEntity__GetTransformedServantInfo(
                                                                           usrSvtData,
                                                                           &transformInfo,
                                                                           0,
                                                                           0LL);
                                tdAddEntity_k__BackingField = v40->fields._tdAddEntity_k__BackingField;
                                if ( !tdAddEntity_k__BackingField )
                                  goto LABEL_35;
                                titles = tdAddEntity_k__BackingField->fields.titles;
                                if ( !titles )
                                  goto LABEL_35;
                                if ( !titles->max_length )
                                  sub_1B76424(gameObject, v24);
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
                                    v40,
                                    0,
                                    titleText,
                                    kind == 8,
                                    this->fields.svtTransformCount,
                                    v35);
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
    sub_1B7641C(gameObject, v24);
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
  int32_t v20; // w2
  int32_t v21; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x21
  __int64 v23; // x20
  __int64 v24; // x22
  Il2CppObject *Entity; // x0
  UILabel_o *powerupLabel; // x20
  Il2CppObject *v27; // x21
  System_Action_o *v28; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4A31835 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, usrSvtData);
    sub_1B761C0(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1B761C0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1B761C0(&LocalizationManager_TypeInfo, v9);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B761C0(&Method_SkillUpResultWindowComponent_EndOpen__, v12);
    sub_1B761C0(&Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__, v13);
    sub_1B761C0(&StringLiteral_11083/*"RESULT_BOUNDS_POWERUP"*/, v14);
    byte_4A31835 = 1;
  }
  if ( !this->fields.state )
  {
    v15 = Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_1B761D8(Method_SkillUpResultWindowComponent_OpenPowerUpResultInfo__);
    v16 = (System_Reflection_MethodBase_o *)sub_1B761A4(v15, v15[4]);
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
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.openCallBack, (int32_t)callback, v20, v21);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_20;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !usrSvtData )
      goto LABEL_20;
    v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
    v24 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
    v23 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v29.fields.currentCryptoKey = v24;
    *(_QWORD *)&v29.fields.fakeValue = v23;
    gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(
                                               v29,
                                               0LL);
    if ( !v22 )
      goto LABEL_20;
    Entity = DataMasterBase_object__object__int___GetEntity(
               v22,
               (int32_t)gameObject,
               (const MethodInfo_30FF780 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    powerupLabel = this->fields.powerupLabel;
    v27 = Entity;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11083/*"RESULT_BOUNDS_POWERUP"*/, 0LL);
    if ( !v27
      || (gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                     (System_String_o *)gameObject,
                                                     (Il2CppObject *)v27[4].monitor,
                                                     0LL),
          !powerupLabel) )
    {
LABEL_20:
      sub_1B7641C(gameObject, v18);
    }
    UILabel__set_text(powerupLabel, (System_String_o *)gameObject, 0LL);
    v28 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
    System_Action___ctor(v28, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v28, 0, 0LL);
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

  if ( (byte_4A3182E & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_1B761C0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1B761C0(&LocalizationManager_TypeInfo, v8);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B761C0(&Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__, v10);
    sub_1B761C0(&StringLiteral_3891/*"COSTUME_CHANGE_DESCRIPTION"*/, v11);
    byte_4A3182E = 1;
  }
  v12 = Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1B761D8(Method_SkillUpResultWindowComponent_OpenSkillChangeMessage__);
  v13 = (System_Reflection_MethodBase_o *)sub_1B761A4(v12, v12[4]);
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
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)gameObject,
                                             (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                             svtId,
                                             (const MethodInfo_30FF780 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !gameObject )
    goto LABEL_16;
  BattleName = ServantEntity__getBattleName((ServantEntity_o *)gameObject, 0, -1, 0LL);
  costumeChangeLabel = this->fields.costumeChangeLabel;
  v19 = (Il2CppObject *)BattleName;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3891/*"COSTUME_CHANGE_DESCRIPTION"*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v20, v19, 0LL);
  if ( !costumeChangeLabel )
LABEL_16:
    sub_1B7641C(gameObject, v15);
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

  if ( (byte_4A3182F & 1) == 0 )
  {
    sub_1B761C0(&LocalizationManager_TypeInfo, *(_QWORD *)&oldSkillId);
    sub_1B761C0(&Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__, v15);
    sub_1B761C0(&StringLiteral_3892/*"COSTUME_CHANGE_SKILL_TITLE"*/, v16);
    byte_4A3182F = 1;
  }
  v17 = Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__;
  if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__ + 83) & 2) != 0 )
    v17 = (_QWORD *)sub_1B761D8(Method_SkillUpResultWindowComponent_OpenSkillChangeResultInfo__);
  v18 = (System_Reflection_MethodBase_o *)sub_1B761A4(v17, v17[4]);
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
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3892/*"COSTUME_CHANGE_SKILL_TITLE"*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v23, (Il2CppObject *)costumeName, 0LL);
  if ( !skillChangeInfoTitle )
LABEL_13:
    sub_1B7641C(gameObject, v20);
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
        const MethodInfo *method)
{
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
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v38; // x1
  const MethodInfo *v39; // x2
  int32_t v40; // w2
  int32_t v41; // w3
  char v42; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v43; // x21
  bool v44; // w22
  SkillEntity_o *v45; // x28
  il2cpp_array_size_t max_length; // w8
  int32_t v47; // w25
  int32_t v48; // w9
  ServantSkillEntity_o *v49; // x26
  int32_t v50; // w29
  UILabel_o *skillBefChargeTimeLb; // x21
  SkillEntity_o *v52; // x0
  int32_t v53; // w1
  UILabel_o *skillAftChargeTimeLb; // x22
  UnityEngine_GameObject_o *AfterChargeTimeInfo; // x22
  UILabel_o *skillAftTitleLb; // x22
  System_String_o *v57; // x27
  System_String_o *v58; // x20
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  Il2CppObject *v62; // x0
  System_String_o *v63; // x0
  UnityEngine_Object_o *servantSkillStrengthStatusAfter; // x22
  System_String_o *PATH; // x20
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  int32_t v70; // w20
  ServantSkillStrengthStatus_o *v71; // x22
  UILabel_o *v72; // x27
  int32_t m_CachedPtr; // w22
  int32_t v74; // w1
  UnityEngine_GameObject_o *beforeChargeTimeInfo; // x21
  bool v76; // w28
  UILabel_o *skillBefTitleLb; // x21
  System_String_o *v78; // x22
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  System_String_o *v82; // x20
  int32_t v83; // w8
  Il2CppObject *v84; // x0
  System_String_o *v85; // x0
  int32_t StrengthStatus; // w0
  int32_t v87; // w21
  int32_t skillNum; // w20
  UnityEngine_Object_o *servantSkillStrengthStatusBefore; // x23
  struct ServantSkillStrengthStatus_o **p_servantSkillStrengthStatusBefore; // x22
  System_String_o *v91; // x23
  UnityEngine_Transform_o *v92; // x0
  Il2CppObject *v93; // x0
  int32_t v94; // w2
  int32_t v95; // w3
  System_Action_o *v96; // x20
  int32_t v97; // [xsp+4h] [xbp-9Ch]
  ServantSkillMaster_o *v98; // [xsp+10h] [xbp-90h]
  int32_t v99; // [xsp+1Ch] [xbp-84h]
  int32_t v100; // [xsp+24h] [xbp-7Ch]
  int32_t v101; // [xsp+28h] [xbp-78h] BYREF
  int32_t EffectChargeTurn; // [xsp+2Ch] [xbp-74h] BYREF
  System_String_o *detail; // [xsp+30h] [xbp-70h] BYREF
  System_String_o *name; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector2Int_o v105; // 0:x6.8
  UnityEngine_Vector2Int_o v106; // 0:x6.8

  if ( (byte_4A3182D & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, *(_QWORD *)&targetId);
    sub_1B761C0(&Method_DataManager_GetMasterData_ServantSkillMaster___, v21);
    sub_1B761C0(&Method_DataManager_GetMasterData_SkillMaster___, v22);
    sub_1B761C0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v23);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, v24);
    sub_1B761C0(&int_TypeInfo, v25);
    sub_1B761C0(&LocalizationManager_TypeInfo, v26);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v27);
    sub_1B761C0(&ServantSkillStrengthStatus_TypeInfo, v28);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_1B761C0(&Method_SkillUpResultWindowComponent_EndOpen__, v30);
    sub_1B761C0(&Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__, v31);
    sub_1B761C0(&StringLiteral_2109/*"APPEND_SKILL_RESULT_AFTER_LV"*/, v32);
    sub_1B761C0(&StringLiteral_12140/*"SKILL_COMBINE_EFFFECT_UNRELEASE"*/, v33);
    sub_1B761C0(&StringLiteral_2110/*"APPEND_SKILL_RESULT_LV"*/, v34);
    byte_4A3182D = 1;
  }
  detail = 0LL;
  name = 0LL;
  EffectChargeTurn = 0;
  if ( !this->fields.state )
  {
    v35 = Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__;
    if ( (*((_BYTE *)Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__ + 83) & 2) != 0 )
      v35 = (_QWORD *)sub_1B761D8(Method_SkillUpResultWindowComponent_OpenSkillUpResultInfo__);
    v36 = (System_Reflection_MethodBase_o *)sub_1B761A4(v35, v35[4]);
    OverwriteAssetSoundName__PlaySystemSe(v36, 6, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      SkillUpResultWindowComponent__SetChildrenActive(this, 0, v39);
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
            sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.openCallBack, (int32_t)callback, v40, v41);
            gameObject = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(dispBattleName, 0LL);
            if ( this->fields.titleLabel )
            {
              v42 = (char)gameObject;
              gameObject = UnityEngine_Component__get_gameObject(
                             (UnityEngine_Component_o *)this->fields.titleLabel,
                             0LL);
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive(gameObject, (v42 ^ 1) & 1, 0LL);
                gameObject = (UnityEngine_GameObject_o *)this->fields.titleLabel;
                if ( gameObject )
                {
                  UILabel__set_text((UILabel_o *)gameObject, dispBattleName, 0LL);
                  if ( (v42 & 1) == 0 && !this->fields.changedLayout )
                  {
                    GameObjectExtensions__AddLocalPositionY(this->fields.skillInfo, this->fields.skillInfoOffset, 0LL);
                    this->fields.changedLayout = 1;
                  }
                  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( gameObject )
                  {
                    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)gameObject,
                                                               (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_SkillMaster___);
                    if ( gameObject )
                    {
                      v100 = targetLvOld;
                      v43 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
                      gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                                 targetId,
                                                                 (const MethodInfo_30FF780 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
                      if ( skillList )
                      {
                        v44 = isOpen;
                        v45 = (SkillEntity_o *)gameObject;
                        max_length = skillList->max_length;
                        v47 = 0;
                        while ( v47 < (int)max_length )
                        {
                          if ( v47 >= max_length )
                            sub_1B76424(gameObject, v38);
                          v48 = skillList->m_Items[++v47];
                          if ( v48 == targetId )
                            goto LABEL_25;
                        }
                        v47 = 0;
LABEL_25:
                        gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( gameObject )
                        {
                          gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                                     (DataManager_o *)gameObject,
                                                                     (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
                          if ( gameObject )
                          {
                            v98 = (ServantSkillMaster_o *)gameObject;
                            v99 = baseSvtId;
                            gameObject = (UnityEngine_GameObject_o *)ServantSkillMaster__getEntityFromSkillId(
                                                                       (ServantSkillMaster_o *)gameObject,
                                                                       baseSvtId,
                                                                       v47,
                                                                       targetId,
                                                                       0LL);
                            if ( v45 )
                            {
                              v49 = (ServantSkillEntity_o *)gameObject;
                              SkillEntity__getSkillMessageInfo(v45, &name, &detail, targetLv, 0LL);
                              gameObject = this->fields.skillAfter;
                              v50 = targetIdOld >= 1 ? v100 : targetLv - 1;
                              if ( gameObject )
                              {
                                if ( isOpen )
                                {
                                  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
                                  gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconBef;
                                  if ( !gameObject )
                                    goto LABEL_96;
                                  SkillIconComponent__Set_38055944(
                                    (SkillIconComponent_o *)gameObject,
                                    targetId,
                                    targetLv,
                                    0LL);
                                  skillBefChargeTimeLb = this->fields.skillBefChargeTimeLb;
                                  v52 = v45;
                                  v53 = targetLv;
                                }
                                else
                                {
                                  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                                  gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconAft;
                                  if ( !gameObject )
                                    goto LABEL_96;
                                  SkillIconComponent__Set_38055944(
                                    (SkillIconComponent_o *)gameObject,
                                    targetId,
                                    targetLv,
                                    0LL);
                                  skillAftChargeTimeLb = this->fields.skillAftChargeTimeLb;
                                  EffectChargeTurn = SkillEntity__getEffectChargeTurn(v45, targetLv, 0LL);
                                  gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString(
                                                                             (int32_t)&EffectChargeTurn,
                                                                             0LL);
                                  if ( !skillAftChargeTimeLb )
                                    goto LABEL_96;
                                  UILabel__set_text(skillAftChargeTimeLb, (System_String_o *)gameObject, 0LL);
                                  AfterChargeTimeInfo = this->fields.AfterChargeTimeInfo;
                                  gameObject = (UnityEngine_GameObject_o *)SkillEntity__getEffectChargeTurn(
                                                                             v45,
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
                                    v97 = targetIdOld;
                                    skillAftTitleLb = this->fields.skillAftTitleLb;
                                    v57 = name;
                                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    v58 = LocalizationManager__Get((System_String_o *)StringLiteral_2109/*"APPEND_SKILL_RESULT_AFTER_LV"*/, 0LL);
                                    v101 = targetLv;
                                    v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v101, v59, v60, v61);
                                    v63 = System_String__Format(v58, v62, 0LL);
                                    gameObject = (UnityEngine_GameObject_o *)System_String__Concat_61535060(
                                                                               v57,
                                                                               v63,
                                                                               0LL);
                                    if ( !skillAftTitleLb )
                                      goto LABEL_96;
                                    UILabel__set_text(skillAftTitleLb, (System_String_o *)gameObject, 0LL);
                                    targetIdOld = v97;
                                  }
                                  gameObject = (UnityEngine_GameObject_o *)this->fields.skillAftTitleLb;
                                  if ( !gameObject )
                                    goto LABEL_96;
                                  UILabel__SetCondensedScale((UILabel_o *)gameObject, 255, 0LL);
                                  if ( v49 )
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
                                      gameObject = BaseMonoBehaviour__createObject_38129480(
                                                     (BaseMonoBehaviour_o *)this,
                                                     PATH,
                                                     transform,
                                                     0LL,
                                                     0LL);
                                      if ( !gameObject )
                                        goto LABEL_96;
                                      Component_object = UnityEngine_GameObject__GetComponent_object_(
                                                           gameObject,
                                                           (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
                                      this->fields.servantSkillStrengthStatusAfter = (struct ServantSkillStrengthStatus_o *)Component_object;
                                      sub_1B76164(
                                        (ServantStatusBattleListViewItem_o *)&this->fields.servantSkillStrengthStatusAfter,
                                        (int32_t)Component_object,
                                        v68,
                                        v69);
                                    }
                                    v70 = targetIdOld;
                                    v71 = this->fields.servantSkillStrengthStatusAfter;
                                    v72 = this->fields.skillAftTitleLb;
                                    gameObject = (UnityEngine_GameObject_o *)ServantSkillEntity__GetStrengthStatus(
                                                                               v49,
                                                                               0LL);
                                    if ( !v71 )
                                      goto LABEL_96;
                                    v105 = (UnityEngine_Vector2Int_o)0x1200000014LL;
                                    ServantSkillStrengthStatus__Set(
                                      v71,
                                      v72,
                                      (int32_t)gameObject,
                                      v49->fields.skillNum,
                                      20,
                                      -9,
                                      v105,
                                      0LL);
                                    targetIdOld = v70;
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
                                    SkillEntity__getSkillMessageInfo(v45, &name, &detail, v50, 0LL);
                                    gameObject = (UnityEngine_GameObject_o *)this->fields.skillIconBef;
                                    if ( !gameObject )
                                      goto LABEL_96;
                                    v74 = targetId;
                                  }
                                  else
                                  {
                                    gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                                                               v43,
                                                                               targetIdOld,
                                                                               (const MethodInfo_30FF780 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
                                    if ( !gameObject )
                                      goto LABEL_96;
                                    v45 = (SkillEntity_o *)gameObject;
                                    SkillEntity__getSkillMessageInfo(
                                      (SkillEntity_o *)gameObject,
                                      &name,
                                      &detail,
                                      v50,
                                      0LL);
                                    if ( !isRelease )
                                    {
                                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                      detail = LocalizationManager__Get((System_String_o *)StringLiteral_12140/*"SKILL_COMBINE_EFFFECT_UNRELEASE"*/, 0LL);
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
                                    v74 = targetIdOld;
                                  }
                                  SkillIconComponent__Set_38055944((SkillIconComponent_o *)gameObject, v74, v50, 0LL);
                                  v44 = isOpen;
                                  skillBefChargeTimeLb = this->fields.skillBefChargeTimeLb;
                                  v52 = v45;
                                  v53 = v50;
                                }
                                EffectChargeTurn = SkillEntity__getEffectChargeTurn(v52, v53, 0LL);
                                gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString(
                                                                           (int32_t)&EffectChargeTurn,
                                                                           0LL);
                                if ( !skillBefChargeTimeLb )
                                  goto LABEL_96;
                                UILabel__set_text(skillBefChargeTimeLb, (System_String_o *)gameObject, 0LL);
                                beforeChargeTimeInfo = this->fields.beforeChargeTimeInfo;
                                gameObject = (UnityEngine_GameObject_o *)SkillEntity__getEffectChargeTurn(v45, v50, 0LL);
                                if ( !beforeChargeTimeInfo )
                                  goto LABEL_96;
                                UnityEngine_GameObject__SetActive(beforeChargeTimeInfo, (int)gameObject > 0, 0LL);
                                gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefTitleLb;
                                if ( !gameObject )
                                  goto LABEL_96;
                                UILabel__set_text((UILabel_o *)gameObject, name, 0LL);
                                if ( isDispLv )
                                {
                                  v76 = v44;
                                  skillBefTitleLb = this->fields.skillBefTitleLb;
                                  v78 = name;
                                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                  v82 = LocalizationManager__Get((System_String_o *)StringLiteral_2110/*"APPEND_SKILL_RESULT_LV"*/, 0LL);
                                  v83 = v100;
                                  if ( v76 )
                                    v83 = targetLv;
                                  v101 = v83;
                                  v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v101, v79, v80, v81);
                                  v85 = System_String__Format(v82, v84, 0LL);
                                  gameObject = (UnityEngine_GameObject_o *)System_String__Concat_61535060(v78, v85, 0LL);
                                  if ( !skillBefTitleLb )
                                    goto LABEL_96;
                                  UILabel__set_text(skillBefTitleLb, (System_String_o *)gameObject, 0LL);
                                }
                                gameObject = (UnityEngine_GameObject_o *)this->fields.skillBefTitleLb;
                                if ( !gameObject )
                                  goto LABEL_96;
                                UILabel__SetCondensedScale((UILabel_o *)gameObject, 255, 0LL);
                                if ( v49 )
                                {
                                  StrengthStatus = ServantSkillEntity__GetStrengthStatus(v49, 0LL);
                                  if ( targetIdOld >= 1 )
                                  {
                                    gameObject = (UnityEngine_GameObject_o *)ServantSkillMaster__getEntityFromSkillId(
                                                                               v98,
                                                                               v99,
                                                                               v47,
                                                                               targetIdOld,
                                                                               0LL);
                                    if ( !gameObject )
                                      goto LABEL_96;
                                    v49 = (ServantSkillEntity_o *)gameObject;
                                    StrengthStatus = ServantSkillEntity__GetStrengthStatus(
                                                       (ServantSkillEntity_o *)gameObject,
                                                       0LL);
                                  }
                                  v87 = StrengthStatus;
                                  skillNum = v49->fields.skillNum;
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
                                    v91 = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
                                    v92 = UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)gameObject,
                                            0LL);
                                    gameObject = BaseMonoBehaviour__createObject_38129480(
                                                   (BaseMonoBehaviour_o *)this,
                                                   v91,
                                                   v92,
                                                   0LL,
                                                   0LL);
                                    if ( !gameObject )
                                      goto LABEL_96;
                                    v93 = UnityEngine_GameObject__GetComponent_object_(
                                            gameObject,
                                            (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
                                    *p_servantSkillStrengthStatusBefore = (struct ServantSkillStrengthStatus_o *)v93;
                                    sub_1B76164(
                                      (ServantStatusBattleListViewItem_o *)&this->fields.servantSkillStrengthStatusBefore,
                                      (int32_t)v93,
                                      v94,
                                      v95);
                                  }
                                  gameObject = (UnityEngine_GameObject_o *)*p_servantSkillStrengthStatusBefore;
                                  if ( !*p_servantSkillStrengthStatusBefore )
                                    goto LABEL_96;
                                  v106 = (UnityEngine_Vector2Int_o)0x1200000014LL;
                                  ServantSkillStrengthStatus__Set(
                                    (ServantSkillStrengthStatus_o *)gameObject,
                                    this->fields.skillBefTitleLb,
                                    v87,
                                    skillNum,
                                    20,
                                    -9,
                                    v106,
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
                                  v96 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
                                  System_Action___ctor(
                                    v96,
                                    (Il2CppObject *)this,
                                    Method_SkillUpResultWindowComponent_EndOpen__,
                                    0LL);
                                  BaseDialog__Open((BaseDialog_o *)this, v96, 0, 0LL);
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
    sub_1B7641C(gameObject, v38);
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
    sub_1B7641C(skillInfo, enable);
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

  if ( (byte_4A3183A & 1) == 0 )
  {
    sub_1B761C0(&LocalizationManager_TypeInfo, *(_QWORD *)&oldSkillId);
    sub_1B761C0(&StringLiteral_6920/*"GET_SKILL_NAME"*/, v11);
    sub_1B761C0(&StringLiteral_2053/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, v12);
    sub_1B761C0(&StringLiteral_3008/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, v13);
    byte_4A3183A = 1;
  }
  detail = 0LL;
  name = 0LL;
  text = 0LL;
  v27 = 0LL;
  skillChangeInfoSubTitleOld = this->fields.skillChangeInfoSubTitleOld;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SkillEntity = LocalizationManager__Get((System_String_o *)StringLiteral_3008/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, 0LL);
  if ( !skillChangeInfoSubTitleOld )
    goto LABEL_14;
  UILabel__set_text(skillChangeInfoSubTitleOld, SkillEntity, 0LL);
  SkillEntity = (System_String_o *)SkillUpResultWindowComponent__GetSkillEntity(v17, oldSkillId, v18);
  if ( !SkillEntity )
    goto LABEL_14;
  SkillEntity__getSkillMessageInfo((SkillEntity_o *)SkillEntity, &name, &detail, oldSkillLv, 0LL);
  skillChangeInfoNameOld = this->fields.skillChangeInfoNameOld;
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_6920/*"GET_SKILL_NAME"*/, 0LL);
  SkillEntity = System_String__Format(v20, (Il2CppObject *)name, 0LL);
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
  SkillEntity = (System_String_o *)SkillUpResultWindowComponent__GetSkillEntity(v22, nowSkillId, v23);
  if ( !SkillEntity
    || (SkillEntity__getSkillMessageInfo((SkillEntity_o *)SkillEntity, &v27, &text, nowSkillLv, 0LL),
        skillChangeInfoNameNow = this->fields.skillChangeInfoNameNow,
        v25 = LocalizationManager__Get((System_String_o *)StringLiteral_6920/*"GET_SKILL_NAME"*/, 0LL),
        SkillEntity = System_String__Format(v25, (Il2CppObject *)v27, 0LL),
        !skillChangeInfoNameNow)
    || (UILabel__set_text(skillChangeInfoNameNow, SkillEntity, 0LL),
        (SkillEntity = (System_String_o *)this->fields.skillChangeInfoDetailNow) == 0LL) )
  {
LABEL_14:
    sub_1B7641C(SkillEntity, v16);
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
  System_String_o *DetalShort_39847920; // x21
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
  if ( (byte_4A31833 & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_Component_GetComponent_UIWidget___, usrSvtData);
    sub_1B761C0(&Method_DataManager_GetMaster_TreasureDvcLvMaster___, v15);
    sub_1B761C0(&Method_DataManager_GetMaster_TreasureDvcMaster___, v16);
    sub_1B761C0(&DataManager_TypeInfo, v17);
    sub_1B761C0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v18);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_1B761C0(&SkillUpResultWindowComponent_TypeInfo, v20);
    sub_1B761C0(&StringLiteral_1/*""*/, v21);
    byte_4A31833 = 1;
  }
  entity = 0LL;
  v49 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (TreasureDvcMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !usrSvtData )
    goto LABEL_69;
  v24 = Master_object;
  v26 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v52.fields.currentCryptoKey = v26;
  *(_QWORD *)&v52.fields.fakeValue = v25;
  Master_object = (TreasureDvcMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(v52, 0LL);
  if ( !v24 )
    goto LABEL_69;
  v27 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v24, (int32_t)Master_object, targetId, 0LL);
  Master_object = (TreasureDvcMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
  if ( !v27 || !Master_object )
    goto LABEL_69;
  v28 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Master_object, v27->fields.id, targetLv, 0LL);
  Master_object = (TreasureDvcMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)v24,
                                           &entity,
                                           targetIdOld,
                                           (const MethodInfo_30FF7D4 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
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
                                             (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                                             (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    Master_object = (TreasureDvcMaster_o *)TreasureDvcLvEntity__getDetalShort_39847920(v28, lv, 0LL);
    v38 = this->fields.npBefDetailLb;
    if ( v38 )
    {
      WrapControlText__textAdjust(npBefDetailLb, (System_String_o *)Master_object, v38->fields.mFontSize, 0, 0, 0LL);
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
    sub_1B7641C(Master_object, v23);
  }
  if ( targetIdOld < 1 )
  {
    v45 = this->fields.npBefDetailLb;
    Master_object = (TreasureDvcMaster_o *)TreasureDvcLvEntity__getDetalShort_39847920(v28, v49, 0LL);
    v46 = this->fields.npBefDetailLb;
    if ( !v46 )
      goto LABEL_69;
    mFontSize = v46->fields.mFontSize;
    v43 = (System_String_o *)Master_object;
    Master_object = (TreasureDvcMaster_o *)v45;
  }
  else
  {
    DetalShort_39847920 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (TreasureDvcMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !Master_object )
      goto LABEL_69;
    v41 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)Master_object, targetIdOld, targetLvOld, 0LL);
    if ( v41 )
      DetalShort_39847920 = TreasureDvcLvEntity__getDetalShort_39847920(v41, v49, 0LL);
    Master_object = (TreasureDvcMaster_o *)this->fields.npBefDetailLb;
    if ( !Master_object )
      goto LABEL_69;
    mFontSize = Master_object[5].fields.revision;
    v43 = DetalShort_39847920;
  }
  WrapControlText__textBBCodeAdjust((UILabel_o *)Master_object, v43, mFontSize, 0, 0, 0LL);
  npAftDetailLb = this->fields.npAftDetailLb;
  Master_object = (TreasureDvcMaster_o *)TreasureDvcLvEntity__getDetalShort_39847920(v28, lv, 0LL);
  v48 = this->fields.npAftDetailLb;
  if ( !v48 )
    goto LABEL_69;
  WrapControlText__textBBCodeAdjust(npAftDetailLb, (System_String_o *)Master_object, v48->fields.mFontSize, 0, 0, 0LL);
}