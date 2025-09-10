void BattleResultFriendComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C2AB1E & 1) == 0 )
  {
    sub_1C2D490(&BattleResultFriendComponent_TypeInfo);
    byte_4C2AB1E = 1;
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

  if ( (byte_4C2AB07 & 1) == 0 )
  {
    sub_1C2D490(&BattleResultFriendComponent__ChangeFaceAtlas_d__46_TypeInfo);
    byte_4C2AB07 = 1;
  }
  v3 = sub_1C2D6DC(BattleResultFriendComponent__ChangeFaceAtlas_d__46_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  const MethodInfo *v9; // x3
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  OtherUserGameEntity_o *otherUser; // x22
  SupportInfoJump_o *v13; // x20
  __int64 v14; // x8
  __int64 v15; // x8
  int32_t v16; // w22
  QuestRestrictionInfo_o *v17; // x21
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  int32_t v19; // w19
  BattleResultFriendComponent_o *v20; // x0
  const MethodInfo *v21; // x1

  if ( (byte_4C2AB19 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleResultFriendComponent_ChangeSupportScene__);
    sub_1C2D490(&Method_BattleResultFriendComponent_callBackBeginResume__);
    sub_1C2D490(&BattleRootComponent_TypeInfo);
    sub_1C2D490(&QuestRestrictionInfo_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&SupportInfoJump_TypeInfo);
    sub_1C2D490(&BattleRootComponent_callBackBeginResume_TypeInfo);
    byte_4C2AB19 = 1;
  }
  Instance = (OtherUserGameEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 10, 0) )
  {
    Instance = (OtherUserGameEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    v5 = *(_QWORD *)&Instance->fields.userLv;
    if ( !v5
      || (naturalAligment = BattleRootComponent_TypeInfo->_2.naturalAligment,
          *(unsigned __int8 *)(*(_QWORD *)v5 + 304LL) >= (unsigned int)naturalAligment)
      && *(BattleRootComponent_c **)(*(_QWORD *)(*(_QWORD *)v5 + 200LL) + 8 * naturalAligment - 8) == BattleRootComponent_TypeInfo )
    {
      v7 = (BattleRootComponent_callBackBeginResume_o *)sub_1C2D6DC(BattleRootComponent_callBackBeginResume_TypeInfo);
      BattleRootComponent_callBackBeginResume___ctor(
        v7,
        (Il2CppObject *)this,
        Method_BattleResultFriendComponent_callBackBeginResume__,
        0);
      if ( v5 )
      {
        *(_QWORD *)(v5 + 120) = v7;
        sub_1C2D434((CGThumbnailListItem_o *)(v5 + 120), (int32_t)v7, v8, v9);
        v10 = Method_BattleResultFriendComponent_ChangeSupportScene__;
        if ( (*((_BYTE *)Method_BattleResultFriendComponent_ChangeSupportScene__ + 83) & 2) != 0 )
          v10 = (_QWORD *)sub_1C2D4A8(Method_BattleResultFriendComponent_ChangeSupportScene__);
        v11 = (System_Reflection_MethodBase_o *)sub_1C2D474(v10, v10[4]);
        OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
        otherUser = this->fields.otherUser;
        v13 = (SupportInfoJump_o *)sub_1C2D6DC(SupportInfoJump_TypeInfo);
        SupportInfoJump___ctor(v13, otherUser, 0, 0, 0);
        v14 = *(_QWORD *)(v5 + 64);
        if ( v14 )
        {
          v15 = *(_QWORD *)(v14 + 88);
          if ( v15 )
          {
            v16 = *(_DWORD *)(v15 + 16);
            v17 = (QuestRestrictionInfo_o *)sub_1C2D6DC(QuestRestrictionInfo_TypeInfo);
            QuestRestrictionInfo___ctor(v17, v16, 0);
            if ( v13 )
            {
              SupportInfoJump__SetSetupInfo(v13, 0, v17, 0);
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
                v19 = 60;
                if ( ServantLeaderInfo )
                {
                  if ( ServantLeaderInfo__get_IsGrandSvt(ServantLeaderInfo, 0) )
                    v19 = 43;
                  else
                    v19 = 60;
                }
                Instance = (OtherUserGameEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( Instance )
                {
                  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, v19, 1, (Il2CppObject *)v13, 0);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_23:
      sub_1C2D6EC(Instance, v4);
    }
    sub_1C2D9AC(*(_QWORD *)&Instance->fields.userLv);
    BattleResultFriendComponent__callBackBeginResume(v20, v21);
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

  if ( (byte_4C2AB16 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleResultFriendComponent_OnEndRequestDialog__);
    sub_1C2D490(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_11077/*"REQUEST_OK"*/);
    sub_1C2D490(&StringLiteral_11075/*"REQUEST_NG"*/);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    sub_1C2D490(&StringLiteral_21523/*"message"*/);
    sub_1C2D490(&StringLiteral_1122/*"0"*/);
    sub_1C2D490(&StringLiteral_23663/*"status"*/);
    byte_4C2AB16 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22195/*"ng"*/, 0) )
  {
    myFsm = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v9 = &StringLiteral_11075/*"REQUEST_NG"*/;
      goto LABEL_17;
    }
LABEL_20:
    sub_1C2D6EC(myFsm, v5);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0);
  if ( !myFsm )
    goto LABEL_20;
  v7 = myFsm;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFsm,
          (Il2CppObject *)StringLiteral_21523/*"message"*/,
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_13;
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v7,
                                                                       (Il2CppObject *)StringLiteral_21523/*"message"*/,
                                                                       (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_20;
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))myFsm->klass->vtable._3_ToString.methodPtr)(
                            myFsm,
                            myFsm->klass->vtable._3_ToString.method);
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v7,
                                                                       (Il2CppObject *)StringLiteral_23663/*"status"*/,
                                                                       (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_20;
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))myFsm->klass->vtable._3_ToString.methodPtr)(
                                                                       myFsm,
                                                                       myFsm->klass->vtable._3_ToString.method);
  if ( !myFsm )
    goto LABEL_20;
  if ( System_String__Equals_63493168((System_String_o *)myFsm, (System_String_o *)StringLiteral_1122/*"0"*/, 0)
    || System_String__IsNullOrEmpty(v8, 0) )
  {
LABEL_13:
    myFsm = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v9 = &StringLiteral_11077/*"REQUEST_OK"*/;
LABEL_17:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFsm, (System_String_o *)*v9, 0);
      return;
    }
    goto LABEL_20;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (NotificationDialog_ClickDelegate_o *)sub_1C2D6DC(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_OnEndRequestDialog__,
    0);
  if ( !Instance )
    goto LABEL_20;
  CommonUI__OpenNotificationDialog_31170012(
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

  if ( (byte_4C2AB14 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleResultFriendComponent_OnEndRequestDialog__);
    sub_1C2D490(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_11077/*"REQUEST_OK"*/);
    sub_1C2D490(&StringLiteral_11075/*"REQUEST_NG"*/);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    sub_1C2D490(&StringLiteral_21523/*"message"*/);
    sub_1C2D490(&StringLiteral_1122/*"0"*/);
    sub_1C2D490(&StringLiteral_23663/*"status"*/);
    byte_4C2AB14 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22195/*"ng"*/, 0) )
  {
    myFsm = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v9 = &StringLiteral_11075/*"REQUEST_NG"*/;
      goto LABEL_17;
    }
LABEL_20:
    sub_1C2D6EC(myFsm, v5);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0);
  if ( !myFsm )
    goto LABEL_20;
  v7 = myFsm;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFsm,
          (Il2CppObject *)StringLiteral_21523/*"message"*/,
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_13;
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v7,
                                                                       (Il2CppObject *)StringLiteral_21523/*"message"*/,
                                                                       (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_20;
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))myFsm->klass->vtable._3_ToString.methodPtr)(
                            myFsm,
                            myFsm->klass->vtable._3_ToString.method);
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v7,
                                                                       (Il2CppObject *)StringLiteral_23663/*"status"*/,
                                                                       (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_20;
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))myFsm->klass->vtable._3_ToString.methodPtr)(
                                                                       myFsm,
                                                                       myFsm->klass->vtable._3_ToString.method);
  if ( !myFsm )
    goto LABEL_20;
  if ( System_String__Equals_63493168((System_String_o *)myFsm, (System_String_o *)StringLiteral_1122/*"0"*/, 0)
    || System_String__IsNullOrEmpty(v8, 0) )
  {
LABEL_13:
    myFsm = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v9 = &StringLiteral_11077/*"REQUEST_OK"*/;
LABEL_17:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFsm, (System_String_o *)*v9, 0);
      return;
    }
    goto LABEL_20;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (NotificationDialog_ClickDelegate_o *)sub_1C2D6DC(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_OnEndRequestDialog__,
    0);
  if ( !Instance )
    goto LABEL_20;
  CommonUI__OpenNotificationDialog_31170012(
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

  if ( (byte_4C2AB0C & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattleResultFriendComponent_endCloseSHowServant__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2AB0C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleResultFriendComponent_endCloseSHowServant__, 0);
  if ( !Instance )
    sub_1C2D6EC(v6, v7);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v5, 0);
}


