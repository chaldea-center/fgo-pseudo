void BattleResultFriendComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C46850 & 1) == 0 )
  {
    sub_1C37058(&BattleResultFriendComponent_TypeInfo);
    byte_4C46850 = 1;
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
  const MethodInfo *v5; // x3

  if ( (byte_4C46839 & 1) == 0 )
  {
    sub_1C37058(&BattleResultFriendComponent__ChangeFaceAtlas_d__46_TypeInfo);
    byte_4C46839 = 1;
  }
  v3 = sub_1C372A4(BattleResultFriendComponent__ChangeFaceAtlas_d__46_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void BattleResultFriendComponent__ChangeSupportScene(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  OtherUserGameEntity_o *Instance; // x0
  __int64 v4; // x21
  __int64 naturalAligment; // x9
  BattleRootComponent_callBackBeginResume_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  OtherUserGameEntity_o *otherUser; // x22
  SupportInfoJump_o *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x8
  int32_t v15; // w22
  QuestRestrictionInfo_o *v16; // x21
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  int32_t v18; // w19
  BattleResultFriendComponent_o *v19; // x0
  const MethodInfo *v20; // x1

  if ( (byte_4C4684B & 1) == 0 )
  {
    sub_1C37058(&Method_BattleResultFriendComponent_ChangeSupportScene__);
    sub_1C37058(&Method_BattleResultFriendComponent_callBackBeginResume__);
    sub_1C37058(&BattleRootComponent_TypeInfo);
    sub_1C37058(&QuestRestrictionInfo_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&SupportInfoJump_TypeInfo);
    sub_1C37058(&BattleRootComponent_callBackBeginResume_TypeInfo);
    byte_4C4684B = 1;
  }
  Instance = (OtherUserGameEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 10, 0) )
  {
    Instance = (OtherUserGameEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    v4 = *(_QWORD *)&Instance->fields.userLv;
    if ( !v4
      || (naturalAligment = BattleRootComponent_TypeInfo->_2.naturalAligment,
          *(unsigned __int8 *)(*(_QWORD *)v4 + 304LL) >= (unsigned int)naturalAligment)
      && *(BattleRootComponent_c **)(*(_QWORD *)(*(_QWORD *)v4 + 200LL) + 8 * naturalAligment - 8) == BattleRootComponent_TypeInfo )
    {
      v6 = (BattleRootComponent_callBackBeginResume_o *)sub_1C372A4(BattleRootComponent_callBackBeginResume_TypeInfo);
      BattleRootComponent_callBackBeginResume___ctor(
        v6,
        (Il2CppObject *)this,
        Method_BattleResultFriendComponent_callBackBeginResume__,
        0);
      if ( v4 )
      {
        *(_QWORD *)(v4 + 120) = v6;
        sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 120), (int32_t)v6, v7, v8);
        v9 = Method_BattleResultFriendComponent_ChangeSupportScene__;
        if ( (*((_BYTE *)Method_BattleResultFriendComponent_ChangeSupportScene__ + 83) & 2) != 0 )
          v9 = (_QWORD *)sub_1C37070(Method_BattleResultFriendComponent_ChangeSupportScene__);
        v10 = (System_Reflection_MethodBase_o *)sub_1C3703C(v9, v9[4]);
        OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
        otherUser = this->fields.otherUser;
        v12 = (SupportInfoJump_o *)sub_1C372A4(SupportInfoJump_TypeInfo);
        SupportInfoJump___ctor(v12, otherUser, 0, 0, 0);
        v13 = *(_QWORD *)(v4 + 64);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 88);
          if ( v14 )
          {
            v15 = *(_DWORD *)(v14 + 16);
            v16 = (QuestRestrictionInfo_o *)sub_1C372A4(QuestRestrictionInfo_TypeInfo);
            QuestRestrictionInfo___ctor(v16, v15, 0);
            if ( v12 )
            {
              SupportInfoJump__SetSetupInfo(v12, 0, v16, 0);
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
                v18 = 60;
                if ( ServantLeaderInfo )
                {
                  if ( ServantLeaderInfo__get_IsGrandSvt(ServantLeaderInfo, 0) )
                    v18 = 43;
                  else
                    v18 = 60;
                }
                Instance = (OtherUserGameEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( Instance )
                {
                  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, v18, 1, (Il2CppObject *)v12, 0);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_23:
      sub_1C372B4(Instance);
    }
    sub_1C37574(*(_QWORD *)&Instance->fields.userLv);
    BattleResultFriendComponent__callBackBeginResume(v19, v20);
  }
}


void BattleResultFriendComponent__EndRequestFollow(
        BattleResultFriendComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *myFsm; // x0
  System_Collections_Generic_Dictionary_object__object__o *v6; // x21
  System_String_o *v7; // x20
  __int64 *v8; // x8
  Il2CppObject *Instance; // x21
  NotificationDialog_ClickDelegate_o *v10; // x22

  if ( (byte_4C46848 & 1) == 0 )
  {
    sub_1C37058(&Method_BattleResultFriendComponent_OnEndRequestDialog__);
    sub_1C37058(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_11084/*"REQUEST_OK"*/);
    sub_1C37058(&StringLiteral_11082/*"REQUEST_NG"*/);
    sub_1C37058(&StringLiteral_22215/*"ng"*/);
    sub_1C37058(&StringLiteral_21539/*"message"*/);
    sub_1C37058(&StringLiteral_1122/*"0"*/);
    sub_1C37058(&StringLiteral_23685/*"status"*/);
    byte_4C46848 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22215/*"ng"*/, 0) )
  {
    myFsm = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v8 = &StringLiteral_11082/*"REQUEST_NG"*/;
      goto LABEL_17;
    }
LABEL_20:
    sub_1C372B4(myFsm);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0);
  if ( !myFsm )
    goto LABEL_20;
  v6 = myFsm;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFsm,
          (Il2CppObject *)StringLiteral_21539/*"message"*/,
          (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_13;
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v6,
                                                                       (Il2CppObject *)StringLiteral_21539/*"message"*/,
                                                                       (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_20;
  v7 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))myFsm->klass->vtable._3_ToString.methodPtr)(
                            myFsm,
                            myFsm->klass->vtable._3_ToString.method);
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v6,
                                                                       (Il2CppObject *)StringLiteral_23685/*"status"*/,
                                                                       (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_20;
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))myFsm->klass->vtable._3_ToString.methodPtr)(
                                                                       myFsm,
                                                                       myFsm->klass->vtable._3_ToString.method);
  if ( !myFsm )
    goto LABEL_20;
  if ( System_String__Equals_63596960((System_String_o *)myFsm, (System_String_o *)StringLiteral_1122/*"0"*/, 0)
    || System_String__IsNullOrEmpty(v7, 0) )
  {
LABEL_13:
    myFsm = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v8 = &StringLiteral_11084/*"REQUEST_OK"*/;
LABEL_17:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFsm, (System_String_o *)*v8, 0);
      return;
    }
    goto LABEL_20;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (NotificationDialog_ClickDelegate_o *)sub_1C372A4(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_OnEndRequestDialog__,
    0);
  if ( !Instance )
    goto LABEL_20;
  CommonUI__OpenNotificationDialog_31210584(
    (CommonUI_o *)Instance,
    0,
    v7,
    v10,
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
  System_Collections_Generic_Dictionary_object__object__o *myFsm; // x0
  System_Collections_Generic_Dictionary_object__object__o *v6; // x21
  System_String_o *v7; // x20
  __int64 *v8; // x8
  Il2CppObject *Instance; // x21
  NotificationDialog_ClickDelegate_o *v10; // x22

  if ( (byte_4C46846 & 1) == 0 )
  {
    sub_1C37058(&Method_BattleResultFriendComponent_OnEndRequestDialog__);
    sub_1C37058(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_11084/*"REQUEST_OK"*/);
    sub_1C37058(&StringLiteral_11082/*"REQUEST_NG"*/);
    sub_1C37058(&StringLiteral_22215/*"ng"*/);
    sub_1C37058(&StringLiteral_21539/*"message"*/);
    sub_1C37058(&StringLiteral_1122/*"0"*/);
    sub_1C37058(&StringLiteral_23685/*"status"*/);
    byte_4C46846 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22215/*"ng"*/, 0) )
  {
    myFsm = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v8 = &StringLiteral_11082/*"REQUEST_NG"*/;
      goto LABEL_17;
    }
