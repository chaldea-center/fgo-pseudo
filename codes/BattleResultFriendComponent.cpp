void BattleResultFriendComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4CCAD6A & 1) == 0 )
  {
    sub_1C713B0(&BattleResultFriendComponent_TypeInfo);
    byte_4CCAD6A = 1;
  }
  *BattleResultFriendComponent_TypeInfo->static_fields = (struct BattleResultFriendComponent_StaticFields)0x41A0000041700000LL;
}


void BattleResultFriendComponent___ctor(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  this->fields.offsetPosition = 65.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


System_Collections_IEnumerator_o *BattleResultFriendComponent__ChangeFaceAtlas(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CCAD53 & 1) == 0 )
  {
    sub_1C713B0(&BattleResultFriendComponent__ChangeFaceAtlas_d__46_TypeInfo);
    byte_4CCAD53 = 1;
  }
  v3 = sub_1C715FC(BattleResultFriendComponent__ChangeFaceAtlas_d__46_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void BattleResultFriendComponent__ChangeSupportScene(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  OtherUserGameEntity_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x21
  __int64 naturalAligment; // x9
  BattleRootComponent_callBackBeginResume_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  OtherUserGameEntity_o *otherUser; // x22
  SupportInfoJump_o *v17; // x20
  __int64 v18; // x8
  __int64 v19; // x8
  int32_t v20; // w22
  QuestRestrictionInfo_o *v21; // x21
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  int32_t v23; // w19
  BattleResultFriendComponent_o *v24; // x0
  const MethodInfo *v25; // x1

  if ( (byte_4CCAD65 & 1) == 0 )
  {
    sub_1C713B0(&Method_BattleResultFriendComponent_ChangeSupportScene__);
    sub_1C713B0(&Method_BattleResultFriendComponent_callBackBeginResume__);
    sub_1C713B0(&BattleRootComponent_TypeInfo);
    sub_1C713B0(&QuestRestrictionInfo_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C713B0(&SupportInfoJump_TypeInfo);
    sub_1C713B0(&BattleRootComponent_callBackBeginResume_TypeInfo);
    byte_4CCAD65 = 1;
  }
  Instance = (OtherUserGameEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 10, 0) )
  {
    Instance = (OtherUserGameEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    v5 = *(_QWORD *)&Instance->fields.userLv;
    if ( !v5
      || (naturalAligment = BattleRootComponent_TypeInfo->_2.naturalAligment,
          *(unsigned __int8 *)(*(_QWORD *)v5 + 304LL) >= (unsigned int)naturalAligment)
      && *(BattleRootComponent_c **)(*(_QWORD *)(*(_QWORD *)v5 + 200LL) + 8 * naturalAligment - 8) == BattleRootComponent_TypeInfo )
    {
      v7 = (BattleRootComponent_callBackBeginResume_o *)sub_1C715FC(BattleRootComponent_callBackBeginResume_TypeInfo);
      BattleRootComponent_callBackBeginResume___ctor(
        v7,
        (Il2CppObject *)this,
        Method_BattleResultFriendComponent_callBackBeginResume__,
        0);
      if ( v5 )
      {
        *(_QWORD *)(v5 + 120) = v7;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 120), (int32_t)v7, v8, v9, v10, v11, v12, v13);
        v14 = Method_BattleResultFriendComponent_ChangeSupportScene__;
        if ( (*((_BYTE *)Method_BattleResultFriendComponent_ChangeSupportScene__ + 83) & 2) != 0 )
          v14 = (_QWORD *)sub_1C713C8(Method_BattleResultFriendComponent_ChangeSupportScene__);
        v15 = (System_Reflection_MethodBase_o *)sub_1C71394(v14, v14[4]);
        OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0);
        otherUser = this->fields.otherUser;
        v17 = (SupportInfoJump_o *)sub_1C715FC(SupportInfoJump_TypeInfo);
        SupportInfoJump___ctor(v17, otherUser, 0, 0, 0);
        v18 = *(_QWORD *)(v5 + 64);
        if ( v18 )
        {
          v19 = *(_QWORD *)(v18 + 88);
          if ( v19 )
          {
            v20 = *(_DWORD *)(v19 + 16);
            v21 = (QuestRestrictionInfo_o *)sub_1C715FC(QuestRestrictionInfo_TypeInfo);
            QuestRestrictionInfo___ctor(v21, v20, 0);
            if ( v17 )
            {
              SupportInfoJump__SetSetupInfo(v17, 0, v21, 0);
              Instance = this->fields.otherUser;
              if ( Instance )
              {
                ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                                      Instance,
                                      this->fields.followerClassId,
                                      0,
                                      this->fields.displayServantType,
                                      this->fields.followerDeckId,
                                      this->fields.followerGrandGraphId,
                                      0);
                v23 = 60;
                if ( ServantLeaderInfo )
                {
                  if ( ServantLeaderInfo__get_IsGrandSvt(ServantLeaderInfo, 0) )
                    v23 = 43;
                  else
                    v23 = 60;
                }
                Instance = (OtherUserGameEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( Instance )
                {
                  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, v23, 1, (Il2CppObject *)v17, 0);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_23:
      sub_1C71608(Instance, v4);
    }
    sub_1C719A4(*(_QWORD *)&Instance->fields.userLv);
    BattleResultFriendComponent__callBackBeginResume(v24, v25);
  }
}


void BattleResultFriendComponent__EndRequestFollow(
        BattleResultFriendComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_object__object__o *myFsm; // x0
  System_Collections_Generic_Dictionary_object__object__o *v7; // x21
  System_String_o *v8; // x20
  __int64 *v9; // x8
  Il2CppObject *Instance; // x21
  NotificationDialog_ClickDelegate_o *v11; // x22

  if ( (byte_4CCAD62 & 1) == 0 )
  {
    sub_1C713B0(&Method_BattleResultFriendComponent_OnEndRequestDialog__);
    sub_1C713B0(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C713B0(&JsonManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&StringLiteral_11088/*"REQUEST_OK"*/);
    sub_1C713B0(&StringLiteral_11086/*"REQUEST_NG"*/);
    sub_1C713B0(&StringLiteral_22316/*"ng"*/);
    sub_1C713B0(&StringLiteral_21640/*"message"*/);
    sub_1C713B0(&StringLiteral_1115/*"0"*/);
    sub_1C713B0(&StringLiteral_23799/*"status"*/);
    byte_4CCAD62 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22316/*"ng"*/, 0) )
  {
    myFsm = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v9 = &StringLiteral_11086/*"REQUEST_NG"*/;
      goto LABEL_17;
    }
LABEL_20:
    sub_1C71608(myFsm, v5);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0);
  if ( !myFsm )
    goto LABEL_20;
  v7 = myFsm;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFsm,
          (Il2CppObject *)StringLiteral_21640/*"message"*/,
          (const MethodInfo_34CB8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_13;
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v7,
                                                                       (Il2CppObject *)StringLiteral_21640/*"message"*/,
                                                                       (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_20;
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))myFsm->klass->vtable._3_ToString.methodPtr)(
                            myFsm,
                            myFsm->klass->vtable._3_ToString.method);
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v7,
                                                                       (Il2CppObject *)StringLiteral_23799/*"status"*/,
                                                                       (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_20;
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))myFsm->klass->vtable._3_ToString.methodPtr)(
                                                                       myFsm,
                                                                       myFsm->klass->vtable._3_ToString.method);
  if ( !myFsm )
    goto LABEL_20;
  if ( System_String__Equals_64067044((System_String_o *)myFsm, (System_String_o *)StringLiteral_1115/*"0"*/, 0)
    || System_String__IsNullOrEmpty(v8, 0) )
  {
LABEL_13:
    myFsm = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v9 = &StringLiteral_11088/*"REQUEST_OK"*/;
LABEL_17:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFsm, (System_String_o *)*v9, 0);
      return;
    }
    goto LABEL_20;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (NotificationDialog_ClickDelegate_o *)sub_1C715FC(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_OnEndRequestDialog__,
    0);
  if ( !Instance )
    goto LABEL_20;
  CommonUI__OpenNotificationDialog_31442944(
    (CommonUI_o *)Instance,
    0,
    v8,
    v11,
    -1,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0);
}


