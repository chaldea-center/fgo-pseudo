void BattleResultFriendComponent___cctor(const MethodInfo *method)
{
  if ( (byte_593C2A3 & 1) == 0 )
  {
    sub_21FFC50(&BattleResultFriendComponent_TypeInfo);
    byte_593C2A3 = 1;
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593C28D & 1) == 0 )
  {
    sub_21FFC50(&BattleResultFriendComponent__ChangeFaceAtlas_d__46_TypeInfo);
    byte_593C28D = 1;
  }
  v3 = sub_21FFEBC(BattleResultFriendComponent__ChangeFaceAtlas_d__46_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void BattleResultFriendComponent__ChangeSupportScene(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  OtherUserGameEntity_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x21
  __int64 naturalAligment; // x9
  BattleRootComponent_callBackBeginResume_o *v8; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  OtherUserGameEntity_o *otherUser; // x22
  SupportInfoJump_o *v18; // x20
  __int64 v19; // x8
  __int64 v20; // x8
  int32_t v21; // w22
  QuestRestrictionInfo_o *v22; // x21
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  int32_t v24; // w19
  BattleResultFriendComponent_o *v25; // x0
  const MethodInfo *v26; // x1

  if ( (byte_593C29E & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleResultFriendComponent_ChangeSupportScene__);
    sub_21FFC50(&Method_BattleResultFriendComponent_callBackBeginResume__);
    sub_21FFC50(&BattleRootComponent_TypeInfo);
    sub_21FFC50(&QuestRestrictionInfo_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&SupportInfoJump_TypeInfo);
    sub_21FFC50(&BattleRootComponent_callBackBeginResume_TypeInfo);
    byte_593C29E = 1;
  }
  Instance = (OtherUserGameEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 10, 0) )
  {
    Instance = (OtherUserGameEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    v6 = *(_QWORD *)&Instance->fields.userLv;
    if ( !v6
      || (naturalAligment = BattleRootComponent_TypeInfo->_2.naturalAligment,
          *(unsigned __int8 *)(*(_QWORD *)v6 + 304LL) >= (unsigned int)naturalAligment)
      && *(BattleRootComponent_c **)(*(_QWORD *)(*(_QWORD *)v6 + 200LL) + 8 * naturalAligment - 8) == BattleRootComponent_TypeInfo )
    {
      v8 = (BattleRootComponent_callBackBeginResume_o *)sub_21FFEBC(BattleRootComponent_callBackBeginResume_TypeInfo);
      BattleRootComponent_callBackBeginResume___ctor(
        v8,
        (Il2CppObject *)this,
        Method_BattleResultFriendComponent_callBackBeginResume__,
        0);
      if ( v6 )
      {
        *(_QWORD *)(v6 + 120) = v8;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v6 + 120), (int32_t)v8, v9, v10, v11, v12, v13, v14);
        v15 = Method_BattleResultFriendComponent_ChangeSupportScene__;
        if ( (*((_BYTE *)Method_BattleResultFriendComponent_ChangeSupportScene__ + 83) & 2) != 0 )
          v15 = (_QWORD *)sub_21FFC68(Method_BattleResultFriendComponent_ChangeSupportScene__);
        v16 = (System_Reflection_MethodBase_o *)sub_21FFC34(v15, v15[4]);
        OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0);
        otherUser = this->fields.otherUser;
        v18 = (SupportInfoJump_o *)sub_21FFEBC(SupportInfoJump_TypeInfo);
        SupportInfoJump___ctor(v18, otherUser, 0, 0, 0);
        v19 = *(_QWORD *)(v6 + 64);
        if ( v19 )
        {
          v20 = *(_QWORD *)(v19 + 88);
          if ( v20 )
          {
            v21 = *(_DWORD *)(v20 + 16);
            v22 = (QuestRestrictionInfo_o *)sub_21FFEBC(QuestRestrictionInfo_TypeInfo);
            QuestRestrictionInfo___ctor(v22, v21, 0);
            if ( v18 )
            {
              SupportInfoJump__SetSetupInfo(v18, 0, v22, 0);
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
                v24 = 60;
                if ( ServantLeaderInfo )
                {
                  if ( ServantLeaderInfo__get_IsGrandSvt(ServantLeaderInfo, 0) )
                    v24 = 43;
                  else
                    v24 = 60;
                }
                Instance = (OtherUserGameEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( Instance )
                {
                  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, v24, 1, (Il2CppObject *)v18, 0);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_23:
      sub_21FFECC(Instance, v4);
    }
    sub_220024C(*(_QWORD *)&Instance->fields.userLv, BattleRootComponent_TypeInfo, v5);
    BattleResultFriendComponent__callBackBeginResume(v25, v26);
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

  if ( (byte_593C29B & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleResultFriendComponent_OnEndRequestDialog__);
    sub_21FFC50(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_11545/*"REQUEST_OK"*/);
    sub_21FFC50(&StringLiteral_11543/*"REQUEST_NG"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    sub_21FFC50(&StringLiteral_22593/*"message"*/);
    sub_21FFC50(&StringLiteral_1198/*"0"*/);
    sub_21FFC50(&StringLiteral_24896/*"status"*/);
    byte_593C29B = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_23290/*"ng"*/, 0) )
  {
    myFsm = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v9 = &StringLiteral_11543/*"REQUEST_NG"*/;
      goto LABEL_17;
    }
LABEL_20:
    sub_21FFECC(myFsm, v5);
  }
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v5);
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0);
  if ( !myFsm )
    goto LABEL_20;
  v7 = myFsm;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFsm,
          (Il2CppObject *)StringLiteral_22593/*"message"*/,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_13;
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v7,
                                                                       (Il2CppObject *)StringLiteral_22593/*"message"*/,
                                                                       (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_20;
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))myFsm->klass->vtable._3_ToString.methodPtr)(
                            myFsm,
                            myFsm->klass->vtable._3_ToString.method);
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v7,
                                                                       (Il2CppObject *)StringLiteral_24896/*"status"*/,
                                                                       (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_20;
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))myFsm->klass->vtable._3_ToString.methodPtr)(
                                                                       myFsm,
                                                                       myFsm->klass->vtable._3_ToString.method);
  if ( !myFsm )
    goto LABEL_20;
  if ( System_String__Equals_75473208((System_String_o *)myFsm, (System_String_o *)StringLiteral_1198/*"0"*/, 0)
    || System_String__IsNullOrEmpty(v8, 0) )
  {
LABEL_13:
    myFsm = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v9 = &StringLiteral_11545/*"REQUEST_OK"*/;
LABEL_17:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFsm, (System_String_o *)*v9, 0);
      return;
    }
    goto LABEL_20;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (NotificationDialog_ClickDelegate_o *)sub_21FFEBC(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_OnEndRequestDialog__,
    0);
  if ( !Instance )
    goto LABEL_20;
  CommonUI__OpenNotificationDialog_37294692(
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

  if ( (byte_593C299 & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleResultFriendComponent_OnEndRequestDialog__);
    sub_21FFC50(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_11545/*"REQUEST_OK"*/);
    sub_21FFC50(&StringLiteral_11543/*"REQUEST_NG"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    sub_21FFC50(&StringLiteral_22593/*"message"*/);
    sub_21FFC50(&StringLiteral_1198/*"0"*/);
    sub_21FFC50(&StringLiteral_24896/*"status"*/);
    byte_593C299 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_23290/*"ng"*/, 0) )
  {
    myFsm = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v9 = &StringLiteral_11543/*"REQUEST_NG"*/;
      goto LABEL_17;
    }