LABEL_20:
    sub_1C372B4(myFsm);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0);
  if ( !myFsm )
    goto LABEL_20;
  v6 = myFsm;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFsm,
          (Il2CppObject *)StringLiteral_21539/*"message"*/,
          (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_13;
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v6,
                                                                       (Il2CppObject *)StringLiteral_21539/*"message"*/,
                                                                       (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_20;
  v7 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))myFsm->klass->vtable._3_ToString.methodPtr)(
                            myFsm,
                            myFsm->klass->vtable._3_ToString.method);
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v6,
                                                                       (Il2CppObject *)StringLiteral_23685/*"status"*/,
                                                                       (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_20;
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))myFsm->klass->vtable._3_ToString.methodPtr)(
                                                                       myFsm,
                                                                       myFsm->klass->vtable._3_ToString.method);
  if ( !myFsm )
    goto LABEL_20;
  if ( System_String__Equals_63596960((System_String_o *)myFsm, (System_String_o *)StringLiteral_1122/*"0"*/, 0)
    || System_String__IsNullOrEmpty(v7, 0) )
  {
LABEL_13:
    myFsm = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v8 = &StringLiteral_11084/*"REQUEST_OK"*/;
LABEL_17:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFsm, (System_String_o *)*v8, 0);
      return;
    }
    goto LABEL_20;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (NotificationDialog_ClickDelegate_o *)sub_1C372A4(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_OnEndRequestDialog__,
    0);
  if ( !Instance )
    goto LABEL_20;
  CommonUI__OpenNotificationDialog_31210584(
    (CommonUI_o *)Instance,
    0,
    v7,
    v10,
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

  if ( (byte_4C4683E & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_BattleResultFriendComponent_endCloseSHowServant__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C4683E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleResultFriendComponent_endCloseSHowServant__, 0);
  if ( !Instance )
    sub_1C372B4(v6);
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
  const MethodInfo *v8; // x3
  System_Object_array *ComponentsInChildren_object; // x0
  il2cpp_array_size_t max_length; // x8
  System_Object_array *v11; // x21
  unsigned __int64 v12; // x24
  Il2CppObject **m_Items; // x25
  UnityEngine_Object_o *v14; // x22

  if ( (byte_4C46835 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel____78176552);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46835 = 1;
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
    sub_1C372B4(root);
  ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                  root,
                                  1,
                                  (const MethodInfo_313FE78 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel____78176552);
  if ( ComponentsInChildren_object )
  {
    max_length = ComponentsInChildren_object->max_length;
    v11 = ComponentsInChildren_object;
    if ( (int)max_length >= 1 )
    {
      v12 = 0;
      m_Items = ComponentsInChildren_object->m_Items;
      do
      {
        if ( v12 >= (unsigned int)max_length )
LABEL_21:
          sub_1C372BC(ComponentsInChildren_object);
        v14 = (UnityEngine_Object_o *)m_Items[v12];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        ComponentsInChildren_object = (System_Object_array *)UnityEngine_Object__op_Inequality(v14, 0, 0);
        if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
        {
          if ( v12 >= LODWORD(v11->max_length) )
            goto LABEL_21;
          root = (UnityEngine_GameObject_o *)m_Items[v12];
          if ( !root )
            goto LABEL_22;
          UILabel__SetDefaultFont((UILabel_o *)root, 0);
        }
        LODWORD(max_length) = v11->max_length;
        ++v12;
      }
      while ( (__int64)v12 < (int)max_length );
    }
  }
LABEL_20:
  this->fields.releasePerformanceObject = releasePerformanceObject;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.releasePerformanceObject,
    (int32_t)releasePerformanceObject,
    v7,
    v8);
}


// local variable allocation has failed, the output may be wrong!
void BattleResultFriendComponent__Layout(
        BattleResultFriendComponent_o *this,
        bool isActiveFollow,
        bool isActiveFriend,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _BOOL4 v8; // w20
  _BOOL4 v9; // w21
  __int64 v11; // x26
  Il2CppObject *v12; // x0
  System_String_o *v13; // x22
  System_String_o *errLabel; // x0
  __int64 v15; // x23
  char v16; // w24
  System_String_o *v17; // x1
  System_String_o **v18; // x8
  _BOOL4 v19; // w21
  System_String_o **v20; // x24
  const MethodInfo *v21; // x3
  System_String_o *v22; // x23
  UILabel_o *titleLabel; // x21
  UILabel_o *friendWarningLabel; // x20
  int32_t followerStatus; // [xsp+Ch] [xbp-54h] BYREF

  v8 = isActiveFriend;
  v9 = isActiveFollow;
  if ( (byte_4C4684D & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_11122/*"RESULT_FRIENDANDFOLLOW_TITLE"*/);
    sub_1C37058(&StringLiteral_11124/*"RESULT_FRIEND_ERR_{0}"*/);
    sub_1C37058(&StringLiteral_11130/*"RESULT_MAXFRIEND_WARNING"*/);
    sub_1C37058(&StringLiteral_11127/*"RESULT_FRIEND_TITLE"*/);
    sub_1C37058(&StringLiteral_11121/*"RESULT_FOLLOW_TITLE"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C4684D = 1;
  }
  v11 = StringLiteral_11130/*"RESULT_MAXFRIEND_WARNING"*/;
  followerStatus = this->fields.followerStatus;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &followerStatus, isActiveFriend, method, v4, v5, v6, v7);
  v13 = System_String__Format((System_String_o *)StringLiteral_11124/*"RESULT_FRIEND_ERR_{0}"*/, v12, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  errLabel = LocalizationManager__Get(v13, 0);
  if ( !v13 )
    goto LABEL_33;
  v15 = (__int64)errLabel;
  errLabel = (System_String_o *)System_String__Equals_63596960(v13, errLabel, 0);
  if ( !this->fields.errLabel )
    goto LABEL_33;
  v16 = (char)errLabel;
  v17 = (System_String_o *)(((unsigned __int8)errLabel & 1) != 0 ? StringLiteral_1/*""*/ : v15);
  UILabel__set_text(this->fields.errLabel, v17, 0);
  if ( v16 & 1 | (!v9 || !v8) )
  {
    v13 = (System_String_o *)v11;
  }
  else
  {
    errLabel = (System_String_o *)this->fields.errLabel;
    if ( !errLabel )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)errLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    LOBYTE(v8) = 0;
  }
  errLabel = (System_String_o *)this->fields.followCountRoot;
  if ( !errLabel )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)errLabel, v9, 0);
  errLabel = (System_String_o *)this->fields.friendWarningLabel;
  if ( !errLabel )
    goto LABEL_33;
  errLabel = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)errLabel, 0);
  if ( !errLabel )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)errLabel, !v8, 0);
  errLabel = (System_String_o *)this->fields.countRoot;
  if ( !errLabel )
    goto LABEL_33;
  v18 = (System_String_o **)&StringLiteral_11122/*"RESULT_FRIENDANDFOLLOW_TITLE"*/;
  v19 = v9;
  if ( !v19 )
    v18 = (System_String_o **)&StringLiteral_11127/*"RESULT_FRIEND_TITLE"*/;
  if ( v8 )
    v20 = v18;
  else
    v20 = (System_String_o **)&StringLiteral_11121/*"RESULT_FOLLOW_TITLE"*/;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)errLabel, v8, 0);
  BattleResultFriendComponent__SetupButtons(this, v19, v8, v21);
  v22 = *v20;
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  errLabel = LocalizationManager__Get(v22, 0);
  if ( !titleLabel )
    goto LABEL_33;
  UILabel__set_text(titleLabel, errLabel, 0);
  if ( v8 )
    goto LABEL_31;
  friendWarningLabel = this->fields.friendWarningLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  errLabel = LocalizationManager__Get(v13, 0);
  if ( !friendWarningLabel )