void BattleResultFriendComponent__Init(
        BattleResultFriendComponent_o *this,
        System_Action_o *releasePerformanceObject,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *root; // x0
  UnityEngine_Object_o *friendIconComp; // x21
  __int64 v7; // x2
  const MethodInfo *v8; // x3
  System_Object_array *ComponentsInChildren_object; // x0
  il2cpp_array_size_t max_length; // x8
  System_Object_array *v11; // x21
  unsigned __int64 v12; // x24
  Il2CppObject **m_Items; // x25
  UnityEngine_Object_o *v14; // x22

  if ( (byte_4C2AB03 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel____78065264);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AB03 = 1;
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
    sub_1C2D6EC(root, releasePerformanceObject);
  ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                  root,
                                  1,
                                  (const MethodInfo_3126B70 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel____78065264);
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
          sub_1C2D6F4(ComponentsInChildren_object, releasePerformanceObject, v7);
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
  sub_1C2D434(
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
  _BOOL4 v5; // w20
  _BOOL4 v6; // w21
  __int64 v8; // x26
  Il2CppObject *v9; // x0
  System_String_o *v10; // x22
  System_String_o *errLabel; // x0
  __int64 v12; // x1
  __int64 v13; // x23
  char v14; // w24
  System_String_o *v15; // x1
  System_String_o **v16; // x8
  _BOOL4 v17; // w21
  System_String_o **v18; // x24
  const MethodInfo *v19; // x3
  System_String_o *v20; // x23
  UILabel_o *titleLabel; // x21
  UILabel_o *friendWarningLabel; // x20
  int32_t followerStatus; // [xsp+Ch] [xbp-54h] BYREF

  v5 = isActiveFriend;
  v6 = isActiveFollow;
  if ( (byte_4C2AB1B & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11115/*"RESULT_FRIENDANDFOLLOW_TITLE"*/);
    sub_1C2D490(&StringLiteral_11117/*"RESULT_FRIEND_ERR_{0}"*/);
    sub_1C2D490(&StringLiteral_11123/*"RESULT_MAXFRIEND_WARNING"*/);
    sub_1C2D490(&StringLiteral_11120/*"RESULT_FRIEND_TITLE"*/);
    sub_1C2D490(&StringLiteral_11114/*"RESULT_FOLLOW_TITLE"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2AB1B = 1;
  }
  v8 = StringLiteral_11123/*"RESULT_MAXFRIEND_WARNING"*/;
  followerStatus = this->fields.followerStatus;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &followerStatus, isActiveFriend, method, v4);
  v10 = System_String__Format((System_String_o *)StringLiteral_11117/*"RESULT_FRIEND_ERR_{0}"*/, v9, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  errLabel = LocalizationManager__Get(v10, 0);
  if ( !v10 )
    goto LABEL_33;
  v13 = (__int64)errLabel;
  errLabel = (System_String_o *)System_String__Equals_63493168(v10, errLabel, 0);
  if ( !this->fields.errLabel )
    goto LABEL_33;
  v14 = (char)errLabel;
  v15 = (System_String_o *)(((unsigned __int8)errLabel & 1) != 0 ? StringLiteral_1/*""*/ : v13);
  UILabel__set_text(this->fields.errLabel, v15, 0);
  if ( v14 & 1 | (!v6 || !v5) )
  {
    v10 = (System_String_o *)v8;
  }
  else
  {
    errLabel = (System_String_o *)this->fields.errLabel;
    if ( !errLabel )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)errLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    LOBYTE(v5) = 0;
  }
  errLabel = (System_String_o *)this->fields.followCountRoot;
  if ( !errLabel )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)errLabel, v6, 0);
  errLabel = (System_String_o *)this->fields.friendWarningLabel;
  if ( !errLabel )
    goto LABEL_33;
  errLabel = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)errLabel, 0);
  if ( !errLabel )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)errLabel, !v5, 0);
  errLabel = (System_String_o *)this->fields.countRoot;
  if ( !errLabel )
    goto LABEL_33;
  v16 = (System_String_o **)&StringLiteral_11115/*"RESULT_FRIENDANDFOLLOW_TITLE"*/;
  v17 = v6;
  if ( !v17 )
    v16 = (System_String_o **)&StringLiteral_11120/*"RESULT_FRIEND_TITLE"*/;
  if ( v5 )
    v18 = v16;
  else
    v18 = (System_String_o **)&StringLiteral_11114/*"RESULT_FOLLOW_TITLE"*/;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)errLabel, v5, 0);
  BattleResultFriendComponent__SetupButtons(this, v17, v5, v19);
  v20 = *v18;
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  errLabel = LocalizationManager__Get(v20, 0);
  if ( !titleLabel )
    goto LABEL_33;
  UILabel__set_text(titleLabel, errLabel, 0);
  if ( v5 )
    goto LABEL_31;
  friendWarningLabel = this->fields.friendWarningLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  errLabel = LocalizationManager__Get(v10, 0);
  if ( !friendWarningLabel )