void BattleResultFriendComponent__EndRequestFriend(
        BattleResultFriendComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_object__object__o *myFsm; // x0
  System_Collections_Generic_Dictionary_object__object__o *v7; // x21
  System_String_o *v8; // x20
  __int64 *v9; // x8
  Il2CppObject *Instance; // x21
  NotificationDialog_ClickDelegate_o *v11; // x22

  if ( (byte_4CCAD60 & 1) == 0 )
  {
    sub_1C713B0(&Method_BattleResultFriendComponent_OnEndRequestDialog__);
    sub_1C713B0(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C713B0(&JsonManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&StringLiteral_11088/*"REQUEST_OK"*/);
    sub_1C713B0(&StringLiteral_11086/*"REQUEST_NG"*/);
    sub_1C713B0(&StringLiteral_22316/*"ng"*/);
    sub_1C713B0(&StringLiteral_21640/*"message"*/);
    sub_1C713B0(&StringLiteral_1115/*"0"*/);
    sub_1C713B0(&StringLiteral_23799/*"status"*/);
    byte_4CCAD60 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22316/*"ng"*/, 0) )
  {
    myFsm = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v9 = &StringLiteral_11086/*"REQUEST_NG"*/;
      goto LABEL_17;
    }
LABEL_20:
    sub_1C71608(myFsm, v5);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0);
  if ( !myFsm )
    goto LABEL_20;
  v7 = myFsm;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFsm,
          (Il2CppObject *)StringLiteral_21640/*"message"*/,
          (const MethodInfo_34CB8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_13;
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v7,
                                                                       (Il2CppObject *)StringLiteral_21640/*"message"*/,
                                                                       (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_20;
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))myFsm->klass->vtable._3_ToString.methodPtr)(
                            myFsm,
                            myFsm->klass->vtable._3_ToString.method);
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v7,
                                                                       (Il2CppObject *)StringLiteral_23799/*"status"*/,
                                                                       (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_20;
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))myFsm->klass->vtable._3_ToString.methodPtr)(
                                                                       myFsm,
                                                                       myFsm->klass->vtable._3_ToString.method);
  if ( !myFsm )
    goto LABEL_20;
  if ( System_String__Equals_64067044((System_String_o *)myFsm, (System_String_o *)StringLiteral_1115/*"0"*/, 0)
    || System_String__IsNullOrEmpty(v8, 0) )
  {
LABEL_13:
    myFsm = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v9 = &StringLiteral_11088/*"REQUEST_OK"*/;
LABEL_17:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFsm, (System_String_o *)*v9, 0);
      return;
    }
    goto LABEL_20;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (NotificationDialog_ClickDelegate_o *)sub_1C715FC(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_OnEndRequestDialog__,
    0);
  if ( !Instance )
    goto LABEL_20;
  CommonUI__OpenNotificationDialog_31442944(
    (CommonUI_o *)Instance,
    0,
    v8,
    v11,
    -1,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0);
}


void BattleResultFriendComponent__EndShowServant(
        BattleResultFriendComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4CCAD58 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_BattleResultFriendComponent_endCloseSHowServant__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CCAD58 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleResultFriendComponent_endCloseSHowServant__, 0);
  if ( !Instance )
    sub_1C71608(v6, v7);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v5, 0);
}


void BattleResultFriendComponent__Init(
        BattleResultFriendComponent_o *this,
        System_Action_o *releasePerformanceObject,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *root; // x0
  UnityEngine_Object_o *friendIconComp; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_Object_array *ComponentsInChildren_object; // x0
  il2cpp_array_size_t max_length; // x8
  System_Object_array *v15; // x21
  unsigned __int64 v16; // x24
  Il2CppObject **m_Items; // x25
  UnityEngine_Object_o *v18; // x22

  if ( (byte_4CCAD4F & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel____78708688);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAD4F = 1;
  }
  root = this->fields.root;
  if ( !root )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(root, 0, 0);
  friendIconComp = (UnityEngine_Object_o *)this->fields.friendIconComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(friendIconComp, 0, 0) )
    goto LABEL_20;
  root = (UnityEngine_GameObject_o *)this->fields.friendIconComp;
  if ( !root || (root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)root, 0)) == 0 )
LABEL_22:
    sub_1C71608(root, releasePerformanceObject);
  ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                  root,
                                  1,
                                  (const MethodInfo_31A3B70 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel____78708688);
  if ( ComponentsInChildren_object )
  {
    max_length = ComponentsInChildren_object->max_length;
    v15 = ComponentsInChildren_object;
    if ( (int)max_length >= 1 )
    {
      v16 = 0;
      m_Items = ComponentsInChildren_object->m_Items;
      do
      {
        if ( v16 >= (unsigned int)max_length )
LABEL_21:
          sub_1C71610(ComponentsInChildren_object);
        v18 = (UnityEngine_Object_o *)m_Items[v16];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        ComponentsInChildren_object = (System_Object_array *)UnityEngine_Object__op_Inequality(v18, 0, 0);
        if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
        {
          if ( v16 >= LODWORD(v15->max_length) )
            goto LABEL_21;
          root = (UnityEngine_GameObject_o *)m_Items[v16];
          if ( !root )
            goto LABEL_22;
          UILabel__SetDefaultFont((UILabel_o *)root, 0);
        }
        LODWORD(max_length) = v15->max_length;
        ++v16;
      }
      while ( (__int64)v16 < (int)max_length );
    }
  }
LABEL_20:
  this->fields.releasePerformanceObject = releasePerformanceObject;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.releasePerformanceObject,
    (int32_t)releasePerformanceObject,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


void BattleResultFriendComponent__Layout(
        BattleResultFriendComponent_o *this,
        bool isActiveFollow,
        bool isActiveFriend,
        const MethodInfo *method)
{
  _BOOL4 v4; // w20
  _BOOL4 v5; // w21
  __int64 v7; // x26
  Il2CppObject *v8; // x0
  System_String_o *v9; // x22
  System_String_o *errLabel; // x0
  __int64 v11; // x1
  __int64 v12; // x23
  char v13; // w24
  System_String_o *v14; // x1
  System_String_o **v15; // x8
  _BOOL4 v16; // w21
  System_String_o **v17; // x24
  const MethodInfo *v18; // x3
  System_String_o *v19; // x23
  UILabel_o *titleLabel; // x21
  UILabel_o *friendWarningLabel; // x20
  int32_t followerStatus; // [xsp+Ch] [xbp-54h] BYREF

  v4 = isActiveFriend;
  v5 = isActiveFollow;
  if ( (byte_4CCAD67 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_11126/*"RESULT_FRIENDANDFOLLOW_TITLE"*/);
    sub_1C713B0(&StringLiteral_11128/*"RESULT_FRIEND_ERR_{0}"*/);
    sub_1C713B0(&StringLiteral_11134/*"RESULT_MAXFRIEND_WARNING"*/);
    sub_1C713B0(&StringLiteral_11131/*"RESULT_FRIEND_TITLE"*/);
    sub_1C713B0(&StringLiteral_11125/*"RESULT_FOLLOW_TITLE"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CCAD67 = 1;
  }
  v7 = StringLiteral_11134/*"RESULT_MAXFRIEND_WARNING"*/;
  followerStatus = this->fields.followerStatus;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &followerStatus);
  v9 = System_String__Format((System_String_o *)StringLiteral_11128/*"RESULT_FRIEND_ERR_{0}"*/, v8, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  errLabel = LocalizationManager__Get(v9, 0);
  if ( !v9 )
    goto LABEL_33;
  v12 = (__int64)errLabel;
  errLabel = (System_String_o *)System_String__Equals_64067044(v9, errLabel, 0);
  if ( !this->fields.errLabel )
    goto LABEL_33;
  v13 = (char)errLabel;
  v14 = (System_String_o *)(((unsigned __int8)errLabel & 1) != 0 ? StringLiteral_1/*""*/ : v12);
  UILabel__set_text(this->fields.errLabel, v14, 0);
  if ( v13 & 1 | (!v5 || !v4) )
  {
    v9 = (System_String_o *)v7;
  }
  else
  {
    errLabel = (System_String_o *)this->fields.errLabel;
    if ( !errLabel )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)errLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    LOBYTE(v4) = 0;
  }
  errLabel = (System_String_o *)this->fields.followCountRoot;
  if ( !errLabel )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)errLabel, v5, 0);
  errLabel = (System_String_o *)this->fields.friendWarningLabel;
  if ( !errLabel )
    goto LABEL_33;
  errLabel = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)errLabel, 0);
  if ( !errLabel )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)errLabel, !v4, 0);
  errLabel = (System_String_o *)this->fields.countRoot;
  if ( !errLabel )
    goto LABEL_33;
  v15 = (System_String_o **)&StringLiteral_11126/*"RESULT_FRIENDANDFOLLOW_TITLE"*/;
  v16 = v5;
  if ( !v16 )
    v15 = (System_String_o **)&StringLiteral_11131/*"RESULT_FRIEND_TITLE"*/;
  if ( v4 )
    v17 = v15;
  else
    v17 = (System_String_o **)&StringLiteral_11125/*"RESULT_FOLLOW_TITLE"*/;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)errLabel, v4, 0);
  BattleResultFriendComponent__SetupButtons(this, v16, v4, v18);
  v19 = *v17;
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  errLabel = LocalizationManager__Get(v19, 0);
  if ( !titleLabel )
    goto LABEL_33;
  UILabel__set_text(titleLabel, errLabel, 0);
  if ( v4 )
    goto LABEL_31;
  friendWarningLabel = this->fields.friendWarningLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  errLabel = LocalizationManager__Get(v9, 0);
  if ( !friendWarningLabel )