LABEL_33:
    sub_1C372B4(errLabel);
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

  if ( (byte_4C46843 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_6466/*"FOLLOW_CONNECT"*/);
    byte_4C46843 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_6466/*"FOLLOW_CONNECT"*/, 0);
}


void BattleResultFriendComponent__OnClickFriend(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C46840 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3782/*"CONNECT"*/);
    byte_4C46840 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3782/*"CONNECT"*/, 0);
}


void BattleResultFriendComponent__OnClickHelp(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4C4684F & 1) == 0 )
  {
    sub_1C37058(&Method_BattleResultFriendComponent_OnClickHelp__);
    byte_4C4684F = 1;
  }
  v2 = Method_BattleResultFriendComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C37070(Method_BattleResultFriendComponent_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C3703C(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 49, 0, 0, 0);
}


void BattleResultFriendComponent__OnClickNo(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C46842 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_9264/*"NEXT"*/);
    byte_4C46842 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9264/*"NEXT"*/, 0);
}


void BattleResultFriendComponent__OnClickNoActionFriend(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4C46841 & 1) == 0 )
  {
    sub_1C37058(&Method_BattleResultFriendComponent_OnClickNoActionFriend__);
    byte_4C46841 = 1;
  }
  v2 = Method_BattleResultFriendComponent_OnClickNoActionFriend__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_OnClickNoActionFriend__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C37070(Method_BattleResultFriendComponent_OnClickNoActionFriend__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C3703C(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 2, 0, 0);
}


void BattleResultFriendComponent__OnClickSupportInfo(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C4684A & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3329/*"CHANGE_SUPPORT"*/);
    byte_4C4684A = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3329/*"CHANGE_SUPPORT"*/, 0);
}


void BattleResultFriendComponent__OnClickTutorialFollow(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CGThumbnailListItem_o *v7; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C46844 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C46844 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseTutorialNotificationDialogArrow((CommonUI_o *)Instance, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
  if ( !Instance )
    goto LABEL_12;
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          (const MethodInfo_33A3728 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__) )
    goto LABEL_11;
  Instance = entity;
  if ( !entity )
LABEL_12:
    sub_1C372B4(Instance);
  v7 = (CGThumbnailListItem_o *)&entity[1];
  if ( entity[1].klass )
  {
    v7->klass = 0;
    sub_1C36FFC(v7, 0, v5, v6);
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

  if ( (byte_4C46849 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_11084/*"REQUEST_OK"*/);
    byte_4C46849 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog(Instance, 0), (Instance = (CommonUI_o *)this->fields.myFsm) == 0) )
    sub_1C372B4(Instance);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_11084/*"REQUEST_OK"*/, 0);
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

  if ( (byte_4C46838 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1C37058(&OptionManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_9264/*"NEXT"*/);
    sub_1C37058(&StringLiteral_6470/*"FOLLOW_NUM"*/);
    byte_4C46838 = 1;
  }
  if ( this->fields.followerType != 2 )
    goto LABEL_11;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  if ( !Instance )
    goto LABEL_21;
  FollowSum = UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0);
  Instance = (DataManager_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6470/*"FOLLOW_NUM"*/, 0);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9264/*"NEXT"*/, 0);
      return;
    }
LABEL_21:
    sub_1C372B4(Instance);
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
    UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v11, 0);
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
  struct OtherUserGameEntity_o *otherUser; // x8
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x20
  int max_length; // w8
  unsigned int v7; // w21
  struct OtherUserGameEntity_o *v8; // x8
  struct ServantLeaderInfo_array *eventUserSvtLeaderHash; // x20
  int v10; // w8
  unsigned int v11; // w21
  struct OtherUserGameEntity_o *v12; // x8
  struct ServantLeaderInfo_array *userSvtGrandHash; // x19
  int v14; // w8
  unsigned int v15; // w20

  if ( (byte_4C4683B & 1) == 0 )
  {
    sub_1C37058(&OptionManager_TypeInfo);
    byte_4C4683B = 1;
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
        v7 = 0;
        while ( v7 < max_length )
        {
          SpoilerSetting = userSvtLeaderHash->m_Items[v7];
          if ( !SpoilerSetting )
            goto LABEL_30;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0);
          max_length = userSvtLeaderHash->max_length;
          if ( (int)++v7 >= max_length )
            goto LABEL_14;
        }
LABEL_29:
        sub_1C372BC(SpoilerSetting);
      }
