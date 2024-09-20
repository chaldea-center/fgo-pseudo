void __fastcall BattleResultFriendComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4A5E34F & 1) == 0 )
  {
    sub_1B885B0(&BattleResultFriendComponent_TypeInfo);
    byte_4A5E34F = 1;
  }
  *BattleResultFriendComponent_TypeInfo->static_fields = (struct BattleResultFriendComponent_StaticFields)0x41A0000041700000LL;
}


void __fastcall BattleResultFriendComponent___ctor(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  this->fields.offsetPosition = 65.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleResultFriendComponent__ChangeFaceAtlas(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5E338 & 1) == 0 )
  {
    sub_1B885B0(&BattleResultFriendComponent__ChangeFaceAtlas_d__44_TypeInfo);
    byte_4A5E338 = 1;
  }
  v3 = sub_1B887FC(BattleResultFriendComponent__ChangeFaceAtlas_d__44_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattleResultFriendComponent__ChangeSupportScene(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1
  struct SceneRootComponent_o *targetRoot; // x20
  __int64 methodPtr_low; // x9
  BattleRootComponent_callBackBeginResume_o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  OtherUserGameEntity_o *otherUser; // x21
  SupportInfoJump_o *v13; // x19
  SceneRootComponent_c *klass; // x8
  Il2CppClass *parent; // x8
  int32_t name; // w21
  QuestRestrictionInfo_o *v17; // x20
  BattleResultFriendComponent_o *v18; // x0
  const MethodInfo *v19; // x1

  if ( (byte_4A5E34A & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleResultFriendComponent_ChangeSupportScene__);
    sub_1B885B0(&Method_BattleResultFriendComponent_callBackBeginResume__);
    sub_1B885B0(&BattleRootComponent_TypeInfo);
    sub_1B885B0(&QuestRestrictionInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&SupportInfoJump_TypeInfo);
    sub_1B885B0(&BattleRootComponent_callBackBeginResume_TypeInfo);
    byte_4A5E34A = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  if ( AvalonSceneManager__checkNowScene(Instance, 10, 0LL) )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    targetRoot = Instance->fields.targetRoot;
    if ( !targetRoot
      || (methodPtr_low = LOBYTE(BattleRootComponent_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(targetRoot->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
      && (BattleRootComponent_c *)targetRoot->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleRootComponent_TypeInfo )
    {
      v7 = (BattleRootComponent_callBackBeginResume_o *)sub_1B887FC(BattleRootComponent_callBackBeginResume_TypeInfo);
      BattleRootComponent_callBackBeginResume___ctor(
        v7,
        (Il2CppObject *)this,
        Method_BattleResultFriendComponent_callBackBeginResume__,
        0LL);
      if ( targetRoot )
      {
        *(_QWORD *)&targetRoot[1].fields.kind = v7;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&targetRoot[1].fields.kind, (int32_t)v7, v8, v9);
        v10 = Method_BattleResultFriendComponent_ChangeSupportScene__;
        if ( (*((_BYTE *)Method_BattleResultFriendComponent_ChangeSupportScene__ + 83) & 2) != 0 )
          v10 = (_QWORD *)sub_1B885C8(Method_BattleResultFriendComponent_ChangeSupportScene__);
        v11 = (System_Reflection_MethodBase_o *)sub_1B88594(v10, v10[4]);
        OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
        otherUser = this->fields.otherUser;
        v13 = (SupportInfoJump_o *)sub_1B887FC(SupportInfoJump_TypeInfo);
        SupportInfoJump___ctor(v13, otherUser, 0, 0, 0LL);
        klass = targetRoot[1].klass;
        if ( klass )
        {
          parent = klass->_1.parent;
          if ( parent )
          {
            name = (int32_t)parent->_1.name;
            v17 = (QuestRestrictionInfo_o *)sub_1B887FC(QuestRestrictionInfo_TypeInfo);
            QuestRestrictionInfo___ctor(v17, name, 0LL);
            if ( v13 )
            {
              SupportInfoJump__SetSetupInfo(v13, 0LL, v17, 0LL);
              Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( Instance )
              {
                AvalonSceneManager__pushScene(Instance, 60, 1, (Il2CppObject *)v13, 0LL);
                return;
              }
            }
          }
        }
      }
LABEL_18:
      sub_1B8880C(Instance, v4);
    }
    sub_1B88ACC(Instance->fields.targetRoot);
    BattleResultFriendComponent__callBackBeginResume(v18, v19);
  }
}


void __fastcall BattleResultFriendComponent__EndRequestFollow(
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

  if ( (byte_4A5E347 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleResultFriendComponent_OnEndRequestDialog__);
    sub_1B885B0(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_11060/*"REQUEST_OK"*/);
    sub_1B885B0(&StringLiteral_11058/*"REQUEST_NG"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    sub_1B885B0(&StringLiteral_21395/*"message"*/);
    sub_1B885B0(&StringLiteral_1212/*"0"*/);
    sub_1B885B0(&StringLiteral_23522/*"status"*/);
    byte_4A5E347 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22055/*"ng"*/, 0LL) )
  {
    myFsm = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v9 = &StringLiteral_11058/*"REQUEST_NG"*/;
      goto LABEL_17;
    }
LABEL_20:
    sub_1B8880C(myFsm, v5);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0LL);
  if ( !myFsm )
    goto LABEL_20;
  v7 = myFsm;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFsm,
          (Il2CppObject *)StringLiteral_21395/*"message"*/,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_13;
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v7,
                                                                       (Il2CppObject *)StringLiteral_21395/*"message"*/,
                                                                       (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_20;
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))myFsm->klass->vtable._3_ToString.method)(
                            myFsm,
                            myFsm->klass->vtable._4_unknown.methodPtr);
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v7,
                                                                       (Il2CppObject *)StringLiteral_23522/*"status"*/,
                                                                       (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_20;
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))myFsm->klass->vtable._3_ToString.method)(
                                                                       myFsm,
                                                                       myFsm->klass->vtable._4_unknown.methodPtr);
  if ( !myFsm )
    goto LABEL_20;
  if ( System_String__Equals_61715348((System_String_o *)myFsm, (System_String_o *)StringLiteral_1212/*"0"*/, 0LL)
    || System_String__IsNullOrEmpty(v8, 0LL) )
  {
LABEL_13:
    myFsm = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v9 = &StringLiteral_11060/*"REQUEST_OK"*/;
LABEL_17:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFsm, (System_String_o *)*v9, 0LL);
      return;
    }
    goto LABEL_20;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (NotificationDialog_ClickDelegate_o *)sub_1B887FC(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_20;
  CommonUI__OpenNotificationDialog_30496496(
    (CommonUI_o *)Instance,
    0LL,
    v8,
    v11,
    -1,
    0,
    0,
    0,
    0,
    1,
    0LL,
    0LL,
    0,
    0,
    0LL,
    1,
    0LL,
    0LL,
    0LL,
    0LL);
}