LABEL_33:
    sub_1C2D6EC(errLabel, v12);
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

  if ( (byte_4C2AB11 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_6460/*"FOLLOW_CONNECT"*/);
    byte_4C2AB11 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_6460/*"FOLLOW_CONNECT"*/, 0);
}


void BattleResultFriendComponent__OnClickFriend(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C2AB0E & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3775/*"CONNECT"*/);
    byte_4C2AB0E = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3775/*"CONNECT"*/, 0);
}


void BattleResultFriendComponent__OnClickHelp(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4C2AB1D & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleResultFriendComponent_OnClickHelp__);
    byte_4C2AB1D = 1;
  }
  v2 = Method_BattleResultFriendComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C2D4A8(Method_BattleResultFriendComponent_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C2D474(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 49, 0, 0, 0);
}


void BattleResultFriendComponent__OnClickNo(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C2AB10 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9257/*"NEXT"*/);
    byte_4C2AB10 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9257/*"NEXT"*/, 0);
}


void BattleResultFriendComponent__OnClickNoActionFriend(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4C2AB0F & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleResultFriendComponent_OnClickNoActionFriend__);
    byte_4C2AB0F = 1;
  }
  v2 = Method_BattleResultFriendComponent_OnClickNoActionFriend__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_OnClickNoActionFriend__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C2D4A8(Method_BattleResultFriendComponent_OnClickNoActionFriend__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C2D474(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 2, 0, 0);
}


void BattleResultFriendComponent__OnClickSupportInfo(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C2AB18 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3326/*"CHANGE_SUPPORT"*/);
    byte_4C2AB18 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3326/*"CHANGE_SUPPORT"*/, 0);
}


void BattleResultFriendComponent__OnClickTutorialFollow(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CGThumbnailListItem_o *v7; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C2AB12 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2AB12 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseTutorialNotificationDialogArrow((CommonUI_o *)Instance, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
  if ( !Instance )
    goto LABEL_12;
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          (const MethodInfo_338A420 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__) )
    goto LABEL_11;
  Instance = entity;
  if ( !entity )
LABEL_12:
    sub_1C2D6EC(Instance, v4);
  v7 = (CGThumbnailListItem_o *)&entity[1];
  if ( entity[1].klass )
  {
    v7->klass = 0;
    sub_1C2D434(v7, 0, v5, v6);
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

  if ( (byte_4C2AB17 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_11077/*"REQUEST_OK"*/);
    byte_4C2AB17 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog(Instance, 0), (Instance = (CommonUI_o *)this->fields.myFsm) == 0) )
    sub_1C2D6EC(Instance, v5);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_11077/*"REQUEST_OK"*/, 0);
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

  if ( (byte_4C2AB06 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1C2D490(&OptionManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_9257/*"NEXT"*/);
    sub_1C2D490(&StringLiteral_6464/*"FOLLOW_NUM"*/);
    byte_4C2AB06 = 1;
  }
  if ( this->fields.followerType != 2 )
    goto LABEL_11;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserFollowMaster___);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9257/*"NEXT"*/, 0);
      return;
    }
LABEL_21:
    sub_1C2D6EC(Instance, method);
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
    UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v11, 0);
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
  __int64 v5; // x2
  struct OtherUserGameEntity_o *otherUser; // x8
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x20
  int max_length; // w8
  unsigned int v9; // w21
  struct OtherUserGameEntity_o *v10; // x8
  struct ServantLeaderInfo_array *eventUserSvtLeaderHash; // x20
  int v12; // w8
  unsigned int v13; // w21
  struct OtherUserGameEntity_o *v14; // x8
  struct ServantLeaderInfo_array *userSvtGrandHash; // x19
  int v16; // w8
  unsigned int v17; // w20

  if ( (byte_4C2AB09 & 1) == 0 )
  {
    sub_1C2D490(&OptionManager_TypeInfo);
    byte_4C2AB09 = 1;
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
        v9 = 0;
        while ( v9 < max_length )
        {
          SpoilerSetting = userSvtLeaderHash->m_Items[v9];
          if ( !SpoilerSetting )
            goto LABEL_30;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0);
          max_length = userSvtLeaderHash->max_length;
          if ( (int)++v9 >= max_length )
            goto LABEL_14;
        }
LABEL_29:
        sub_1C2D6F4(SpoilerSetting, v4, v5);
      }
LABEL_14:
      v10 = this->fields.otherUser;
      if ( !v10 )
        goto LABEL_30;
      eventUserSvtLeaderHash = v10->fields.eventUserSvtLeaderHash;
      if ( !eventUserSvtLeaderHash )
        goto LABEL_30;
      v12 = eventUserSvtLeaderHash->max_length;
      if ( v12 >= 1 )
      {
        v13 = 0;
        while ( v13 < v12 )
        {
          SpoilerSetting = eventUserSvtLeaderHash->m_Items[v13];
          if ( !SpoilerSetting )
            goto LABEL_30;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0);
          v12 = eventUserSvtLeaderHash->max_length;
          if ( (int)++v13 >= v12 )
            goto LABEL_21;
        }
        goto LABEL_29;
      }
LABEL_21:
      v14 = this->fields.otherUser;
      if ( !v14 || (userSvtGrandHash = v14->fields.userSvtGrandHash) == 0 )