LABEL_14:
      v8 = this->fields.otherUser;
      if ( !v8 )
        goto LABEL_30;
      eventUserSvtLeaderHash = v8->fields.eventUserSvtLeaderHash;
      if ( !eventUserSvtLeaderHash )
        goto LABEL_30;
      v10 = eventUserSvtLeaderHash->max_length;
      if ( v10 >= 1 )
      {
        v11 = 0;
        while ( v11 < v10 )
        {
          SpoilerSetting = eventUserSvtLeaderHash->m_Items[v11];
          if ( !SpoilerSetting )
            goto LABEL_30;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0);
          v10 = eventUserSvtLeaderHash->max_length;
          if ( (int)++v11 >= v10 )
            goto LABEL_21;
        }
        goto LABEL_29;
      }
LABEL_21:
      v12 = this->fields.otherUser;
      if ( !v12 || (userSvtGrandHash = v12->fields.userSvtGrandHash) == 0 )
LABEL_30:
        sub_1C372B4(SpoilerSetting);
      v14 = userSvtGrandHash->max_length;
      if ( v14 >= 1 )
      {
        v15 = 0;
        while ( v15 < v14 )
        {
          SpoilerSetting = userSvtGrandHash->m_Items[v15];
          if ( !SpoilerSetting )
            goto LABEL_30;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0);
          v14 = userSvtGrandHash->max_length;
          if ( (int)++v15 >= v14 )
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

  if ( (byte_4C4683C & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_9652/*"OPEN_SERVANT"*/);
    byte_4C4683C = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9652/*"OPEN_SERVANT"*/, 0);
}