void __fastcall BattleResultFriendComponent__EndRequestFriend(
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

  if ( (byte_4A5E345 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleResultFriendComponent_OnEndRequestDialog__);
    sub_1B885B0(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_11060/*"REQUEST_OK"*/);
    sub_1B885B0(&StringLiteral_11058/*"REQUEST_NG"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    sub_1B885B0(&StringLiteral_21395/*"message"*/);
    sub_1B885B0(&StringLiteral_1212/*"0"*/);
    sub_1B885B0(&StringLiteral_23522/*"status"*/);
    byte_4A5E345 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22055/*"ng"*/, 0LL) )
  {
    myFsm = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v9 = &StringLiteral_11058/*"REQUEST_NG"*/;
      goto LABEL_17;
    }
LABEL_20:
    sub_1B8880C(myFsm, v5);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0LL);
  if ( !myFsm )
    goto LABEL_20;
  v7 = myFsm;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFsm,
          (Il2CppObject *)StringLiteral_21395/*"message"*/,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_13;
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v7,
                                                                       (Il2CppObject *)StringLiteral_21395/*"message"*/,
                                                                       (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_20;
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))myFsm->klass->vtable._3_ToString.method)(
                            myFsm,
                            myFsm->klass->vtable._4_unknown.methodPtr);
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v7,
                                                                       (Il2CppObject *)StringLiteral_23522/*"status"*/,
                                                                       (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_20;
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))myFsm->klass->vtable._3_ToString.method)(
                                                                       myFsm,
                                                                       myFsm->klass->vtable._4_unknown.methodPtr);
  if ( !myFsm )
    goto LABEL_20;
  if ( System_String__Equals_61715348((System_String_o *)myFsm, (System_String_o *)StringLiteral_1212/*"0"*/, 0LL)
    || System_String__IsNullOrEmpty(v8, 0LL) )
  {
LABEL_13:
    myFsm = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v9 = &StringLiteral_11060/*"REQUEST_OK"*/;
LABEL_17:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFsm, (System_String_o *)*v9, 0LL);
      return;
    }
    goto LABEL_20;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (NotificationDialog_ClickDelegate_o *)sub_1B887FC(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_20;
  CommonUI__OpenNotificationDialog_30496496(
    (CommonUI_o *)Instance,
    0LL,
    v8,
    v11,
    -1,
    0,
    0,
    0,
    0,
    1,
    0LL,
    0LL,
    0,
    0,
    0LL,
    1,
    0LL,
    0LL,
    0LL,
    0LL);
}


void __fastcall BattleResultFriendComponent__EndShowServant(
        BattleResultFriendComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A5E33D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BattleResultFriendComponent_endCloseSHowServant__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E33D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleResultFriendComponent_endCloseSHowServant__, 0LL);
  if ( !Instance )
    sub_1B8880C(v6, v7);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v5, 0LL);
}


void __fastcall BattleResultFriendComponent__Init(
        BattleResultFriendComponent_o *this,
        System_Action_o *releasePerformanceObject,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *root; // x0
  UnityEngine_Object_o *friendIconComp; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_Object_array *ComponentsInChildren_object; // x0
  __int64 v10; // x8
  System_Object_array *v11; // x21
  unsigned __int64 v12; // x24
  Il2CppObject **m_Items; // x25
  UnityEngine_Object_o *v14; // x22

  if ( (byte_4A5E334 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel____76153752);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E334 = 1;
  }
  root = this->fields.root;
  if ( !root )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(root, 0, 0LL);
  friendIconComp = (UnityEngine_Object_o *)this->fields.friendIconComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(friendIconComp, 0LL, 0LL) )
    goto LABEL_20;
  root = (UnityEngine_GameObject_o *)this->fields.friendIconComp;
  if ( !root || (root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)root, 0LL)) == 0LL )
LABEL_22:
    sub_1B8880C(root, releasePerformanceObject);
  ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                  root,
                                  1,
                                  (const MethodInfo_2ECFB58 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel____76153752);
  if ( ComponentsInChildren_object )
  {
    v10 = *(_QWORD *)&ComponentsInChildren_object->max_length;
    v11 = ComponentsInChildren_object;
    if ( (int)v10 >= 1 )
    {
      v12 = 0LL;
      m_Items = ComponentsInChildren_object->m_Items;
      do
      {
        if ( v12 >= (unsigned int)v10 )
LABEL_21:
          sub_1B88814(ComponentsInChildren_object, releasePerformanceObject);
        v14 = (UnityEngine_Object_o *)m_Items[v12];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        ComponentsInChildren_object = (System_Object_array *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
        if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
        {
          if ( v12 >= v11->max_length )
            goto LABEL_21;
          root = (UnityEngine_GameObject_o *)m_Items[v12];
          if ( !root )
            goto LABEL_22;
          UILabel__SetDefaultFont((UILabel_o *)root, 0LL);
        }
        LODWORD(v10) = v11->max_length;
        ++v12;
      }
      while ( (__int64)v12 < (int)v10 );
    }
  }
LABEL_20:
  this->fields.releasePerformanceObject = releasePerformanceObject;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.releasePerformanceObject,
    (int32_t)releasePerformanceObject,
    v7,
    v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultFriendComponent__Layout(
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
  void *v13; // x23
  char v14; // w24
  System_String_o *v15; // x1
  System_String_o **v16; // x8
  int v17; // w21
  System_String_o **v18; // x24
  const MethodInfo *v19; // x3
  System_String_o *v20; // x23
  UILabel_o *titleLabel; // x21
  UILabel_o *friendWarningLabel; // x20
  int32_t followerStatus; // [xsp+Ch] [xbp-54h] BYREF

  v5 = isActiveFriend;
  v6 = isActiveFollow;
  if ( (byte_4A5E34C & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11096/*"RESULT_FRIENDANDFOLLOW_TITLE"*/);
    sub_1B885B0(&StringLiteral_11098/*"RESULT_FRIEND_ERR_{0}"*/);
    sub_1B885B0(&StringLiteral_11102/*"RESULT_MAXFRIEND_WARNING"*/);
    sub_1B885B0(&StringLiteral_11101/*"RESULT_FRIEND_TITLE"*/);
    sub_1B885B0(&StringLiteral_11095/*"RESULT_FOLLOW_TITLE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E34C = 1;
  }
  v8 = StringLiteral_11102/*"RESULT_MAXFRIEND_WARNING"*/;
  followerStatus = this->fields.followerStatus;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &followerStatus, isActiveFriend, method, v4);
  v10 = System_String__Format((System_String_o *)StringLiteral_11098/*"RESULT_FRIEND_ERR_{0}"*/, v9, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  errLabel = LocalizationManager__Get(v10, 0LL);
  if ( !v10 )
    goto LABEL_33;
  v13 = errLabel;
  errLabel = (System_String_o *)System_String__Equals_61715348(v10, errLabel, 0LL);
  if ( !this->fields.errLabel )
    goto LABEL_33;
  v14 = (char)errLabel;
  v15 = (System_String_o *)(((unsigned __int8)errLabel & 1) != 0 ? StringLiteral_1/*""*/ : v13);
  UILabel__set_text(this->fields.errLabel, v15, 0LL);
  if ( v14 & 1 | (!v6 || !v5) )
  {
    v10 = (System_String_o *)v8;
  }
  else
  {
    errLabel = (System_String_o *)this->fields.errLabel;
    if ( !errLabel )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)errLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    LOBYTE(v5) = 0;
  }
  errLabel = (System_String_o *)this->fields.followCountRoot;
  if ( !errLabel )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)errLabel, v6, 0LL);
  errLabel = (System_String_o *)this->fields.friendWarningLabel;
  if ( !errLabel )
    goto LABEL_33;
  errLabel = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)errLabel, 0LL);
  if ( !errLabel )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)errLabel, !v5, 0LL);
  errLabel = (System_String_o *)this->fields.countRoot;
  if ( !errLabel )
    goto LABEL_33;
  v16 = (System_String_o **)&StringLiteral_11096/*"RESULT_FRIENDANDFOLLOW_TITLE"*/;
  v17 = v6;
  if ( !v17 )
    v16 = (System_String_o **)&StringLiteral_11101/*"RESULT_FRIEND_TITLE"*/;
  if ( v5 )
    v18 = v16;
  else
    v18 = (System_String_o **)&StringLiteral_11095/*"RESULT_FOLLOW_TITLE"*/;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)errLabel, v5, 0LL);
  BattleResultFriendComponent__SetupButtons(this, v17, v5, v19);
  v20 = *v18;
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  errLabel = LocalizationManager__Get(v20, 0LL);
  if ( !titleLabel )
    goto LABEL_33;
  UILabel__set_text(titleLabel, errLabel, 0LL);
  if ( v5 )
    goto LABEL_31;
  friendWarningLabel = this->fields.friendWarningLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  errLabel = LocalizationManager__Get(v10, 0LL);
  if ( !friendWarningLabel )