LABEL_33:
    sub_1C71608(errLabel, v11);
  UILabel__set_text(friendWarningLabel, errLabel, 0);
LABEL_31:
  errLabel = (System_String_o *)this->fields.countGrid;
  if ( !errLabel )
    goto LABEL_33;
  ((void (__fastcall *)(System_String_o *, const MethodInfo *))errLabel->klass->vtable._8_Equals.methodPtr)(
    errLabel,
    errLabel->klass->vtable._8_Equals.method);
}


void BattleResultFriendComponent__OnClickFollow(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CCAD5D & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_6460/*"FOLLOW_CONNECT"*/);
    byte_4CCAD5D = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C71608(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_6460/*"FOLLOW_CONNECT"*/, 0);
}


void BattleResultFriendComponent__OnClickFriend(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CCAD5A & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_3777/*"CONNECT"*/);
    byte_4CCAD5A = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C71608(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3777/*"CONNECT"*/, 0);
}


void BattleResultFriendComponent__OnClickHelp(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4CCAD69 & 1) == 0 )
  {
    sub_1C713B0(&Method_BattleResultFriendComponent_OnClickHelp__);
    byte_4CCAD69 = 1;
  }
  v2 = Method_BattleResultFriendComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C713C8(Method_BattleResultFriendComponent_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C71394(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 49, 0, 0, 0);
}


void BattleResultFriendComponent__OnClickNo(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CCAD5C & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_9265/*"NEXT"*/);
    byte_4CCAD5C = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C71608(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9265/*"NEXT"*/, 0);
}


void BattleResultFriendComponent__OnClickNoActionFriend(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4CCAD5B & 1) == 0 )
  {
    sub_1C713B0(&Method_BattleResultFriendComponent_OnClickNoActionFriend__);
    byte_4CCAD5B = 1;
  }
  v2 = Method_BattleResultFriendComponent_OnClickNoActionFriend__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_OnClickNoActionFriend__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C713C8(Method_BattleResultFriendComponent_OnClickNoActionFriend__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C71394(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 2, 0, 0);
}


void BattleResultFriendComponent__OnClickSupportInfo(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CCAD64 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_3324/*"CHANGE_SUPPORT"*/);
    byte_4CCAD64 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C71608(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3324/*"CHANGE_SUPPORT"*/, 0);
}


void BattleResultFriendComponent__OnClickTutorialFollow(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  GrandQuestFolderBoardItem_o *v11; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CCAD5E & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CCAD5E = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseTutorialNotificationDialogArrow((CommonUI_o *)Instance, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
  if ( !Instance )
    goto LABEL_12;
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          (const MethodInfo_340B508 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__) )
    goto LABEL_11;
  Instance = entity;
  if ( !entity )
LABEL_12:
    sub_1C71608(Instance, v4);
  v11 = (GrandQuestFolderBoardItem_o *)&entity[1];
  if ( entity[1].klass )
  {
    v11->klass = 0;
    sub_1C71354(v11, 0, v5, v6, v7, v8, v9, v10);
  }
LABEL_11:
  BattleResultFriendComponent__OnClickFollow(this, v4);
}


void BattleResultFriendComponent__OnEndRequestDialog(
        BattleResultFriendComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4CCAD63 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&StringLiteral_11088/*"REQUEST_OK"*/);
    byte_4CCAD63 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog(Instance, 0), (Instance = (CommonUI_o *)this->fields.myFsm) == 0) )
    sub_1C71608(Instance, v5);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_11088/*"REQUEST_OK"*/, 0);
}


void BattleResultFriendComponent__Open(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x20
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  int32_t FollowSum; // w22
  _BOOL4 v7; // w22
  _BOOL4 v8; // w23
  _BOOL4 enableFollowQuest; // w24
  const MethodInfo *v10; // x1
  System_Collections_IEnumerator_o *v11; // x1

  if ( (byte_4CCAD52 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1C713B0(&OptionManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_9265/*"NEXT"*/);
    sub_1C713B0(&StringLiteral_6464/*"FOLLOW_NUM"*/);
    byte_4CCAD52 = 1;
  }
  if ( this->fields.followerType != 2 )
    goto LABEL_11;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserFollowMaster___);
  if ( !Instance )
    goto LABEL_21;
  FollowSum = UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0);
  Instance = (DataManager_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6464/*"FOLLOW_NUM"*/, 0);
  v7 = FollowSum < (int)Instance;
  v8 = this->fields.followerType == 2;
  if ( !MasterData_object )
    goto LABEL_21;
  enableFollowQuest = this->fields.enableFollowQuest;
  Instance = (DataManager_o *)TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0);
  if ( !SelfUserGame )
    goto LABEL_21;
  if ( (!enableFollowQuest || !v7 || !v8) && (int)Instance >= SelfUserGame->fields.friendKeep )
  {
LABEL_11:
    Instance = (DataManager_o *)this->fields.myFsm;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9265/*"NEXT"*/, 0);
      return;
    }
LABEL_21:
    sub_1C71608(Instance, method);
  }
  Instance = (DataManager_o *)this->fields.followTutorialMask;
  if ( !Instance )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.followTutorialButton;
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__isSavedMemoryMode(0) )
  {
    v11 = BattleResultFriendComponent__ChangeFaceAtlas(this, v10);
    UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v11, 0);
  }
  else
  {
    BattleResultFriendComponent__openCore(this, v10);
  }
}


void BattleResultFriendComponent__OpenHelpDialog(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 49, 0, 0, 0);
}


void BattleResultFriendComponent__OtherUserChangeLimitCountBySpoilerProtection(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *SpoilerSetting; // x0
  __int64 v4; // x1
  struct OtherUserGameEntity_o *otherUser; // x8
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x20
  int max_length; // w8
  unsigned int v8; // w21
  struct OtherUserGameEntity_o *v9; // x8
  struct ServantLeaderInfo_array *eventUserSvtLeaderHash; // x20
  int v11; // w8
  unsigned int v12; // w21
  struct OtherUserGameEntity_o *v13; // x8
  struct ServantLeaderInfo_array *userSvtGrandHash; // x19
  int v15; // w8
  unsigned int v16; // w20

  if ( (byte_4CCAD55 & 1) == 0 )
  {
    sub_1C713B0(&OptionManager_TypeInfo);
    byte_4CCAD55 = 1;
  }
  if ( this->fields.otherUser )
  {
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    SpoilerSetting = (ServantLeaderInfo_o *)OptionManager__GetSpoilerSetting(0);
    if ( ((unsigned __int8)SpoilerSetting & 1) == 0 )
    {
      otherUser = this->fields.otherUser;
      if ( !otherUser )
        goto LABEL_30;
      userSvtLeaderHash = otherUser->fields.userSvtLeaderHash;
      if ( !userSvtLeaderHash )
        goto LABEL_30;
      max_length = userSvtLeaderHash->max_length;
      if ( max_length >= 1 )
      {
        v8 = 0;
        while ( v8 < max_length )
        {
          SpoilerSetting = userSvtLeaderHash->m_Items[v8];
          if ( !SpoilerSetting )
            goto LABEL_30;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0);
          max_length = userSvtLeaderHash->max_length;
          if ( (int)++v8 >= max_length )
            goto LABEL_14;
        }
LABEL_29:
        sub_1C71610(SpoilerSetting);
      }
LABEL_14:
      v9 = this->fields.otherUser;
      if ( !v9 )
        goto LABEL_30;
      eventUserSvtLeaderHash = v9->fields.eventUserSvtLeaderHash;
      if ( !eventUserSvtLeaderHash )
        goto LABEL_30;
      v11 = eventUserSvtLeaderHash->max_length;
      if ( v11 >= 1 )
      {
        v12 = 0;
        while ( v12 < v11 )
        {
          SpoilerSetting = eventUserSvtLeaderHash->m_Items[v12];
          if ( !SpoilerSetting )
            goto LABEL_30;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0);
          v11 = eventUserSvtLeaderHash->max_length;
          if ( (int)++v12 >= v11 )
            goto LABEL_21;
        }
        goto LABEL_29;
      }
LABEL_21:
      v13 = this->fields.otherUser;
      if ( !v13 || (userSvtGrandHash = v13->fields.userSvtGrandHash) == 0 )
LABEL_30:
        sub_1C71608(SpoilerSetting, v4);
      v15 = userSvtGrandHash->max_length;
      if ( v15 >= 1 )
      {
        v16 = 0;
        while ( v16 < v15 )
        {
          SpoilerSetting = userSvtGrandHash->m_Items[v16];
          if ( !SpoilerSetting )
            goto LABEL_30;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0);
          v15 = userSvtGrandHash->max_length;
          if ( (int)++v16 >= v15 )
            return;
        }
        goto LABEL_29;
      }
    }
  }
}