void BattleResultFriendComponent__SetupButtons(
        BattleResultFriendComponent_o *this,
        bool isActiveFollow,
        bool isActiveFriend,
        const MethodInfo *method)
{
  EventDelegate_o *v7; // x21
  EventDelegate_o *v8; // x23
  UnityEngine_Component_o *helpButton; // x0
  UILabel_o *leftButtonLabel; // x24
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v14; // x9
  __int64 klass_low; // x10
  intptr_t v16; // x8
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct UIButton_o *v21; // x8
  intptr_t v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  intptr_t v25; // x8
  struct UIButton_o *rightButton; // x8
  intptr_t v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  intptr_t v30; // x8
  UILabel_o *centerButtonLabel; // x22
  struct UIButton_o *centerButton; // x23
  UnityEngine_GameObject_o *v33; // x24
  BattleResultFriendComponent_c *v34; // x8
  __int64 *v35; // x8
  UILabel_o *rightButtonLabel; // x24
  UnityEngine_GameObject_o *gameObject; // x24
  BattleResultFriendComponent_c *v38; // x8
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x0
  EventDelegate_o *v43; // x20
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  intptr_t v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  intptr_t v49; // x8
  UIButton_c *klass; // x8
  UnityEngine_Color_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C4684E & 1) == 0 )
  {
    sub_1C37058(&BattleResultFriendComponent_TypeInfo);
    sub_1C37058(&EventDelegate_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDelegate__Remove__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_9842/*"OnClickFriend"*/);
    sub_1C37058(&StringLiteral_9863/*"OnClickNoActionFriend"*/);
    sub_1C37058(&StringLiteral_11126/*"RESULT_FRIEND_REQUEST_YES"*/);
    sub_1C37058(&StringLiteral_11120/*"RESULT_FOLLOW_REQUEST_YES"*/);
    sub_1C37058(&StringLiteral_9841/*"OnClickFollow"*/);
    sub_1C37058(&StringLiteral_20203/*"icon_friend"*/);
    sub_1C37058(&StringLiteral_11125/*"RESULT_FRIEND_REQUEST_NO"*/);
    sub_1C37058(&StringLiteral_20202/*"icon_follow"*/);
    byte_4C4684E = 1;
  }
  v7 = (EventDelegate_o *)sub_1C372A4(EventDelegate_TypeInfo);
  EventDelegate___ctor_49274436(v7, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9842/*"OnClickFriend"*/, 0);
  v8 = (EventDelegate_o *)sub_1C372A4(EventDelegate_TypeInfo);
  EventDelegate___ctor_49274436(v8, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9841/*"OnClickFollow"*/, 0);
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
  helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11125/*"RESULT_FRIEND_REQUEST_NO"*/, 0);
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
    v14 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++HIDWORD(helpButton[1].klass);
    if ( !m_CachedPtr )
      goto LABEL_61;
    klass_low = SLODWORD(helpButton[1].klass);
    if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)helpButton,
        (Il2CppObject *)v7,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v16 = m_CachedPtr + 8 * klass_low;
      LODWORD(helpButton[1].klass) = klass_low + 1;
      *(_QWORD *)(v16 + 32) = v7;
      sub_1C36FFC((CGThumbnailListItem_o *)(v16 + 32), (int32_t)v7, v11, v12);
    }
    rightButton = this->fields.rightButton;
    if ( !rightButton )
      goto LABEL_61;
    helpButton = (UnityEngine_Component_o *)rightButton->fields.onClick;
    if ( !helpButton )
      goto LABEL_61;
    v27 = helpButton->fields.m_CachedPtr;
    v28 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++HIDWORD(helpButton[1].klass);
    if ( !v27 )
      goto LABEL_61;
    v29 = SLODWORD(helpButton[1].klass);
    if ( (unsigned int)v29 >= *(_DWORD *)(v27 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)helpButton,
        (Il2CppObject *)v8,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v30 = v27 + 8 * v29;
      LODWORD(helpButton[1].klass) = v29 + 1;
      *(_QWORD *)(v30 + 32) = v8;
      sub_1C36FFC((CGThumbnailListItem_o *)(v30 + 32), (int32_t)v8, v17, v18);
    }
    centerButton = this->fields.centerButton;
    centerButtonLabel = this->fields.centerButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11126/*"RESULT_FRIEND_REQUEST_YES"*/, 0);
    if ( !centerButtonLabel )
      goto LABEL_61;
    UILabel__set_text(centerButtonLabel, (System_String_o *)helpButton, 0);
    rightButtonLabel = this->fields.rightButtonLabel;
    helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11120/*"RESULT_FOLLOW_REQUEST_YES"*/, 0);
    if ( !rightButtonLabel )
      goto LABEL_61;
    UILabel__set_text(rightButtonLabel, (System_String_o *)helpButton, 0);
    helpButton = (UnityEngine_Component_o *)this->fields.centerButtonLabel;
    if ( !helpButton )
      goto LABEL_61;
    gameObject = UnityEngine_Component__get_gameObject(helpButton, 0);
    v38 = BattleResultFriendComponent_TypeInfo;
    if ( !BattleResultFriendComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultFriendComponent_TypeInfo);
      v38 = BattleResultFriendComponent_TypeInfo;
    }
    GameObjectExtensions__AddLocalPositionX(gameObject, v38->static_fields->offsetOfferLabelPosition, 0);
    helpButton = (UnityEngine_Component_o *)this->fields.rightButtonLabel;
    if ( !helpButton )
      goto LABEL_61;
    v39 = UnityEngine_Component__get_gameObject(helpButton, 0);
    GameObjectExtensions__AddLocalPositionX(
      v39,
      BattleResultFriendComponent_TypeInfo->static_fields->offsetOfferLabelPosition,
      0);
    helpButton = (UnityEngine_Component_o *)this->fields.leftButton;
    if ( !helpButton )
      goto LABEL_61;
    v40 = UnityEngine_Component__get_gameObject(helpButton, 0);
    GameObjectExtensions__AddLocalPositionX(v40, -this->fields.offsetPosition, 0);
    helpButton = (UnityEngine_Component_o *)this->fields.rightButton;
    if ( !helpButton )
      goto LABEL_61;
    v41 = UnityEngine_Component__get_gameObject(helpButton, 0);
    GameObjectExtensions__AddLocalPositionX(v41, this->fields.offsetPosition, 0);
    helpButton = (UnityEngine_Component_o *)this->fields.rightMarkSprite;
    if ( !helpButton )
      goto LABEL_61;
    v42 = UnityEngine_Component__get_gameObject(helpButton, 0);
    GameObjectExtensions__AddLocalPositionX(
      v42,
      BattleResultFriendComponent_TypeInfo->static_fields->offsetFollowMarkPosition,
      0);
    helpButton = (UnityEngine_Component_o *)this->fields.centerMarkSprite;
    if ( !helpButton )
      goto LABEL_61;
    UISprite__set_spriteName((UISprite_o *)helpButton, (System_String_o *)StringLiteral_20203/*"icon_friend"*/, 0);
    helpButton = (UnityEngine_Component_o *)this->fields.rightMarkSprite;
    if ( !helpButton )
      goto LABEL_61;
    v35 = &StringLiteral_20202/*"icon_follow"*/;
  }
  else
  {
    helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0);
    if ( !helpButton )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 0, 0);
    v21 = this->fields.rightButton;
    if ( !v21 )
      goto LABEL_61;
    helpButton = (UnityEngine_Component_o *)v21->fields.onClick;
    if ( !helpButton )
      goto LABEL_61;
    v22 = helpButton->fields.m_CachedPtr;
    v23 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++HIDWORD(helpButton[1].klass);
    if ( !v22 )
      goto LABEL_61;
    v24 = SLODWORD(helpButton[1].klass);
    if ( (unsigned int)v24 >= *(_DWORD *)(v22 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)helpButton,
        (Il2CppObject *)v7,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v25 = v22 + 8 * v24;
      LODWORD(helpButton[1].klass) = v24 + 1;
      *(_QWORD *)(v25 + 32) = v7;
      sub_1C36FFC((CGThumbnailListItem_o *)(v25 + 32), (int32_t)v7, v19, v20);
    }
    centerButton = this->fields.rightButton;
    centerButtonLabel = this->fields.rightButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11126/*"RESULT_FRIEND_REQUEST_YES"*/, 0);
    if ( !centerButtonLabel )
      goto LABEL_61;
    UILabel__set_text(centerButtonLabel, (System_String_o *)helpButton, 0);
    helpButton = (UnityEngine_Component_o *)this->fields.rightButtonLabel;
    if ( !helpButton )
      goto LABEL_61;
    v33 = UnityEngine_Component__get_gameObject(helpButton, 0);
    v34 = BattleResultFriendComponent_TypeInfo;
    if ( !BattleResultFriendComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultFriendComponent_TypeInfo);
      v34 = BattleResultFriendComponent_TypeInfo;
    }
    GameObjectExtensions__AddLocalPositionX(v33, v34->static_fields->offsetOfferLabelPosition, 0);
    helpButton = (UnityEngine_Component_o *)this->fields.rightMarkSprite;
    if ( !helpButton )
      goto LABEL_61;
    v35 = &StringLiteral_20203/*"icon_friend"*/;
  }
  UISprite__set_spriteName((UISprite_o *)helpButton, (System_String_o *)*v35, 0);
  if ( isActiveFriend && !this->fields.followerStatus )
    return;
  v43 = (EventDelegate_o *)sub_1C372A4(EventDelegate_TypeInfo);
  EventDelegate___ctor_49274436(v43, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9863/*"OnClickNoActionFriend"*/, 0);
  if ( !centerButton
    || (helpButton = (UnityEngine_Component_o *)centerButton->fields.onClick) == 0
    || (System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)helpButton,
          (Il2CppObject *)v7,
          (const MethodInfo_37A454C *)Method_System_Collections_Generic_List_EventDelegate__Remove__),
        (helpButton = (UnityEngine_Component_o *)centerButton->fields.onClick) == 0)
    || (v46 = helpButton->fields.m_CachedPtr,
        v47 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++HIDWORD(helpButton[1].klass),
        !v46) )
  {
LABEL_61:
    sub_1C372B4(helpButton);
  }
  v48 = SLODWORD(helpButton[1].klass);
  if ( (unsigned int)v48 >= *(_DWORD *)(v46 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)helpButton,
      (Il2CppObject *)v43,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = v46 + 8 * v48;
    LODWORD(helpButton[1].klass) = v48 + 1;
    *(_QWORD *)(v49 + 32) = v43;
    sub_1C36FFC((CGThumbnailListItem_o *)(v49 + 32), (int32_t)v43, v44, v45);
  }
  v51.fields.r = 0.5;
  v51.fields.g = 0.5;
  v51.fields.b = 0.5;
  v51.fields.a = 1.0;
  UIButtonColor__set_defaultColor((UIButtonColor_o *)centerButton, v51, 0);
  klass = centerButton->klass;
  centerButton->fields.hover = (struct UnityEngine_Color_o)xmmword_C0E420;
  centerButton->fields.pressed = (struct UnityEngine_Color_o)xmmword_C0E420;
  ((void (__fastcall *)(struct UIButton_o *, __int64, __int64, const MethodInfo *))klass->vtable._14_SetState.methodPtr)(
    centerButton,
    3,
    1,
    klass->vtable._14_SetState.method);
  v52.fields.r = 0.5;
  v52.fields.g = 0.5;
  v52.fields.b = 0.5;
  v52.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)centerButtonLabel, v52, 0);
  v53.fields.r = 0.0;
  v53.fields.g = 0.0;
  v53.fields.b = 0.0;
  v53.fields.a = 1.0;
  UILabel__set_effectColor(centerButtonLabel, v53, 0);
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

  if ( (byte_4C4683D & 1) == 0 )
  {
    sub_1C37058(&Method_BattleResultFriendComponent_EndShowServant__);
    sub_1C37058(&Method_BattleResultFriendComponent_ShowServantConf__);
    sub_1C37058(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C4683D = 1;
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
      v7 = (_QWORD *)sub_1C37070(Method_BattleResultFriendComponent_ShowServantConf__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C3703C(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (ServantStatusDialog_EndDelegate_o *)sub_1C372A4(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v10,
      (Il2CppObject *)this,
      Method_BattleResultFriendComponent_EndShowServant__,
      0);
    if ( Instance )
    {
      CommonUI__OpenServantStatusDialog_31220608((CommonUI_o *)Instance, 5, v6, v10, 0);
      return;
    }
LABEL_10:
    sub_1C372B4(otherUser);
  }
  BattleResultFriendComponent__endCloseSHowServant(this, v5);
}


void BattleResultFriendComponent__callBackBeginResume(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C4684C & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3497/*"CLOSE"*/);
    byte_4C4684C = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3497/*"CLOSE"*/, 0);
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
    sub_1C372B4(0);
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

  if ( (byte_4C4683F & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3497/*"CLOSE"*/);
    byte_4C4683F = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3497/*"CLOSE"*/, 0);
}