LABEL_20:
    sub_21FFECC(myFsm, v5);
  }
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v5);
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0);
  if ( !myFsm )
    goto LABEL_20;
  v7 = myFsm;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFsm,
          (Il2CppObject *)StringLiteral_22593/*"message"*/,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_13;
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v7,
                                                                       (Il2CppObject *)StringLiteral_22593/*"message"*/,
                                                                       (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_20;
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))myFsm->klass->vtable._3_ToString.methodPtr)(
                            myFsm,
                            myFsm->klass->vtable._3_ToString.method);
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v7,
                                                                       (Il2CppObject *)StringLiteral_24896/*"status"*/,
                                                                       (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_20;
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))myFsm->klass->vtable._3_ToString.methodPtr)(
                                                                       myFsm,
                                                                       myFsm->klass->vtable._3_ToString.method);
  if ( !myFsm )
    goto LABEL_20;
  if ( System_String__Equals_75473208((System_String_o *)myFsm, (System_String_o *)StringLiteral_1198/*"0"*/, 0)
    || System_String__IsNullOrEmpty(v8, 0) )
  {
LABEL_13:
    myFsm = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v9 = &StringLiteral_11545/*"REQUEST_OK"*/;
LABEL_17:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFsm, (System_String_o *)*v9, 0);
      return;
    }
    goto LABEL_20;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (NotificationDialog_ClickDelegate_o *)sub_21FFEBC(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_OnEndRequestDialog__,
    0);
  if ( !Instance )
    goto LABEL_20;
  CommonUI__OpenNotificationDialog_37294692(
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

  if ( (byte_593C291 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_BattleResultFriendComponent_endCloseSHowServant__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593C291 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleResultFriendComponent_endCloseSHowServant__, 0);
  if ( !Instance )
    sub_21FFECC(v6, v7);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v5, 0);
}


void BattleResultFriendComponent__Init(
        BattleResultFriendComponent_o *this,
        System_Action_o *releasePerformanceObject,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *root; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *friendIconComp; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Object_array *ComponentsInChildren_object; // x0
  il2cpp_array_size_t max_length; // x8
  System_Object_array *v16; // x21
  unsigned __int64 v17; // x24
  Il2CppObject **m_Items; // x25
  UnityEngine_Object_o *v19; // x22

  if ( (byte_593C289 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel____91557272);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C289 = 1;
  }
  root = this->fields.root;
  if ( !root )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(root, 0, 0);
  friendIconComp = (UnityEngine_Object_o *)this->fields.friendIconComp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( !UnityEngine_Object__op_Inequality(friendIconComp, 0, 0) )
    goto LABEL_20;
  root = (UnityEngine_GameObject_o *)this->fields.friendIconComp;
  if ( !root || (root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)root, 0)) == 0 )
LABEL_22:
    sub_21FFECC(root, releasePerformanceObject);
  ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                  root,
                                  1,
                                  (const MethodInfo_3884508 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel____91557272);
  if ( ComponentsInChildren_object )
  {
    max_length = ComponentsInChildren_object->max_length;
    v16 = ComponentsInChildren_object;
    if ( (int)max_length >= 1 )
    {
      v17 = 0;
      m_Items = ComponentsInChildren_object->m_Items;
      do
      {
        if ( v17 >= (unsigned int)max_length )
LABEL_21:
          sub_21FFED4(ComponentsInChildren_object);
        v19 = (UnityEngine_Object_o *)m_Items[v17];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, releasePerformanceObject);
        ComponentsInChildren_object = (System_Object_array *)UnityEngine_Object__op_Inequality(v19, 0, 0);
        if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
        {
          if ( v17 >= LODWORD(v16->max_length) )
            goto LABEL_21;
          root = (UnityEngine_GameObject_o *)m_Items[v17];
          if ( !root )
            goto LABEL_22;
          UILabel__SetDefaultFont((UILabel_o *)root, 0);
        }
        LODWORD(max_length) = v16->max_length;
        ++v17;
      }
      while ( (__int64)v17 < (int)max_length );
    }
  }
LABEL_20:
  this->fields.releasePerformanceObject = releasePerformanceObject;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.releasePerformanceObject,
    (int32_t)releasePerformanceObject,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


void BattleResultFriendComponent__Layout(
        BattleResultFriendComponent_o *this,
        bool isActiveFollow,
        bool isActiveFriend,
        const MethodInfo *method)
{
  System_String_o *v7; // x21
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x23
  System_String_o *errLabel; // x0
  __int64 v12; // x1
  System_String_o *v13; // x24
  bool v14; // w8
  System_String_o **v15; // x8
  _BOOL4 v16; // w22
  System_String_o **v17; // x24
  const MethodInfo *v18; // x3
  __int64 v19; // x1
  System_String_o *v20; // x23
  UILabel_o *titleLabel; // x22
  UILabel_o *friendWarningLabel; // x20
  int32_t followerStatus; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_593C2A0 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_11584/*"RESULT_FRIENDANDFOLLOW_TITLE"*/);
    sub_21FFC50(&StringLiteral_11586/*"RESULT_FRIEND_ERR_{0}"*/);
    sub_21FFC50(&StringLiteral_11592/*"RESULT_MAXFRIEND_WARNING"*/);
    sub_21FFC50(&StringLiteral_11589/*"RESULT_FRIEND_TITLE"*/);
    sub_21FFC50(&StringLiteral_11583/*"RESULT_FOLLOW_TITLE"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593C2A0 = 1;
  }
  v7 = (System_String_o *)StringLiteral_11592/*"RESULT_MAXFRIEND_WARNING"*/;
  followerStatus = this->fields.followerStatus;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &followerStatus);
  v10 = System_String__Format((System_String_o *)StringLiteral_11586/*"RESULT_FRIEND_ERR_{0}"*/, v8, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
  errLabel = LocalizationManager__Get(v10, 0);
  if ( !v10 )
    goto LABEL_34;
  v13 = errLabel;
  v14 = System_String__Equals_75473208(v10, errLabel, 0);
  errLabel = (System_String_o *)this->fields.errLabel;
  if ( v14 )
  {
    if ( !errLabel )
      goto LABEL_34;
  }
  else
  {
    if ( !errLabel )
      goto LABEL_34;
    UILabel__set_text((UILabel_o *)errLabel, v13, 0);
    if ( !isActiveFollow || !isActiveFriend )
      goto LABEL_15;
    errLabel = (System_String_o *)this->fields.errLabel;
    if ( !errLabel )
      goto LABEL_34;
    isActiveFriend = 0;
    v7 = v10;
  }
  UILabel__set_text((UILabel_o *)errLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
LABEL_15:
  errLabel = (System_String_o *)this->fields.followCountRoot;
  if ( !errLabel )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)errLabel, isActiveFollow, 0);
  errLabel = (System_String_o *)this->fields.friendWarningLabel;
  if ( !errLabel )
    goto LABEL_34;
  errLabel = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)errLabel, 0);
  if ( !errLabel )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)errLabel, !isActiveFriend, 0);
  errLabel = (System_String_o *)this->fields.countRoot;
  if ( !errLabel )
    goto LABEL_34;
  v15 = (System_String_o **)&StringLiteral_11584/*"RESULT_FRIENDANDFOLLOW_TITLE"*/;
  v16 = isActiveFollow;
  if ( !v16 )
    v15 = (System_String_o **)&StringLiteral_11589/*"RESULT_FRIEND_TITLE"*/;
  if ( isActiveFriend )
    v17 = v15;
  else
    v17 = (System_String_o **)&StringLiteral_11583/*"RESULT_FOLLOW_TITLE"*/;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)errLabel, isActiveFriend, 0);
  BattleResultFriendComponent__SetupButtons(this, v16, isActiveFriend, v18);
  v20 = *v17;
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
  errLabel = LocalizationManager__Get(v20, 0);
  if ( !titleLabel )
    goto LABEL_34;
  UILabel__set_text(titleLabel, errLabel, 0);
  if ( isActiveFriend )
    goto LABEL_32;
  friendWarningLabel = this->fields.friendWarningLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
  errLabel = LocalizationManager__Get(v7, 0);
  if ( !friendWarningLabel )