void BattleResultFriendComponent__ServantConfClick(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CCAD56 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_9653/*"OPEN_SERVANT"*/);
    byte_4CCAD56 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C71608(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9653/*"OPEN_SERVANT"*/, 0);
}


void BattleResultFriendComponent__SetupButtons(
        BattleResultFriendComponent_o *this,
        bool isActiveFollow,
        bool isActiveFriend,
        const MethodInfo *method)
{
  EventDelegate_o *v7; // x21
  EventDelegate_o *v8; // x23
  __int64 v9; // x1
  UnityEngine_Component_o *helpButton; // x0
  UILabel_o *leftButtonLabel; // x24
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v19; // x9
  __int64 klass_low; // x10
  intptr_t v21; // x8
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  struct UIButton_o *v34; // x8
  intptr_t v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  intptr_t v38; // x8
  struct UIButton_o *rightButton; // x8
  intptr_t v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  intptr_t v43; // x8
  UILabel_o *centerButtonLabel; // x22
  struct UIButton_o *centerButton; // x23
  UnityEngine_GameObject_o *v46; // x24
  BattleResultFriendComponent_c *v47; // x8
  __int64 *v48; // x8
  UILabel_o *rightButtonLabel; // x24
  UnityEngine_GameObject_o *gameObject; // x24
  BattleResultFriendComponent_c *v51; // x8
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_GameObject_o *v53; // x0
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_GameObject_o *v55; // x0
  EventDelegate_o *v56; // x20
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  intptr_t v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  intptr_t v66; // x8
  UIButton_c *klass; // x8
  UnityEngine_Color_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CCAD68 & 1) == 0 )
  {
    sub_1C713B0(&BattleResultFriendComponent_TypeInfo);
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDelegate__Remove__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_9843/*"OnClickFriend"*/);
    sub_1C713B0(&StringLiteral_9864/*"OnClickNoActionFriend"*/);
    sub_1C713B0(&StringLiteral_11130/*"RESULT_FRIEND_REQUEST_YES"*/);
    sub_1C713B0(&StringLiteral_11124/*"RESULT_FOLLOW_REQUEST_YES"*/);
    sub_1C713B0(&StringLiteral_9842/*"OnClickFollow"*/);
    sub_1C713B0(&StringLiteral_20279/*"icon_friend"*/);
    sub_1C713B0(&StringLiteral_11129/*"RESULT_FRIEND_REQUEST_NO"*/);
    sub_1C713B0(&StringLiteral_20278/*"icon_follow"*/);
    byte_4CCAD68 = 1;
  }
  v7 = (EventDelegate_o *)sub_1C715FC(EventDelegate_TypeInfo);
  EventDelegate___ctor_49641492(v7, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9843/*"OnClickFriend"*/, 0);
  v8 = (EventDelegate_o *)sub_1C715FC(EventDelegate_TypeInfo);
  EventDelegate___ctor_49641492(v8, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9842/*"OnClickFollow"*/, 0);
  helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
  if ( !helpButton )
    goto LABEL_61;
  helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0);
  if ( !helpButton )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 1, 0);
  leftButtonLabel = this->fields.leftButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11129/*"RESULT_FRIEND_REQUEST_NO"*/, 0);
  if ( !leftButtonLabel )
    goto LABEL_61;
  UILabel__set_text(leftButtonLabel, (System_String_o *)helpButton, 0);
  helpButton = (UnityEngine_Component_o *)this->fields.centerButton;
  if ( !helpButton )
    goto LABEL_61;
  if ( isActiveFollow )
  {
    helpButton = (UnityEngine_Component_o *)helpButton[8].monitor;
    if ( !helpButton )
      goto LABEL_61;
    m_CachedPtr = helpButton->fields.m_CachedPtr;
    v19 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++HIDWORD(helpButton[1].klass);
    if ( !m_CachedPtr )
      goto LABEL_61;
    klass_low = SLODWORD(helpButton[1].klass);
    if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)helpButton,
        (Il2CppObject *)v7,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = m_CachedPtr + 8 * klass_low;
      LODWORD(helpButton[1].klass) = klass_low + 1;
      *(_QWORD *)(v21 + 32) = v7;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v21 + 32), (int32_t)v7, v12, v13, v14, v15, v16, v17);
    }
    rightButton = this->fields.rightButton;
    if ( !rightButton )
      goto LABEL_61;
    helpButton = (UnityEngine_Component_o *)rightButton->fields.onClick;
    if ( !helpButton )
      goto LABEL_61;
    v40 = helpButton->fields.m_CachedPtr;
    v41 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++HIDWORD(helpButton[1].klass);
    if ( !v40 )
      goto LABEL_61;
    v42 = SLODWORD(helpButton[1].klass);
    if ( (unsigned int)v42 >= *(_DWORD *)(v40 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)helpButton,
        (Il2CppObject *)v8,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    }
    else
    {
      v43 = v40 + 8 * v42;
      LODWORD(helpButton[1].klass) = v42 + 1;
      *(_QWORD *)(v43 + 32) = v8;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v43 + 32), (int32_t)v8, v22, v23, v24, v25, v26, v27);
    }
    centerButton = this->fields.centerButton;
    centerButtonLabel = this->fields.centerButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11130/*"RESULT_FRIEND_REQUEST_YES"*/, 0);
    if ( !centerButtonLabel )
      goto LABEL_61;
    UILabel__set_text(centerButtonLabel, (System_String_o *)helpButton, 0);
    rightButtonLabel = this->fields.rightButtonLabel;
    helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11124/*"RESULT_FOLLOW_REQUEST_YES"*/, 0);
    if ( !rightButtonLabel )
      goto LABEL_61;
    UILabel__set_text(rightButtonLabel, (System_String_o *)helpButton, 0);
    helpButton = (UnityEngine_Component_o *)this->fields.centerButtonLabel;
    if ( !helpButton )
      goto LABEL_61;
    gameObject = UnityEngine_Component__get_gameObject(helpButton, 0);
    v51 = BattleResultFriendComponent_TypeInfo;
    if ( !BattleResultFriendComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultFriendComponent_TypeInfo);
      v51 = BattleResultFriendComponent_TypeInfo;
    }
    GameObjectExtensions__AddLocalPositionX(gameObject, v51->static_fields->offsetOfferLabelPosition, 0);
    helpButton = (UnityEngine_Component_o *)this->fields.rightButtonLabel;
    if ( !helpButton )
      goto LABEL_61;
    v52 = UnityEngine_Component__get_gameObject(helpButton, 0);
    GameObjectExtensions__AddLocalPositionX(
      v52,
      BattleResultFriendComponent_TypeInfo->static_fields->offsetOfferLabelPosition,
      0);
    helpButton = (UnityEngine_Component_o *)this->fields.leftButton;
    if ( !helpButton )
      goto LABEL_61;
    v53 = UnityEngine_Component__get_gameObject(helpButton, 0);
    GameObjectExtensions__AddLocalPositionX(v53, -this->fields.offsetPosition, 0);
    helpButton = (UnityEngine_Component_o *)this->fields.rightButton;
    if ( !helpButton )
      goto LABEL_61;
    v54 = UnityEngine_Component__get_gameObject(helpButton, 0);
    GameObjectExtensions__AddLocalPositionX(v54, this->fields.offsetPosition, 0);
    helpButton = (UnityEngine_Component_o *)this->fields.rightMarkSprite;
    if ( !helpButton )
      goto LABEL_61;
    v55 = UnityEngine_Component__get_gameObject(helpButton, 0);
    GameObjectExtensions__AddLocalPositionX(
      v55,
      BattleResultFriendComponent_TypeInfo->static_fields->offsetFollowMarkPosition,
      0);
    helpButton = (UnityEngine_Component_o *)this->fields.centerMarkSprite;
    if ( !helpButton )
      goto LABEL_61;
    UISprite__set_spriteName((UISprite_o *)helpButton, (System_String_o *)StringLiteral_20279/*"icon_friend"*/, 0);
    helpButton = (UnityEngine_Component_o *)this->fields.rightMarkSprite;
    if ( !helpButton )
      goto LABEL_61;
    v48 = &StringLiteral_20278/*"icon_follow"*/;
  }
  else
  {
    helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0);
    if ( !helpButton )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 0, 0);
    v34 = this->fields.rightButton;
    if ( !v34 )
      goto LABEL_61;
    helpButton = (UnityEngine_Component_o *)v34->fields.onClick;
    if ( !helpButton )
      goto LABEL_61;
    v35 = helpButton->fields.m_CachedPtr;
    v36 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++HIDWORD(helpButton[1].klass);
    if ( !v35 )
      goto LABEL_61;
    v37 = SLODWORD(helpButton[1].klass);
    if ( (unsigned int)v37 >= *(_DWORD *)(v35 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)helpButton,
        (Il2CppObject *)v7,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    }
    else
    {
      v38 = v35 + 8 * v37;
      LODWORD(helpButton[1].klass) = v37 + 1;
      *(_QWORD *)(v38 + 32) = v7;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v38 + 32), (int32_t)v7, v28, v29, v30, v31, v32, v33);
    }
    centerButton = this->fields.rightButton;
    centerButtonLabel = this->fields.rightButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11130/*"RESULT_FRIEND_REQUEST_YES"*/, 0);
    if ( !centerButtonLabel )
      goto LABEL_61;
    UILabel__set_text(centerButtonLabel, (System_String_o *)helpButton, 0);
    helpButton = (UnityEngine_Component_o *)this->fields.rightButtonLabel;
    if ( !helpButton )
      goto LABEL_61;
    v46 = UnityEngine_Component__get_gameObject(helpButton, 0);
    v47 = BattleResultFriendComponent_TypeInfo;
    if ( !BattleResultFriendComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultFriendComponent_TypeInfo);
      v47 = BattleResultFriendComponent_TypeInfo;
    }
    GameObjectExtensions__AddLocalPositionX(v46, v47->static_fields->offsetOfferLabelPosition, 0);
    helpButton = (UnityEngine_Component_o *)this->fields.rightMarkSprite;
    if ( !helpButton )
      goto LABEL_61;
    v48 = &StringLiteral_20279/*"icon_friend"*/;
  }
  UISprite__set_spriteName((UISprite_o *)helpButton, (System_String_o *)*v48, 0);
  if ( isActiveFriend && !this->fields.followerStatus )
    return;
  v56 = (EventDelegate_o *)sub_1C715FC(EventDelegate_TypeInfo);
  EventDelegate___ctor_49641492(v56, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9864/*"OnClickNoActionFriend"*/, 0);
  if ( !centerButton
    || (helpButton = (UnityEngine_Component_o *)centerButton->fields.onClick) == 0
    || (System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)helpButton,
          (Il2CppObject *)v7,
          (const MethodInfo_3811C40 *)Method_System_Collections_Generic_List_EventDelegate__Remove__),
        (helpButton = (UnityEngine_Component_o *)centerButton->fields.onClick) == 0)
    || (v63 = helpButton->fields.m_CachedPtr,
        v64 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++HIDWORD(helpButton[1].klass),
        !v63) )
  {
LABEL_61:
    sub_1C71608(helpButton, v9);
  }
  v65 = SLODWORD(helpButton[1].klass);
  if ( (unsigned int)v65 >= *(_DWORD *)(v63 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)helpButton,
      (Il2CppObject *)v56,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
  }
  else
  {
    v66 = v63 + 8 * v65;
    LODWORD(helpButton[1].klass) = v65 + 1;
    *(_QWORD *)(v66 + 32) = v56;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v66 + 32), (int32_t)v56, v57, v58, v59, v60, v61, v62);
  }
  v68.fields.r = 0.5;
  v68.fields.g = 0.5;
  v68.fields.b = 0.5;
  v68.fields.a = 1.0;
  UIButtonColor__set_defaultColor((UIButtonColor_o *)centerButton, v68, 0);
  klass = centerButton->klass;
  centerButton->fields.hover = (struct UnityEngine_Color_o)xmmword_CEE9A0;
  centerButton->fields.pressed = (struct UnityEngine_Color_o)xmmword_CEE9A0;
  ((void (__fastcall *)(struct UIButton_o *, __int64, __int64, const MethodInfo *))klass->vtable._14_SetState.methodPtr)(
    centerButton,
    3,
    1,
    klass->vtable._14_SetState.method);
  v69.fields.r = 0.5;
  v69.fields.g = 0.5;
  v69.fields.b = 0.5;
  v69.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)centerButtonLabel, v69, 0);
  v70.fields.r = 0.0;
  v70.fields.g = 0.0;
  v70.fields.b = 0.0;
  v70.fields.a = 1.0;
  UILabel__set_effectColor(centerButtonLabel, v70, 0);
}