void BattleResultFriendComponent__followAssign(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  Il2CppObject *Request_object; // x0

  if ( (byte_4C46847 & 1) == 0 )
  {
    sub_1C37058(&Method_BattleResultFriendComponent_EndRequestFollow__);
    sub_1C37058(&Method_BattleResultFriendComponent_followAssign__);
    sub_1C37058(&Method_NetworkManager_getRequest_FollowAssignRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C46847 = 1;
  }
  v3 = Method_BattleResultFriendComponent_followAssign__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_followAssign__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_BattleResultFriendComponent_followAssign__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_EndRequestFollow__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_FollowAssignRequest___);
  if ( !Request_object )
    sub_1C372B4(0);
  FollowAssignRequest__beginRequest((FollowAssignRequest_o *)Request_object, this->fields.targetId, 0);
}


void BattleResultFriendComponent__friendOffer(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  Il2CppObject *Request_object; // x0

  if ( (byte_4C46845 & 1) == 0 )
  {
    sub_1C37058(&Method_BattleResultFriendComponent_EndRequestFriend__);
    sub_1C37058(&Method_BattleResultFriendComponent_friendOffer__);
    sub_1C37058(&Method_NetworkManager_getRequest_FriendOfferRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C46845 = 1;
  }
  v3 = Method_BattleResultFriendComponent_friendOffer__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_friendOffer__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_BattleResultFriendComponent_friendOffer__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_EndRequestFriend__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_FriendOfferRequest___);
  if ( !Request_object )
    sub_1C372B4(0);
  FriendOfferRequest__beginRequest((FriendOfferRequest_o *)Request_object, this->fields.targetId, 0);
}


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
    sub_1C372B4(otherUser);
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

  if ( (byte_4C46837 & 1) == 0 )
  {
    sub_1C37058(&Method_BattleResultFriendComponent_onChangeClass__);
    byte_4C46837 = 1;
  }
  v5 = Method_BattleResultFriendComponent_onChangeClass__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_onChangeClass__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C37070(Method_BattleResultFriendComponent_onChangeClass__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  BattleResultFriendComponent__changeClass(this, classPos, v7);
}


