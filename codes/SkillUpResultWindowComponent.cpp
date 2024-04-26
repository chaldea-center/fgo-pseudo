// local variable allocation has failed, the output may be wrong!
void __fastcall SkillUpResultWindowComponent___cctor(const MethodInfo *method)
{
  int v1; // s3
  float v2; // s4
  float v3; // s5
  float v4; // s6
  int v5; // s0
  int v6; // s1
  int v7; // s2
  struct SkillUpResultWindowComponent_StaticFields v8; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_4350A5A & 1) == 0 )
  {
    sub_B70694(&SkillUpResultWindowComponent_TypeInfo);
    byte_4350A5A = 1;
  }
  v5 = 1065185444;
  v6 = 1064430469;
  v7 = 1050790593;
  v8 = (struct SkillUpResultWindowComponent_StaticFields)0LL;
  UnityEngine_Color___ctor_41064944(*(UnityEngine_Color_o *)(&v1 - 3), v2, v3, v4, (const MethodInfo *)&v8);
  *SkillUpResultWindowComponent_TypeInfo->static_fields = v8;
}


void __fastcall SkillUpResultWindowComponent___ctor(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4350A59 & 1) == 0 )
  {
    sub_B70694(&BaseDialog_TypeInfo);
    byte_4350A59 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SkillUpResultWindowComponent__Close(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x0
  System_Action_o *v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4350A54 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SkillUpResultWindowComponent_EndClose__);
    byte_4350A54 = 1;
  }
  v3 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndClose__, 0LL);
  SkillUpResultWindowComponent__Close_23174028(this, v4, v5);
}


void __fastcall SkillUpResultWindowComponent__Close_23174028(
        SkillUpResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v4; // x20

  if ( (byte_4350A55 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SkillUpResultWindowComponent_EndClose__);
    byte_4350A55 = 1;
  }
  v4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
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
    sub_B7076C(gameObject, v4);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall SkillUpResultWindowComponent__EndOpen(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *openCallBack; // x19
  BattleServantConfConponent_o *p_openCallBack; // x0

  openCallBack = this->fields.openCallBack;
  if ( openCallBack )
  {
    p_openCallBack = (BattleServantConfConponent_o *)&this->fields.openCallBack;
    p_openCallBack->klass = 0LL;
    sub_B70630(p_openCallBack, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(openCallBack, 0LL);
  }
}


ServantSkillEntity_o *__fastcall SkillUpResultWindowComponent__GetServantSkillEntity(
        SkillUpResultWindowComponent_o *this,
        int32_t svtId,
        int32_t num,
        int32_t skillId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4350A57 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4350A57 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantSkillMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v9);
  }
  return ServantSkillMaster__getEntityFromSkillId((ServantSkillMaster_o *)Instance, svtId, num, skillId, 0LL);
}


SkillEntity_o *__fastcall SkillUpResultWindowComponent__GetSkillEntity(
        SkillUpResultWindowComponent_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4350A56 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B70694(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4350A56 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v5);
  }
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
    &entity,
    skillId,
    (const MethodInfo_21C049C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
  return (SkillEntity_o *)entity;
}