LABEL_34:
    sub_21FFECC(errLabel, v12);
  UILabel__set_text(friendWarningLabel, errLabel, 0);
LABEL_32:
  errLabel = (System_String_o *)this->fields.countGrid;
  if ( !errLabel )
    goto LABEL_34;
  ((void (__fastcall *)(System_String_o *, const MethodInfo *))errLabel->klass->vtable._8_Equals.methodPtr)(
    errLabel,
    errLabel->klass->vtable._8_Equals.method);
}


void BattleResultFriendComponent__OnClickFollow(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_593C296 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_6739/*"FOLLOW_CONNECT"*/);
    byte_593C296 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_21FFECC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_6739/*"FOLLOW_CONNECT"*/, 0);
}


void BattleResultFriendComponent__OnClickFriend(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_593C293 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3921/*"CONNECT"*/);
    byte_593C293 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_21FFECC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3921/*"CONNECT"*/, 0);
}


void BattleResultFriendComponent__OnClickHelp(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_593C2A2 & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleResultFriendComponent_OnClickHelp__);
    byte_593C2A2 = 1;
  }
  v2 = Method_BattleResultFriendComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_21FFC68(Method_BattleResultFriendComponent_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_21FFC34(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 49, 0, 0, 0);
}


void BattleResultFriendComponent__OnClickNo(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_593C295 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_9636/*"NEXT"*/);
    byte_593C295 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_21FFECC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9636/*"NEXT"*/, 0);
}


void BattleResultFriendComponent__OnClickNoActionFriend(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_593C294 & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleResultFriendComponent_OnClickNoActionFriend__);
    byte_593C294 = 1;
  }
  v2 = Method_BattleResultFriendComponent_OnClickNoActionFriend__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_OnClickNoActionFriend__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_21FFC68(Method_BattleResultFriendComponent_OnClickNoActionFriend__);
  v3 = (System_Reflection_MethodBase_o *)sub_21FFC34(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 2, 0, 0);
}


void BattleResultFriendComponent__OnClickSupportInfo(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_593C29D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3461/*"CHANGE_SUPPORT"*/);
    byte_593C29D = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_21FFECC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3461/*"CHANGE_SUPPORT"*/, 0);
}


void BattleResultFriendComponent__OnClickTutorialFollow(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  MissionNaviTransitionBoardItem_o *v12; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_593C297 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593C297 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseTutorialNotificationDialogArrow((CommonUI_o *)Instance, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
  Instance = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
  if ( !Instance )
    goto LABEL_12;
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          (const MethodInfo_3EDFB14 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__) )
    goto LABEL_11;
  Instance = entity;
  if ( !entity )
LABEL_12:
    sub_21FFECC(Instance, v4);
  v12 = (MissionNaviTransitionBoardItem_o *)&entity[1];
  if ( entity[1].klass )
  {
    v12->klass = 0;
    sub_21FFBF4(v12, 0, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_593C29C & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_11545/*"REQUEST_OK"*/);
    byte_593C29C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog(Instance, 0), (Instance = (CommonUI_o *)this->fields.myFsm) == 0) )
    sub_21FFECC(Instance, v5);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_11545/*"REQUEST_OK"*/, 0);
}


void BattleResultFriendComponent__Open(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x20
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  int32_t FollowSum; // w22
  bool v7; // cc
  bool v8; // zf
  _BOOL4 v9; // w22
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  System_Collections_IEnumerator_o *v13; // x1

  if ( (byte_593C28C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_21FFC50(&OptionManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_9636/*"NEXT"*/);
    sub_21FFC50(&StringLiteral_6743/*"FOLLOW_NUM"*/);
    byte_593C28C = 1;
  }
  if ( this->fields.followerType != 2 )
    goto LABEL_22;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  if ( !Instance )
    goto LABEL_32;
  FollowSum = UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0);
  Instance = (DataManager_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6743/*"FOLLOW_NUM"*/, 0);
  v7 = this->fields.followerType == 2 && FollowSum < (int)Instance;
  v8 = !v7 || !this->fields.enableFollowQuest;
  v9 = v8;
  if ( !MasterData_object )
    goto LABEL_32;
  Instance = (DataManager_o *)TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0);
  if ( !SelfUserGame )
    goto LABEL_32;
  if ( (int)Instance >= SelfUserGame->fields.friendKeep && v9 )
  {
LABEL_22:
    Instance = (DataManager_o *)this->fields.myFsm;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9636/*"NEXT"*/, 0);
      return;
    }
LABEL_32:
    sub_21FFECC(Instance, method);
  }
  Instance = (DataManager_o *)this->fields.followTutorialMask;
  if ( !Instance )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.followTutorialButton;
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v11);
  if ( OptionManager__isSavedMemoryMode(0) )
  {
    v13 = BattleResultFriendComponent__ChangeFaceAtlas(this, v12);
    UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v13, 0);
  }
  else
  {
    BattleResultFriendComponent__openCore(this, v12);
  }
}


void BattleResultFriendComponent__OpenHelpDialog(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 49, 0, 0, 0);
}


void BattleResultFriendComponent__ServantConfClick(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_593C28F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_10037/*"OPEN_SERVANT"*/);
    byte_593C28F = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_21FFECC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_10037/*"OPEN_SERVANT"*/, 0);
}