void BattleResultFriendComponent__ShowServantConf(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  OtherUserGameEntity_o *otherUser; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  const MethodInfo *v5; // x1
  ServantLeaderInfo_o *v6; // x20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  Il2CppObject *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v10; // x22

  if ( (byte_4CCAD57 & 1) == 0 )
  {
    sub_1C713B0(&Method_BattleResultFriendComponent_EndShowServant__);
    sub_1C713B0(&Method_BattleResultFriendComponent_ShowServantConf__);
    sub_1C713B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CCAD57 = 1;
  }
  otherUser = this->fields.otherUser;
  if ( !otherUser )
    goto LABEL_10;
  ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                        otherUser,
                        this->fields.dispClassId,
                        0,
                        this->fields.displayServantType,
                        this->fields.followerDeckId,
                        this->fields.followerGrandGraphId,
                        0);
  if ( ServantLeaderInfo )
  {
    v6 = ServantLeaderInfo;
    v7 = Method_BattleResultFriendComponent_ShowServantConf__;
    if ( (*((_BYTE *)Method_BattleResultFriendComponent_ShowServantConf__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C713C8(Method_BattleResultFriendComponent_ShowServantConf__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C71394(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (ServantStatusDialog_EndDelegate_o *)sub_1C715FC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v10,
      (Il2CppObject *)this,
      Method_BattleResultFriendComponent_EndShowServant__,
      0);
    if ( Instance )
    {
      CommonUI__OpenServantStatusDialog_31452968((CommonUI_o *)Instance, 5, v6, v10, 0);
      return;
    }
LABEL_10:
    sub_1C71608(otherUser, method);
  }
  BattleResultFriendComponent__endCloseSHowServant(this, v5);
}


void BattleResultFriendComponent__callBackBeginResume(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CCAD66 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_3492/*"CLOSE"*/);
    byte_4CCAD66 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C71608(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3492/*"CLOSE"*/, 0);
}


void BattleResultFriendComponent__changeClass(
        BattleResultFriendComponent_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  FriendIconComponent_o *friendIconComp; // x0

  if ( this->fields.isUseGrandBoard )
    this->fields.displayServantType = 2;
  friendIconComp = this->fields.friendIconComp;
  this->fields.dispClassId = classPos;
  if ( !friendIconComp )
    sub_1C71608(0, classPos);
  FriendIconComponent__Set(
    friendIconComp,
    this->fields.otherUser,
    1,
    classPos,
    &this->fields.displayServantType,
    this->fields.followerType,
    this->fields.followerDeckId,
    0,
    this->fields.followerGrandGraphId,
    0);
}


void BattleResultFriendComponent__endCloseSHowServant(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CCAD59 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_3492/*"CLOSE"*/);
    byte_4CCAD59 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C71608(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3492/*"CLOSE"*/, 0);
}


void BattleResultFriendComponent__followAssign(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_4CCAD61 & 1) == 0 )
  {
    sub_1C713B0(&Method_BattleResultFriendComponent_EndRequestFollow__);
    sub_1C713B0(&Method_BattleResultFriendComponent_followAssign__);
    sub_1C713B0(&Method_NetworkManager_getRequest_FollowAssignRequest___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4CCAD61 = 1;
  }
  v3 = Method_BattleResultFriendComponent_followAssign__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_followAssign__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C713C8(Method_BattleResultFriendComponent_followAssign__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_EndRequestFollow__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_FollowAssignRequest___);
  if ( !Request_object )
    sub_1C71608(0, v7);
  FollowAssignRequest__beginRequest((FollowAssignRequest_o *)Request_object, this->fields.targetId, 0);
}