void __fastcall SkillUpResultWindowComponent__Init(SkillUpResultWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7076C(0LL, v4);
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
  __int64 gameObject; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Text_StringBuilder_o *v18; // x20
  int32_t SvtId; // w22
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  System_Collections_Generic_List_QuestEntity__o *v22; // x0
  Il2CppObject *current; // x23
  System_String_o *v24; // x0
  __int64 v25; // x1
  System_String_o *v26; // x24
  Il2CppObject *QuestName; // x1
  System_String_o *v28; // x0
  int32_t v29; // w23
  UILabel_o *friendshipLabel; // x22
  UnityEngine_GameObject_o *v31; // x20
  UILabel_o *friendshipCurrentLvLabel; // x20
  UILabel_o *friendshipResultLvLabel; // x20
  UIWidget_o *v34; // x20
  SkillUpResultWindowComponent_c *v35; // x8
  struct UILabel_o *v36; // x8
  System_Action_o *v37; // x20
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+20h] [xbp-70h] BYREF
  int32_t FriendShipRank; // [xsp+48h] [xbp-48h] BYREF
  int32_t v41; // [xsp+4Ch] [xbp-44h] BYREF

  v41 = oldFriendShipRank;
  if ( (byte_4350A52 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_QuestEntity__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&ServantCommentManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B70694(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B70694(&Method_SkillUpResultWindowComponent_EndOpen__);
    sub_B70694(&SkillUpResultWindowComponent_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&System_Text_StringBuilder_TypeInfo);
    sub_B70694(&StringLiteral_11259/*"RESULT_BOUNDS_OPENQUEST"*/);
    sub_B70694(&StringLiteral_11261/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/);
    sub_B70694(&StringLiteral_11256/*"RESULT_BOUNDS_GETVOICE"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4350A52 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  FriendShipRank = 0;
  if ( !this->fields.state )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(6, (const MethodInfo *)usrSvtData);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      SkillUpResultWindowComponent__SetChildrenActive(this, 0, v11);
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
            sub_B70630(
              (BattleServantConfConponent_o *)&this->fields.openCallBack,
              (System_Int32_array **)callback,
              v12,
              v13,
              v14,
              v15,
              v16,
              v17);
            gameObject = (__int64)this->fields.friendshipLabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              v18 = (System_Text_StringBuilder_o *)sub_B70764(System_Text_StringBuilder_TypeInfo);
              System_Text_StringBuilder___ctor(v18, 0LL);
              if ( usrSvtData )
              {
                SvtId = UserServantEntity__getSvtId(usrSvtData, 0LL);
                gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( gameObject )
                {
                  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)gameObject,
                                                                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !NetworkManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  }
                  gameObject = NetworkManager__get_UserId(0LL);
                  if ( MasterData_WarQuestSelectionMaster )
                  {
                    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                                         MasterData_WarQuestSelectionMaster,
                                         gameObject,
                                         SvtId,
                                         0LL);
                    if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
                    }
                    gameObject = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                    if ( gameObject )
                    {
                      v22 = clsQuestCheck__GetReleaseQuestEntityByServantFriendShip(
                              (clsQuestCheck_o *)gameObject,
                              SvtId,
                              oldFriendShipRank,
                              8,
                              0LL);
                      if ( v22 )
                      {
                        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                          &v38,
                          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v22,
                          (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_QuestEntity__GetEnumerator__);
                        v39 = v38;
                        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                                  &v39,
                                  (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__MoveNext__) )
                        {
                          current = v39.fields.current;
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11259/*"RESULT_BOUNDS_OPENQUEST"*/, 0LL);
                          if ( !current )
                            sub_B7076C(v24, v25);
                          v26 = v24;
                          QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)current, 0LL);
                          v28 = System_String__Format(v26, QuestName, 0LL);
                          if ( !v18 )
                            sub_B7076C(v28, v28);
                          System_Text_StringBuilder__AppendLine_42602776(v18, v28, 0LL);
                        }
                        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                          &v39,
                          (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_QuestEntity__Dispose__);
                      }
                      v29 = v41;
                      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
                      }
                      gameObject = ServantCommentManager__IsOpenByServantFriendShip(SvtId, v29, 0LL);
                      if ( (gameObject & 1) != 0 )
                      {
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11261/*"RESULT_BOUNDS_UPDATE_MATERIAL"*/, 0LL);
                        if ( !v18 )
                          goto LABEL_66;
                        gameObject = (__int64)System_Text_StringBuilder__AppendLine_42602776(
                                                v18,
                                                (System_String_o *)gameObject,
                                                0LL);
                      }
                      if ( !EntityDefinitely )
                        goto LABEL_66;
                      gameObject = ServantVoiceMaster__isOpenByServantFriendShip(
                                     SvtId,
                                     EntityDefinitely->fields.maxLimitCount,
                                     v41,
                                     0LL);
                      if ( (gameObject & 1) != 0 )
                      {
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11256/*"RESULT_BOUNDS_GETVOICE"*/, 0LL);
                        if ( !v18 )
                          goto LABEL_66;
                        System_Text_StringBuilder__AppendLine_42602776(v18, (System_String_o *)gameObject, 0LL);
                      }
                      else if ( !v18 )
                      {
                        goto LABEL_66;
                      }
                      friendshipLabel = this->fields.friendshipLabel;
                      gameObject = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v18->klass->vtable._3_ToString.method)(
                                     v18,
                                     v18->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                      if ( friendshipLabel )
                      {
                        UILabel__set_text(friendshipLabel, (System_String_o *)gameObject, 0LL);
                        gameObject = (__int64)this->fields.friendshipLvInfo;
                        if ( gameObject )
                        {
                          v31 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0LL);
                          gameObject = UserServantCollectionEntity__getFriendShipRank(EntityDefinitely, 0LL);
                          if ( v31 )
                          {
                            UnityEngine_GameObject__SetActive(v31, (int)gameObject > v41, 0LL);
                            friendshipCurrentLvLabel = this->fields.friendshipCurrentLvLabel;
                            gameObject = (__int64)System_Int32__ToString((int32_t)&v41, 0LL);
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
                                  gameObject = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)gameObject,
                                                          (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
                                  v34 = (UIWidget_o *)gameObject;
                                  v35 = SkillUpResultWindowComponent_TypeInfo;
                                  if ( (BYTE3(SkillUpResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
                                    v35 = SkillUpResultWindowComponent_TypeInfo;
                                  }
                                  if ( v34 )
                                  {
                                    UIWidget__set_color(v34, v35->static_fields->COLOR_VAL, 0LL);
                                    v36 = this->fields.friendshipLabel;
                                    if ( v36 )
                                    {
                                      if ( !System_String__IsNullOrEmpty(v36->fields.mText, 0LL) )
                                      {
LABEL_64:
                                        v37 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
                                        System_Action___ctor(
                                          v37,
                                          (Il2CppObject *)this,
                                          Method_SkillUpResultWindowComponent_EndOpen__,
                                          0LL);
                                        BaseDialog__Open((BaseDialog_o *)this, v37, 0, 0LL);
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
                                          goto LABEL_64;
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
LABEL_66:
    sub_B7076C(gameObject, v10);
  }
}


void __fastcall SkillUpResultWindowComponent__OpenNextNpUpResultInfo(
        SkillUpResultWindowComponent_o *this,
        ServantTreasureDeviceAddEntity_o *tdAddEntity,
        int32_t npIdBefore,
        int32_t npIdAfter,
        int32_t index,
        int32_t beforeLv,
        int32_t afterLv,
        System_String_o *titleText,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2

  if ( (byte_4350A4F & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4350A4F = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, (const MethodInfo *)tdAddEntity);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v20);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.npInfo, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.npInfo;
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.npInfoAddRoot;
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.npInfoNormalRoot;
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = this->fields.npInfoHeroineNpChangeRoot;
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.npInfoNpChangeRoot) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.npInfoNpChangeRoot) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.npInfoAddResultComponent) == 0LL) )
  {
LABEL_20:
    sub_B7076C(gameObject, v19);
  }
  if ( tdAddEntity )
    NpInfoAddResultComponent__SetDisplay(
      (NpInfoAddResultComponent_o *)gameObject,
      tdAddEntity,
      index,
      beforeLv,
      afterLv,
      0LL);
  else
    NpInfoAddResultComponent__SetDisplay_26017564(
      (NpInfoAddResultComponent_o *)gameObject,
      npIdBefore,
      npIdAfter,
      beforeLv,
      afterLv,
      titleText,
      0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_4350A4E & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4350A4E = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, *(const MethodInfo **)&oldTargetId);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v15);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.npInfo, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.npInfo;
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.npInfoNormalRoot;
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = this->fields.npInfoHeroineNpChangeRoot;
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.npInfoNpChangeRoot;
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.npInfoAddRoot) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoOld) == 0LL)
    || (HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, oldTargetId, oldTargetLv, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoNow) == 0LL) )
  {
LABEL_17:
    sub_B7076C(gameObject, v14);
  }
  HeroineNpChangeInfoComponent__Setup((HeroineNpChangeInfoComponent_o *)gameObject, nowTargetId, nowTargetLv, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, callback, 0, 0LL);
}