void BattleResultFriendComponent__SetupButtons(
        BattleResultFriendComponent_o *this,
        bool isActiveFollow,
        bool isActiveFriend,
        const MethodInfo *method)
{
  EventDelegate_o *v7; // x21
  EventDelegate_o *v8; // x22
  __int64 v9; // x1
  UnityEngine_Component_o *helpButton; // x0
  __int64 v11; // x1
  UILabel_o *leftButtonLabel; // x24
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v20; // x9
  __int64 klass_low; // x10
  intptr_t v22; // x8
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct UIButton_o *v35; // x8
  intptr_t v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  intptr_t v39; // x8
  __int64 v40; // x1
  struct UIButton_o *rightButton; // x8
  intptr_t v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  intptr_t v45; // x8
  __int64 v46; // x1
  UILabel_o *centerButtonLabel; // x22
  struct UIButton_o *centerButton; // x23
  __int64 v49; // x1
  UnityEngine_GameObject_o *v50; // x24
  BattleResultFriendComponent_c *v51; // x8
  __int64 *v52; // x8
  UILabel_o *rightButtonLabel; // x24
  __int64 v54; // x1
  UnityEngine_GameObject_o *gameObject; // x24
  BattleResultFriendComponent_c *v56; // x8
  UnityEngine_GameObject_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x0
  UnityEngine_GameObject_o *v59; // x0
  UnityEngine_GameObject_o *v60; // x0
  EventDelegate_o *v61; // x20
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  intptr_t v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  intptr_t v71; // x8
  UIButton_c *klass; // x8
  UnityEngine_Color_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593C2A1 & 1) == 0 )
  {
    sub_21FFC50(&BattleResultFriendComponent_TypeInfo);
    sub_21FFC50(&EventDelegate_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDelegate__Remove__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_10228/*"OnClickFriend"*/);
    sub_21FFC50(&StringLiteral_10249/*"OnClickNoActionFriend"*/);
    sub_21FFC50(&StringLiteral_11588/*"RESULT_FRIEND_REQUEST_YES"*/);
    sub_21FFC50(&StringLiteral_11582/*"RESULT_FOLLOW_REQUEST_YES"*/);
    sub_21FFC50(&StringLiteral_10227/*"OnClickFollow"*/);
    sub_21FFC50(&StringLiteral_21136/*"icon_friend"*/);
    sub_21FFC50(&StringLiteral_11587/*"RESULT_FRIEND_REQUEST_NO"*/);
    sub_21FFC50(&StringLiteral_21135/*"icon_follow"*/);
    byte_593C2A1 = 1;
  }
  v7 = (EventDelegate_o *)sub_21FFEBC(EventDelegate_TypeInfo);
  EventDelegate___ctor_56133096(v7, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_10228/*"OnClickFriend"*/, 0);
  v8 = (EventDelegate_o *)sub_21FFEBC(EventDelegate_TypeInfo);
  EventDelegate___ctor_56133096(v8, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_10227/*"OnClickFollow"*/, 0);
  helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
  if ( !helpButton )
    goto LABEL_62;
  helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0);
  if ( !helpButton )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 1, 0);
  leftButtonLabel = this->fields.leftButtonLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
  helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11587/*"RESULT_FRIEND_REQUEST_NO"*/, 0);
  if ( !leftButtonLabel )
    goto LABEL_62;
  UILabel__set_text(leftButtonLabel, (System_String_o *)helpButton, 0);
  helpButton = (UnityEngine_Component_o *)this->fields.centerButton;
  if ( isActiveFollow )
  {
    if ( !helpButton )
      goto LABEL_62;
    helpButton = (UnityEngine_Component_o *)helpButton[8].monitor;
    if ( !helpButton )
      goto LABEL_62;
    m_CachedPtr = helpButton->fields.m_CachedPtr;
    v20 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++HIDWORD(helpButton[1].klass);
    if ( !m_CachedPtr )
      goto LABEL_62;
    klass_low = SLODWORD(helpButton[1].klass);
    if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)helpButton,
        (Il2CppObject *)v7,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = m_CachedPtr + 8 * klass_low;
      LODWORD(helpButton[1].klass) = klass_low + 1;
      *(_QWORD *)(v22 + 32) = v7;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 32), (int32_t)v7, v13, v14, v15, v16, v17, v18);
    }
    rightButton = this->fields.rightButton;
    if ( !rightButton )
      goto LABEL_62;
    helpButton = (UnityEngine_Component_o *)rightButton->fields.onClick;
    if ( !helpButton )
      goto LABEL_62;
    v42 = helpButton->fields.m_CachedPtr;
    v43 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++HIDWORD(helpButton[1].klass);
    if ( !v42 )
      goto LABEL_62;
    v44 = SLODWORD(helpButton[1].klass);
    if ( (unsigned int)v44 >= *(_DWORD *)(v42 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)helpButton,
        (Il2CppObject *)v8,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    }
    else
    {
      v45 = v42 + 8 * v44;
      LODWORD(helpButton[1].klass) = v44 + 1;
      *(_QWORD *)(v45 + 32) = v8;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v45 + 32), (int32_t)v8, v23, v24, v25, v26, v27, v28);
    }
    centerButton = this->fields.centerButton;
    centerButtonLabel = this->fields.centerButtonLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46);
    helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11588/*"RESULT_FRIEND_REQUEST_YES"*/, 0);
    if ( !centerButtonLabel )
      goto LABEL_62;
    UILabel__set_text(centerButtonLabel, (System_String_o *)helpButton, 0);
    rightButtonLabel = this->fields.rightButtonLabel;
    helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11582/*"RESULT_FOLLOW_REQUEST_YES"*/, 0);
    if ( !rightButtonLabel )
      goto LABEL_62;
    UILabel__set_text(rightButtonLabel, (System_String_o *)helpButton, 0);
    helpButton = (UnityEngine_Component_o *)this->fields.centerButtonLabel;
    if ( !helpButton )
      goto LABEL_62;
    gameObject = UnityEngine_Component__get_gameObject(helpButton, 0);
    v56 = BattleResultFriendComponent_TypeInfo;
    if ( !*(&BattleResultFriendComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleResultFriendComponent_TypeInfo, v54);
      v56 = BattleResultFriendComponent_TypeInfo;
    }
    GameObjectExtensions__AddLocalPositionX(gameObject, v56->static_fields->offsetOfferLabelPosition, 0);
    helpButton = (UnityEngine_Component_o *)this->fields.rightButtonLabel;
    if ( !helpButton )
      goto LABEL_62;
    v57 = UnityEngine_Component__get_gameObject(helpButton, 0);
    GameObjectExtensions__AddLocalPositionX(
      v57,
      BattleResultFriendComponent_TypeInfo->static_fields->offsetOfferLabelPosition,
      0);
    helpButton = (UnityEngine_Component_o *)this->fields.leftButton;
    if ( !helpButton )
      goto LABEL_62;
    v58 = UnityEngine_Component__get_gameObject(helpButton, 0);
    GameObjectExtensions__AddLocalPositionX(v58, -this->fields.offsetPosition, 0);
    helpButton = (UnityEngine_Component_o *)this->fields.rightButton;
    if ( !helpButton )
      goto LABEL_62;
    v59 = UnityEngine_Component__get_gameObject(helpButton, 0);
    GameObjectExtensions__AddLocalPositionX(v59, this->fields.offsetPosition, 0);
    helpButton = (UnityEngine_Component_o *)this->fields.rightMarkSprite;
    if ( !helpButton )
      goto LABEL_62;
    v60 = UnityEngine_Component__get_gameObject(helpButton, 0);
    GameObjectExtensions__AddLocalPositionX(
      v60,
      BattleResultFriendComponent_TypeInfo->static_fields->offsetFollowMarkPosition,
      0);
    helpButton = (UnityEngine_Component_o *)this->fields.centerMarkSprite;
    if ( !helpButton )
      goto LABEL_62;
    UISprite__set_spriteName((UISprite_o *)helpButton, (System_String_o *)StringLiteral_21136/*"icon_friend"*/, 0);
    helpButton = (UnityEngine_Component_o *)this->fields.rightMarkSprite;
    if ( !helpButton )
      goto LABEL_62;
    v52 = &StringLiteral_21135/*"icon_follow"*/;
  }
  else
  {
    if ( !helpButton )
      goto LABEL_62;
    helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0);
    if ( !helpButton )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 0, 0);
    v35 = this->fields.rightButton;
    if ( !v35 )
      goto LABEL_62;
    helpButton = (UnityEngine_Component_o *)v35->fields.onClick;
    if ( !helpButton )
      goto LABEL_62;
    v36 = helpButton->fields.m_CachedPtr;
    v37 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++HIDWORD(helpButton[1].klass);
    if ( !v36 )
      goto LABEL_62;
    v38 = SLODWORD(helpButton[1].klass);
    if ( (unsigned int)v38 >= *(_DWORD *)(v36 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)helpButton,
        (Il2CppObject *)v7,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
    }
    else
    {
      v39 = v36 + 8 * v38;
      LODWORD(helpButton[1].klass) = v38 + 1;
      *(_QWORD *)(v39 + 32) = v7;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v39 + 32), (int32_t)v7, v29, v30, v31, v32, v33, v34);
    }
    centerButton = this->fields.rightButton;
    centerButtonLabel = this->fields.rightButtonLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40);
    helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11588/*"RESULT_FRIEND_REQUEST_YES"*/, 0);
    if ( !centerButtonLabel )
      goto LABEL_62;
    UILabel__set_text(centerButtonLabel, (System_String_o *)helpButton, 0);
    helpButton = (UnityEngine_Component_o *)this->fields.rightButtonLabel;
    if ( !helpButton )
      goto LABEL_62;
    v50 = UnityEngine_Component__get_gameObject(helpButton, 0);
    v51 = BattleResultFriendComponent_TypeInfo;
    if ( !*(&BattleResultFriendComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleResultFriendComponent_TypeInfo, v49);
      v51 = BattleResultFriendComponent_TypeInfo;
    }
    GameObjectExtensions__AddLocalPositionX(v50, v51->static_fields->offsetOfferLabelPosition, 0);
    helpButton = (UnityEngine_Component_o *)this->fields.rightMarkSprite;
    if ( !helpButton )
      goto LABEL_62;
    v52 = &StringLiteral_21136/*"icon_friend"*/;
  }
  UISprite__set_spriteName((UISprite_o *)helpButton, (System_String_o *)*v52, 0);
  if ( isActiveFriend && !this->fields.followerStatus )
    return;
  v61 = (EventDelegate_o *)sub_21FFEBC(EventDelegate_TypeInfo);
  EventDelegate___ctor_56133096(v61, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_10249/*"OnClickNoActionFriend"*/, 0);
  if ( !centerButton
    || (helpButton = (UnityEngine_Component_o *)centerButton->fields.onClick) == 0
    || (System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)helpButton,
          (Il2CppObject *)v7,
          (const MethodInfo_445101C *)Method_System_Collections_Generic_List_EventDelegate__Remove__),
        (helpButton = (UnityEngine_Component_o *)centerButton->fields.onClick) == 0)
    || (v68 = helpButton->fields.m_CachedPtr,
        v69 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++HIDWORD(helpButton[1].klass),
        !v68) )
  {
LABEL_62:
    sub_21FFECC(helpButton, v9);
  }
  v70 = SLODWORD(helpButton[1].klass);
  if ( (unsigned int)v70 >= *(_DWORD *)(v68 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)helpButton,
      (Il2CppObject *)v61,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
  }
  else
  {
    v71 = v68 + 8 * v70;
    LODWORD(helpButton[1].klass) = v70 + 1;
    *(_QWORD *)(v71 + 32) = v61;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v71 + 32), (int32_t)v61, v62, v63, v64, v65, v66, v67);
  }
  v73.fields.r = 0.5;
  v73.fields.g = 0.5;
  v73.fields.b = 0.5;
  v73.fields.a = 1.0;
  UIButtonColor__set_defaultColor((UIButtonColor_o *)centerButton, v73, 0);
  klass = centerButton->klass;
  centerButton->fields.hover = (struct UnityEngine_Color_o)xmmword_E93FD0;
  centerButton->fields.pressed = (struct UnityEngine_Color_o)xmmword_E93FD0;
  ((void (__fastcall *)(struct UIButton_o *, __int64, __int64, const MethodInfo *))klass->vtable._14_SetState.methodPtr)(
    centerButton,
    3,
    1,
    klass->vtable._14_SetState.method);
  v74.fields.r = 0.5;
  v74.fields.g = 0.5;
  v74.fields.b = 0.5;
  v74.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)centerButtonLabel, v74, 0);
  v75.fields.r = 0.0;
  v75.fields.g = 0.0;
  v75.fields.b = 0.0;
  v75.fields.a = 1.0;
  UILabel__set_effectColor(centerButtonLabel, v75, 0);
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

  if ( (byte_593C290 & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleResultFriendComponent_EndShowServant__);
    sub_21FFC50(&Method_BattleResultFriendComponent_ShowServantConf__);
    sub_21FFC50(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593C290 = 1;
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
      v7 = (_QWORD *)sub_21FFC68(Method_BattleResultFriendComponent_ShowServantConf__);
    v8 = (System_Reflection_MethodBase_o *)sub_21FFC34(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (ServantStatusDialog_EndDelegate_o *)sub_21FFEBC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v10,
      (Il2CppObject *)this,
      Method_BattleResultFriendComponent_EndShowServant__,
      0);
    if ( Instance )
    {
      CommonUI__OpenServantStatusDialog_37304188((CommonUI_o *)Instance, 5, v6, v10, 0);
      return;
    }
LABEL_10:
    sub_21FFECC(otherUser, method);
  }
  BattleResultFriendComponent__endCloseSHowServant(this, v5);
}