void BattleResultFriendComponent__friendOffer(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_4CCAD5F & 1) == 0 )
  {
    sub_1C713B0(&Method_BattleResultFriendComponent_EndRequestFriend__);
    sub_1C713B0(&Method_BattleResultFriendComponent_friendOffer__);
    sub_1C713B0(&Method_NetworkManager_getRequest_FriendOfferRequest___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4CCAD5F = 1;
  }
  v3 = Method_BattleResultFriendComponent_friendOffer__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_friendOffer__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C713C8(Method_BattleResultFriendComponent_friendOffer__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_EndRequestFriend__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_FriendOfferRequest___);
  if ( !Request_object )
    sub_1C71608(0, v7);
  FriendOfferRequest__beginRequest((FriendOfferRequest_o *)Request_object, this->fields.targetId, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t BattleResultFriendComponent__getExistLeaderInfo(
        BattleResultFriendComponent_o *this,
        int32_t firstClassId,
        int32_t followerGrandGraphId,
        const MethodInfo *method)
{
  OtherUserGameEntity_o *otherUser; // x0
  int32_t v6; // w19
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  __int64 userName; // x8
  int32_t *i; // x9
  __int64 v10; // x10

  otherUser = this->fields.otherUser;
  if ( !otherUser )
    goto LABEL_14;
  v6 = firstClassId;
  ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                        otherUser,
                        firstClassId,
                        0,
                        this->fields.displayServantType,
                        this->fields.followerDeckId,
                        followerGrandGraphId,
                        0);
  if ( ServantLeaderInfo && ServantLeaderInfo->fields.userSvtId )
    return v6;
  otherUser = this->fields.otherUser;
  if ( !otherUser
    || (otherUser = (OtherUserGameEntity_o *)OtherUserGameEntity__GetServantLeaderInfoByReturnType(
                                               otherUser,
                                               this->fields.displayServantType,
                                               0)) == 0 )
  {
LABEL_14:
    sub_1C71608(otherUser, *(_QWORD *)&firstClassId);
  }
  v6 = -1;
  if ( (int)otherUser->fields.userName >= 1 )
  {
    userName = (unsigned int)otherUser->fields.userName;
    for ( i = &otherUser->fields.userLv; ; i += 2 )
    {
      v10 = *(_QWORD *)i;
      if ( *(_QWORD *)i )
      {
        if ( *(_QWORD *)(v10 + 40) )
          break;
      }
      if ( !--userName )
        return -1;
    }
    return *(_DWORD *)(v10 + 32);
  }
  return v6;
}


void BattleResultFriendComponent__onChangeClass(
        BattleResultFriendComponent_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4CCAD51 & 1) == 0 )
  {
    sub_1C713B0(&Method_BattleResultFriendComponent_onChangeClass__);
    byte_4CCAD51 = 1;
  }
  v5 = Method_BattleResultFriendComponent_onChangeClass__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_onChangeClass__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C713C8(Method_BattleResultFriendComponent_onChangeClass__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C71394(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  BattleResultFriendComponent__changeClass(this, classPos, v7);
}


void BattleResultFriendComponent__openCore(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  DataManager_o *Instance; // x0
  BattleRootComponent_c *v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UserGameEntity_o *SelfUserGame; // x22
  Il2CppObject *MasterData_object; // x25
  int32_t FollowSum; // w24
  _BOOL4 v15; // w21
  _BOOL4 v16; // w26
  _BOOL4 enableFollowQuest; // w27
  int32_t v18; // w23
  const MethodInfo *v19; // x3
  int v20; // w21
  UILabel_o *countLabel; // x26
  Il2CppObject *v22; // x25
  Il2CppObject *v23; // x0
  UILabel_o *followCountLabel; // x22
  Il2CppObject *v25; // x24
  Il2CppObject *v26; // x0
  UILabel_o *confLabel; // x22
  Il2CppObject *v28; // x0
  struct OtherUserGameEntity_o **p_otherUser; // x23
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  const MethodInfo *v36; // x1
  _QWORD *v37; // x22
  __int64 naturalAligment; // x9
  __int64 v39; // x8
  const MethodInfo *v40; // x3
  int32_t QuestId; // w22
  int followerGrandGraphId; // w2
  int32_t ReturnTypeByQuestId; // w0
  int32_t followerClassId; // w24
  int32_t ExistLeaderInfo; // w0
  int32_t displayServantType; // w8
  OtherUserGameEntity_o *v47; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v48; // x23
  UnityEngine_Object_o *classButtonControl; // x23
  System_Action_o *v50; // x21
  const MethodInfo *v51; // x2
  struct ClassButtonControlComponent_o *v52; // x20
  ClassButtonControlComponent_CallbackFunc_o *v53; // x21
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  const MethodInfo *v60; // x2
  struct ClassButtonControlComponent_o *v61; // x20
  ClassButtonControlComponent_CallbackFunc_o *v62; // x21
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  BattleResultFriendComponent__ChangeFaceAtlas_d__46_o *v69; // x0
  int32_t v70; // w1
  const MethodInfo *v71; // x2
  int32_t friendKeep; // [xsp+8h] [xbp-78h] BYREF
  int32_t FriendSum; // [xsp+Ch] [xbp-74h] BYREF
  Il2CppObject *v74; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4CCAD54 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_BattleResultFriendComponent_changeClass__);
    sub_1C713B0(&Method_BattleResultFriendComponent_onChangeClass__);
    sub_1C713B0(&BattleRootComponent_TypeInfo);
    sub_1C713B0(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_BattleResultFriendComponent___c__DisplayClass47_0__openCore_b__0__);
    sub_1C713B0(&BattleResultFriendComponent___c__DisplayClass47_0_TypeInfo);
    sub_1C713B0(&StringLiteral_5449/*"END_PROC"*/);
    sub_1C713B0(&StringLiteral_11127/*"RESULT_FRIEND_CONF"*/);
    sub_1C713B0(&StringLiteral_25286/*"{0}/{1}"*/);
    sub_1C713B0(&StringLiteral_6464/*"FOLLOW_NUM"*/);
    byte_4CCAD54 = 1;
  }
  v74 = 0;
  entity = 0;
  v3 = sub_1C715FC(BattleResultFriendComponent___c__DisplayClass47_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_66;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserFollowMaster___);
  if ( !Instance )
    goto LABEL_66;
  FollowSum = UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0);
  Instance = (DataManager_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6464/*"FOLLOW_NUM"*/, 0);
  v15 = FollowSum < (int)Instance;
  v16 = this->fields.followerType == 2;
  if ( !MasterData_object )
    goto LABEL_66;
  enableFollowQuest = this->fields.enableFollowQuest;
  v18 = (int)Instance;
  Instance = (DataManager_o *)TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0);
  if ( !SelfUserGame )
    goto LABEL_66;
  v20 = enableFollowQuest && v15 && v16;
  BattleResultFriendComponent__Layout(this, v20, (int)Instance < SelfUserGame->fields.friendKeep, v19);
  countLabel = this->fields.countLabel;
  FriendSum = TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0);
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FriendSum);
  friendKeep = SelfUserGame->fields.friendKeep;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep);
  Instance = (DataManager_o *)System_String__Format_64073032((System_String_o *)StringLiteral_25286/*"{0}/{1}"*/, v22, v23, 0);
  if ( !countLabel )
    goto LABEL_66;
  UILabel__set_text(countLabel, (System_String_o *)Instance, 0);
  if ( v20 )
  {
    followCountLabel = this->fields.followCountLabel;
    FriendSum = FollowSum;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FriendSum);
    friendKeep = v18;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep);
    Instance = (DataManager_o *)System_String__Format_64073032((System_String_o *)StringLiteral_25286/*"{0}/{1}"*/, v25, v26, 0);
    if ( !followCountLabel )
      goto LABEL_66;
    UILabel__set_text(followCountLabel, (System_String_o *)Instance, 0);
  }
  confLabel = this->fields.confLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11127/*"RESULT_FRIEND_CONF"*/, 0);
  if ( !confLabel )
    goto LABEL_66;
  UILabel__set_text(confLabel, (System_String_o *)Instance, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  if ( !Instance )
    goto LABEL_66;
  v28 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          this->fields.targetId,
          (const MethodInfo_340B3DC *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
  this->fields.otherUser = (struct OtherUserGameEntity_o *)v28;
  p_otherUser = &this->fields.otherUser;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.otherUser, (int32_t)v28, v30, v31, v32, v33, v34, v35);
  BattleResultFriendComponent__OtherUserChangeLimitCountBySpoilerProtection(this, v36);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  v37 = *(_QWORD **)&Instance->fields._DispLog;
  if ( !v37 )
    goto LABEL_66;
  v5 = BattleRootComponent_TypeInfo;
  naturalAligment = BattleRootComponent_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*v37 + 304LL) >= (unsigned int)naturalAligment
    && *(BattleRootComponent_c **)(*(_QWORD *)(*v37 + 200LL) + 8 * naturalAligment - 8) == BattleRootComponent_TypeInfo )
  {
    v39 = v37[8];
    if ( !v39 )
      goto LABEL_66;
    Instance = *(DataManager_o **)(v39 + 96);
    if ( !Instance )
      goto LABEL_66;
    this->fields.isUseGrandBoard = QuestPhaseEntity__IsUseGrandBoard((QuestPhaseEntity_o *)Instance, 0);
    Instance = (DataManager_o *)v37[8];
    if ( !Instance )
      goto LABEL_66;
    QuestId = BattleData__getQuestId((BattleData_o *)Instance, 0);
    if ( this->fields.isUseGrandBoard
      && (followerGrandGraphId = this->fields.followerGrandGraphId, followerGrandGraphId >= 1) )
    {
      this->fields.displayServantType = 2;
    }
    else
    {
      if ( QuestId )
        ReturnTypeByQuestId = OtherUserGameEntity__GetReturnTypeByQuestId(QuestId, 0);
      else
        ReturnTypeByQuestId = 0;
      followerGrandGraphId = this->fields.followerGrandGraphId;
      this->fields.displayServantType = ReturnTypeByQuestId;
    }
    followerClassId = this->fields.followerClassId;
    ExistLeaderInfo = BattleResultFriendComponent__getExistLeaderInfo(this, followerClassId, followerGrandGraphId, v40);
    displayServantType = this->fields.displayServantType;
    this->fields.followerClassId = ExistLeaderInfo;
    if ( displayServantType == 2 && this->fields.followerGrandGraphId >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantMaster___);
      v47 = *p_otherUser;
      if ( !*p_otherUser )
        goto LABEL_66;
      v48 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      Instance = (DataManager_o *)OtherUserGameEntity__getSvtId(
                                    v47,
                                    this->fields.followerClassId,
                                    this->fields.displayServantType,
                                    this->fields.followerDeckId,
                                    this->fields.followerGrandGraphId,
                                    0);
      if ( !v48 )
        goto LABEL_66;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             v48,
             &entity,
             (int32_t)Instance,
             (const MethodInfo_3408ECC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantClassMaster___);
        if ( !entity || !Instance )
          goto LABEL_66;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      &v74,
                                      (int32_t)entity[5].klass,
                                      (const MethodInfo_3408ECC *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v74 )
            goto LABEL_66;
          followerClassId = (int32_t)v74[4].klass;
          this->fields.followerClassId = followerClassId;
        }
      }
    }
    if ( followerClassId != this->fields.followerClassId )
    {
      classButtonControl = (UnityEngine_Object_o *)this->fields.classButtonControl;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(classButtonControl, 0, 0) )
      {
        Instance = (DataManager_o *)this->fields.classButtonControl;
        if ( !Instance )
          goto LABEL_66;
        ClassButtonControlComponent__setCursor(
          (ClassButtonControlComponent_o *)Instance,
          this->fields.followerClassId,
          0);
      }
    }
    this->fields.dispClassId = this->fields.followerClassId;
    if ( v20 )
    {
      *(_BYTE *)(v3 + 24) = EventTutorialMaster__IsTutorialAvailable(-1, 49, 0, 0, 0, 0, 0);
      v50 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(
        v50,
        (Il2CppObject *)v3,
        Method_BattleResultFriendComponent___c__DisplayClass47_0__openCore_b__0__,
        0);
      EventTutorialMaster__CheckTutorial(-1, 49, v50, 0, 0, 0, 0, 0);
    }
    Instance = (DataManager_o *)this->fields.root;
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
      Instance = (DataManager_o *)this->fields.friendIconComp;
      if ( Instance )
      {
        FriendIconComponent__SetInitIds((FriendIconComponent_o *)Instance, this->fields.followerClassId, QuestId, 0);
        if ( this->fields.displayServantType == 2 )
        {
          v52 = this->fields.classButtonControl;
          v53 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1C715FC(ClassButtonControlComponent_CallbackFunc_TypeInfo);
          ClassButtonControlComponent_CallbackFunc___ctor(
            v53,
            (Il2CppObject *)this,
            Method_BattleResultFriendComponent_changeClass__,
            0);
          if ( !v52 )
            goto LABEL_66;
          v52->fields.callbackFunc = v53;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&v52->fields.callbackFunc,
            (int32_t)v53,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59);
          Instance = (DataManager_o *)this->fields.classButtonControl;
          if ( !Instance )
            goto LABEL_66;
          if ( !ClassButtonControlComponent__setCursor(
                  (ClassButtonControlComponent_o *)Instance,
                  this->fields.followerClassId,
                  0) )
            BattleResultFriendComponent__changeClass(this, this->fields.followerClassId, v60);
          v61 = this->fields.classButtonControl;
          v62 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1C715FC(ClassButtonControlComponent_CallbackFunc_TypeInfo);
          ClassButtonControlComponent_CallbackFunc___ctor(
            v62,
            (Il2CppObject *)this,
            (intptr_t)Method_BattleResultFriendComponent_onChangeClass__,
            0);
          if ( !v61 )
            goto LABEL_66;
          v61->fields.callbackFunc = v62;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&v61->fields.callbackFunc,
            (int32_t)v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68);
        }
        else
        {
          BattleResultFriendComponent__changeClass(this, this->fields.followerClassId, v51);
        }
        Instance = (DataManager_o *)this->fields.myFsm;
        if ( Instance )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5449/*"END_PROC"*/, 0);
          return;
        }
      }
    }