LABEL_33:
    sub_1B8880C(errLabel, v12);
  UILabel__set_text(friendWarningLabel, errLabel, 0LL);
LABEL_31:
  errLabel = (System_String_o *)this->fields.countGrid;
  if ( !errLabel )
    goto LABEL_33;
  ((void (__fastcall *)(System_String_o *, Il2CppMethodPointer))errLabel->klass->vtable._8_Equals.method)(
    errLabel,
    errLabel->klass->vtable._9_GetTypeCode.methodPtr);
}


void __fastcall BattleResultFriendComponent__OnClickFollow(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A5E342 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6434/*"FOLLOW_CONNECT"*/);
    byte_4A5E342 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_6434/*"FOLLOW_CONNECT"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickFriend(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A5E33F & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3839/*"CONNECT"*/);
    byte_4A5E33F = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3839/*"CONNECT"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickHelp(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4A5E34E & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleResultFriendComponent_OnClickHelp__);
    byte_4A5E34E = 1;
  }
  v2 = Method_BattleResultFriendComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1B885C8(Method_BattleResultFriendComponent_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_1B88594(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 49, 0LL, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickNo(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A5E341 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9239/*"NEXT"*/);
    byte_4A5E341 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9239/*"NEXT"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickNoActionFriend(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4A5E340 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleResultFriendComponent_OnClickNoActionFriend__);
    byte_4A5E340 = 1;
  }
  v2 = Method_BattleResultFriendComponent_OnClickNoActionFriend__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_OnClickNoActionFriend__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1B885C8(Method_BattleResultFriendComponent_OnClickNoActionFriend__);
  v3 = (System_Reflection_MethodBase_o *)sub_1B88594(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 2, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickSupportInfo(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A5E349 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3440/*"CHANGE_SUPPORT"*/);
    byte_4A5E349 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3440/*"CHANGE_SUPPORT"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickTutorialFollow(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  ServantStatusBattleListViewItem_o *v7; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5E343 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E343 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseTutorialNotificationDialogArrow((CommonUI_o *)Instance, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
  if ( !Instance )
    goto LABEL_12;
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          (const MethodInfo_311DBBC *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__) )
    goto LABEL_11;
  Instance = entity;
  if ( !entity )
LABEL_12:
    sub_1B8880C(Instance, v4);
  v7 = (ServantStatusBattleListViewItem_o *)&entity[1];
  if ( entity[1].klass )
  {
    v7->klass = 0LL;
    sub_1B88554(v7, 0, v5, v6);
  }
LABEL_11:
  BattleResultFriendComponent__OnClickFollow(this, v4);
}


void __fastcall BattleResultFriendComponent__OnEndRequestDialog(
        BattleResultFriendComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A5E348 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_11060/*"REQUEST_OK"*/);
    byte_4A5E348 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1B8880C(Instance, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_11060/*"REQUEST_OK"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__Open(BattleResultFriendComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4A5E337 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_9239/*"NEXT"*/);
    sub_1B885B0(&StringLiteral_6438/*"FOLLOW_NUM"*/);
    byte_4A5E337 = 1;
  }
  if ( this->fields.followerType != 2 )
    goto LABEL_11;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  if ( !Instance )
    goto LABEL_21;
  FollowSum = UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0LL);
  Instance = (DataManager_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6438/*"FOLLOW_NUM"*/, 0LL);
  v7 = FollowSum < (int)Instance;
  v8 = this->fields.followerType == 2;
  if ( !MasterData_object )
    goto LABEL_21;
  enableFollowQuest = this->fields.enableFollowQuest;
  Instance = (DataManager_o *)TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0LL);
  if ( !SelfUserGame )
    goto LABEL_21;
  if ( (!enableFollowQuest || !v7 || !v8) && (int)Instance >= SelfUserGame->fields.friendKeep )
  {
LABEL_11:
    Instance = (DataManager_o *)this->fields.myFsm;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9239/*"NEXT"*/, 0LL);
      return;
    }
LABEL_21:
    sub_1B8880C(Instance, method);
  }
  Instance = (DataManager_o *)this->fields.followTutorialMask;
  if ( !Instance )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.followTutorialButton;
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    v11 = BattleResultFriendComponent__ChangeFaceAtlas(this, v10);
    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
  }
  else
  {
    BattleResultFriendComponent__openCore(this, v10);
  }
}


void __fastcall BattleResultFriendComponent__OpenHelpDialog(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 49, 0LL, 0LL);
}