void BattleResultFriendComponent__callBackBeginResume(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_593C29F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3634/*"CLOSE"*/);
    byte_593C29F = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_21FFECC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3634/*"CLOSE"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleResultFriendComponent__changeClass(
        BattleResultFriendComponent_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  FriendIconComponent_o *friendIconComp; // x8

  if ( this->fields.isUseGrandBoard )
    this->fields.displayServantType = 2;
  friendIconComp = this->fields.friendIconComp;
  this->fields.dispClassId = classPos;
  if ( !friendIconComp )
    sub_21FFECC(this, *(_QWORD *)&classPos);
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

  if ( (byte_593C292 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3634/*"CLOSE"*/);
    byte_593C292 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_21FFECC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3634/*"CLOSE"*/, 0);
}


void BattleResultFriendComponent__followAssign(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  __int64 v6; // x1
  Il2CppObject *Request_object; // x0
  __int64 v8; // x1

  if ( (byte_593C29A & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleResultFriendComponent_EndRequestFollow__);
    sub_21FFC50(&Method_BattleResultFriendComponent_followAssign__);
    sub_21FFC50(&Method_NetworkManager_getRequest_FollowAssignRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_593C29A = 1;
  }
  v3 = Method_BattleResultFriendComponent_followAssign__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_followAssign__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_BattleResultFriendComponent_followAssign__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_EndRequestFollow__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_FollowAssignRequest___);
  if ( !Request_object )
    sub_21FFECC(0, v8);
  FollowAssignRequest__beginRequest((FollowAssignRequest_o *)Request_object, this->fields.targetId, 0);
}