LABEL_30:
        sub_1C2D6EC(SpoilerSetting, v4);
      v16 = userSvtGrandHash->max_length;
      if ( v16 >= 1 )
      {
        v17 = 0;
        while ( v17 < v16 )
        {
          SpoilerSetting = userSvtGrandHash->m_Items[v17];
          if ( !SpoilerSetting )
            goto LABEL_30;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0);
          v16 = userSvtGrandHash->max_length;
          if ( (int)++v17 >= v16 )
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

  if ( (byte_4C2AB0A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9646/*"OPEN_SERVANT"*/);
    byte_4C2AB0A = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9646/*"OPEN_SERVANT"*/, 0);
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
  const MethodInfo *v13; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v15; // x9
  __int64 klass_low; // x10
  intptr_t v17; // x8
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct UIButton_o *v22; // x8
  intptr_t v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  intptr_t v26; // x8
  struct UIButton_o *rightButton; // x8
  intptr_t v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  intptr_t v31; // x8
  UILabel_o *centerButtonLabel; // x22
  struct UIButton_o *centerButton; // x23
  UnityEngine_GameObject_o *v34; // x24
  BattleResultFriendComponent_c *v35; // x8
  __int64 *v36; // x8
  UILabel_o *rightButtonLabel; // x24
  UnityEngine_GameObject_o *gameObject; // x24
  BattleResultFriendComponent_c *v39; // x8
  UnityEngine_GameObject_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_GameObject_o *v43; // x0
  EventDelegate_o *v44; // x20
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  intptr_t v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  intptr_t v50; // x8
  UIButton_c *klass; // x8
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2AB1C & 1) == 0 )
  {
    sub_1C2D490(&BattleResultFriendComponent_TypeInfo);
    sub_1C2D490(&EventDelegate_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDelegate__Remove__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_9836/*"OnClickFriend"*/);
    sub_1C2D490(&StringLiteral_9857/*"OnClickNoActionFriend"*/);
    sub_1C2D490(&StringLiteral_11119/*"RESULT_FRIEND_REQUEST_YES"*/);
    sub_1C2D490(&StringLiteral_11113/*"RESULT_FOLLOW_REQUEST_YES"*/);
    sub_1C2D490(&StringLiteral_9835/*"OnClickFollow"*/);
    sub_1C2D490(&StringLiteral_20188/*"icon_friend"*/);
    sub_1C2D490(&StringLiteral_11118/*"RESULT_FRIEND_REQUEST_NO"*/);
    sub_1C2D490(&StringLiteral_20187/*"icon_follow"*/);
    byte_4C2AB1C = 1;
  }
  v7 = (EventDelegate_o *)sub_1C2D6DC(EventDelegate_TypeInfo);
  EventDelegate___ctor_49171260(v7, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9836/*"OnClickFriend"*/, 0);
  v8 = (EventDelegate_o *)sub_1C2D6DC(EventDelegate_TypeInfo);
  EventDelegate___ctor_49171260(v8, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9835/*"OnClickFollow"*/, 0);
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
  helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11118/*"RESULT_FRIEND_REQUEST_NO"*/, 0);
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
    v15 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++HIDWORD(helpButton[1].klass);
    if ( !m_CachedPtr )
      goto LABEL_61;
    klass_low = SLODWORD(helpButton[1].klass);
    if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)helpButton,
        (Il2CppObject *)v7,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    }
    else
    {
      v17 = m_CachedPtr + 8 * klass_low;
      LODWORD(helpButton[1].klass) = klass_low + 1;
      *(_QWORD *)(v17 + 32) = v7;
      sub_1C2D434((CGThumbnailListItem_o *)(v17 + 32), (int32_t)v7, v12, v13);
    }
    rightButton = this->fields.rightButton;
    if ( !rightButton )
      goto LABEL_61;
    helpButton = (UnityEngine_Component_o *)rightButton->fields.onClick;
    if ( !helpButton )
      goto LABEL_61;
    v28 = helpButton->fields.m_CachedPtr;
    v29 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++HIDWORD(helpButton[1].klass);
    if ( !v28 )
      goto LABEL_61;
    v30 = SLODWORD(helpButton[1].klass);
    if ( (unsigned int)v30 >= *(_DWORD *)(v28 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)helpButton,
        (Il2CppObject *)v8,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    }
    else
    {
      v31 = v28 + 8 * v30;
      LODWORD(helpButton[1].klass) = v30 + 1;
      *(_QWORD *)(v31 + 32) = v8;
      sub_1C2D434((CGThumbnailListItem_o *)(v31 + 32), (int32_t)v8, v18, v19);
    }
    centerButton = this->fields.centerButton;
    centerButtonLabel = this->fields.centerButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11119/*"RESULT_FRIEND_REQUEST_YES"*/, 0);
    if ( !centerButtonLabel )
      goto LABEL_61;
    UILabel__set_text(centerButtonLabel, (System_String_o *)helpButton, 0);
    rightButtonLabel = this->fields.rightButtonLabel;
    helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11113/*"RESULT_FOLLOW_REQUEST_YES"*/, 0);
    if ( !rightButtonLabel )
      goto LABEL_61;
    UILabel__set_text(rightButtonLabel, (System_String_o *)helpButton, 0);
    helpButton = (UnityEngine_Component_o *)this->fields.centerButtonLabel;
    if ( !helpButton )
      goto LABEL_61;
    gameObject = UnityEngine_Component__get_gameObject(helpButton, 0);
    v39 = BattleResultFriendComponent_TypeInfo;
    if ( !BattleResultFriendComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultFriendComponent_TypeInfo);
      v39 = BattleResultFriendComponent_TypeInfo;
    }
    GameObjectExtensions__AddLocalPositionX(gameObject, v39->static_fields->offsetOfferLabelPosition, 0);
    helpButton = (UnityEngine_Component_o *)this->fields.rightButtonLabel;
    if ( !helpButton )
      goto LABEL_61;
    v40 = UnityEngine_Component__get_gameObject(helpButton, 0);
    GameObjectExtensions__AddLocalPositionX(
      v40,
      BattleResultFriendComponent_TypeInfo->static_fields->offsetOfferLabelPosition,
      0);
    helpButton = (UnityEngine_Component_o *)this->fields.leftButton;
    if ( !helpButton )
      goto LABEL_61;
    v41 = UnityEngine_Component__get_gameObject(helpButton, 0);
    GameObjectExtensions__AddLocalPositionX(v41, -this->fields.offsetPosition, 0);
    helpButton = (UnityEngine_Component_o *)this->fields.rightButton;
    if ( !helpButton )
      goto LABEL_61;
    v42 = UnityEngine_Component__get_gameObject(helpButton, 0);
    GameObjectExtensions__AddLocalPositionX(v42, this->fields.offsetPosition, 0);
    helpButton = (UnityEngine_Component_o *)this->fields.rightMarkSprite;
    if ( !helpButton )
      goto LABEL_61;
    v43 = UnityEngine_Component__get_gameObject(helpButton, 0);
    GameObjectExtensions__AddLocalPositionX(
      v43,
      BattleResultFriendComponent_TypeInfo->static_fields->offsetFollowMarkPosition,
      0);
    helpButton = (UnityEngine_Component_o *)this->fields.centerMarkSprite;
    if ( !helpButton )
      goto LABEL_61;
    UISprite__set_spriteName((UISprite_o *)helpButton, (System_String_o *)StringLiteral_20188/*"icon_friend"*/, 0);
    helpButton = (UnityEngine_Component_o *)this->fields.rightMarkSprite;
    if ( !helpButton )
      goto LABEL_61;
    v36 = &StringLiteral_20187/*"icon_follow"*/;
  }
  else
  {
    helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0);
    if ( !helpButton )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 0, 0);
    v22 = this->fields.rightButton;
    if ( !v22 )
      goto LABEL_61;
    helpButton = (UnityEngine_Component_o *)v22->fields.onClick;
    if ( !helpButton )
      goto LABEL_61;
    v23 = helpButton->fields.m_CachedPtr;
    v24 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++HIDWORD(helpButton[1].klass);
    if ( !v23 )
      goto LABEL_61;
    v25 = SLODWORD(helpButton[1].klass);
    if ( (unsigned int)v25 >= *(_DWORD *)(v23 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)helpButton,
        (Il2CppObject *)v7,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = v23 + 8 * v25;
      LODWORD(helpButton[1].klass) = v25 + 1;
      *(_QWORD *)(v26 + 32) = v7;
      sub_1C2D434((CGThumbnailListItem_o *)(v26 + 32), (int32_t)v7, v20, v21);
    }
    centerButton = this->fields.rightButton;
    centerButtonLabel = this->fields.rightButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11119/*"RESULT_FRIEND_REQUEST_YES"*/, 0);
    if ( !centerButtonLabel )
      goto LABEL_61;
    UILabel__set_text(centerButtonLabel, (System_String_o *)helpButton, 0);
    helpButton = (UnityEngine_Component_o *)this->fields.rightButtonLabel;
    if ( !helpButton )
      goto LABEL_61;
    v34 = UnityEngine_Component__get_gameObject(helpButton, 0);
    v35 = BattleResultFriendComponent_TypeInfo;
    if ( !BattleResultFriendComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultFriendComponent_TypeInfo);
      v35 = BattleResultFriendComponent_TypeInfo;
    }
    GameObjectExtensions__AddLocalPositionX(v34, v35->static_fields->offsetOfferLabelPosition, 0);
    helpButton = (UnityEngine_Component_o *)this->fields.rightMarkSprite;
    if ( !helpButton )
      goto LABEL_61;
    v36 = &StringLiteral_20188/*"icon_friend"*/;
  }
  UISprite__set_spriteName((UISprite_o *)helpButton, (System_String_o *)*v36, 0);
  if ( isActiveFriend && !this->fields.followerStatus )
    return;
  v44 = (EventDelegate_o *)sub_1C2D6DC(EventDelegate_TypeInfo);
  EventDelegate___ctor_49171260(v44, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9857/*"OnClickNoActionFriend"*/, 0);
  if ( !centerButton
    || (helpButton = (UnityEngine_Component_o *)centerButton->fields.onClick) == 0
    || (System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)helpButton,
          (Il2CppObject *)v7,
          (const MethodInfo_378B0AC *)Method_System_Collections_Generic_List_EventDelegate__Remove__),
        (helpButton = (UnityEngine_Component_o *)centerButton->fields.onClick) == 0)
    || (v47 = helpButton->fields.m_CachedPtr,
        v48 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++HIDWORD(helpButton[1].klass),
        !v47) )
  {
LABEL_61:
    sub_1C2D6EC(helpButton, v9);
  }
  v49 = SLODWORD(helpButton[1].klass);
  if ( (unsigned int)v49 >= *(_DWORD *)(v47 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)helpButton,
      (Il2CppObject *)v44,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
  }
  else
  {
    v50 = v47 + 8 * v49;
    LODWORD(helpButton[1].klass) = v49 + 1;
    *(_QWORD *)(v50 + 32) = v44;
    sub_1C2D434((CGThumbnailListItem_o *)(v50 + 32), (int32_t)v44, v45, v46);
  }
  v52.fields.r = 0.5;
  v52.fields.g = 0.5;
  v52.fields.b = 0.5;
  v52.fields.a = 1.0;
  UIButtonColor__set_defaultColor((UIButtonColor_o *)centerButton, v52, 0);
  klass = centerButton->klass;
  centerButton->fields.hover = (struct UnityEngine_Color_o)xmmword_C090F0;
  centerButton->fields.pressed = (struct UnityEngine_Color_o)xmmword_C090F0;
  ((void (__fastcall *)(struct UIButton_o *, __int64, __int64, const MethodInfo *))klass->vtable._14_SetState.methodPtr)(
    centerButton,
    3,
    1,
    klass->vtable._14_SetState.method);
  v53.fields.r = 0.5;
  v53.fields.g = 0.5;
  v53.fields.b = 0.5;
  v53.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)centerButtonLabel, v53, 0);
  v54.fields.r = 0.0;
  v54.fields.g = 0.0;
  v54.fields.b = 0.0;
  v54.fields.a = 1.0;
  UILabel__set_effectColor(centerButtonLabel, v54, 0);
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

  if ( (byte_4C2AB0B & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleResultFriendComponent_EndShowServant__);
    sub_1C2D490(&Method_BattleResultFriendComponent_ShowServantConf__);
    sub_1C2D490(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2AB0B = 1;
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
      v7 = (_QWORD *)sub_1C2D4A8(Method_BattleResultFriendComponent_ShowServantConf__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C2D474(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (ServantStatusDialog_EndDelegate_o *)sub_1C2D6DC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v10,
      (Il2CppObject *)this,
      Method_BattleResultFriendComponent_EndShowServant__,
      0);
    if ( Instance )
    {
      CommonUI__OpenServantStatusDialog_31180036((CommonUI_o *)Instance, 5, v6, v10, 0);
      return;
    }
LABEL_10:
    sub_1C2D6EC(otherUser, method);
  }
  BattleResultFriendComponent__endCloseSHowServant(this, v5);
}


void BattleResultFriendComponent__callBackBeginResume(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4C2AB1A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3490/*"CLOSE"*/);
    byte_4C2AB1A = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3490/*"CLOSE"*/, 0);
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
    sub_1C2D6EC(0, classPos);
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

  if ( (byte_4C2AB0D & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3490/*"CLOSE"*/);
    byte_4C2AB0D = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3490/*"CLOSE"*/, 0);
}