void __fastcall SkillUpResultWindowComponent__OpenNpUpResultInfo_23168716(
        SkillUpResultWindowComponent_o *this,
        UserServantEntity_o *usrSvtData,
        int32_t targetId,
        int32_t targetLv,
        System_Action_o *callback,
        int32_t targetIdOld,
        int32_t targetLvOld,
        int32_t kind,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  ServantTreasureDeviceAddMaster_o *v25; // x26
  __int64 v26; // x20
  __int64 v27; // x27
  int32_t v28; // w20
  int32_t TransformCount; // w27
  int32_t v30; // w23
  _BOOL4 v31; // w21
  _BOOL4 IsHeroine; // w28
  int32_t v33; // w26
  _BOOL4 v34; // w22
  int32_t v35; // w20
  bool v36; // w20
  bool v37; // w8
  int v38; // w28
  const MethodInfo *v39; // x7
  System_Action_o *v40; // x20
  ServantTreasureDeviceAddEntity_o *tdAddEntity; // [xsp+8h] [xbp-68h]
  unsigned int treasureDvcId; // [xsp+10h] [xbp-60h]
  TransformServantInfo_o *transformInfo; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4350A50 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SkillUpResultWindowComponent_EndOpen__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4350A50 = 1;
  }
  transformInfo = 0LL;
  if ( !this->fields.state )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(6, (const MethodInfo *)usrSvtData);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      SkillUpResultWindowComponent__SetChildrenActive(this, 0, v18);
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
            sub_B70630(
              (BattleServantConfConponent_o *)&this->fields.openCallBack,
              (System_Int32_array **)callback,
              v19,
              v20,
              v21,
              v22,
              v23,
              v24);
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            treasureDvcId = targetId;
            gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
            if ( usrSvtData )
            {
              v25 = (ServantTreasureDeviceAddMaster_o *)gameObject;
              v27 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
              v26 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v45.fields.currentCryptoKey = v27;
              *(_QWORD *)&v45.fields.fakeValue = v26;
              v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v45, 0LL);
              gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                                         usrSvtData->fields.limitCount,
                                                         0LL);
              if ( v25 )
              {
                tdAddEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v25, v28, (int32_t)gameObject, 0, 0LL);
                TransformCount = UserServantEntity__GetTransformCount(usrSvtData, 1, 0LL);
                v30 = targetLv;
                v31 = targetLvOld != targetLv;
                IsHeroine = UserServantEntity__IsHeroine(usrSvtData, 0LL);
                v33 = targetLvOld;
                v34 = targetIdOld != treasureDvcId;
                if ( targetIdOld == treasureDvcId )
                {
                  if ( UserServantEntity__IsHeroine(usrSvtData, 0LL) )
                    v35 = 0;
                  else
                    v35 = targetIdOld;
                  targetIdOld = v35;
                }
                gameObject = this->fields.npInfoAddRoot;
                if ( gameObject )
                {
                  v36 = tdAddEntity != 0LL || TransformCount > 1;
                  UnityEngine_GameObject__SetActive(gameObject, v36, 0LL);
                  gameObject = this->fields.npInfoNormalRoot;
                  if ( gameObject )
                  {
                    v37 = IsHeroine && v34;
                    v38 = v31 && IsHeroine && v34;
                    UnityEngine_GameObject__SetActive(gameObject, kind != 18 && (!v31 || !v37) && !v36, 0LL);
                    gameObject = this->fields.npInfoHeroineNpChangeRoot;
                    if ( gameObject )
                    {
                      UnityEngine_GameObject__SetActive(gameObject, v38, 0LL);
                      gameObject = this->fields.npInfoNpChangeRoot;
                      if ( gameObject )
                      {
                        UnityEngine_GameObject__SetActive(gameObject, kind == 18, 0LL);
                        if ( v38 )
                        {
                          gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoOld;
                          if ( gameObject )
                          {
                            HeroineNpChangeInfoComponent__Setup(
                              (HeroineNpChangeInfoComponent_o *)gameObject,
                              targetIdOld,
                              v33,
                              0LL);
                            gameObject = (UnityEngine_GameObject_o *)this->fields.heroineNpChangeInfoNow;
                            v17 = treasureDvcId;
                            if ( gameObject )
                            {
                              HeroineNpChangeInfoComponent__Setup(
                                (HeroineNpChangeInfoComponent_o *)gameObject,
                                treasureDvcId,
                                v30,
                                0LL);
LABEL_53:
                              v40 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
                              System_Action___ctor(
                                v40,
                                (Il2CppObject *)this,
                                Method_SkillUpResultWindowComponent_EndOpen__,
                                0LL);
                              BaseDialog__Open((BaseDialog_o *)this, v40, 0, 0LL);
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
                              v33,
                              0LL);
                            gameObject = (UnityEngine_GameObject_o *)this->fields.npChangeInfoNow;
                            v17 = treasureDvcId;
                            if ( gameObject )
                            {
                              HeroineNpChangeInfoComponent__SetupForNpChange(
                                (HeroineNpChangeInfoComponent_o *)gameObject,
                                treasureDvcId,
                                v30,
                                0LL);
                              goto LABEL_53;
                            }
                          }
                        }
                        else if ( tdAddEntity )
                        {
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
                              gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         gameObject,
                                                                         (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                              if ( gameObject )
                              {
                                UIWidget__set_height((UIWidget_o *)gameObject, 300, 0LL);
                                gameObject = (UnityEngine_GameObject_o *)this->fields.npInfoAddResultComponent;
                                if ( gameObject )
                                {
                                  NpInfoAddResultComponent__SetDisplay(
                                    (NpInfoAddResultComponent_o *)gameObject,
                                    tdAddEntity,
                                    0,
                                    v33,
                                    v30,
                                    0LL);
                                  goto LABEL_53;
                                }
                              }
                            }
                          }
                        }
                        else
                        {
                          if ( TransformCount < 2 )
                          {
                            SkillUpResultWindowComponent__SetupNpUpResultInfoNormal(
                              this,
                              usrSvtData,
                              treasureDvcId,
                              v30,
                              targetIdOld,
                              v33,
                              kind,
                              v39);
                            goto LABEL_53;
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
                              gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         gameObject,
                                                                         (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                              if ( gameObject )
                              {
                                UIWidget__set_height((UIWidget_o *)gameObject, 300, 0LL);
                                gameObject = (UnityEngine_GameObject_o *)UserServantEntity__GetTransformedServantInfo(
                                                                           usrSvtData,
                                                                           &transformInfo,
                                                                           0,
                                                                           0LL);
                                v17 = targetIdOld <= 0 ? treasureDvcId : (unsigned int)targetIdOld;
                                if ( transformInfo )
                                {
                                  gameObject = (UnityEngine_GameObject_o *)this->fields.npInfoAddResultComponent;
                                  if ( gameObject )
                                  {
                                    NpInfoAddResultComponent__SetDisplay_26017564(
                                      (NpInfoAddResultComponent_o *)gameObject,
                                      v17,
                                      treasureDvcId,
                                      v33,
                                      v30,
                                      transformInfo->fields.titleText,
                                      0LL);
                                    goto LABEL_53;
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
    sub_B7076C(gameObject, v17);
  }
}


void __fastcall SkillUpResultWindowComponent__OpenPowerUpResultInfo(
        SkillUpResultWindowComponent_o *this,
        UserServantEntity_o *usrSvtData,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *v16; // x21
  __int64 v17; // x20
  __int64 v18; // x22
  WarEntity_o *Entity; // x0
  UILabel_o *powerupLabel; // x20
  WarEntity_o *v21; // x21
  System_Action_o *v22; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4350A53 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SkillUpResultWindowComponent_EndOpen__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_11260/*"RESULT_BOUNDS_POWERUP"*/);
    byte_4350A53 = 1;
  }
  if ( !this->fields.state )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(6, (const MethodInfo *)usrSvtData);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    SkillUpResultWindowComponent__SetChildrenActive(this, 0, v9);
    gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.friendshipInfo, 0LL);
    if ( !gameObject )
      goto LABEL_23;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = this->fields.powerupInfo;
    if ( !gameObject )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.openCallBack = callback;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.openCallBack,
      (System_Int32_array **)callback,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_23;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !usrSvtData )
      goto LABEL_23;
    v16 = (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject;
    v18 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v23.fields.currentCryptoKey = v18;
    *(_QWORD *)&v23.fields.fakeValue = v17;
    gameObject = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                               v23,
                                               0LL);
    if ( !v16 )
      goto LABEL_23;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v16,
               (int32_t)gameObject,
               (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    powerupLabel = this->fields.powerupLabel;
    v21 = Entity;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11260/*"RESULT_BOUNDS_POWERUP"*/, 0LL);
    if ( !v21
      || (gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                     (System_String_o *)gameObject,
                                                     (Il2CppObject *)v21->fields.emptyMessage,
                                                     0LL),
          !powerupLabel) )
    {
LABEL_23:
      sub_B7076C(gameObject, v8);
    }
    UILabel__set_text(powerupLabel, (System_String_o *)gameObject, 0LL);
    v22 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v22, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v22, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillUpResultWindowComponent__OpenSkillChangeMessage(
        SkillUpResultWindowComponent_o *this,
        int32_t svtId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  System_String_o *BattleName; // x0
  UILabel_o *costumeChangeLabel; // x21
  Il2CppObject *v12; // x22
  System_String_o *v13; // x0

  if ( (byte_4350A4C & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_3470/*"COSTUME_CHANGE_DESCRIPTION"*/);
    byte_4350A4C = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, *(const MethodInfo **)&svtId);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v9);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.costumeChangeInfo, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.costumeChangeInfo;
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_18;
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)gameObject,
                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !gameObject )
    goto LABEL_18;
  gameObject = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
                                             svtId,
                                             (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !gameObject )
    goto LABEL_18;
  BattleName = ServantEntity__getBattleName((ServantEntity_o *)gameObject, 0, -1, 0LL);
  costumeChangeLabel = this->fields.costumeChangeLabel;
  v12 = (Il2CppObject *)BattleName;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3470/*"COSTUME_CHANGE_DESCRIPTION"*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v13, v12, 0LL);
  if ( !costumeChangeLabel )
LABEL_18:
    sub_B7076C(gameObject, v8);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  UILabel_o *skillChangeInfoTitle; // x26
  System_String_o *v19; // x0
  const MethodInfo *v20; // x5

  if ( (byte_4350A4D & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_3471/*"COSTUME_CHANGE_SKILL_TITLE"*/);
    byte_4350A4D = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, *(const MethodInfo **)&oldSkillId);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v17);
  gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.skillChangeInfo, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.skillChangeInfo;
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  skillChangeInfoTitle = this->fields.skillChangeInfoTitle;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3471/*"COSTUME_CHANGE_SKILL_TITLE"*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(v19, (Il2CppObject *)costumeName, 0LL);
  if ( !skillChangeInfoTitle )
LABEL_15:
    sub_B7076C(gameObject, v16);
  UILabel__set_text(skillChangeInfoTitle, (System_String_o *)gameObject, 0LL);
  SkillUpResultWindowComponent__SetSkillInfo(this, oldSkillId, oldSkillLv, nowSkillId, nowSkillLv, v20);
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
  void *gameObject; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  char v30; // w20
  DataMasterBase_WarMaster__WarEntity__int__o *v31; // x22
  SkillEntity_o *v32; // x28
  int32_t v33; // w24
  il2cpp_array_size_t max_length; // w8
  int32_t v35; // w9
  ServantSkillEntity_o *v36; // x26
  int32_t v37; // w21
  UILabel_o *skillBefChargeTimeLb; // x20
  UnityEngine_GameObject_o *beforeChargeTimeInfo; // x20
  UILabel_o *skillAftChargeTimeLb; // x20
  UnityEngine_GameObject_o *AfterChargeTimeInfo; // x20
  UILabel_o *skillAftTitleLb; // x27
  System_String_o *v43; // x20
  System_String_o *v44; // x21
  __int64 v45; // x2
  Il2CppObject *v46; // x0
  System_String_o *v47; // x0
  UnityEngine_Object_o *servantSkillStrengthStatusAfter; // x20
  System_String_o *PATH; // x20
  UnityEngine_Transform_o *transform; // x0
  struct ServantSkillStrengthStatus_o *Component_srcLineSprite; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  ServantSkillStrengthStatus_o *v58; // x20
  UILabel_o *v59; // x27
  int32_t v60; // w27
  int32_t v61; // w1
  UILabel_o *v62; // x20
  UILabel_o *skillBefTitleLb; // x21
  System_String_o *v64; // x22
  __int64 v65; // x2
  System_String_o *v66; // x20
  int32_t v67; // w8
  Il2CppObject *v68; // x0
  System_String_o *v69; // x0
  int32_t StrengthStatus; // w0
  int32_t v71; // w21
  int32_t skillNum; // w20
  UnityEngine_Object_o *servantSkillStrengthStatusBefore; // x23
  struct ServantSkillStrengthStatus_o **p_servantSkillStrengthStatusBefore; // x22
  System_String_o *v75; // x23
  UnityEngine_Transform_o *v76; // x0
  System_Int32_array **v77; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Action_o *v84; // x20
  __int64 v85; // x0
  int32_t v86; // [xsp+0h] [xbp-90h]
  ServantSkillMaster_o *v87; // [xsp+8h] [xbp-88h]
  int32_t svtId; // [xsp+14h] [xbp-7Ch]
  int key; // [xsp+18h] [xbp-78h]
  int32_t v90; // [xsp+24h] [xbp-6Ch]
  int32_t v91; // [xsp+28h] [xbp-68h] BYREF
  int32_t EffectChargeTurn; // [xsp+2Ch] [xbp-64h] BYREF
  System_String_o *detail; // [xsp+30h] [xbp-60h] BYREF
  System_String_o *name; // [xsp+38h] [xbp-58h] BYREF
  UnityEngine_Vector2Int_o v95; // 0:x6.8
  UnityEngine_Vector2Int_o v96; // 0:x6.8

  if ( (byte_4350A4B & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B70694(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&ServantSkillStrengthStatus_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SkillUpResultWindowComponent_EndOpen__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_1744/*"APPEND_SKILL_RESULT_AFTER_LV"*/);
    sub_B70694(&StringLiteral_12415/*"SKILL_COMBINE_EFFFECT_UNRELEASE"*/);
    sub_B70694(&StringLiteral_1745/*"APPEND_SKILL_RESULT_LV"*/);
    byte_4350A4B = 1;
  }
  detail = 0LL;
  name = 0LL;
  EffectChargeTurn = 0;
  if ( this->fields.state )
    return;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, *(const MethodInfo **)&targetId);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  SkillUpResultWindowComponent__SetChildrenActive(this, 0, v23);
  gameObject = GameObjectExtensions__GetParent(this->fields.skillInfo, 0LL);
  if ( !gameObject )
    goto LABEL_105;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_105;
  v90 = targetLvOld;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = this->fields.skillInfo;
  if ( !gameObject )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.openCallBack = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.openCallBack,
    (System_Int32_array **)callback,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  gameObject = (void *)System_String__IsNullOrEmpty(dispBattleName, 0LL);
  if ( !this->fields.titleLabel )
    goto LABEL_105;
  v30 = (char)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.titleLabel, 0LL);
  if ( !gameObject )
    goto LABEL_105;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, (v30 ^ 1) & 1, 0LL);
  gameObject = this->fields.titleLabel;
  if ( !gameObject )
    goto LABEL_105;
  UILabel__set_text((UILabel_o *)gameObject, dispBattleName, 0LL);
  if ( (v30 & 1) == 0 && !this->fields.changedLayout )
  {
    GameObjectExtensions__AddLocalPositionY(this->fields.skillInfo, this->fields.skillInfoOffset, 0LL);
    this->fields.changedLayout = 1;
  }
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_105;
  gameObject = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)gameObject,
                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !gameObject )
    goto LABEL_105;
  v31 = (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject;
  gameObject = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
                 targetId,
                 (const MethodInfo_21C0440 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !skillList )
    goto LABEL_105;
  v32 = (SkillEntity_o *)gameObject;
  v33 = 0;
  max_length = skillList->max_length;
  while ( v33 < (int)max_length )
  {
    if ( v33 >= max_length )
    {
      v85 = sub_B70798(gameObject);
      sub_B70738(v85, 0LL);
    }
    v35 = skillList->m_Items[++v33];
    if ( v35 == targetId )
      goto LABEL_26;
  }
  v33 = 0;
LABEL_26:
  gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_105;
  gameObject = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)gameObject,
                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  if ( !gameObject )
    goto LABEL_105;
  v87 = (ServantSkillMaster_o *)gameObject;
  svtId = baseSvtId;
  gameObject = ServantSkillMaster__getEntityFromSkillId(
                 (ServantSkillMaster_o *)gameObject,
                 baseSvtId,
                 v33,
                 targetId,
                 0LL);
  if ( !v32 )
    goto LABEL_105;
  v36 = (ServantSkillEntity_o *)gameObject;
  SkillEntity__getSkillMessageInfo(v32, &name, &detail, targetLv, 0LL);
  gameObject = this->fields.skillAfter;
  v37 = targetIdOld >= 1 ? v90 : targetLv - 1;
  if ( !gameObject )
    goto LABEL_105;
  if ( isOpen )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = this->fields.skillIconBef;
    if ( !gameObject )
      goto LABEL_105;
    SkillIconComponent__Set_26485508((SkillIconComponent_o *)gameObject, targetId, targetLv, 0LL);
    skillBefChargeTimeLb = this->fields.skillBefChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v32, targetLv, 0LL);
    gameObject = System_Int32__ToString((int32_t)&EffectChargeTurn, 0LL);
    if ( !skillBefChargeTimeLb )
      goto LABEL_105;
    UILabel__set_text(skillBefChargeTimeLb, (System_String_o *)gameObject, 0LL);
    beforeChargeTimeInfo = this->fields.beforeChargeTimeInfo;
    gameObject = (void *)SkillEntity__getEffectChargeTurn(v32, v37, 0LL);
    if ( !beforeChargeTimeInfo )
      goto LABEL_105;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = this->fields.skillIconAft;
    if ( !gameObject )
      goto LABEL_105;
    SkillIconComponent__Set_26485508((SkillIconComponent_o *)gameObject, targetId, targetLv, 0LL);
    skillAftChargeTimeLb = this->fields.skillAftChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v32, targetLv, 0LL);
    gameObject = System_Int32__ToString((int32_t)&EffectChargeTurn, 0LL);
    if ( !skillAftChargeTimeLb )
      goto LABEL_105;
    UILabel__set_text(skillAftChargeTimeLb, (System_String_o *)gameObject, 0LL);
    AfterChargeTimeInfo = this->fields.AfterChargeTimeInfo;
    gameObject = (void *)SkillEntity__getEffectChargeTurn(v32, targetLv, 0LL);
    if ( !AfterChargeTimeInfo )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive(AfterChargeTimeInfo, (int)gameObject > 0, 0LL);
    gameObject = this->fields.skillAftTitleLb;
    if ( !gameObject )
      goto LABEL_105;
    UILabel__set_text((UILabel_o *)gameObject, name, 0LL);
    key = targetIdOld;
    if ( isDispLv )
    {
      v86 = v37;
      skillAftTitleLb = this->fields.skillAftTitleLb;
      v43 = name;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v44 = LocalizationManager__Get((System_String_o *)StringLiteral_1744/*"APPEND_SKILL_RESULT_AFTER_LV"*/, 0LL);
      v91 = targetLv;
      v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v91, v45);
      v47 = System_String__Format(v44, v46, 0LL);
      gameObject = System_String__Concat_44758168(v43, v47, 0LL);
      if ( !skillAftTitleLb )
        goto LABEL_105;
      UILabel__set_text(skillAftTitleLb, (System_String_o *)gameObject, 0LL);
      v37 = v86;
    }
    gameObject = this->fields.skillAftTitleLb;
    if ( !gameObject )
      goto LABEL_105;
    UILabel__SetCondensedScale((UILabel_o *)gameObject, 255, 0LL);
    if ( v36 )
    {
      servantSkillStrengthStatusAfter = (UnityEngine_Object_o *)this->fields.servantSkillStrengthStatusAfter;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(servantSkillStrengthStatusAfter, 0LL, 0LL) )
      {
        if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
        }
        gameObject = this->fields.skillAftTitleLb;
        if ( !gameObject )
          goto LABEL_105;
        PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
        gameObject = BaseMonoBehaviour__createObject_20856580((BaseMonoBehaviour_o *)this, PATH, transform, 0LL, 0LL);
        if ( !gameObject )
          goto LABEL_105;
        Component_srcLineSprite = (struct ServantSkillStrengthStatus_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                           (UnityEngine_GameObject_o *)gameObject,
                                                                           (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
        this->fields.servantSkillStrengthStatusAfter = Component_srcLineSprite;
        sub_B70630(
          (BattleServantConfConponent_o *)&this->fields.servantSkillStrengthStatusAfter,
          (System_Int32_array **)Component_srcLineSprite,
          v52,
          v53,
          v54,
          v55,
          v56,
          v57);
      }
      v58 = this->fields.servantSkillStrengthStatusAfter;
      v59 = this->fields.skillAftTitleLb;
      gameObject = (void *)ServantSkillEntity__GetStrengthStatus(v36, 0LL);
      if ( !v58 )
        goto LABEL_105;
      v95 = (UnityEngine_Vector2Int_o)0x1200000014LL;
      ServantSkillStrengthStatus__Set(v58, v59, (int32_t)gameObject, v36->fields.skillNum, 20, -9, v95, 0LL);
    }
    gameObject = this->fields.skillAftdetailLb;
    if ( !gameObject )
      goto LABEL_105;
    v60 = *((_DWORD *)gameObject + 104);
    WrapControlText__textBBCodeAdjust((UILabel_o *)gameObject, detail, v60, 0, 0, 0LL);
    if ( key < 1 )
    {
      SkillEntity__getSkillMessageInfo(v32, &name, &detail, v37, 0LL);
      gameObject = this->fields.skillIconBef;
      if ( !gameObject )
        goto LABEL_105;
      v61 = targetId;
    }
    else
    {
      gameObject = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v31,
                     key,
                     (const MethodInfo_21C0440 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( !gameObject )
        goto LABEL_105;
      v32 = (SkillEntity_o *)gameObject;
      SkillEntity__getSkillMessageInfo((SkillEntity_o *)gameObject, &name, &detail, v37, 0LL);
      if ( !isRelease )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        detail = LocalizationManager__Get((System_String_o *)StringLiteral_12415/*"SKILL_COMBINE_EFFFECT_UNRELEASE"*/, 0LL);
        WrapControlText__textBBCodeAdjust(this->fields.skillAftdetailLb, detail, v60, 0, 0, 0LL);
      }
      gameObject = this->fields.skillIconBef;
      if ( !gameObject )
        goto LABEL_105;
      v61 = key;
    }
    SkillIconComponent__Set_26485508((SkillIconComponent_o *)gameObject, v61, v37, 0LL);
    v62 = this->fields.skillBefChargeTimeLb;
    EffectChargeTurn = SkillEntity__getEffectChargeTurn(v32, v37, 0LL);
    gameObject = System_Int32__ToString((int32_t)&EffectChargeTurn, 0LL);
    if ( !v62 )
      goto LABEL_105;
    UILabel__set_text(v62, (System_String_o *)gameObject, 0LL);
    beforeChargeTimeInfo = this->fields.beforeChargeTimeInfo;
    gameObject = (void *)SkillEntity__getEffectChargeTurn(v32, v37, 0LL);
    targetIdOld = key;
    if ( !beforeChargeTimeInfo )
      goto LABEL_105;
  }
  UnityEngine_GameObject__SetActive(beforeChargeTimeInfo, (int)gameObject > 0, 0LL);
  gameObject = this->fields.skillBefTitleLb;
  if ( !gameObject )
    goto LABEL_105;
  UILabel__set_text((UILabel_o *)gameObject, name, 0LL);
  if ( isDispLv )
  {
    skillBefTitleLb = this->fields.skillBefTitleLb;
    v64 = name;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v66 = LocalizationManager__Get((System_String_o *)StringLiteral_1745/*"APPEND_SKILL_RESULT_LV"*/, 0LL);
    v67 = v90;
    if ( isOpen )
      v67 = targetLv;
    v91 = v67;
    v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v91, v65);
    v69 = System_String__Format(v66, v68, 0LL);
    gameObject = System_String__Concat_44758168(v64, v69, 0LL);
    if ( !skillBefTitleLb )
      goto LABEL_105;
    UILabel__set_text(skillBefTitleLb, (System_String_o *)gameObject, 0LL);
  }
  gameObject = this->fields.skillBefTitleLb;
  if ( !gameObject )
    goto LABEL_105;
  UILabel__SetCondensedScale((UILabel_o *)gameObject, 255, 0LL);
  if ( v36 )
  {
    StrengthStatus = ServantSkillEntity__GetStrengthStatus(v36, 0LL);
    if ( targetIdOld >= 1 )
    {
      gameObject = ServantSkillMaster__getEntityFromSkillId(v87, svtId, v33, targetIdOld, 0LL);
      if ( !gameObject )
        goto LABEL_105;
      v36 = (ServantSkillEntity_o *)gameObject;
      StrengthStatus = ServantSkillEntity__GetStrengthStatus((ServantSkillEntity_o *)gameObject, 0LL);
    }
    v71 = StrengthStatus;
    skillNum = v36->fields.skillNum;
    servantSkillStrengthStatusBefore = (UnityEngine_Object_o *)this->fields.servantSkillStrengthStatusBefore;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    p_servantSkillStrengthStatusBefore = &this->fields.servantSkillStrengthStatusBefore;
    if ( !UnityEngine_Object__op_Equality(servantSkillStrengthStatusBefore, 0LL, 0LL) )
      goto LABEL_100;
    if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
    }
    gameObject = this->fields.skillBefTitleLb;
    if ( gameObject )
    {
      v75 = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
      v76 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      gameObject = BaseMonoBehaviour__createObject_20856580((BaseMonoBehaviour_o *)this, v75, v76, 0LL, 0LL);
      if ( gameObject )
      {
        v77 = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       (UnityEngine_GameObject_o *)gameObject,
                                       (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
        *p_servantSkillStrengthStatusBefore = (struct ServantSkillStrengthStatus_o *)v77;
        sub_B70630(
          (BattleServantConfConponent_o *)&this->fields.servantSkillStrengthStatusBefore,
          v77,
          v78,
          v79,
          v80,
          v81,
          v82,
          v83);
LABEL_100:
        gameObject = *p_servantSkillStrengthStatusBefore;
        if ( !*p_servantSkillStrengthStatusBefore )
          goto LABEL_105;
        v96 = (UnityEngine_Vector2Int_o)0x1200000014LL;
        ServantSkillStrengthStatus__Set(
          (ServantSkillStrengthStatus_o *)gameObject,
          this->fields.skillBefTitleLb,
          v71,
          skillNum,
          20,
          -9,
          v96,
          0LL);
        goto LABEL_102;
      }
    }
LABEL_105:
    sub_B7076C(gameObject, v22);
  }