void BattleResultFriendComponent__friendOffer(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  __int64 v6; // x1
  Il2CppObject *Request_object; // x0
  __int64 v8; // x1

  if ( (byte_593C298 & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleResultFriendComponent_EndRequestFriend__);
    sub_21FFC50(&Method_BattleResultFriendComponent_friendOffer__);
    sub_21FFC50(&Method_NetworkManager_getRequest_FriendOfferRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_593C298 = 1;
  }
  v3 = Method_BattleResultFriendComponent_friendOffer__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_friendOffer__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_BattleResultFriendComponent_friendOffer__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_EndRequestFriend__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_FriendOfferRequest___);
  if ( !Request_object )
    sub_21FFECC(0, v8);
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
  struct System_String_o *userName; // x9
  __int64 v9; // x8
  __int64 v10; // x9
  int32_t *i; // x10
  __int64 v12; // x11

  otherUser = this->fields.otherUser;
  if ( !otherUser )
    goto LABEL_16;
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
LABEL_16:
    sub_21FFECC(otherUser, *(_QWORD *)&firstClassId);
  }
  userName = otherUser->fields.userName;
  if ( (int)userName < 1 )
    return -1;
  v9 = (unsigned int)userName & ~((int)userName >> 31);
  v10 = (unsigned int)otherUser->fields.userName;
  for ( i = &otherUser->fields.userLv; ; i += 2 )
  {
    if ( !v10 )
      sub_21FFED4(otherUser);
    v12 = *(_QWORD *)i;
    if ( *(_QWORD *)i )
    {
      if ( *(_QWORD *)(v12 + 40) )
        break;
    }
    --v9;
    --v10;
    if ( !v9 )
      return -1;
  }
  return *(_DWORD *)(v12 + 32);
}


void BattleResultFriendComponent__onChangeClass(
        BattleResultFriendComponent_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_593C28B & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleResultFriendComponent_onChangeClass__);
    byte_593C28B = 1;
  }
  v5 = Method_BattleResultFriendComponent_onChangeClass__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_onChangeClass__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_21FFC68(Method_BattleResultFriendComponent_onChangeClass__);
  v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  BattleResultFriendComponent__changeClass(this, classPos, v7);
}


void BattleResultFriendComponent__openCore(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  DataManager_o *Instance; // x0
  BattleRootComponent_c *v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  UserGameEntity_o *SelfUserGame; // x22
  Il2CppObject *MasterData_object; // x25
  int32_t FollowSum; // w24
  bool v15; // cc
  bool v16; // zf
  _BOOL4 v17; // w21
  int32_t v18; // w23
  const MethodInfo *v19; // x3
  UILabel_o *countLabel; // x26
  Il2CppObject *v21; // x25
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  UILabel_o *followCountLabel; // x22
  Il2CppObject *v25; // x24
  Il2CppObject *v26; // x0
  UILabel_o *confLabel; // x22
  Il2CppObject *v28; // x0
  struct OtherUserGameEntity_o **p_otherUser; // x23
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  __int64 v36; // x2
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
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  const MethodInfo *v60; // x2
  struct ClassButtonControlComponent_o *v61; // x20
  ClassButtonControlComponent_CallbackFunc_o *v62; // x21
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  BattleResultFriendComponent__ChangeFaceAtlas_d__46_o *v69; // x0
  int32_t v70; // w1
  const MethodInfo *v71; // x2
  int32_t friendKeep; // [xsp+8h] [xbp-78h] BYREF
  int32_t FriendSum; // [xsp+Ch] [xbp-74h] BYREF
  Il2CppObject *v74; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_593C28E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_BattleResultFriendComponent_changeClass__);
    sub_21FFC50(&Method_BattleResultFriendComponent_onChangeClass__);
    sub_21FFC50(&BattleRootComponent_TypeInfo);
    sub_21FFC50(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_BattleResultFriendComponent___c__DisplayClass47_0__openCore_b__0__);
    sub_21FFC50(&BattleResultFriendComponent___c__DisplayClass47_0_TypeInfo);
    sub_21FFC50(&StringLiteral_5645/*"END_PROC"*/);
    sub_21FFC50(&StringLiteral_11585/*"RESULT_FRIEND_CONF"*/);
    sub_21FFC50(&StringLiteral_26497/*"{0}/{1}"*/);
    sub_21FFC50(&StringLiteral_6743/*"FOLLOW_NUM"*/);
    byte_593C28E = 1;
  }
  v74 = 0;
  entity = 0;
  v3 = sub_21FFEBC(BattleResultFriendComponent___c__DisplayClass47_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_75;
  *(_QWORD *)(v3 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  if ( !Instance )
    goto LABEL_75;
  FollowSum = UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0);
  Instance = (DataManager_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6743/*"FOLLOW_NUM"*/, 0);
  v15 = this->fields.followerType == 2 && FollowSum < (int)Instance;
  v16 = !v15 || !this->fields.enableFollowQuest;
  v17 = !v16;
  if ( !MasterData_object )
    goto LABEL_75;
  v18 = (int)Instance;
  Instance = (DataManager_o *)TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0);
  if ( !SelfUserGame )
    goto LABEL_75;
  BattleResultFriendComponent__Layout(this, v17, (int)Instance < SelfUserGame->fields.friendKeep, v19);
  countLabel = this->fields.countLabel;
  FriendSum = TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0);
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &FriendSum);
  friendKeep = SelfUserGame->fields.friendKeep;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &friendKeep);
  Instance = (DataManager_o *)System_String__Format_75484576((System_String_o *)StringLiteral_26497/*"{0}/{1}"*/, v21, v22, 0);
  if ( !countLabel )
    goto LABEL_75;
  UILabel__set_text(countLabel, (System_String_o *)Instance, 0);
  if ( v17 )
  {
    followCountLabel = this->fields.followCountLabel;
    FriendSum = FollowSum;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &FriendSum);
    friendKeep = v18;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &friendKeep);
    Instance = (DataManager_o *)System_String__Format_75484576((System_String_o *)StringLiteral_26497/*"{0}/{1}"*/, v25, v26, 0);
    if ( !followCountLabel )
      goto LABEL_75;
    UILabel__set_text(followCountLabel, (System_String_o *)Instance, 0);
  }
  confLabel = this->fields.confLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11585/*"RESULT_FRIEND_CONF"*/, 0);
  if ( !confLabel )
    goto LABEL_75;
  UILabel__set_text(confLabel, (System_String_o *)Instance, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  if ( !Instance )
    goto LABEL_75;
  v28 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          this->fields.targetId,
          (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
  this->fields.otherUser = (struct OtherUserGameEntity_o *)v28;
  p_otherUser = &this->fields.otherUser;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.otherUser, (int32_t)v28, v30, v31, v32, v33, v34, v35);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  v37 = *(_QWORD **)&Instance->fields._DispLog;
  if ( !v37 )
    goto LABEL_75;
  v5 = BattleRootComponent_TypeInfo;
  naturalAligment = BattleRootComponent_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*v37 + 304LL) >= (unsigned int)naturalAligment
    && *(BattleRootComponent_c **)(*(_QWORD *)(*v37 + 200LL) + 8 * naturalAligment - 8) == BattleRootComponent_TypeInfo )
  {
    v39 = v37[8];
    if ( !v39 )
      goto LABEL_75;
    Instance = *(DataManager_o **)(v39 + 96);
    if ( !Instance )
      goto LABEL_75;
    this->fields.isUseGrandBoard = QuestPhaseEntity__IsUseGrandBoard((QuestPhaseEntity_o *)Instance, 0);
    Instance = (DataManager_o *)v37[8];
    if ( !Instance )
      goto LABEL_75;
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
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
      v47 = *p_otherUser;
      if ( !*p_otherUser )
        goto LABEL_75;
      v48 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      Instance = (DataManager_o *)OtherUserGameEntity__getSvtId(
                                    v47,
                                    this->fields.followerClassId,
                                    this->fields.displayServantType,
                                    this->fields.followerDeckId,
                                    this->fields.followerGrandGraphId,
                                    0);
      if ( !v48 )
        goto LABEL_75;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             v48,
             &entity,
             (int32_t)Instance,
             (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantClassMaster___);
        if ( !entity || !Instance )
          goto LABEL_75;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      &v74,
                                      (int32_t)entity[5].klass,
                                      (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v74 )
            goto LABEL_75;
          followerClassId = (int32_t)v74[4].klass;
          this->fields.followerClassId = followerClassId;
        }
      }
    }
    if ( followerClassId != this->fields.followerClassId )
    {
      classButtonControl = (UnityEngine_Object_o *)this->fields.classButtonControl;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
      if ( UnityEngine_Object__op_Inequality(classButtonControl, 0, 0) )
      {
        Instance = (DataManager_o *)this->fields.classButtonControl;
        if ( !Instance )
          goto LABEL_75;
        ClassButtonControlComponent__setCursor(
          (ClassButtonControlComponent_o *)Instance,
          this->fields.followerClassId,
          0);
      }
    }
    this->fields.dispClassId = this->fields.followerClassId;
    if ( v17 )
    {
      *(_BYTE *)(v3 + 24) = EventTutorialMaster__IsTutorialAvailable(-1, 49, 0, 0, 0, 0, 0);
      v50 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
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
          v53 = (ClassButtonControlComponent_CallbackFunc_o *)sub_21FFEBC(ClassButtonControlComponent_CallbackFunc_TypeInfo);
          ClassButtonControlComponent_CallbackFunc___ctor(
            v53,
            (Il2CppObject *)this,
            Method_BattleResultFriendComponent_changeClass__,
            0);
          if ( !v52 )
            goto LABEL_75;
          v52->fields.callbackFunc = v53;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v52->fields.callbackFunc,
            (int32_t)v53,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59);
          Instance = (DataManager_o *)this->fields.classButtonControl;
          if ( !Instance )
            goto LABEL_75;
          if ( !ClassButtonControlComponent__setCursor(
                  (ClassButtonControlComponent_o *)Instance,
                  this->fields.followerClassId,
                  0) )
            BattleResultFriendComponent__changeClass(this, this->fields.followerClassId, v60);
          v61 = this->fields.classButtonControl;
          v62 = (ClassButtonControlComponent_CallbackFunc_o *)sub_21FFEBC(ClassButtonControlComponent_CallbackFunc_TypeInfo);
          ClassButtonControlComponent_CallbackFunc___ctor(
            v62,
            (Il2CppObject *)this,
            (intptr_t)Method_BattleResultFriendComponent_onChangeClass__,
            0);
          if ( !v61 )
            goto LABEL_75;
          v61->fields.callbackFunc = v62;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v61->fields.callbackFunc,
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
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5645/*"END_PROC"*/, 0);
          return;
        }
      }
    }