void __fastcall BattleResultFriendComponent__OtherUserChangeLimitCountBySpoilerProtection(
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
  struct ServantLeaderInfo_array *eventUserSvtLeaderHash; // x19
  int v11; // w8
  unsigned int v12; // w20

  if ( (byte_4A5E33A & 1) == 0 )
  {
    sub_1B885B0(&OptionManager_TypeInfo);
    byte_4A5E33A = 1;
  }
  if ( this->fields.otherUser )
  {
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    SpoilerSetting = (ServantLeaderInfo_o *)OptionManager__GetSpoilerSetting(0LL);
    if ( ((unsigned __int8)SpoilerSetting & 1) == 0 )
    {
      otherUser = this->fields.otherUser;
      if ( !otherUser )
        goto LABEL_23;
      userSvtLeaderHash = otherUser->fields.userSvtLeaderHash;
      if ( !userSvtLeaderHash )
        goto LABEL_23;
      max_length = userSvtLeaderHash->max_length;
      if ( max_length >= 1 )
      {
        v8 = 0;
        while ( v8 < max_length )
        {
          SpoilerSetting = userSvtLeaderHash->m_Items[v8];
          if ( !SpoilerSetting )
            goto LABEL_23;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0LL);
          max_length = userSvtLeaderHash->max_length;
          if ( (int)++v8 >= max_length )
            goto LABEL_14;
        }
LABEL_22:
        sub_1B88814(SpoilerSetting, v4);
      }
LABEL_14:
      v9 = this->fields.otherUser;
      if ( !v9 || (eventUserSvtLeaderHash = v9->fields.eventUserSvtLeaderHash) == 0LL )
LABEL_23:
        sub_1B8880C(SpoilerSetting, v4);
      v11 = eventUserSvtLeaderHash->max_length;
      if ( v11 >= 1 )
      {
        v12 = 0;
        while ( v12 < v11 )
        {
          SpoilerSetting = eventUserSvtLeaderHash->m_Items[v12];
          if ( !SpoilerSetting )
            goto LABEL_23;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0LL);
          v11 = eventUserSvtLeaderHash->max_length;
          if ( (int)++v12 >= v11 )
            return;
        }
        goto LABEL_22;
      }
    }
  }
}


void __fastcall BattleResultFriendComponent__ServantConfClick(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A5E33B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9646/*"OPEN_SERVANT"*/);
    byte_4A5E33B = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9646/*"OPEN_SERVANT"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__SetupButtons(
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
  __int64 v14; // x8
  _QWORD *v15; // x9
  __int64 klass_low; // x10
  __int64 v17; // x8
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  struct UIButton_o *v22; // x8
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  struct UIButton_o *rightButton; // x8
  __int64 v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  __int64 v31; // x8
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
  int32_t v46; // w3
  __int64 v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  __int64 v50; // x8
  UIButton_c *klass; // x8
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5E34D & 1) == 0 )
  {
    sub_1B885B0(&BattleResultFriendComponent_TypeInfo);
    sub_1B885B0(&EventDelegate_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDelegate__Remove__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_9840/*"OnClickFriend"*/);
    sub_1B885B0(&StringLiteral_9860/*"OnClickNoActionFriend"*/);
    sub_1B885B0(&StringLiteral_11100/*"RESULT_FRIEND_REQUEST_YES"*/);
    sub_1B885B0(&StringLiteral_11094/*"RESULT_FOLLOW_REQUEST_YES"*/);
    sub_1B885B0(&StringLiteral_9839/*"OnClickFollow"*/);
    sub_1B885B0(&StringLiteral_20153/*"icon_friend"*/);
    sub_1B885B0(&StringLiteral_11099/*"RESULT_FRIEND_REQUEST_NO"*/);
    sub_1B885B0(&StringLiteral_20152/*"icon_follow"*/);
    byte_4A5E34D = 1;
  }
  v7 = (EventDelegate_o *)sub_1B887FC(EventDelegate_TypeInfo);
  EventDelegate___ctor_46787224(v7, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9840/*"OnClickFriend"*/, 0LL);
  v8 = (EventDelegate_o *)sub_1B887FC(EventDelegate_TypeInfo);
  EventDelegate___ctor_46787224(v8, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9839/*"OnClickFollow"*/, 0LL);
  helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
  if ( !helpButton )
    goto LABEL_61;
  helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL);
  if ( !helpButton )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 1, 0LL);
  leftButtonLabel = this->fields.leftButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11099/*"RESULT_FRIEND_REQUEST_NO"*/, 0LL);
  if ( !leftButtonLabel )
    goto LABEL_61;
  UILabel__set_text(leftButtonLabel, (System_String_o *)helpButton, 0LL);
  helpButton = (UnityEngine_Component_o *)this->fields.centerButton;
  if ( !helpButton )
    goto LABEL_61;
  if ( isActiveFollow )
  {
    helpButton = (UnityEngine_Component_o *)helpButton[8].monitor;
    if ( !helpButton )
      goto LABEL_61;
    v14 = *(_QWORD *)&helpButton->fields.m_CachedPtr;
    v15 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++HIDWORD(helpButton[1].klass);
    if ( !v14 )
      goto LABEL_61;
    klass_low = SLODWORD(helpButton[1].klass);
    if ( (unsigned int)klass_low >= *(_DWORD *)(v14 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)helpButton,
        (Il2CppObject *)v7,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    }
    else
    {
      v17 = v14 + 8 * klass_low;
      LODWORD(helpButton[1].klass) = klass_low + 1;
      *(_QWORD *)(v17 + 32) = v7;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 32), (int32_t)v7, v12, v13);
    }
    rightButton = this->fields.rightButton;
    if ( !rightButton )
      goto LABEL_61;
    helpButton = (UnityEngine_Component_o *)rightButton->fields.onClick;
    if ( !helpButton )
      goto LABEL_61;
    v28 = *(_QWORD *)&helpButton->fields.m_CachedPtr;
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
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    }
    else
    {
      v31 = v28 + 8 * v30;
      LODWORD(helpButton[1].klass) = v30 + 1;
      *(_QWORD *)(v31 + 32) = v8;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 32), (int32_t)v8, v18, v19);
    }
    centerButton = this->fields.centerButton;
    centerButtonLabel = this->fields.centerButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11100/*"RESULT_FRIEND_REQUEST_YES"*/, 0LL);
    if ( !centerButtonLabel )
      goto LABEL_61;
    UILabel__set_text(centerButtonLabel, (System_String_o *)helpButton, 0LL);
    rightButtonLabel = this->fields.rightButtonLabel;
    helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11094/*"RESULT_FOLLOW_REQUEST_YES"*/, 0LL);
    if ( !rightButtonLabel )
      goto LABEL_61;
    UILabel__set_text(rightButtonLabel, (System_String_o *)helpButton, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.centerButtonLabel;
    if ( !helpButton )
      goto LABEL_61;
    gameObject = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    v39 = BattleResultFriendComponent_TypeInfo;
    if ( !BattleResultFriendComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultFriendComponent_TypeInfo);
      v39 = BattleResultFriendComponent_TypeInfo;
    }
    GameObjectExtensions__AddLocalPositionX(gameObject, v39->static_fields->offsetOfferLabelPosition, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightButtonLabel;
    if ( !helpButton )
      goto LABEL_61;
    v40 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    GameObjectExtensions__AddLocalPositionX(
      v40,
      BattleResultFriendComponent_TypeInfo->static_fields->offsetOfferLabelPosition,
      0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.leftButton;
    if ( !helpButton )
      goto LABEL_61;
    v41 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    GameObjectExtensions__AddLocalPositionX(v41, -this->fields.offsetPosition, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightButton;
    if ( !helpButton )
      goto LABEL_61;
    v42 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    GameObjectExtensions__AddLocalPositionX(v42, this->fields.offsetPosition, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightMarkSprite;
    if ( !helpButton )
      goto LABEL_61;
    v43 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    GameObjectExtensions__AddLocalPositionX(
      v43,
      BattleResultFriendComponent_TypeInfo->static_fields->offsetFollowMarkPosition,
      0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.centerMarkSprite;
    if ( !helpButton )
      goto LABEL_61;
    UISprite__set_spriteName((UISprite_o *)helpButton, (System_String_o *)StringLiteral_20153/*"icon_friend"*/, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightMarkSprite;
    if ( !helpButton )
      goto LABEL_61;
    v36 = &StringLiteral_20152/*"icon_follow"*/;
  }
  else
  {
    helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL);
    if ( !helpButton )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 0, 0LL);
    v22 = this->fields.rightButton;
    if ( !v22 )
      goto LABEL_61;
    helpButton = (UnityEngine_Component_o *)v22->fields.onClick;
    if ( !helpButton )
      goto LABEL_61;
    v23 = *(_QWORD *)&helpButton->fields.m_CachedPtr;
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
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = v23 + 8 * v25;
      LODWORD(helpButton[1].klass) = v25 + 1;
      *(_QWORD *)(v26 + 32) = v7;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 32), (int32_t)v7, v20, v21);
    }
    centerButton = this->fields.rightButton;
    centerButtonLabel = this->fields.rightButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11100/*"RESULT_FRIEND_REQUEST_YES"*/, 0LL);
    if ( !centerButtonLabel )
      goto LABEL_61;
    UILabel__set_text(centerButtonLabel, (System_String_o *)helpButton, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightButtonLabel;
    if ( !helpButton )
      goto LABEL_61;
    v34 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    v35 = BattleResultFriendComponent_TypeInfo;
    if ( !BattleResultFriendComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultFriendComponent_TypeInfo);
      v35 = BattleResultFriendComponent_TypeInfo;
    }
    GameObjectExtensions__AddLocalPositionX(v34, v35->static_fields->offsetOfferLabelPosition, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightMarkSprite;
    if ( !helpButton )
      goto LABEL_61;
    v36 = &StringLiteral_20153/*"icon_friend"*/;
  }
  UISprite__set_spriteName((UISprite_o *)helpButton, (System_String_o *)*v36, 0LL);
  if ( isActiveFriend && !this->fields.followerStatus )
    return;
  v44 = (EventDelegate_o *)sub_1B887FC(EventDelegate_TypeInfo);
  EventDelegate___ctor_46787224(v44, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9860/*"OnClickNoActionFriend"*/, 0LL);
  if ( !centerButton
    || (helpButton = (UnityEngine_Component_o *)centerButton->fields.onClick) == 0LL
    || (System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)helpButton,
          (Il2CppObject *)v7,
          (const MethodInfo_34FED5C *)Method_System_Collections_Generic_List_EventDelegate__Remove__),
        (helpButton = (UnityEngine_Component_o *)centerButton->fields.onClick) == 0LL)
    || (v47 = *(_QWORD *)&helpButton->fields.m_CachedPtr,
        v48 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++HIDWORD(helpButton[1].klass),
        !v47) )
  {
LABEL_61:
    sub_1B8880C(helpButton, v9);
  }
  v49 = SLODWORD(helpButton[1].klass);
  if ( (unsigned int)v49 >= *(_DWORD *)(v47 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)helpButton,
      (Il2CppObject *)v44,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
  }
  else
  {
    v50 = v47 + 8 * v49;
    LODWORD(helpButton[1].klass) = v49 + 1;
    *(_QWORD *)(v50 + 32) = v44;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v50 + 32), (int32_t)v44, v45, v46);
  }
  v52.fields.r = 0.5;
  v52.fields.g = 0.5;
  v52.fields.b = 0.5;
  v52.fields.a = 1.0;
  UIButtonColor__set_defaultColor((UIButtonColor_o *)centerButton, v52, 0LL);
  klass = centerButton->klass;
  centerButton->fields.hover = (struct UnityEngine_Color_o)xmmword_BB4110;
  centerButton->fields.pressed = (struct UnityEngine_Color_o)xmmword_BB4110;
  ((void (__fastcall *)(struct UIButton_o *, __int64, __int64, Il2CppMethodPointer))klass->vtable._14_SetState.method)(
    centerButton,
    3LL,
    1LL,
    klass->vtable._15_OnClick.methodPtr);
  v53.fields.r = 0.5;
  v53.fields.g = 0.5;
  v53.fields.b = 0.5;
  v53.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)centerButtonLabel, v53, 0LL);
  v54.fields.r = 0.0;
  v54.fields.g = 0.0;
  v54.fields.b = 0.0;
  v54.fields.a = 1.0;
  UILabel__set_effectColor(centerButtonLabel, v54, 0LL);
}