LABEL_66:
    sub_1C71608(Instance, v5);
  }
  sub_1C719A4(*(_QWORD *)&Instance->fields._DispLog);
  BattleResultFriendComponent__ChangeFaceAtlas_d__46___ctor(v69, v70, v71);
}


void BattleResultFriendComponent__setResultData(
        BattleResultFriendComponent_o *this,
        int32_t infollowerType,
        int32_t infollowerStatus,
        int64_t followerId,
        int32_t infollowerClassId,
        int32_t inFollowerGrandGraphId,
        int32_t followerDeckId,
        bool enableFollow,
        const MethodInfo *method)
{
  bool v16; // w27
  UnityEngine_Object_o *classButtonControl; // x21
  ClassButtonControlComponent_o *v18; // x21
  ClassButtonControlComponent_CallbackFunc_o *v19; // x22
  ClassButtonControlComponent_o *v20; // x0
  __int64 v21; // x1
  struct ClassButtonControlComponent_o *v22; // x20
  ClassButtonControlComponent_CallbackFunc_o *v23; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7

  v16 = enableFollow;
  if ( (byte_4CCAD50 & 1) == 0 )
  {
    sub_1C713B0(&Method_BattleResultFriendComponent_changeClass__);
    sub_1C713B0(&Method_BattleResultFriendComponent_onChangeClass__);
    sub_1C713B0(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAD50 = 1;
  }
  this->fields.followerType = Follower__getType(infollowerType, 0);
  this->fields.followerStatus = infollowerStatus;
  this->fields.targetId = followerId;
  this->fields.followerClassId = infollowerClassId;
  this->fields.followerGrandGraphId = inFollowerGrandGraphId;
  this->fields.followerDeckId = followerDeckId;
  this->fields.enableFollowQuest = v16;
  classButtonControl = (UnityEngine_Object_o *)this->fields.classButtonControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classButtonControl, 0, 0) )
  {
    v18 = this->fields.classButtonControl;
    v19 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1C715FC(ClassButtonControlComponent_CallbackFunc_TypeInfo);
    ClassButtonControlComponent_CallbackFunc___ctor(
      v19,
      (Il2CppObject *)this,
      Method_BattleResultFriendComponent_changeClass__,
      0);
    if ( !v18
      || (ClassButtonControlComponent__init(v18, v19, 0, 0, 0, 0, 0), (v20 = this->fields.classButtonControl) == 0)
      || (ClassButtonControlComponent__setCursor(v20, infollowerClassId, 0),
          v22 = this->fields.classButtonControl,
          v23 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1C715FC(ClassButtonControlComponent_CallbackFunc_TypeInfo),
          ClassButtonControlComponent_CallbackFunc___ctor(
            v23,
            (Il2CppObject *)this,
            (intptr_t)Method_BattleResultFriendComponent_onChangeClass__,
            0),
          !v22) )
    {
      sub_1C71608(v20, v21);
    }
    v22->fields.callbackFunc = v23;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v22->fields.callbackFunc, (int32_t)v23, v24, v25, v26, v27, v28, v29);
  }
}