LABEL_75:
    sub_21FFECC(Instance, v5);
  }
  sub_220024C(*(_QWORD *)&Instance->fields._DispLog, BattleRootComponent_TypeInfo, v36);
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
  bool v16; // w26
  __int64 v17; // x1
  UnityEngine_Object_c *v18; // x0
  UnityEngine_Object_o *classButtonControl; // x21
  int v20; // w8
  ClassButtonControlComponent_o *v21; // x21
  ClassButtonControlComponent_CallbackFunc_o *v22; // x22
  ClassButtonControlComponent_o *v23; // x0
  __int64 v24; // x1
  struct ClassButtonControlComponent_o *v25; // x20
  ClassButtonControlComponent_CallbackFunc_o *v26; // x21
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  v16 = enableFollow;
  if ( (byte_593C28A & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleResultFriendComponent_changeClass__);
    sub_21FFC50(&Method_BattleResultFriendComponent_onChangeClass__);
    sub_21FFC50(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C28A = 1;
  }
  this->fields.followerType = Follower__getType(infollowerType, 0);
  this->fields.followerStatus = infollowerStatus;
  v18 = UnityEngine_Object_TypeInfo;
  this->fields.followerDeckId = followerDeckId;
  classButtonControl = (UnityEngine_Object_o *)this->fields.classButtonControl;
  v20 = *(&v18->_2.cctor_finished + 1);
  this->fields.targetId = followerId;
  this->fields.followerClassId = infollowerClassId;
  this->fields.followerGrandGraphId = inFollowerGrandGraphId;
  this->fields.enableFollowQuest = v16;
  if ( !v20 )
    j_il2cpp_runtime_class_init_0(v18, v17);
  if ( UnityEngine_Object__op_Inequality(classButtonControl, 0, 0) )
  {
    v21 = this->fields.classButtonControl;
    v22 = (ClassButtonControlComponent_CallbackFunc_o *)sub_21FFEBC(ClassButtonControlComponent_CallbackFunc_TypeInfo);
    ClassButtonControlComponent_CallbackFunc___ctor(
      v22,
      (Il2CppObject *)this,
      Method_BattleResultFriendComponent_changeClass__,
      0);
    if ( !v21
      || (ClassButtonControlComponent__init(v21, v22, 0, 0, 0, 0, 0), (v23 = this->fields.classButtonControl) == 0)
      || (ClassButtonControlComponent__setCursor(v23, infollowerClassId, 0),
          v25 = this->fields.classButtonControl,
          v26 = (ClassButtonControlComponent_CallbackFunc_o *)sub_21FFEBC(ClassButtonControlComponent_CallbackFunc_TypeInfo),
          ClassButtonControlComponent_CallbackFunc___ctor(
            v26,
            (Il2CppObject *)this,
            (intptr_t)Method_BattleResultFriendComponent_onChangeClass__,
            0),
          !v25) )
    {
      sub_21FFECC(v23, v24);
    }
    v25->fields.callbackFunc = v26;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v25->fields.callbackFunc,
      (int32_t)v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
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
  MethodInfo *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  struct BattleResultFriendComponent_o *_4__this; // x20
  Il2CppObject *Instance; // x0
  Il2CppObject *v12; // x0
  Il2CppObject **p__2__current; // x19
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int v20; // w8
  Il2CppObject *v21; // x21
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  struct System_Action_o *releasePerformanceObject; // x8
  UnityEngine_WaitForEndOfFrame_o *v30; // x20
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  Il2CppObject *v37; // x1
  Il2CppObject **v38; // x19
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  struct BattleResultFriendComponent___c__DisplayClass46_0_o *_8__1; // x20
  System_Action_o *v46; // x21
  __int64 v47; // x1
  Il2CppObject *v48; // x1
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  struct BattleResultFriendComponent___c__DisplayClass46_0_o *v55; // x8
  Il2CppObject *waitForEndOfFrame_5__2; // x1
  Il2CppObject *v57; // x1
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7

  if ( (byte_593C2A5 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&System_GC_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_21FFC50(&Method_BattleResultFriendComponent___c__DisplayClass46_0__ChangeFaceAtlas_b__0__);
    sub_21FFC50(&BattleResultFriendComponent___c__DisplayClass46_0_TypeInfo);
    sub_21FFC50(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_593C2A5 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  Instance = 0;
  if ( _1__state > 2 )
  {
    if ( _1__state == 3 )
    {
      _8__1 = this->fields.__8__1;
      this->fields.__1__state = -1;
      if ( !_8__1 )
        goto LABEL_37;
      _8__1->fields.isWait = 1;
      v46 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        v46,
        (Il2CppObject *)_8__1,
        Method_BattleResultFriendComponent___c__DisplayClass46_0__ChangeFaceAtlas_b__0__,
        0);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v47);
      AtlasManager__LoadFaceAtlas(v46, 1, 0);
    }
    else
    {
      if ( _1__state != 4 )
      {
        if ( _1__state == 5 )
        {
          this->fields.__1__state = -1;
          if ( !_4__this )
            goto LABEL_37;
          BattleResultFriendComponent__changeClass(_4__this, _4__this->fields.dispClassId, v2);
          LOBYTE(Instance) = 0;
        }
        return (char)Instance;
      }
      this->fields.__1__state = -1;
    }
    v55 = this->fields.__8__1;
    if ( v55 )
    {
      if ( v55->fields.isWait )
      {
        waitForEndOfFrame_5__2 = (Il2CppObject *)this->fields._waitForEndOfFrame_5__2;
        this->fields.__2__current = waitForEndOfFrame_5__2;
        p__2__current = &this->fields.__2__current;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)p__2__current,
          (int32_t)waitForEndOfFrame_5__2,
          (System_String_o *)v2,
          v3,
          v4,
          v5,
          v6,
          v7);
        v20 = 4;
      }
      else
      {
        if ( !*(&System_GC_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, method);
        System_GC__Collect(0);
        v57 = (Il2CppObject *)this->fields._waitForEndOfFrame_5__2;
        this->fields.__2__current = v57;
        p__2__current = &this->fields.__2__current;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v57, v58, v59, v60, v61, v62, v63);
        v20 = 5;
      }
      goto LABEL_35;
    }
    goto LABEL_37;
  }
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      this->fields.__1__state = -1;
      if ( !*(&System_GC_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, method);
      System_GC__Collect(0);
      v48 = (Il2CppObject *)this->fields._waitForEndOfFrame_5__2;
      this->fields.__2__current = v48;
      p__2__current = &this->fields.__2__current;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v48, v49, v50, v51, v52, v53, v54);
      v20 = 2;
      goto LABEL_35;
    }
    if ( _1__state == 2 )
    {
      this->fields.__1__state = -1;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( Instance )
      {
        AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)Instance, 0, 0);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
        if ( Instance )
        {
          v12 = (Il2CppObject *)AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)Instance, 0);
          this->fields.__2__current = v12;
          p__2__current = &this->fields.__2__current;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v12, v14, v15, v16, v17, v18, v19);
          v20 = 3;