void __fastcall BattleResultFriendComponent__ShowServantConf(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  OtherUserGameEntity_o *otherUser; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  const MethodInfo *v5; // x1
  ServantLeaderInfo_o *v6; // x20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  Il2CppObject *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v10; // x22

  if ( (byte_4A5E33C & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleResultFriendComponent_EndShowServant__);
    sub_1B885B0(&Method_BattleResultFriendComponent_ShowServantConf__);
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E33C = 1;
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
                        0LL);
  if ( ServantLeaderInfo )
  {
    v6 = ServantLeaderInfo;
    v7 = Method_BattleResultFriendComponent_ShowServantConf__;
    if ( (*((_BYTE *)Method_BattleResultFriendComponent_ShowServantConf__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B885C8(Method_BattleResultFriendComponent_ShowServantConf__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B88594(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v10,
      (Il2CppObject *)this,
      Method_BattleResultFriendComponent_EndShowServant__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenServantStatusDialog_30506432((CommonUI_o *)Instance, 5, v6, v10, 0LL);
      return;
    }
LABEL_10:
    sub_1B8880C(otherUser, method);
  }
  BattleResultFriendComponent__endCloseSHowServant(this, v5);
}


void __fastcall BattleResultFriendComponent__callBackBeginResume(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A5E34B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3580/*"CLOSE"*/);
    byte_4A5E34B = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3580/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__changeClass(
        BattleResultFriendComponent_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  FriendIconComponent_o *friendIconComp; // x0

  friendIconComp = this->fields.friendIconComp;
  this->fields.dispClassId = classPos;
  if ( !friendIconComp )
    sub_1B8880C(0LL, classPos);
  FriendIconComponent__Set(
    friendIconComp,
    this->fields.otherUser,
    1,
    classPos,
    this->fields.displayServantType,
    this->fields.followerType,
    this->fields.followerDeckId,
    0LL,
    0LL);
}


void __fastcall BattleResultFriendComponent__endCloseSHowServant(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4A5E33E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3580/*"CLOSE"*/);
    byte_4A5E33E = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3580/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__followAssign(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_4A5E346 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleResultFriendComponent_EndRequestFollow__);
    sub_1B885B0(&Method_BattleResultFriendComponent_followAssign__);
    sub_1B885B0(&Method_NetworkManager_getRequest_FollowAssignRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A5E346 = 1;
  }
  v3 = Method_BattleResultFriendComponent_followAssign__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_followAssign__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_BattleResultFriendComponent_followAssign__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_EndRequestFollow__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_FollowAssignRequest___);
  if ( !Request_object )
    sub_1B8880C(0LL, v7);
  FollowAssignRequest__beginRequest((FollowAssignRequest_o *)Request_object, this->fields.targetId, 0LL);
}


void __fastcall BattleResultFriendComponent__friendOffer(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_4A5E344 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleResultFriendComponent_EndRequestFriend__);
    sub_1B885B0(&Method_BattleResultFriendComponent_friendOffer__);
    sub_1B885B0(&Method_NetworkManager_getRequest_FriendOfferRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A5E344 = 1;
  }
  v3 = Method_BattleResultFriendComponent_friendOffer__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_friendOffer__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_BattleResultFriendComponent_friendOffer__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_EndRequestFriend__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_FriendOfferRequest___);
  if ( !Request_object )
    sub_1B8880C(0LL, v7);
  FriendOfferRequest__beginRequest((FriendOfferRequest_o *)Request_object, this->fields.targetId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleResultFriendComponent__getExistLeaderInfo(
        BattleResultFriendComponent_o *this,
        int32_t firstClassId,
        const MethodInfo *method)
{
  OtherUserGameEntity_o *otherUser; // x0
  int32_t v5; // w19
  struct OtherUserGameEntity_o *v6; // x8
  __int64 v7; // x9
  __int64 v8; // x9
  __int64 v9; // x8
  __int64 *i; // x9
  __int64 v11; // x10

  otherUser = this->fields.otherUser;
  if ( !otherUser )
    goto LABEL_16;
  v5 = firstClassId;
  otherUser = (OtherUserGameEntity_o *)OtherUserGameEntity__getServantLeaderInfo(
                                         otherUser,
                                         firstClassId,
                                         0,
                                         this->fields.displayServantType,
                                         this->fields.followerDeckId,
                                         0LL);
  if ( otherUser && otherUser->fields.friendCode )
    return v5;
  v6 = this->fields.otherUser;
  if ( !v6 )
    goto LABEL_16;
  v7 = 72LL;
  if ( this->fields.displayServantType )
    v7 = 80LL;
  v8 = *(__int64 *)((char *)&v6->klass + v7);
  if ( !v8 )
LABEL_16:
    sub_1B8880C(otherUser, *(_QWORD *)&firstClassId);
  v5 = -1;
  if ( (int)*(_QWORD *)(v8 + 24) >= 1 )
  {
    v9 = (unsigned int)*(_QWORD *)(v8 + 24);
    for ( i = (__int64 *)(v8 + 32); ; ++i )
    {
      v11 = *i;
      if ( *i )
      {
        if ( *(_QWORD *)(v11 + 40) )
          break;
      }
      if ( !--v9 )
        return -1;
    }
    return *(_DWORD *)(v11 + 32);
  }
  return v5;
}


void __fastcall BattleResultFriendComponent__onChangeClass(
        BattleResultFriendComponent_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4A5E336 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleResultFriendComponent_onChangeClass__);
    byte_4A5E336 = 1;
  }
  v5 = Method_BattleResultFriendComponent_onChangeClass__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_onChangeClass__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B885C8(Method_BattleResultFriendComponent_onChangeClass__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  BattleResultFriendComponent__changeClass(this, classPos, v7);
}


void __fastcall BattleResultFriendComponent__openCore(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  UserGameEntity_o *SelfUserGame; // x22
  Il2CppObject *MasterData_object; // x25
  int32_t FollowSum; // w24
  _BOOL4 v11; // w21
  _BOOL4 v12; // w26
  _BOOL4 enableFollowQuest; // w27
  int v14; // w23
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
  int32_t v37; // w2
  int32_t v38; // w3
  const MethodInfo *v39; // x1
  struct BattleResultComponent_o *parentComp; // x8
  struct BattleResultComponent_resultData_o *battleResult; // x8
  const MethodInfo *v42; // x2
  _BOOL4 IsNeedUseEventSupport; // w8
  int32_t followerClassId; // w22
  int32_t ExistLeaderInfo; // w0
  UnityEngine_Object_o *classButtonControl; // x22
  System_Action_o *v47; // x21
  const MethodInfo *v48; // x2
  int32_t friendKeep; // [xsp+0h] [xbp-70h] BYREF
  int32_t FriendSum; // [xsp+4h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5E339 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1B885B0(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_BattleResultFriendComponent___c__DisplayClass45_0__openCore_b__0__);
    sub_1B885B0(&BattleResultFriendComponent___c__DisplayClass45_0_TypeInfo);
    sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    sub_1B885B0(&StringLiteral_11097/*"RESULT_FRIEND_CONF"*/);
    sub_1B885B0(&StringLiteral_25054/*"{0}/{1}"*/);
    sub_1B885B0(&StringLiteral_6438/*"FOLLOW_NUM"*/);
    byte_4A5E339 = 1;
  }
  entity = 0LL;
  v3 = sub_1B887FC(BattleResultFriendComponent___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_36;
  *(_QWORD *)(v3 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  if ( !Instance )
    goto LABEL_36;
  FollowSum = UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0LL);
  Instance = (DataManager_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6438/*"FOLLOW_NUM"*/, 0LL);
  v11 = FollowSum < (int)Instance;
  v12 = this->fields.followerType == 2;
  if ( !MasterData_object )
    goto LABEL_36;
  enableFollowQuest = this->fields.enableFollowQuest;
  v14 = (int)Instance;
  Instance = (DataManager_o *)TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0LL);
  if ( !SelfUserGame )
    goto LABEL_36;
  v16 = enableFollowQuest && v11 && v12;
  BattleResultFriendComponent__Layout(this, v16, (int)Instance < SelfUserGame->fields.friendKeep, v15);
  countLabel = this->fields.countLabel;
  FriendSum = TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0LL);
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FriendSum, v18, v19, v20);
  friendKeep = SelfUserGame->fields.friendKeep;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep, v22, v23, v24);
  Instance = (DataManager_o *)System_String__Format_61721404((System_String_o *)StringLiteral_25054/*"{0}/{1}"*/, v21, v25, 0LL);
  if ( !countLabel )
    goto LABEL_36;
  UILabel__set_text(countLabel, (System_String_o *)Instance, 0LL);
  if ( v16 )
  {
    followCountLabel = this->fields.followCountLabel;
    FriendSum = FollowSum;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FriendSum, v26, v27, v28);
    friendKeep = v14;
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep, v31, v32, v33);
    Instance = (DataManager_o *)System_String__Format_61721404((System_String_o *)StringLiteral_25054/*"{0}/{1}"*/, v30, v34, 0LL);
    if ( !followCountLabel )
      goto LABEL_36;
    UILabel__set_text(followCountLabel, (System_String_o *)Instance, 0LL);
  }
  confLabel = this->fields.confLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11097/*"RESULT_FRIEND_CONF"*/, 0LL);
  if ( !confLabel )
    goto LABEL_36;
  UILabel__set_text(confLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  if ( !Instance )
    goto LABEL_36;
  v36 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          this->fields.targetId,
          (const MethodInfo_311DAE0 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
  this->fields.otherUser = (struct OtherUserGameEntity_o *)v36;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.otherUser, (int32_t)v36, v37, v38);
  BattleResultFriendComponent__OtherUserChangeLimitCountBySpoilerProtection(this, v39);
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  parentComp = this->fields.parentComp;
  if ( !parentComp )
    goto LABEL_36;
  battleResult = parentComp->fields.battleResult;
  if ( !battleResult || !Instance )
    goto LABEL_36;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    battleResult->fields.eventId,
    (const MethodInfo_311D988 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( entity )
    IsNeedUseEventSupport = EventDetailEntity__IsNeedUseEventSupport((EventDetailEntity_o *)entity, 0LL);
  else
    IsNeedUseEventSupport = 0;
  followerClassId = this->fields.followerClassId;
  this->fields.displayServantType = IsNeedUseEventSupport;
  ExistLeaderInfo = BattleResultFriendComponent__getExistLeaderInfo(this, followerClassId, v42);
  this->fields.followerClassId = ExistLeaderInfo;
  if ( followerClassId != ExistLeaderInfo )
  {
    classButtonControl = (UnityEngine_Object_o *)this->fields.classButtonControl;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(classButtonControl, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.classButtonControl;
      if ( !Instance )
        goto LABEL_36;
      ClassButtonControlComponent__setCursor(
        (ClassButtonControlComponent_o *)Instance,
        this->fields.followerClassId,
        0LL);
    }
  }
  this->fields.dispClassId = this->fields.followerClassId;
  if ( v16 )
  {
    *(_BYTE *)(v3 + 24) = EventTutorialMaster__IsTutorialAvailable(-1, 49, 0, 0, 0, 0, 0LL);
    v47 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v47,
      (Il2CppObject *)v3,
      Method_BattleResultFriendComponent___c__DisplayClass45_0__openCore_b__0__,
      0LL);
    EventTutorialMaster__CheckTutorial(-1, 49, v47, 0, 0, 0, 0, 0LL);
  }
  Instance = (DataManager_o *)this->fields.root;
  if ( !Instance
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL),
        BattleResultFriendComponent__changeClass(this, this->fields.followerClassId, v48),
        (Instance = (DataManager_o *)this->fields.myFsm) == 0LL) )
  {
LABEL_36:
    sub_1B8880C(Instance, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__setResultData(
        BattleResultFriendComponent_o *this,
        int32_t infollowerType,
        int32_t infollowerStatus,
        int64_t followerId,
        int32_t infollowerClassId,
        int32_t followerDeckId,
        bool enableFollow,
        const MethodInfo *method)
{
  bool v14; // w26
  UnityEngine_Object_o *classButtonControl; // x21
  __int64 v16; // x1
  ClassButtonControlComponent_o *v17; // x0
  ClassButtonControlComponent_o *v18; // x20
  ClassButtonControlComponent_CallbackFunc_o *v19; // x21

  v14 = enableFollow;
  if ( (byte_4A5E335 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleResultFriendComponent_onChangeClass__);
    sub_1B885B0(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E335 = 1;
  }
  this->fields.followerType = Follower__getType(infollowerType, 0LL);
  this->fields.followerStatus = infollowerStatus;
  this->fields.targetId = followerId;
  this->fields.followerClassId = infollowerClassId;
  this->fields.followerDeckId = followerDeckId;
  this->fields.enableFollowQuest = v14;
  classButtonControl = (UnityEngine_Object_o *)this->fields.classButtonControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classButtonControl, 0LL, 0LL) )
  {
    v17 = this->fields.classButtonControl;
    if ( !v17
      || (ClassButtonControlComponent__setCursor(v17, infollowerClassId, 0LL),
          v18 = this->fields.classButtonControl,
          v19 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1B887FC(ClassButtonControlComponent_CallbackFunc_TypeInfo),
          ClassButtonControlComponent_CallbackFunc___ctor(
            v19,
            (Il2CppObject *)this,
            (intptr_t)Method_BattleResultFriendComponent_onChangeClass__,
            0LL),
          !v18) )
    {
      sub_1B8880C(v17, v16);
    }
    ClassButtonControlComponent__init(v18, v19, 0, 0, 0, 0LL);
  }
}


void __fastcall BattleResultFriendComponent__ChangeFaceAtlas_d__44___ctor(
        BattleResultFriendComponent__ChangeFaceAtlas_d__44_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleResultFriendComponent__ChangeFaceAtlas_d__44__MoveNext(
        BattleResultFriendComponent__ChangeFaceAtlas_d__44_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t v3; // w3
  BattleResultFriendComponent__ChangeFaceAtlas_d__44_o *v4; // x19
  BattleResultFriendComponent_o *_4__this; // x20
  Il2CppObject *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_Action_o *releasePerformanceObject; // x8
  UnityEngine_WaitForEndOfFrame_o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *waitForEndOfFrame_5__2; // x1
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v15; // w2
  int32_t v16; // w3
  bool result; // w0
  Il2CppObject *v18; // x1
  ServantStatusBattleListViewItem_o *v19; // x19
  int32_t v20; // w2
  int32_t v21; // w3
  int v22; // w8
  System_Collections_IEnumerator_o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  struct BattleResultFriendComponent___c__DisplayClass44_0_o *_8__1; // x21
  System_Action_o *v27; // x20
  struct BattleResultFriendComponent___c__DisplayClass44_0_o *v28; // x8
  Il2CppObject *v29; // x1
  Il2CppObject *v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3

  v4 = this;
  if ( (byte_4A5E351 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&System_GC_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1B885B0(&Method_BattleResultFriendComponent___c__DisplayClass44_0__ChangeFaceAtlas_b__0__);
    sub_1B885B0(&BattleResultFriendComponent___c__DisplayClass44_0_TypeInfo);
    this = (BattleResultFriendComponent__ChangeFaceAtlas_d__44_o *)sub_1B885B0(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4A5E351 = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v6 = (Il2CppObject *)sub_1B887FC(BattleResultFriendComponent___c__DisplayClass44_0_TypeInfo);
      System_Object___ctor(v6, 0LL);
      v4->fields.__8__1 = (struct BattleResultFriendComponent___c__DisplayClass44_0_o *)v6;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v6, v7, v8);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__ReleaseFaceBattleAtlas(0LL);
      if ( !_4__this )
        goto LABEL_31;
      releasePerformanceObject = _4__this->fields.releasePerformanceObject;
      if ( releasePerformanceObject )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))releasePerformanceObject->fields.m_target)(
          releasePerformanceObject->fields.original_method_info,
          *(_QWORD *)&releasePerformanceObject->fields.extra_arg);
      BattleResultFriendComponent__openCore(_4__this, method);
      v10 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v10, 0LL);
      v4->fields._waitForEndOfFrame_5__2 = v10;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._waitForEndOfFrame_5__2, (int32_t)v10, v11, v12);
      waitForEndOfFrame_5__2 = (Il2CppObject *)v4->fields._waitForEndOfFrame_5__2;
      v4->fields.__2__current = waitForEndOfFrame_5__2;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(p__2__current, (int32_t)waitForEndOfFrame_5__2, v15, v16);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    case 1:
      v4->fields.__1__state = -1;
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_62753100(0LL);
      v18 = (Il2CppObject *)v4->fields._waitForEndOfFrame_5__2;
      v4->fields.__2__current = v18;
      v19 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(v19, (int32_t)v18, v20, v21);
      v22 = 2;
      goto LABEL_30;
    case 2:
      v4->fields.__1__state = -1;
      this = (BattleResultFriendComponent__ChangeFaceAtlas_d__44_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_31;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleResultFriendComponent__ChangeFaceAtlas_d__44_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_31;
      v23 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v23;
      v19 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(v19, (int32_t)v23, v24, v25);
      v22 = 3;
      goto LABEL_30;
    case 3:
      _8__1 = v4->fields.__8__1;
      v4->fields.__1__state = -1;
      if ( !_8__1 )
        goto LABEL_31;
      _8__1->fields.isWait = 1;
      v27 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v27,
        (Il2CppObject *)_8__1,
        Method_BattleResultFriendComponent___c__DisplayClass44_0__ChangeFaceAtlas_b__0__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadFaceAtlas(v27, 1, 0LL);
LABEL_21:
      v28 = v4->fields.__8__1;
      if ( !v28 )
LABEL_31:
        sub_1B8880C(this, method);
      if ( v28->fields.isWait )
      {
        v29 = (Il2CppObject *)v4->fields._waitForEndOfFrame_5__2;
        v4->fields.__2__current = v29;
        v19 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B88554(v19, (int32_t)v29, (int32_t)v2, v3);
        v22 = 4;
      }
      else
      {
        if ( !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_62753100(0LL);
        v30 = (Il2CppObject *)v4->fields._waitForEndOfFrame_5__2;
        v4->fields.__2__current = v30;
        v19 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B88554(v19, (int32_t)v30, v31, v32);
        v22 = 5;
      }
LABEL_30:
      *(_DWORD *)&v19[-1].fields.isMine = v22;
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


Il2CppObject *__fastcall BattleResultFriendComponent__ChangeFaceAtlas_d__44__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleResultFriendComponent__ChangeFaceAtlas_d__44_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleResultFriendComponent__ChangeFaceAtlas_d__44__System_Collections_IEnumerator_Reset(
        BattleResultFriendComponent__ChangeFaceAtlas_d__44_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleResultFriendComponent__ChangeFaceAtlas_d__44_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall BattleResultFriendComponent__ChangeFaceAtlas_d__44__System_Collections_IEnumerator_get_Current(
        BattleResultFriendComponent__ChangeFaceAtlas_d__44_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleResultFriendComponent__ChangeFaceAtlas_d__44__System_IDisposable_Dispose(
        BattleResultFriendComponent__ChangeFaceAtlas_d__44_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleResultFriendComponent___c__DisplayClass44_0___ctor(
        BattleResultFriendComponent___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleResultFriendComponent___c__DisplayClass44_0___ChangeFaceAtlas_b__0(
        BattleResultFriendComponent___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  this->fields.isWait = 0;
}


void __fastcall BattleResultFriendComponent___c__DisplayClass45_0___ctor(
        BattleResultFriendComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleResultFriendComponent___c__DisplayClass45_0___openCore_b__0(
        BattleResultFriendComponent___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  BattleResultFriendComponent___c__DisplayClass45_0_o *v2; // x19
  struct BattleResultFriendComponent_o *_4__this; // x8
  struct BattleResultFriendComponent_o *v4; // x8
  UILabel_o *followTutorialLabel; // x20
  UnityEngine_MonoBehaviour_o *v6; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  System_Collections_Generic_List_object__o *monitor; // x20
  EventDelegate_o *v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
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
  if ( (byte_4A5E350 & 1) == 0 )
  {
    sub_1B885B0(&EventDelegate_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_9872/*"OnClickTutorialFollow"*/);
    sub_1B885B0(&StringLiteral_13498/*"TUTORIAL_MESSAGE_FOLLOW_OFFER"*/);
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)sub_1B885B0(&StringLiteral_11094/*"RESULT_FOLLOW_REQUEST_YES"*/);
    byte_4A5E350 = 1;
  }
  if ( v2->fields.isFollowTutorial )
  {
    _4__this = v2->fields.__4__this;
    if ( !_4__this )
      goto LABEL_29;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)_4__this->fields.followTutorialMask;
    if ( !this )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v4 = v2->fields.__4__this;
    if ( !v4 )
      goto LABEL_29;
    followTutorialLabel = v4->fields.followTutorialLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_11094/*"RESULT_FOLLOW_REQUEST_YES"*/,
                                                                    0LL);
    if ( !followTutorialLabel )
      goto LABEL_29;
    UILabel__set_text(followTutorialLabel, (System_String_o *)this, 0LL);
    v6 = (UnityEngine_MonoBehaviour_o *)v2->fields.__4__this;
    if ( !v6 )
      goto LABEL_29;
    m_CancellationTokenSource = v6[8].fields.m_CancellationTokenSource;
    if ( !m_CancellationTokenSource )
      goto LABEL_29;
    monitor = (System_Collections_Generic_List_object__o *)m_CancellationTokenSource[3].monitor;
    v9 = (EventDelegate_o *)sub_1B887FC(EventDelegate_TypeInfo);
    EventDelegate___ctor_46787224(v9, v6, (System_String_o *)StringLiteral_9872/*"OnClickTutorialFollow"*/, 0LL);
    if ( !monitor )
      goto LABEL_29;
    items = monitor->fields._items;
    v13 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++monitor->fields._version;
    if ( !items )
      goto LABEL_29;
    size = monitor->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        monitor,
        (Il2CppObject *)v9,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    }
    else
    {
      v15 = &items->obj.klass + size;
      monitor->fields._size = size + 1;
      v15[4] = (Il2CppClass *)v9;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v9, v10, v11);
    }
    v16 = v2->fields.__4__this;
    if ( !v16 )
      goto LABEL_29;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)v16->fields.followTutorialButton;
    if ( !this )
      goto LABEL_29;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
    v17 = v2->fields.__4__this;
    if ( !v17 )
      goto LABEL_29;
    GameObjectExtensions__AddLocalPositionX((UnityEngine_GameObject_o *)this, v17->fields.offsetPosition, 0LL);
    v18 = v2->fields.__4__this;
    if ( !v18 )
      goto LABEL_29;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)v18->fields.followTutorialButton;
    if ( !this )
      goto LABEL_29;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
    if ( !this
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
          (v19 = v2->fields.__4__this) == 0LL)
      || (this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)v19->fields.rightButton) == 0LL
      || (this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)this,
                                                                          0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_13498/*"TUTORIAL_MESSAGE_FOLLOW_OFFER"*/,
                                                                          0LL),
          !Instance) )
    {
LABEL_29:
      sub_1B8880C(this, method);
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
      0LL,
      -1,
      0LL,
      0LL);
  }
}