void BattleResultFriendComponent__ChangeFaceAtlas_d__46___ctor(
        BattleResultFriendComponent__ChangeFaceAtlas_d__46_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleResultFriendComponent__ChangeFaceAtlas_d__46__MoveNext(
        BattleResultFriendComponent__ChangeFaceAtlas_d__46_o *this,
        const MethodInfo *method)
{
  struct BattleResultFriendComponent_o *_4__this; // x20
  Il2CppObject *v4; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  __int64 v11; // x0
  const MethodInfo *v12; // x1
  struct System_Action_o *releasePerformanceObject; // x8
  UnityEngine_WaitForEndOfFrame_o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  Il2CppObject *waitForEndOfFrame_5__2; // x1
  Il2CppObject **p__2__current; // x19
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  bool result; // w0

  if ( (byte_4CCAD6C & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&System_GC_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C713B0(&Method_BattleResultFriendComponent___c__DisplayClass46_0__ChangeFaceAtlas_b__0__);
    sub_1C713B0(&BattleResultFriendComponent___c__DisplayClass46_0_TypeInfo);
    sub_1C713B0(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4CCAD6C = 1;
  }
  _4__this = this->fields.__4__this;
  if ( this->fields.__1__state )
    return 0;
  this->fields.__1__state = -1;
  v4 = (Il2CppObject *)sub_1C715FC(BattleResultFriendComponent___c__DisplayClass46_0_TypeInfo);
  System_Object___ctor(v4, 0);
  this->fields.__8__1 = (struct BattleResultFriendComponent___c__DisplayClass46_0_o *)v4;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.__8__1, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseFaceBattleAtlas(0);
  if ( !_4__this )
    sub_1C71608(v11, v12);
  releasePerformanceObject = _4__this->fields.releasePerformanceObject;
  if ( releasePerformanceObject )
    ((void (__fastcall *)(intptr_t, intptr_t))releasePerformanceObject->fields.invoke_impl)(
      releasePerformanceObject->fields.method_code,
      releasePerformanceObject->fields.method);
  BattleResultFriendComponent__openCore(_4__this, v12);
  v14 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C715FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
  UnityEngine_WaitForEndOfFrame___ctor(v14, 0);
  this->fields._waitForEndOfFrame_5__2 = v14;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._waitForEndOfFrame_5__2,
    (int32_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  waitForEndOfFrame_5__2 = (Il2CppObject *)this->fields._waitForEndOfFrame_5__2;
  this->fields.__2__current = waitForEndOfFrame_5__2;
  p__2__current = &this->fields.__2__current;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)p__2__current,
    (int32_t)waitForEndOfFrame_5__2,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *BattleResultFriendComponent__ChangeFaceAtlas_d__46__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleResultFriendComponent__ChangeFaceAtlas_d__46_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleResultFriendComponent__ChangeFaceAtlas_d__46__System_Collections_IEnumerator_Reset(
        BattleResultFriendComponent__ChangeFaceAtlas_d__46_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_BattleResultFriendComponent__ChangeFaceAtlas_d__46_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *BattleResultFriendComponent__ChangeFaceAtlas_d__46__System_Collections_IEnumerator_get_Current(
        BattleResultFriendComponent__ChangeFaceAtlas_d__46_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleResultFriendComponent__ChangeFaceAtlas_d__46__System_IDisposable_Dispose(
        BattleResultFriendComponent__ChangeFaceAtlas_d__46_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleResultFriendComponent___c__DisplayClass46_0___ctor(
        BattleResultFriendComponent___c__DisplayClass46_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleResultFriendComponent___c__DisplayClass46_0___ChangeFaceAtlas_b__0(
        BattleResultFriendComponent___c__DisplayClass46_0_o *this,
        const MethodInfo *method)
{
  this->fields.isWait = 0;
}


void BattleResultFriendComponent___c__DisplayClass47_0___ctor(
        BattleResultFriendComponent___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleResultFriendComponent___c__DisplayClass47_0___openCore_b__0(
        BattleResultFriendComponent___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  BattleResultFriendComponent___c__DisplayClass47_0_o *v2; // x19
  struct BattleResultFriendComponent_o *_4__this; // x8
  struct BattleResultFriendComponent_o *v4; // x8
  UILabel_o *followTutorialLabel; // x20
  UnityEngine_MonoBehaviour_o *v6; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  System_Collections_Generic_List_object__o *monitor; // x20
  EventDelegate_o *v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  struct BattleResultFriendComponent_o *v20; // x8
  struct BattleResultFriendComponent_o *v21; // x8
  struct BattleResultFriendComponent_o *v22; // x8
  struct BattleResultFriendComponent_o *v23; // x8
  Il2CppObject *Instance; // x19
  UnityEngine_Vector2_o v25; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v26; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  v2 = this;
  if ( (byte_4CCAD6B & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&StringLiteral_9878/*"OnClickTutorialFollow"*/);
    sub_1C713B0(&StringLiteral_13600/*"TUTORIAL_MESSAGE_FOLLOW_OFFER"*/);
    this = (BattleResultFriendComponent___c__DisplayClass47_0_o *)sub_1C713B0(&StringLiteral_11124/*"RESULT_FOLLOW_REQUEST_YES"*/);
    byte_4CCAD6B = 1;
  }
  if ( v2->fields.isFollowTutorial )
  {
    _4__this = v2->fields.__4__this;
    if ( !_4__this )
      goto LABEL_29;
    this = (BattleResultFriendComponent___c__DisplayClass47_0_o *)_4__this->fields.followTutorialMask;
    if ( !this )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v4 = v2->fields.__4__this;
    if ( !v4 )
      goto LABEL_29;
    followTutorialLabel = v4->fields.followTutorialLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (BattleResultFriendComponent___c__DisplayClass47_0_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_11124/*"RESULT_FOLLOW_REQUEST_YES"*/,
                                                                    0);
    if ( !followTutorialLabel )
      goto LABEL_29;
    UILabel__set_text(followTutorialLabel, (System_String_o *)this, 0);
    v6 = (UnityEngine_MonoBehaviour_o *)v2->fields.__4__this;
    if ( !v6 )
      goto LABEL_29;
    m_CancellationTokenSource = v6[8].fields.m_CancellationTokenSource;
    if ( !m_CancellationTokenSource )
      goto LABEL_29;
    monitor = (System_Collections_Generic_List_object__o *)m_CancellationTokenSource[3].monitor;
    v9 = (EventDelegate_o *)sub_1C715FC(EventDelegate_TypeInfo);
    EventDelegate___ctor_49641492(v9, v6, (System_String_o *)StringLiteral_9878/*"OnClickTutorialFollow"*/, 0);
    if ( !monitor )
      goto LABEL_29;
    items = monitor->fields._items;
    v17 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++monitor->fields._version;
    if ( !items )
      goto LABEL_29;
    size = monitor->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        monitor,
        (Il2CppObject *)v9,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v19 = &items->obj.klass + size;
      monitor->fields._size = size + 1;
      v19[4] = (Il2CppClass *)v9;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v9, v10, v11, v12, v13, v14, v15);
    }
    v20 = v2->fields.__4__this;
    if ( !v20 )
      goto LABEL_29;
    this = (BattleResultFriendComponent___c__DisplayClass47_0_o *)v20->fields.followTutorialButton;
    if ( !this )
      goto LABEL_29;
    this = (BattleResultFriendComponent___c__DisplayClass47_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0);
    v21 = v2->fields.__4__this;
    if ( !v21 )
      goto LABEL_29;
    GameObjectExtensions__AddLocalPositionX((UnityEngine_GameObject_o *)this, v21->fields.offsetPosition, 0);
    v22 = v2->fields.__4__this;
    if ( !v22 )
      goto LABEL_29;
    this = (BattleResultFriendComponent___c__DisplayClass47_0_o *)v22->fields.followTutorialButton;
    if ( !this )
      goto LABEL_29;
    this = (BattleResultFriendComponent___c__DisplayClass47_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0);
    if ( !this
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0), (v23 = v2->fields.__4__this) == 0)
      || (this = (BattleResultFriendComponent___c__DisplayClass47_0_o *)v23->fields.rightButton) == 0
      || (this = (BattleResultFriendComponent___c__DisplayClass47_0_o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)this,
                                                                          0)) == 0
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0),
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          this = (BattleResultFriendComponent___c__DisplayClass47_0_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_13600/*"TUTORIAL_MESSAGE_FOLLOW_OFFER"*/,
                                                                          0),
          !Instance) )
    {
LABEL_29:
      sub_1C71608(this, method);
    }
    v25.fields.x = 313.0;
    v25.fields.y = -184.0;
    v26.fields.m_XMin = 162.0;
    v26.fields.m_YMin = -244.0;
    v26.fields.m_Width = 300.0;
    v26.fields.m_Height = 80.0;
    CommonUI__OpenTutorialNotificationDialogArrow(
      (CommonUI_o *)Instance,
      (System_String_o *)this,
      v25,
      v26,
      0.0,
      0,
      -1,
      0,
      0);
  }
}