void BattleResultFriendComponent__followAssign(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_4C2AB15 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleResultFriendComponent_EndRequestFollow__);
    sub_1C2D490(&Method_BattleResultFriendComponent_followAssign__);
    sub_1C2D490(&Method_NetworkManager_getRequest_FollowAssignRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C2AB15 = 1;
  }
  v3 = Method_BattleResultFriendComponent_followAssign__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_followAssign__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_BattleResultFriendComponent_followAssign__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_EndRequestFollow__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_FollowAssignRequest___);
  if ( !Request_object )
    sub_1C2D6EC(0, v7);
  FollowAssignRequest__beginRequest((FollowAssignRequest_o *)Request_object, this->fields.targetId, 0);
}


void BattleResultFriendComponent__friendOffer(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_4C2AB13 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleResultFriendComponent_EndRequestFriend__);
    sub_1C2D490(&Method_BattleResultFriendComponent_friendOffer__);
    sub_1C2D490(&Method_NetworkManager_getRequest_FriendOfferRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C2AB13 = 1;
  }
  v3 = Method_BattleResultFriendComponent_friendOffer__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_friendOffer__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_BattleResultFriendComponent_friendOffer__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_EndRequestFriend__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_FriendOfferRequest___);
  if ( !Request_object )
    sub_1C2D6EC(0, v7);
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
    sub_1C2D6EC(otherUser, *(_QWORD *)&firstClassId);
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

  if ( (byte_4C2AB05 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleResultFriendComponent_onChangeClass__);
    byte_4C2AB05 = 1;
  }
  v5 = Method_BattleResultFriendComponent_onChangeClass__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_onChangeClass__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C2D4A8(Method_BattleResultFriendComponent_onChangeClass__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  BattleResultFriendComponent__changeClass(this, classPos, v7);
}