LABEL_102:
  gameObject = this->fields.skillBefdetailLb;
  if ( !gameObject )
    goto LABEL_105;
  WrapControlText__textBBCodeAdjust((UILabel_o *)gameObject, detail, *((_DWORD *)gameObject + 104), 0, 0, 0LL);
  v84 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v84, (Il2CppObject *)this, Method_SkillUpResultWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v84, 0, 0LL);
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
    sub_B7076C(skillInfo, enable);
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
  void *SkillEntity; // x0
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
  System_String_o *text; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *v24; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4350A58 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_6973/*"GET_SKILL_NAME"*/);
    sub_B70694(&StringLiteral_1691/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/);
    sub_B70694(&StringLiteral_2605/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/);
    byte_4350A58 = 1;
  }
  name = 0LL;
  v24 = 0LL;
  detail = 0LL;
  text = 0LL;
  skillChangeInfoSubTitleOld = this->fields.skillChangeInfoSubTitleOld;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SkillEntity = LocalizationManager__Get((System_String_o *)StringLiteral_2605/*"BEFORE_CHANGE_SKILL_SUB_TITLE"*/, 0LL);
  if ( !skillChangeInfoSubTitleOld )
    goto LABEL_15;
  UILabel__set_text(skillChangeInfoSubTitleOld, (System_String_o *)SkillEntity, 0LL);
  SkillEntity = SkillUpResultWindowComponent__GetSkillEntity(v14, oldSkillId, v15);
  if ( !SkillEntity )
    goto LABEL_15;
  SkillEntity__getSkillMessageInfo((SkillEntity_o *)SkillEntity, &name, &detail, oldSkillLv, 0LL);
  skillChangeInfoNameOld = this->fields.skillChangeInfoNameOld;
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_6973/*"GET_SKILL_NAME"*/, 0LL);
  SkillEntity = System_String__Format(v17, (Il2CppObject *)name, 0LL);
  if ( !skillChangeInfoNameOld )
    goto LABEL_15;
  UILabel__set_text(skillChangeInfoNameOld, (System_String_o *)SkillEntity, 0LL);
  SkillEntity = this->fields.skillChangeInfoDetailOld;
  if ( !SkillEntity )
    goto LABEL_15;
  WrapControlText__textBBCodeAdjust((UILabel_o *)SkillEntity, detail, *((_DWORD *)SkillEntity + 104), 0, 0, 0LL);
  skillChangeInfoSubTitleNow = this->fields.skillChangeInfoSubTitleNow;
  SkillEntity = LocalizationManager__Get((System_String_o *)StringLiteral_1691/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, 0LL);
  if ( !skillChangeInfoSubTitleNow )
    goto LABEL_15;
  UILabel__set_text(skillChangeInfoSubTitleNow, (System_String_o *)SkillEntity, 0LL);
  SkillEntity = SkillUpResultWindowComponent__GetSkillEntity(v19, nowSkillId, v20);
  if ( !SkillEntity
    || (SkillEntity__getSkillMessageInfo((SkillEntity_o *)SkillEntity, &v24, &text, nowSkillLv, 0LL),
        skillChangeInfoNameNow = this->fields.skillChangeInfoNameNow,
        v22 = LocalizationManager__Get((System_String_o *)StringLiteral_6973/*"GET_SKILL_NAME"*/, 0LL),
        SkillEntity = System_String__Format(v22, (Il2CppObject *)v24, 0LL),
        !skillChangeInfoNameNow)
    || (UILabel__set_text(skillChangeInfoNameNow, (System_String_o *)SkillEntity, 0LL),
        (SkillEntity = this->fields.skillChangeInfoDetailNow) == 0LL) )
  {
LABEL_15:
    sub_B7076C(SkillEntity, v13);
  }
  WrapControlText__textBBCodeAdjust((UILabel_o *)SkillEntity, text, *((_DWORD *)SkillEntity + 104), 0, 0, 0LL);
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
  void *Master_WarQuestSelectionMaster; // x0
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
  System_String_o *v27; // x1
  System_String_o **v28; // x8
  UIWidget_o *v29; // x24
  SkillUpResultWindowComponent_c *v30; // x8
  UILabel_o *npBefDetailLb; // x20
  struct UILabel_o *v32; // x8
  System_String_o *DetalShort_29012120; // x21
  TreasureDvcLvEntity_o *v34; // x0
  int32_t mFontSize; // w2
  System_String_o *v36; // x1
  UILabel_o *resNpLvFirstLb; // x24
  struct UILabel_o *v38; // x20
  struct UILabel_o *v39; // x8
  UILabel_o *npAftDetailLb; // x20
  struct UILabel_o *v41; // x8
  int32_t v42; // [xsp+Ch] [xbp-64h] BYREF
  WarEntity_o *entity; // [xsp+10h] [xbp-60h] BYREF
  int32_t lv; // [xsp+1Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  lv = targetLv;
  if ( (byte_4350A51 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B70694(&Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    sub_B70694(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&SkillUpResultWindowComponent_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4350A51 = 1;
  }
  entity = 0LL;
  v42 = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !usrSvtData )
    goto LABEL_74;
  v17 = (TreasureDvcMaster_o *)Master_WarQuestSelectionMaster;
  v19 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v45.fields.currentCryptoKey = v19;
  *(_QWORD *)&v45.fields.fakeValue = v18;
  Master_WarQuestSelectionMaster = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v45, 0LL);
  if ( !v17 )
    goto LABEL_74;
  v20 = TreasureDvcMaster__GetEntityCheckServantOverwrite(v17, (int32_t)Master_WarQuestSelectionMaster, targetId, 0LL);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
  if ( !v20 || !Master_WarQuestSelectionMaster )
    goto LABEL_74;
  v21 = TreasureDvcLvMaster__GetEntity(
          (TreasureDvcLvMaster_o *)Master_WarQuestSelectionMaster,
          v20->fields.id,
          targetLv,
          0LL);
  Master_WarQuestSelectionMaster = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)v17,
                                             &entity,
                                             targetIdOld,
                                             (const MethodInfo_21C049C *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
    targetIdOld = 0;
  if ( !this->fields.npRubyNameLb )
    goto LABEL_74;
  UILabel__set_text(this->fields.npRubyNameLb, v20->fields.ruby, 0LL);
  Master_WarQuestSelectionMaster = this->fields.npNameLb;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_74;
  v22 = kind != 5;
  UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, v20->fields.name, 0LL);
  NoblePhantasmNameOverwriter__SetOverwriteNpLabel(usrSvtData, this->fields.npNameLb, this->fields.npRubyNameLb, 0LL);
  v42 = targetLvOld;
  if ( targetIdOld > 0 || kind == 5 )
  {
    Master_WarQuestSelectionMaster = this->fields.npRankInfo;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, v22, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npLvInfo;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npLvFirstInfo;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npChangeSp;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, v22, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npRankupBeforeLb;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    v28 = entity ? &entity->fields.longName : (System_String_o **)&StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, *v28, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npRankupAfterLb;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, v20->fields.rank, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npRankupAfterLb;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    Master_WarQuestSelectionMaster = UnityEngine_Component__GetComponent_WebViewObject_(
                                       (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                       (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    v29 = (UIWidget_o *)Master_WarQuestSelectionMaster;
    v30 = SkillUpResultWindowComponent_TypeInfo;
    if ( (BYTE3(SkillUpResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
      v30 = SkillUpResultWindowComponent_TypeInfo;
    }
    if ( !v29 )
      goto LABEL_74;
    UIWidget__set_color(v29, v30->static_fields->COLOR_VAL, 0LL);
    v42 = targetLvOld;
    if ( !v21 )
      goto LABEL_31;
  }
  else if ( targetLvOld <= 0 )
  {
    Master_WarQuestSelectionMaster = this->fields.npRankInfo;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npLvInfo;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npLvFirstInfo;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npChangeSp;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
    resNpLvFirstLb = this->fields.resNpLvFirstLb;
    Master_WarQuestSelectionMaster = System_Int32__ToString((int32_t)&lv, 0LL);
    if ( !resNpLvFirstLb )
      goto LABEL_74;
    UILabel__set_text(resNpLvFirstLb, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
    if ( !v21 )
    {
LABEL_31:
      Master_WarQuestSelectionMaster = this->fields.npBefDetailLb;
      if ( Master_WarQuestSelectionMaster )
      {
        UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        Master_WarQuestSelectionMaster = this->fields.npAftDetailLb;
        if ( Master_WarQuestSelectionMaster )
        {
          v27 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_53:
          UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, v27, 0LL);
          return;
        }
      }
      goto LABEL_74;
    }
  }
  else
  {
    currentNpLvLb = this->fields.currentNpLvLb;
    Master_WarQuestSelectionMaster = System_Int32__ToString((int32_t)&v42, 0LL);
    if ( !currentNpLvLb )
      goto LABEL_74;
    UILabel__set_text(currentNpLvLb, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
    resNpLvLb = this->fields.resNpLvLb;
    Master_WarQuestSelectionMaster = System_Int32__ToString((int32_t)&lv, 0LL);
    if ( !resNpLvLb )
      goto LABEL_74;
    UILabel__set_text(resNpLvLb, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
    Master_WarQuestSelectionMaster = this->fields.resNpLvLb;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    Master_WarQuestSelectionMaster = UnityEngine_Component__GetComponent_WebViewObject_(
                                       (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                       (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    v25 = (UIWidget_o *)Master_WarQuestSelectionMaster;
    v26 = SkillUpResultWindowComponent_TypeInfo;
    if ( (BYTE3(SkillUpResultWindowComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillUpResultWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillUpResultWindowComponent_TypeInfo);
      v26 = SkillUpResultWindowComponent_TypeInfo;
    }
    if ( !v25 )
      goto LABEL_74;
    UIWidget__set_color(v25, v26->static_fields->COLOR_VAL, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npRankInfo;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npLvInfo;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npLvFirstInfo;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
    if ( !v21 )
      goto LABEL_31;
  }
  if ( kind == 5 )
  {
    npBefDetailLb = this->fields.npBefDetailLb;
    Master_WarQuestSelectionMaster = TreasureDvcLvEntity__getDetalShort_29012120(v21, lv, 0LL);
    v32 = this->fields.npBefDetailLb;
    if ( v32 )
    {
      WrapControlText__textAdjust(
        npBefDetailLb,
        (System_String_o *)Master_WarQuestSelectionMaster,
        v32->fields.mFontSize,
        0,
        0,
        0LL);
      Master_WarQuestSelectionMaster = this->fields.npAftDetailLb;
      if ( Master_WarQuestSelectionMaster )
      {
        v27 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_53;
      }
    }
LABEL_74:
    sub_B7076C(Master_WarQuestSelectionMaster, v16);
  }
  if ( targetIdOld < 1 )
  {
    v38 = this->fields.npBefDetailLb;
    Master_WarQuestSelectionMaster = TreasureDvcLvEntity__getDetalShort_29012120(v21, v42, 0LL);
    v39 = this->fields.npBefDetailLb;
    if ( !v39 )
      goto LABEL_74;
    mFontSize = v39->fields.mFontSize;
    v36 = (System_String_o *)Master_WarQuestSelectionMaster;
    Master_WarQuestSelectionMaster = v38;
  }
  else
  {
    DetalShort_29012120 = (System_String_o *)StringLiteral_1/*""*/;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    v34 = TreasureDvcLvMaster__GetEntity(
            (TreasureDvcLvMaster_o *)Master_WarQuestSelectionMaster,
            targetIdOld,
            targetLvOld,
            0LL);
    if ( v34 )
      DetalShort_29012120 = TreasureDvcLvEntity__getDetalShort_29012120(v34, v42, 0LL);
    Master_WarQuestSelectionMaster = this->fields.npBefDetailLb;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_74;
    mFontSize = *((_DWORD *)Master_WarQuestSelectionMaster + 104);
    v36 = DetalShort_29012120;
  }
  WrapControlText__textBBCodeAdjust((UILabel_o *)Master_WarQuestSelectionMaster, v36, mFontSize, 0, 0, 0LL);
  npAftDetailLb = this->fields.npAftDetailLb;
  Master_WarQuestSelectionMaster = TreasureDvcLvEntity__getDetalShort_29012120(v21, lv, 0LL);
  v41 = this->fields.npAftDetailLb;
  if ( !v41 )
    goto LABEL_74;
  WrapControlText__textBBCodeAdjust(
    npAftDetailLb,
    (System_String_o *)Master_WarQuestSelectionMaster,
    v41->fields.mFontSize,
    0,
    0,
    0LL);
}