void BattleResultFriendComponent__openCore(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  DataManager_o *Instance; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UserGameEntity_o *SelfUserGame; // x22
  Il2CppObject *MasterData_object; // x25
  int32_t FollowSum; // w24
  _BOOL4 v10; // w21
  _BOOL4 v11; // w26
  _BOOL4 enableFollowQuest; // w27
  int32_t v13; // w23
  const MethodInfo *v14; // x3
  int v15; // w21
  UILabel_o *countLabel; // x26
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  Il2CppObject *v23; // x25
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x5
  __int64 v28; // x6
  __int64 v29; // x7
  Il2CppObject *v30; // x0
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  __int64 v34; // x5
  __int64 v35; // x6
  __int64 v36; // x7
  UILabel_o *followCountLabel; // x22
  Il2CppObject *v38; // x24
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  __int64 v42; // x5
  __int64 v43; // x6
  __int64 v44; // x7
  Il2CppObject *v45; // x0
  UILabel_o *confLabel; // x22
  Il2CppObject *v47; // x0
  struct OtherUserGameEntity_o **p_otherUser; // x23
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x1
  _QWORD *v52; // x22
  __int64 naturalAligment; // x9
  __int64 v54; // x8
  const MethodInfo *v55; // x3
  int32_t QuestId; // w22
  int followerGrandGraphId; // w2
  int32_t ReturnTypeByQuestId; // w0
  int32_t followerClassId; // w24
  int32_t ExistLeaderInfo; // w0
  int32_t displayServantType; // w8
  OtherUserGameEntity_o *v62; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v63; // x23
  UnityEngine_Object_o *classButtonControl; // x23
  System_Action_o *v65; // x21
  const MethodInfo *v66; // x2
  struct ClassButtonControlComponent_o *v67; // x20
  ClassButtonControlComponent_CallbackFunc_o *v68; // x21
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  const MethodInfo *v71; // x2
  struct ClassButtonControlComponent_o *v72; // x20
  ClassButtonControlComponent_CallbackFunc_o *v73; // x21
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  BattleResultFriendComponent__ChangeFaceAtlas_d__46_o *v76; // x0
  int32_t v77; // w1
  const MethodInfo *v78; // x2
  int32_t friendKeep; // [xsp+8h] [xbp-78h] BYREF
  int32_t FriendSum; // [xsp+Ch] [xbp-74h] BYREF
  Il2CppObject *v81; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C4683A & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_BattleResultFriendComponent_changeClass__);
    sub_1C37058(&Method_BattleResultFriendComponent_onChangeClass__);
    sub_1C37058(&BattleRootComponent_TypeInfo);
    sub_1C37058(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C37058(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_BattleResultFriendComponent___c__DisplayClass47_0__openCore_b__0__);
    sub_1C37058(&BattleResultFriendComponent___c__DisplayClass47_0_TypeInfo);
    sub_1C37058(&StringLiteral_5456/*"END_PROC"*/);
    sub_1C37058(&StringLiteral_11123/*"RESULT_FRIEND_CONF"*/);
    sub_1C37058(&StringLiteral_25156/*"{0}/{1}"*/);
    sub_1C37058(&StringLiteral_6470/*"FOLLOW_NUM"*/);
    byte_4C4683A = 1;
  }
  v81 = 0;
  entity = 0;
  v3 = sub_1C372A4(BattleResultFriendComponent___c__DisplayClass47_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_66;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v5, v6);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  if ( !Instance )
    goto LABEL_66;
  FollowSum = UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0);
  Instance = (DataManager_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6470/*"FOLLOW_NUM"*/, 0);
  v10 = FollowSum < (int)Instance;
  v11 = this->fields.followerType == 2;
  if ( !MasterData_object )
    goto LABEL_66;
  enableFollowQuest = this->fields.enableFollowQuest;
  v13 = (int)Instance;
  Instance = (DataManager_o *)TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0);
  if ( !SelfUserGame )
    goto LABEL_66;
  v15 = enableFollowQuest && v10 && v11;
  BattleResultFriendComponent__Layout(this, v15, (int)Instance < SelfUserGame->fields.friendKeep, v14);
  countLabel = this->fields.countLabel;
  FriendSum = TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0);
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FriendSum, v17, v18, v19, v20, v21, v22);
  friendKeep = SelfUserGame->fields.friendKeep;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep, v24, v25, v26, v27, v28, v29);
  Instance = (DataManager_o *)System_String__Format_63602948((System_String_o *)StringLiteral_25156/*"{0}/{1}"*/, v23, v30, 0);
  if ( !countLabel )
    goto LABEL_66;
  UILabel__set_text(countLabel, (System_String_o *)Instance, 0);
  if ( v15 )
  {
    followCountLabel = this->fields.followCountLabel;
    FriendSum = FollowSum;
    v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FriendSum, v31, v32, v33, v34, v35, v36);
    friendKeep = v13;
    v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep, v39, v40, v41, v42, v43, v44);
    Instance = (DataManager_o *)System_String__Format_63602948((System_String_o *)StringLiteral_25156/*"{0}/{1}"*/, v38, v45, 0);
    if ( !followCountLabel )
      goto LABEL_66;
    UILabel__set_text(followCountLabel, (System_String_o *)Instance, 0);
  }
  confLabel = this->fields.confLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11123/*"RESULT_FRIEND_CONF"*/, 0);
  if ( !confLabel )
    goto LABEL_66;
  UILabel__set_text(confLabel, (System_String_o *)Instance, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  if ( !Instance )
    goto LABEL_66;
  v47 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          this->fields.targetId,
          (const MethodInfo_33A35FC *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
  this->fields.otherUser = (struct OtherUserGameEntity_o *)v47;
  p_otherUser = &this->fields.otherUser;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.otherUser, (int32_t)v47, v49, v50);
  BattleResultFriendComponent__OtherUserChangeLimitCountBySpoilerProtection(this, v51);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  v52 = *(_QWORD **)&Instance->fields._DispLog;
  if ( !v52 )
    goto LABEL_66;
  naturalAligment = BattleRootComponent_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*v52 + 304LL) >= (unsigned int)naturalAligment
    && *(BattleRootComponent_c **)(*(_QWORD *)(*v52 + 200LL) + 8 * naturalAligment - 8) == BattleRootComponent_TypeInfo )
  {
    v54 = v52[8];
    if ( !v54 )
      goto LABEL_66;
    Instance = *(DataManager_o **)(v54 + 96);
    if ( !Instance )
      goto LABEL_66;
    this->fields.isUseGrandBoard = QuestPhaseEntity__IsUseGrandBoard((QuestPhaseEntity_o *)Instance, 0);
    Instance = (DataManager_o *)v52[8];
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
    ExistLeaderInfo = BattleResultFriendComponent__getExistLeaderInfo(this, followerClassId, followerGrandGraphId, v55);
    displayServantType = this->fields.displayServantType;
    this->fields.followerClassId = ExistLeaderInfo;
    if ( displayServantType == 2 && this->fields.followerGrandGraphId >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantMaster___);
      v62 = *p_otherUser;
      if ( !*p_otherUser )
        goto LABEL_66;
      v63 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      Instance = (DataManager_o *)OtherUserGameEntity__getSvtId(
                                    v62,
                                    this->fields.followerClassId,
                                    this->fields.displayServantType,
                                    this->fields.followerDeckId,
                                    this->fields.followerGrandGraphId,
                                    0);
      if ( !v63 )
        goto LABEL_66;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             v63,
             &entity,
             (int32_t)Instance,
             (const MethodInfo_33A10EC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantClassMaster___);
        if ( !entity || !Instance )
          goto LABEL_66;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      &v81,
                                      (int32_t)entity[5].klass,
                                      (const MethodInfo_33A10EC *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v81 )
            goto LABEL_66;
          followerClassId = (int32_t)v81[4].klass;
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
    if ( v15 )
    {
      *(_BYTE *)(v3 + 24) = EventTutorialMaster__IsTutorialAvailable(-1, 49, 0, 0, 0, 0, 0);
      v65 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        v65,
        (Il2CppObject *)v3,
        Method_BattleResultFriendComponent___c__DisplayClass47_0__openCore_b__0__,
        0);
      EventTutorialMaster__CheckTutorial(-1, 49, v65, 0, 0, 0, 0, 0);
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
          v67 = this->fields.classButtonControl;
          v68 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1C372A4(ClassButtonControlComponent_CallbackFunc_TypeInfo);
          ClassButtonControlComponent_CallbackFunc___ctor(
            v68,
            (Il2CppObject *)this,
            Method_BattleResultFriendComponent_changeClass__,
            0);
          if ( !v67 )
            goto LABEL_66;
          v67->fields.callbackFunc = v68;
          sub_1C36FFC((CGThumbnailListItem_o *)&v67->fields.callbackFunc, (int32_t)v68, v69, v70);
          Instance = (DataManager_o *)this->fields.classButtonControl;
          if ( !Instance )
            goto LABEL_66;
          if ( !ClassButtonControlComponent__setCursor(
                  (ClassButtonControlComponent_o *)Instance,
                  this->fields.followerClassId,
                  0) )
            BattleResultFriendComponent__changeClass(this, this->fields.followerClassId, v71);
          v72 = this->fields.classButtonControl;
          v73 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1C372A4(ClassButtonControlComponent_CallbackFunc_TypeInfo);
          ClassButtonControlComponent_CallbackFunc___ctor(
            v73,
            (Il2CppObject *)this,
            (intptr_t)Method_BattleResultFriendComponent_onChangeClass__,
            0);
          if ( !v72 )
            goto LABEL_66;
          v72->fields.callbackFunc = v73;
          sub_1C36FFC((CGThumbnailListItem_o *)&v72->fields.callbackFunc, (int32_t)v73, v74, v75);
        }
        else
        {
          BattleResultFriendComponent__changeClass(this, this->fields.followerClassId, v66);
        }
        Instance = (DataManager_o *)this->fields.myFsm;
        if ( Instance )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5456/*"END_PROC"*/, 0);
          return;
        }
      }
    }