void BattleResultFriendComponent__openCore(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  DataManager_o *Instance; // x0
  BattleRootComponent_c *v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UserGameEntity_o *SelfUserGame; // x22
  Il2CppObject *MasterData_object; // x25
  int32_t FollowSum; // w24
  _BOOL4 v11; // w21
  _BOOL4 v12; // w26
  _BOOL4 enableFollowQuest; // w27
  int32_t v14; // w23
  const MethodInfo *v15; // x3
  int v16; // w21
  UILabel_o *countLabel; // x26
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x25
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x0
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  UILabel_o *followCountLabel; // x22
  Il2CppObject *v30; // x24
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  Il2CppObject *v34; // x0
  UILabel_o *confLabel; // x22
  Il2CppObject *v36; // x0
  struct OtherUserGameEntity_o **p_otherUser; // x23
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x1
  _QWORD *v41; // x22
  __int64 naturalAligment; // x9
  __int64 v43; // x8
  const MethodInfo *v44; // x3
  int32_t QuestId; // w22
  int followerGrandGraphId; // w2
  int32_t ReturnTypeByQuestId; // w0
  int32_t followerClassId; // w24
  int32_t ExistLeaderInfo; // w0
  int32_t displayServantType; // w8
  OtherUserGameEntity_o *v51; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v52; // x23
  UnityEngine_Object_o *classButtonControl; // x23
  System_Action_o *v54; // x21
  const MethodInfo *v55; // x2
  struct ClassButtonControlComponent_o *v56; // x20
  ClassButtonControlComponent_CallbackFunc_o *v57; // x21
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x2
  struct ClassButtonControlComponent_o *v61; // x20
  ClassButtonControlComponent_CallbackFunc_o *v62; // x21
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  BattleResultFriendComponent__ChangeFaceAtlas_d__46_o *v65; // x0
  int32_t v66; // w1
  const MethodInfo *v67; // x2
  int32_t friendKeep; // [xsp+8h] [xbp-78h] BYREF
  int32_t FriendSum; // [xsp+Ch] [xbp-74h] BYREF
  Il2CppObject *v70; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C2AB08 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattleResultFriendComponent_changeClass__);
    sub_1C2D490(&Method_BattleResultFriendComponent_onChangeClass__);
    sub_1C2D490(&BattleRootComponent_TypeInfo);
    sub_1C2D490(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_BattleResultFriendComponent___c__DisplayClass47_0__openCore_b__0__);
    sub_1C2D490(&BattleResultFriendComponent___c__DisplayClass47_0_TypeInfo);
    sub_1C2D490(&StringLiteral_5447/*"END_PROC"*/);
    sub_1C2D490(&StringLiteral_11116/*"RESULT_FRIEND_CONF"*/);
    sub_1C2D490(&StringLiteral_25133/*"{0}/{1}"*/);
    sub_1C2D490(&StringLiteral_6464/*"FOLLOW_NUM"*/);
    byte_4C2AB08 = 1;
  }
  v70 = 0;
  entity = 0;
  v3 = sub_1C2D6DC(BattleResultFriendComponent___c__DisplayClass47_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_66;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  if ( !Instance )
    goto LABEL_66;
  FollowSum = UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0);
  Instance = (DataManager_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6464/*"FOLLOW_NUM"*/, 0);
  v11 = FollowSum < (int)Instance;
  v12 = this->fields.followerType == 2;
  if ( !MasterData_object )
    goto LABEL_66;
  enableFollowQuest = this->fields.enableFollowQuest;
  v14 = (int)Instance;
  Instance = (DataManager_o *)TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0);
  if ( !SelfUserGame )
    goto LABEL_66;
  v16 = enableFollowQuest && v11 && v12;
  BattleResultFriendComponent__Layout(this, v16, (int)Instance < SelfUserGame->fields.friendKeep, v15);
  countLabel = this->fields.countLabel;
  FriendSum = TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0);
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FriendSum, v18, v19, v20);
  friendKeep = SelfUserGame->fields.friendKeep;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep, v22, v23, v24);
  Instance = (DataManager_o *)System_String__Format_63499156((System_String_o *)StringLiteral_25133/*"{0}/{1}"*/, v21, v25, 0);
  if ( !countLabel )
    goto LABEL_66;
  UILabel__set_text(countLabel, (System_String_o *)Instance, 0);
  if ( v16 )
  {
    followCountLabel = this->fields.followCountLabel;
    FriendSum = FollowSum;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FriendSum, v26, v27, v28);
    friendKeep = v14;
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep, v31, v32, v33);
    Instance = (DataManager_o *)System_String__Format_63499156((System_String_o *)StringLiteral_25133/*"{0}/{1}"*/, v30, v34, 0);
    if ( !followCountLabel )
      goto LABEL_66;
    UILabel__set_text(followCountLabel, (System_String_o *)Instance, 0);
  }
  confLabel = this->fields.confLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11116/*"RESULT_FRIEND_CONF"*/, 0);
  if ( !confLabel )
    goto LABEL_66;
  UILabel__set_text(confLabel, (System_String_o *)Instance, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  if ( !Instance )
    goto LABEL_66;
  v36 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          this->fields.targetId,
          (const MethodInfo_338A2F4 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
  this->fields.otherUser = (struct OtherUserGameEntity_o *)v36;
  p_otherUser = &this->fields.otherUser;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.otherUser, (int32_t)v36, v38, v39);
  BattleResultFriendComponent__OtherUserChangeLimitCountBySpoilerProtection(this, v40);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  v41 = *(_QWORD **)&Instance->fields._DispLog;
  if ( !v41 )
    goto LABEL_66;
  v5 = BattleRootComponent_TypeInfo;
  naturalAligment = BattleRootComponent_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*v41 + 304LL) >= (unsigned int)naturalAligment
    && *(BattleRootComponent_c **)(*(_QWORD *)(*v41 + 200LL) + 8 * naturalAligment - 8) == BattleRootComponent_TypeInfo )
  {
    v43 = v41[8];
    if ( !v43 )
      goto LABEL_66;
    Instance = *(DataManager_o **)(v43 + 96);
    if ( !Instance )
      goto LABEL_66;
    this->fields.isUseGrandBoard = QuestPhaseEntity__IsUseGrandBoard((QuestPhaseEntity_o *)Instance, 0);
    Instance = (DataManager_o *)v41[8];
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
    ExistLeaderInfo = BattleResultFriendComponent__getExistLeaderInfo(this, followerClassId, followerGrandGraphId, v44);
    displayServantType = this->fields.displayServantType;
    this->fields.followerClassId = ExistLeaderInfo;
    if ( displayServantType == 2 && this->fields.followerGrandGraphId >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
      v51 = *p_otherUser;
      if ( !*p_otherUser )
        goto LABEL_66;
      v52 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      Instance = (DataManager_o *)OtherUserGameEntity__getSvtId(
                                    v51,
                                    this->fields.followerClassId,
                                    this->fields.displayServantType,
                                    this->fields.followerDeckId,
                                    this->fields.followerGrandGraphId,
                                    0);
      if ( !v52 )
        goto LABEL_66;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             v52,
             &entity,
             (int32_t)Instance,
             (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantClassMaster___);
        if ( !entity || !Instance )
          goto LABEL_66;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      &v70,
                                      (int32_t)entity[5].klass,
                                      (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v70 )
            goto LABEL_66;
          followerClassId = (int32_t)v70[4].klass;
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
    if ( v16 )
    {
      *(_BYTE *)(v3 + 24) = EventTutorialMaster__IsTutorialAvailable(-1, 49, 0, 0, 0, 0, 0);
      v54 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(
        v54,
        (Il2CppObject *)v3,
        Method_BattleResultFriendComponent___c__DisplayClass47_0__openCore_b__0__,
        0);
      EventTutorialMaster__CheckTutorial(-1, 49, v54, 0, 0, 0, 0, 0);
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
          v56 = this->fields.classButtonControl;
          v57 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1C2D6DC(ClassButtonControlComponent_CallbackFunc_TypeInfo);
          ClassButtonControlComponent_CallbackFunc___ctor(
            v57,
            (Il2CppObject *)this,
            Method_BattleResultFriendComponent_changeClass__,
            0);
          if ( !v56 )
            goto LABEL_66;
          v56->fields.callbackFunc = v57;
          sub_1C2D434((CGThumbnailListItem_o *)&v56->fields.callbackFunc, (int32_t)v57, v58, v59);
          Instance = (DataManager_o *)this->fields.classButtonControl;
          if ( !Instance )
            goto LABEL_66;
          if ( !ClassButtonControlComponent__setCursor(
                  (ClassButtonControlComponent_o *)Instance,
                  this->fields.followerClassId,
                  0) )
            BattleResultFriendComponent__changeClass(this, this->fields.followerClassId, v60);
          v61 = this->fields.classButtonControl;
          v62 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1C2D6DC(ClassButtonControlComponent_CallbackFunc_TypeInfo);
          ClassButtonControlComponent_CallbackFunc___ctor(
            v62,
            (Il2CppObject *)this,
            (intptr_t)Method_BattleResultFriendComponent_onChangeClass__,
            0);
          if ( !v61 )
            goto LABEL_66;
          v61->fields.callbackFunc = v62;
          sub_1C2D434((CGThumbnailListItem_o *)&v61->fields.callbackFunc, (int32_t)v62, v63, v64);
        }
        else
        {
          BattleResultFriendComponent__changeClass(this, this->fields.followerClassId, v55);
        }
        Instance = (DataManager_o *)this->fields.myFsm;
        if ( Instance )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5447/*"END_PROC"*/, 0);
          return;
        }
      }
    }