LABEL_35:
          *((_DWORD *)p__2__current - 2) = v20;
          LOBYTE(Instance) = 1;
          return (char)Instance;
        }
      }
LABEL_37:
      sub_21FFECC(Instance, method);
    }
  }
  else
  {
    this->fields.__1__state = -1;
    v21 = (Il2CppObject *)sub_21FFEBC(BattleResultFriendComponent___c__DisplayClass46_0_TypeInfo);
    System_Object___ctor(v21, 0);
    this->fields.__8__1 = (struct BattleResultFriendComponent___c__DisplayClass46_0_o *)v21;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__8__1, (int32_t)v21, v22, v23, v24, v25, v26, v27);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v28);
    AtlasManager__ReleaseFaceBattleAtlas(0);
    if ( !_4__this )
      goto LABEL_37;
    releasePerformanceObject = _4__this->fields.releasePerformanceObject;
    if ( releasePerformanceObject )
      ((void (__fastcall *)(intptr_t, intptr_t))releasePerformanceObject->fields.invoke_impl)(
        releasePerformanceObject->fields.method_code,
        releasePerformanceObject->fields.method);
    BattleResultFriendComponent__openCore(_4__this, method);
    v30 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v30, 0);
    this->fields._waitForEndOfFrame_5__2 = v30;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields._waitForEndOfFrame_5__2,
      (int32_t)v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    v37 = (Il2CppObject *)this->fields._waitForEndOfFrame_5__2;
    this->fields.__2__current = v37;
    v38 = &this->fields.__2__current;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v38, (int32_t)v37, v39, v40, v41, v42, v43, v44);
    LOBYTE(Instance) = 1;
    *((_DWORD *)v38 - 2) = 1;
  }
  return (char)Instance;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_BattleResultFriendComponent__ChangeFaceAtlas_d__46_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
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
  if ( (byte_593C2A4 & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_10264/*"OnClickTutorialFollow"*/);
    sub_21FFC50(&StringLiteral_14119/*"TUTORIAL_MESSAGE_FOLLOW_OFFER"*/);
    this = (BattleResultFriendComponent___c__DisplayClass47_0_o *)sub_21FFC50(&StringLiteral_11582/*"RESULT_FOLLOW_REQUEST_YES"*/);
    byte_593C2A4 = 1;
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
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    this = (BattleResultFriendComponent___c__DisplayClass47_0_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_11582/*"RESULT_FOLLOW_REQUEST_YES"*/,
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
    v9 = (EventDelegate_o *)sub_21FFEBC(EventDelegate_TypeInfo);
    EventDelegate___ctor_56133096(v9, v6, (System_String_o *)StringLiteral_10264/*"OnClickTutorialFollow"*/, 0);
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
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v19 = &items->obj.klass + size;
      monitor->fields._size = size + 1;
      v19[4] = (Il2CppClass *)v9;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v9, v10, v11, v12, v13, v14, v15);
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
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          this = (BattleResultFriendComponent___c__DisplayClass47_0_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_14119/*"TUTORIAL_MESSAGE_FOLLOW_OFFER"*/,
                                                                          0),
          !Instance) )
    {
LABEL_29:
      sub_21FFECC(this, method);
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