LABEL_66:
    sub_1C372B4(Instance);
  }
  sub_1C37574(*(_QWORD *)&Instance->fields._DispLog);
  BattleResultFriendComponent__ChangeFaceAtlas_d__46___ctor(v76, v77, v78);
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
  struct ClassButtonControlComponent_o *v21; // x20
  ClassButtonControlComponent_CallbackFunc_o *v22; // x21
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  v16 = enableFollow;
  if ( (byte_4C46836 & 1) == 0 )
  {
    sub_1C37058(&Method_BattleResultFriendComponent_changeClass__);
    sub_1C37058(&Method_BattleResultFriendComponent_onChangeClass__);
    sub_1C37058(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46836 = 1;
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
    v19 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1C372A4(ClassButtonControlComponent_CallbackFunc_TypeInfo);
    ClassButtonControlComponent_CallbackFunc___ctor(
      v19,
      (Il2CppObject *)this,
      Method_BattleResultFriendComponent_changeClass__,
      0);
    if ( !v18
      || (ClassButtonControlComponent__init(v18, v19, 0, 0, 0, 0), (v20 = this->fields.classButtonControl) == 0)
      || (ClassButtonControlComponent__setCursor(v20, infollowerClassId, 0),
          v21 = this->fields.classButtonControl,
          v22 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1C372A4(ClassButtonControlComponent_CallbackFunc_TypeInfo),
          ClassButtonControlComponent_CallbackFunc___ctor(
            v22,
            (Il2CppObject *)this,
            (intptr_t)Method_BattleResultFriendComponent_onChangeClass__,
            0),
          !v21) )
    {
      sub_1C372B4(v20);
    }
    v21->fields.callbackFunc = v22;
    sub_1C36FFC((CGThumbnailListItem_o *)&v21->fields.callbackFunc, (int32_t)v22, v23, v24);
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
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  const MethodInfo *v8; // x1
  struct System_Action_o *releasePerformanceObject; // x8
  UnityEngine_WaitForEndOfFrame_o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *waitForEndOfFrame_5__2; // x1
  Il2CppObject **p__2__current; // x19
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  bool result; // w0

  if ( (byte_4C46852 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&System_GC_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C37058(&Method_BattleResultFriendComponent___c__DisplayClass46_0__ChangeFaceAtlas_b__0__);
    sub_1C37058(&BattleResultFriendComponent___c__DisplayClass46_0_TypeInfo);
    sub_1C37058(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4C46852 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( this->fields.__1__state )
    return 0;
  this->fields.__1__state = -1;
  v4 = (Il2CppObject *)sub_1C372A4(BattleResultFriendComponent___c__DisplayClass46_0_TypeInfo);
  System_Object___ctor(v4, 0);
  this->fields.__8__1 = (struct BattleResultFriendComponent___c__DisplayClass46_0_o *)v4;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__8__1, (int32_t)v4, v5, v6);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseFaceBattleAtlas(0);
  if ( !_4__this )
    sub_1C372B4(v7);
  releasePerformanceObject = _4__this->fields.releasePerformanceObject;
  if ( releasePerformanceObject )
    ((void (__fastcall *)(intptr_t, intptr_t))releasePerformanceObject->fields.invoke_impl)(
      releasePerformanceObject->fields.method_code,
      releasePerformanceObject->fields.method);
  BattleResultFriendComponent__openCore(_4__this, v8);
  v10 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C372A4(UnityEngine_WaitForEndOfFrame_TypeInfo);
  UnityEngine_WaitForEndOfFrame___ctor(v10, 0);
  this->fields._waitForEndOfFrame_5__2 = v10;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._waitForEndOfFrame_5__2, (int32_t)v10, v11, v12);
  waitForEndOfFrame_5__2 = (Il2CppObject *)this->fields._waitForEndOfFrame_5__2;
  this->fields.__2__current = waitForEndOfFrame_5__2;
  p__2__current = &this->fields.__2__current;
  sub_1C36FFC((CGThumbnailListItem_o *)p__2__current, (int32_t)waitForEndOfFrame_5__2, v15, v16);
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

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_BattleResultFriendComponent__ChangeFaceAtlas_d__46_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
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
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  struct BattleResultFriendComponent_o *v16; // x8
  struct BattleResultFriendComponent_o *v17; // x8
  struct BattleResultFriendComponent_o *v18; // x8
  struct BattleResultFriendComponent_o *v19; // x8
  Il2CppObject *Instance; // x19
  UnityEngine_Vector2_o v21; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v22; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  v2 = this;
  if ( (byte_4C46851 & 1) == 0 )
  {
    sub_1C37058(&EventDelegate_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_9877/*"OnClickTutorialFollow"*/);
    sub_1C37058(&StringLiteral_13591/*"TUTORIAL_MESSAGE_FOLLOW_OFFER"*/);
    this = (BattleResultFriendComponent___c__DisplayClass47_0_o *)sub_1C37058(&StringLiteral_11120/*"RESULT_FOLLOW_REQUEST_YES"*/);
    byte_4C46851 = 1;
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
                                                                    (System_String_o *)StringLiteral_11120/*"RESULT_FOLLOW_REQUEST_YES"*/,
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
    v9 = (EventDelegate_o *)sub_1C372A4(EventDelegate_TypeInfo);
    EventDelegate___ctor_49274436(v9, v6, (System_String_o *)StringLiteral_9877/*"OnClickTutorialFollow"*/, 0);
    if ( !monitor )
      goto LABEL_29;
    items = monitor->fields._items;
    v13 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++monitor->fields._version;
    if ( !items )
      goto LABEL_29;
    size = monitor->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        monitor,
        (Il2CppObject *)v9,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    }
    else
    {
      v15 = &items->obj.klass + size;
      monitor->fields._size = size + 1;
      v15[4] = (Il2CppClass *)v9;
      sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v9, v10, v11);
    }
    v16 = v2->fields.__4__this;
    if ( !v16 )
      goto LABEL_29;
    this = (BattleResultFriendComponent___c__DisplayClass47_0_o *)v16->fields.followTutorialButton;
    if ( !this )
      goto LABEL_29;
    this = (BattleResultFriendComponent___c__DisplayClass47_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0);
    v17 = v2->fields.__4__this;
    if ( !v17 )
      goto LABEL_29;
    GameObjectExtensions__AddLocalPositionX((UnityEngine_GameObject_o *)this, v17->fields.offsetPosition, 0);
    v18 = v2->fields.__4__this;
    if ( !v18 )
      goto LABEL_29;
    this = (BattleResultFriendComponent___c__DisplayClass47_0_o *)v18->fields.followTutorialButton;
    if ( !this )
      goto LABEL_29;
    this = (BattleResultFriendComponent___c__DisplayClass47_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0);
    if ( !this
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0), (v19 = v2->fields.__4__this) == 0)
      || (this = (BattleResultFriendComponent___c__DisplayClass47_0_o *)v19->fields.rightButton) == 0
      || (this = (BattleResultFriendComponent___c__DisplayClass47_0_o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)this,
                                                                          0)) == 0
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0),
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          this = (BattleResultFriendComponent___c__DisplayClass47_0_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_13591/*"TUTORIAL_MESSAGE_FOLLOW_OFFER"*/,
                                                                          0),
          !Instance) )
    {
LABEL_29:
      sub_1C372B4(this);
    }
    v21.fields.x = 313.0;
    v21.fields.y = -184.0;
    v22.fields.m_XMin = 162.0;
    v22.fields.m_YMin = -244.0;
    v22.fields.m_Width = 300.0;
    v22.fields.m_Height = 80.0;
    CommonUI__OpenTutorialNotificationDialogArrow(
      (CommonUI_o *)Instance,
      (System_String_o *)this,
      v21,
      v22,
      0.0,
      0,
      -1,
      0,
      0);
  }
}