LABEL_66:
    sub_1C2D6EC(Instance, v5);
  }
  sub_1C2D9AC(*(_QWORD *)&Instance->fields._DispLog);
  BattleResultFriendComponent__ChangeFaceAtlas_d__46___ctor(v65, v66, v67);
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
  const MethodInfo *v25; // x3

  v16 = enableFollow;
  if ( (byte_4C2AB04 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleResultFriendComponent_changeClass__);
    sub_1C2D490(&Method_BattleResultFriendComponent_onChangeClass__);
    sub_1C2D490(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AB04 = 1;
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
    v19 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1C2D6DC(ClassButtonControlComponent_CallbackFunc_TypeInfo);
    ClassButtonControlComponent_CallbackFunc___ctor(
      v19,
      (Il2CppObject *)this,
      Method_BattleResultFriendComponent_changeClass__,
      0);
    if ( !v18
      || (ClassButtonControlComponent__init(v18, v19, 0, 0, 0, 0), (v20 = this->fields.classButtonControl) == 0)
      || (ClassButtonControlComponent__setCursor(v20, infollowerClassId, 0),
          v22 = this->fields.classButtonControl,
          v23 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1C2D6DC(ClassButtonControlComponent_CallbackFunc_TypeInfo),
          ClassButtonControlComponent_CallbackFunc___ctor(
            v23,
            (Il2CppObject *)this,
            (intptr_t)Method_BattleResultFriendComponent_onChangeClass__,
            0),
          !v22) )
    {
      sub_1C2D6EC(v20, v21);
    }
    v22->fields.callbackFunc = v23;
    sub_1C2D434((CGThumbnailListItem_o *)&v22->fields.callbackFunc, (int32_t)v23, v24, v25);
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
  const MethodInfo *v2; // x2
  const MethodInfo *v3; // x3
  BattleResultFriendComponent__ChangeFaceAtlas_d__46_o *v4; // x19
  BattleResultFriendComponent_o *_4__this; // x20
  Il2CppObject *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_Action_o *releasePerformanceObject; // x8
  UnityEngine_WaitForEndOfFrame_o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *waitForEndOfFrame_5__2; // x1
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  bool result; // w0
  Il2CppObject *v18; // x1
  CGThumbnailListItem_o *v19; // x19
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int v22; // w8
  System_Collections_IEnumerator_o *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct BattleResultFriendComponent___c__DisplayClass46_0_o *_8__1; // x21
  System_Action_o *v27; // x20
  struct BattleResultFriendComponent___c__DisplayClass46_0_o *v28; // x8
  Il2CppObject *v29; // x1
  Il2CppObject *v30; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3

  v4 = this;
  if ( (byte_4C2AB20 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&System_GC_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C2D490(&Method_BattleResultFriendComponent___c__DisplayClass46_0__ChangeFaceAtlas_b__0__);
    sub_1C2D490(&BattleResultFriendComponent___c__DisplayClass46_0_TypeInfo);
    this = (BattleResultFriendComponent__ChangeFaceAtlas_d__46_o *)sub_1C2D490(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4C2AB20 = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v6 = (Il2CppObject *)sub_1C2D6DC(BattleResultFriendComponent___c__DisplayClass46_0_TypeInfo);
      System_Object___ctor(v6, 0);
      v4->fields.__8__1 = (struct BattleResultFriendComponent___c__DisplayClass46_0_o *)v6;
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v6, v7, v8);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__ReleaseFaceBattleAtlas(0);
      if ( !_4__this )
        goto LABEL_31;
      releasePerformanceObject = _4__this->fields.releasePerformanceObject;
      if ( releasePerformanceObject )
        ((void (__fastcall *)(intptr_t, intptr_t))releasePerformanceObject->fields.invoke_impl)(
          releasePerformanceObject->fields.method_code,
          releasePerformanceObject->fields.method);
      BattleResultFriendComponent__openCore(_4__this, method);
      v10 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v10, 0);
      v4->fields._waitForEndOfFrame_5__2 = v10;
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._waitForEndOfFrame_5__2, (int32_t)v10, v11, v12);
      waitForEndOfFrame_5__2 = (Il2CppObject *)v4->fields._waitForEndOfFrame_5__2;
      v4->fields.__2__current = waitForEndOfFrame_5__2;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C2D434(p__2__current, (int32_t)waitForEndOfFrame_5__2, v15, v16);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    case 1:
      v4->fields.__1__state = -1;
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect(0);
      v18 = (Il2CppObject *)v4->fields._waitForEndOfFrame_5__2;
      v4->fields.__2__current = v18;
      v19 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C2D434(v19, (int32_t)v18, v20, v21);
      v22 = 2;
      goto LABEL_30;
    case 2:
      v4->fields.__1__state = -1;
      this = (BattleResultFriendComponent__ChangeFaceAtlas_d__46_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_31;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0, 0);
      this = (BattleResultFriendComponent__ChangeFaceAtlas_d__46_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_31;
      v23 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0);
      v4->fields.__2__current = (Il2CppObject *)v23;
      v19 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C2D434(v19, (int32_t)v23, v24, v25);
      v22 = 3;
      goto LABEL_30;
    case 3:
      _8__1 = v4->fields.__8__1;
      v4->fields.__1__state = -1;
      if ( !_8__1 )
        goto LABEL_31;
      _8__1->fields.isWait = 1;
      v27 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(
        v27,
        (Il2CppObject *)_8__1,
        Method_BattleResultFriendComponent___c__DisplayClass46_0__ChangeFaceAtlas_b__0__,
        0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadFaceAtlas(v27, 1, 0);
LABEL_21:
      v28 = v4->fields.__8__1;
      if ( !v28 )
LABEL_31:
        sub_1C2D6EC(this, method);
      if ( v28->fields.isWait )
      {
        v29 = (Il2CppObject *)v4->fields._waitForEndOfFrame_5__2;
        v4->fields.__2__current = v29;
        v19 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C2D434(v19, (int32_t)v29, (int32_t)v2, v3);
        v22 = 4;
      }
      else
      {
        if ( !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect(0);
        v30 = (Il2CppObject *)v4->fields._waitForEndOfFrame_5__2;
        v4->fields.__2__current = v30;
        v19 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C2D434(v19, (int32_t)v30, v31, v32);
        v22 = 5;
      }
LABEL_30:
      LODWORD(v19[-1].fields._ThumbnailSpritePath_k__BackingField) = v22;
      result = 1;
      break;
    case 4:
      v4->fields.__1__state = -1;
      goto LABEL_21;
    case 5:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_31;
      BattleResultFriendComponent__changeClass(_4__this, _4__this->fields.dispClassId, v2);
LABEL_26:
      result = 0;
      break;
    default:
      goto LABEL_26;
  }
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BattleResultFriendComponent__ChangeFaceAtlas_d__46_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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
  if ( (byte_4C2AB1F & 1) == 0 )
  {
    sub_1C2D490(&EventDelegate_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_9871/*"OnClickTutorialFollow"*/);
    sub_1C2D490(&StringLiteral_13587/*"TUTORIAL_MESSAGE_FOLLOW_OFFER"*/);
    this = (BattleResultFriendComponent___c__DisplayClass47_0_o *)sub_1C2D490(&StringLiteral_11113/*"RESULT_FOLLOW_REQUEST_YES"*/);
    byte_4C2AB1F = 1;
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
                                                                    (System_String_o *)StringLiteral_11113/*"RESULT_FOLLOW_REQUEST_YES"*/,
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
    v9 = (EventDelegate_o *)sub_1C2D6DC(EventDelegate_TypeInfo);
    EventDelegate___ctor_49171260(v9, v6, (System_String_o *)StringLiteral_9871/*"OnClickTutorialFollow"*/, 0);
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
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    }
    else
    {
      v15 = &items->obj.klass + size;
      monitor->fields._size = size + 1;
      v15[4] = (Il2CppClass *)v9;
      sub_1C2D434((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v9, v10, v11);
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
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          this = (BattleResultFriendComponent___c__DisplayClass47_0_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_13587/*"TUTORIAL_MESSAGE_FOLLOW_OFFER"*/,
                                                                          0),
          !Instance) )
    {
LABEL_29:
      sub_1C2D6EC(this, method);
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