void __fastcall BattleResultFriendComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BCAED8 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleResultFriendComponent_TypeInfo, v1);
    byte_4BCAED8 = 1;
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
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BCAEC1 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleResultFriendComponent__ChangeFaceAtlas_d__44_TypeInfo, method);
    byte_4BCAEC1 = 1;
  }
  v3 = sub_1C1AE20(BattleResultFriendComponent__ChangeFaceAtlas_d__44_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattleResultFriendComponent__ChangeSupportScene(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  AvalonSceneManager_o *Instance; // x0
  __int64 v10; // x1
  struct SceneRootComponent_o *targetRoot; // x20
  __int64 methodPtr_low; // x9
  BattleRootComponent_callBackBeginResume_o *v13; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  OtherUserGameEntity_o *otherUser; // x21
  SupportInfoJump_o *v23; // x19
  SceneRootComponent_c *klass; // x8
  Il2CppClass *parent; // x8
  int32_t name; // w21
  QuestRestrictionInfo_o *v27; // x20
  BattleResultFriendComponent_o *v28; // x0
  const MethodInfo *v29; // x1

  if ( (byte_4BCAED3 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BattleResultFriendComponent_ChangeSupportScene__, method);
    sub_1C1ABD4(&Method_BattleResultFriendComponent_callBackBeginResume__, v3);
    sub_1C1ABD4(&BattleRootComponent_TypeInfo, v4);
    sub_1C1ABD4(&QuestRestrictionInfo_TypeInfo, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1C1ABD4(&SupportInfoJump_TypeInfo, v7);
    sub_1C1ABD4(&BattleRootComponent_callBackBeginResume_TypeInfo, v8);
    byte_4BCAED3 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  if ( AvalonSceneManager__checkNowScene(Instance, 10, 0LL) )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    targetRoot = Instance->fields.targetRoot;
    if ( !targetRoot
      || (methodPtr_low = LOBYTE(BattleRootComponent_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(targetRoot->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
      && (BattleRootComponent_c *)targetRoot->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleRootComponent_TypeInfo )
    {
      v13 = (BattleRootComponent_callBackBeginResume_o *)sub_1C1AE20(BattleRootComponent_callBackBeginResume_TypeInfo);
      BattleRootComponent_callBackBeginResume___ctor(
        v13,
        (Il2CppObject *)this,
        Method_BattleResultFriendComponent_callBackBeginResume__,
        0LL);
      if ( targetRoot )
      {
        *(_QWORD *)&targetRoot[1].fields.kind = v13;
        sub_1C1AB78(
          (PartyOrganizationUtility_o *)&targetRoot[1].fields.kind,
          (int64_t)v13,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
        v20 = Method_BattleResultFriendComponent_ChangeSupportScene__;
        if ( (*((_BYTE *)Method_BattleResultFriendComponent_ChangeSupportScene__ + 83) & 2) != 0 )
          v20 = (_QWORD *)sub_1C1ABEC(Method_BattleResultFriendComponent_ChangeSupportScene__);
        v21 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v20, v20[4]);
        OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0, 0LL);
        otherUser = this->fields.otherUser;
        v23 = (SupportInfoJump_o *)sub_1C1AE20(SupportInfoJump_TypeInfo);
        SupportInfoJump___ctor(v23, otherUser, 0, 0, 0LL);
        klass = targetRoot[1].klass;
        if ( klass )
        {
          parent = klass->_1.parent;
          if ( parent )
          {
            name = (int32_t)parent->_1.name;
            v27 = (QuestRestrictionInfo_o *)sub_1C1AE20(QuestRestrictionInfo_TypeInfo);
            QuestRestrictionInfo___ctor(v27, name, 0LL);
            if ( v23 )
            {
              SupportInfoJump__SetSetupInfo(v23, 0LL, v27, 0LL);
              Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( Instance )
              {
                AvalonSceneManager__pushScene(Instance, 60, 1, (Il2CppObject *)v23, 0LL);
                return;
              }
            }
          }
        }
      }
LABEL_18:
      sub_1C1AE30(Instance, v10);
    }
    sub_1C1B0F0(Instance->fields.targetRoot);
    BattleResultFriendComponent__callBackBeginResume(v28, v29);
  }
}


void __fastcall BattleResultFriendComponent__EndRequestFollow(
        BattleResultFriendComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_Dictionary_object__object__o *myFsm; // x0
  System_Collections_Generic_Dictionary_object__object__o *v18; // x21
  System_String_o *v19; // x20
  __int64 *v20; // x8
  Il2CppObject *Instance; // x21
  NotificationDialog_ClickDelegate_o *v22; // x22

  if ( (byte_4BCAED0 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BattleResultFriendComponent_OnEndRequestDialog__, result);
    sub_1C1ABD4(&NotificationDialog_ClickDelegate_TypeInfo, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1C1ABD4(&JsonManager_TypeInfo, v8);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1C1ABD4(&StringLiteral_11264/*"REQUEST_OK"*/, v10);
    sub_1C1ABD4(&StringLiteral_11262/*"REQUEST_NG"*/, v11);
    sub_1C1ABD4(&StringLiteral_22437/*"ng"*/, v12);
    sub_1C1ABD4(&StringLiteral_21762/*"message"*/, v13);
    sub_1C1ABD4(&StringLiteral_1212/*"0"*/, v14);
    sub_1C1ABD4(&StringLiteral_23930/*"status"*/, v15);
    byte_4BCAED0 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22437/*"ng"*/, 0LL) )
  {
    myFsm = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v20 = &StringLiteral_11262/*"REQUEST_NG"*/;
      goto LABEL_17;
    }
LABEL_20:
    sub_1C1AE30(myFsm, v16);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0LL);
  if ( !myFsm )
    goto LABEL_20;
  v18 = myFsm;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFsm,
          (Il2CppObject *)StringLiteral_21762/*"message"*/,
          (const MethodInfo_3302EE4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_13;
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v18,
                                                                       (Il2CppObject *)StringLiteral_21762/*"message"*/,
                                                                       (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_20;
  v19 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))myFsm->klass->vtable._3_ToString.method)(
                             myFsm,
                             myFsm->klass->vtable._4_unknown.methodPtr);
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v18,
                                                                       (Il2CppObject *)StringLiteral_23930/*"status"*/,
                                                                       (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_20;
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))myFsm->klass->vtable._3_ToString.method)(
                                                                       myFsm,
                                                                       myFsm->klass->vtable._4_unknown.methodPtr);
  if ( !myFsm )
    goto LABEL_20;
  if ( System_String__Equals_63048684((System_String_o *)myFsm, (System_String_o *)StringLiteral_1212/*"0"*/, 0LL)
    || System_String__IsNullOrEmpty(v19, 0LL) )
  {
LABEL_13:
    myFsm = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v20 = &StringLiteral_11264/*"REQUEST_OK"*/;
LABEL_17:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFsm, (System_String_o *)*v20, 0LL);
      return;
    }
    goto LABEL_20;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = (NotificationDialog_ClickDelegate_o *)sub_1C1AE20(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v22,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_20;
  CommonUI__OpenNotificationDialog_31101392(
    (CommonUI_o *)Instance,
    0LL,
    v19,
    v22,
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_Dictionary_object__object__o *myFsm; // x0
  System_Collections_Generic_Dictionary_object__object__o *v18; // x21
  System_String_o *v19; // x20
  __int64 *v20; // x8
  Il2CppObject *Instance; // x21
  NotificationDialog_ClickDelegate_o *v22; // x22

  if ( (byte_4BCAECE & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BattleResultFriendComponent_OnEndRequestDialog__, result);
    sub_1C1ABD4(&NotificationDialog_ClickDelegate_TypeInfo, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1C1ABD4(&JsonManager_TypeInfo, v8);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1C1ABD4(&StringLiteral_11264/*"REQUEST_OK"*/, v10);
    sub_1C1ABD4(&StringLiteral_11262/*"REQUEST_NG"*/, v11);
    sub_1C1ABD4(&StringLiteral_22437/*"ng"*/, v12);
    sub_1C1ABD4(&StringLiteral_21762/*"message"*/, v13);
    sub_1C1ABD4(&StringLiteral_1212/*"0"*/, v14);
    sub_1C1ABD4(&StringLiteral_23930/*"status"*/, v15);
    byte_4BCAECE = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22437/*"ng"*/, 0LL) )
  {
    myFsm = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v20 = &StringLiteral_11262/*"REQUEST_NG"*/;
      goto LABEL_17;
    }
LABEL_20:
    sub_1C1AE30(myFsm, v16);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0LL);
  if ( !myFsm )
    goto LABEL_20;
  v18 = myFsm;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFsm,
          (Il2CppObject *)StringLiteral_21762/*"message"*/,
          (const MethodInfo_3302EE4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_13;
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v18,
                                                                       (Il2CppObject *)StringLiteral_21762/*"message"*/,
                                                                       (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_20;
  v19 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))myFsm->klass->vtable._3_ToString.method)(
                             myFsm,
                             myFsm->klass->vtable._4_unknown.methodPtr);
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v18,
                                                                       (Il2CppObject *)StringLiteral_23930/*"status"*/,
                                                                       (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_20;
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))myFsm->klass->vtable._3_ToString.method)(
                                                                       myFsm,
                                                                       myFsm->klass->vtable._4_unknown.methodPtr);
  if ( !myFsm )
    goto LABEL_20;
  if ( System_String__Equals_63048684((System_String_o *)myFsm, (System_String_o *)StringLiteral_1212/*"0"*/, 0LL)
    || System_String__IsNullOrEmpty(v19, 0LL) )
  {
LABEL_13:
    myFsm = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v20 = &StringLiteral_11264/*"REQUEST_OK"*/;
LABEL_17:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFsm, (System_String_o *)*v20, 0LL);
      return;
    }
    goto LABEL_20;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = (NotificationDialog_ClickDelegate_o *)sub_1C1AE20(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v22,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_20;
  CommonUI__OpenNotificationDialog_31101392(
    (CommonUI_o *)Instance,
    0LL,
    v19,
    v22,
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultFriendComponent__EndShowServant(
        BattleResultFriendComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4BCAEC6 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, flg);
    sub_1C1ABD4(&Method_BattleResultFriendComponent_endCloseSHowServant__, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4BCAEC6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BattleResultFriendComponent_endCloseSHowServant__, 0LL);
  if ( !Instance )
    sub_1C1AE30(v8, v9);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0LL);
}


void __fastcall BattleResultFriendComponent__Init(
        BattleResultFriendComponent_o *this,
        System_Action_o *releasePerformanceObject,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *root; // x0
  UnityEngine_Object_o *friendIconComp; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Object_array *ComponentsInChildren_object; // x0
  __int64 v15; // x8
  System_Object_array *v16; // x21
  unsigned __int64 v17; // x24
  Il2CppObject **m_Items; // x25
  UnityEngine_Object_o *v19; // x22

  if ( (byte_4BCAEBD & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel____77614336, releasePerformanceObject);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v5);
    byte_4BCAEBD = 1;
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
    sub_1C1AE30(root, releasePerformanceObject);
  ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                  root,
                                  1,
                                  (const MethodInfo_2FF0860 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel____77614336);
  if ( ComponentsInChildren_object )
  {
    v15 = *(_QWORD *)&ComponentsInChildren_object->max_length;
    v16 = ComponentsInChildren_object;
    if ( (int)v15 >= 1 )
    {
      v17 = 0LL;
      m_Items = ComponentsInChildren_object->m_Items;
      do
      {
        if ( v17 >= (unsigned int)v15 )
LABEL_21:
          sub_1C1AE38(ComponentsInChildren_object, releasePerformanceObject);
        v19 = (UnityEngine_Object_o *)m_Items[v17];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        ComponentsInChildren_object = (System_Object_array *)UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
        if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
        {
          if ( v17 >= v16->max_length )
            goto LABEL_21;
          root = (UnityEngine_GameObject_o *)m_Items[v17];
          if ( !root )
            goto LABEL_22;
          UILabel__SetDefaultFont((UILabel_o *)root, 0LL);
        }
        LODWORD(v15) = v16->max_length;
        ++v17;
      }
      while ( (__int64)v17 < (int)v15 );
    }
  }
LABEL_20:
  this->fields.releasePerformanceObject = releasePerformanceObject;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.releasePerformanceObject,
    (int64_t)releasePerformanceObject,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x26
  Il2CppObject *v16; // x0
  System_String_o *v17; // x22
  System_String_o *errLabel; // x0
  __int64 v19; // x1
  void *v20; // x23
  char v21; // w24
  System_String_o *v22; // x1
  System_String_o **v23; // x8
  int v24; // w21
  System_String_o **v25; // x24
  const MethodInfo *v26; // x3
  System_String_o *v27; // x23
  UILabel_o *titleLabel; // x21
  UILabel_o *friendWarningLabel; // x20
  int32_t followerStatus; // [xsp+Ch] [xbp-54h] BYREF

  v5 = isActiveFriend;
  v6 = isActiveFollow;
  if ( (byte_4BCAED5 & 1) == 0 )
  {
    sub_1C1ABD4(&int_TypeInfo, isActiveFollow);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v8);
    sub_1C1ABD4(&StringLiteral_11301/*"RESULT_FRIENDANDFOLLOW_TITLE"*/, v9);
    sub_1C1ABD4(&StringLiteral_11303/*"RESULT_FRIEND_ERR_{0}"*/, v10);
    sub_1C1ABD4(&StringLiteral_11307/*"RESULT_MAXFRIEND_WARNING"*/, v11);
    sub_1C1ABD4(&StringLiteral_11306/*"RESULT_FRIEND_TITLE"*/, v12);
    sub_1C1ABD4(&StringLiteral_11300/*"RESULT_FOLLOW_TITLE"*/, v13);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v14);
    byte_4BCAED5 = 1;
  }
  v15 = StringLiteral_11307/*"RESULT_MAXFRIEND_WARNING"*/;
  followerStatus = this->fields.followerStatus;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &followerStatus, isActiveFriend, method, v4);
  v17 = System_String__Format((System_String_o *)StringLiteral_11303/*"RESULT_FRIEND_ERR_{0}"*/, v16, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  errLabel = LocalizationManager__Get(v17, 0LL);
  if ( !v17 )
    goto LABEL_33;
  v20 = errLabel;
  errLabel = (System_String_o *)System_String__Equals_63048684(v17, errLabel, 0LL);
  if ( !this->fields.errLabel )
    goto LABEL_33;
  v21 = (char)errLabel;
  v22 = (System_String_o *)(((unsigned __int8)errLabel & 1) != 0 ? StringLiteral_1/*""*/ : v20);
  UILabel__set_text(this->fields.errLabel, v22, 0LL);
  if ( v21 & 1 | (!v6 || !v5) )
  {
    v17 = (System_String_o *)v15;
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
  v23 = (System_String_o **)&StringLiteral_11301/*"RESULT_FRIENDANDFOLLOW_TITLE"*/;
  v24 = v6;
  if ( !v24 )
    v23 = (System_String_o **)&StringLiteral_11306/*"RESULT_FRIEND_TITLE"*/;
  if ( v5 )
    v25 = v23;
  else
    v25 = (System_String_o **)&StringLiteral_11300/*"RESULT_FOLLOW_TITLE"*/;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)errLabel, v5, 0LL);
  BattleResultFriendComponent__SetupButtons(this, v24, v5, v26);
  v27 = *v25;
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  errLabel = LocalizationManager__Get(v27, 0LL);
  if ( !titleLabel )
    goto LABEL_33;
  UILabel__set_text(titleLabel, errLabel, 0LL);
  if ( v5 )
    goto LABEL_31;
  friendWarningLabel = this->fields.friendWarningLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  errLabel = LocalizationManager__Get(v17, 0LL);
  if ( !friendWarningLabel )
LABEL_33:
    sub_1C1AE30(errLabel, v19);
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

  if ( (byte_4BCAECB & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_6591/*"FOLLOW_CONNECT"*/, method);
    byte_4BCAECB = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C1AE30(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_6591/*"FOLLOW_CONNECT"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickFriend(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BCAEC8 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_3888/*"CONNECT"*/, method);
    byte_4BCAEC8 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C1AE30(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3888/*"CONNECT"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickHelp(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4BCAED7 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BattleResultFriendComponent_OnClickHelp__, method);
    byte_4BCAED7 = 1;
  }
  v2 = Method_BattleResultFriendComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C1ABEC(Method_BattleResultFriendComponent_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 49, 0LL, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickNo(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BCAECA & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_9422/*"NEXT"*/, method);
    byte_4BCAECA = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C1AE30(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9422/*"NEXT"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickNoActionFriend(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4BCAEC9 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BattleResultFriendComponent_OnClickNoActionFriend__, method);
    byte_4BCAEC9 = 1;
  }
  v2 = Method_BattleResultFriendComponent_OnClickNoActionFriend__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_OnClickNoActionFriend__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C1ABEC(Method_BattleResultFriendComponent_OnClickNoActionFriend__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 2, 0, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickSupportInfo(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BCAED2 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_3480/*"CHANGE_SUPPORT"*/, method);
    byte_4BCAED2 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C1AE30(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3480/*"CHANGE_SUPPORT"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickTutorialFollow(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  PartyOrganizationUtility_o *v14; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BCAECC & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_PickupUserFollowerMaster___, method);
    sub_1C1ABD4(&DataManager_TypeInfo, v3);
    sub_1C1ABD4(
      &Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__,
      v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4BCAECC = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseTutorialNotificationDialogArrow((CommonUI_o *)Instance, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
  if ( !Instance )
    goto LABEL_12;
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          (const MethodInfo_324AD00 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__) )
    goto LABEL_11;
  Instance = entity;
  if ( !entity )
LABEL_12:
    sub_1C1AE30(Instance, v7);
  v14 = (PartyOrganizationUtility_o *)&entity[1];
  if ( entity[1].klass )
  {
    v14->klass = 0LL;
    sub_1C1AB78(v14, 0LL, v8, v9, v10, v11, v12, v13);
  }
LABEL_11:
  BattleResultFriendComponent__OnClickFollow(this, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultFriendComponent__OnEndRequestDialog(
        BattleResultFriendComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4BCAED1 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_1C1ABD4(&StringLiteral_11264/*"REQUEST_OK"*/, v4);
    byte_4BCAED1 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1C1AE30(Instance, v6);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_11264/*"REQUEST_OK"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__Open(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UserGameEntity_o *SelfUserGame; // x20
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  int32_t FollowSum; // w22
  _BOOL4 v12; // w22
  _BOOL4 v13; // w23
  _BOOL4 enableFollowQuest; // w24
  const MethodInfo *v15; // x1
  System_Collections_IEnumerator_o *v16; // x1

  if ( (byte_4BCAEC0 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_TblFriendMaster___, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserFollowMaster___, v3);
    sub_1C1ABD4(&OptionManager_TypeInfo, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1C1ABD4(&StringLiteral_9422/*"NEXT"*/, v6);
    sub_1C1ABD4(&StringLiteral_6595/*"FOLLOW_NUM"*/, v7);
    byte_4BCAEC0 = 1;
  }
  if ( this->fields.followerType != 2 )
    goto LABEL_11;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  if ( !Instance )
    goto LABEL_21;
  FollowSum = UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0LL);
  Instance = (DataManager_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6595/*"FOLLOW_NUM"*/, 0LL);
  v12 = FollowSum < (int)Instance;
  v13 = this->fields.followerType == 2;
  if ( !MasterData_object )
    goto LABEL_21;
  enableFollowQuest = this->fields.enableFollowQuest;
  Instance = (DataManager_o *)TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0LL);
  if ( !SelfUserGame )
    goto LABEL_21;
  if ( (!enableFollowQuest || !v12 || !v13) && (int)Instance >= SelfUserGame->fields.friendKeep )
  {
LABEL_11:
    Instance = (DataManager_o *)this->fields.myFsm;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9422/*"NEXT"*/, 0LL);
      return;
    }
LABEL_21:
    sub_1C1AE30(Instance, method);
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
    v16 = BattleResultFriendComponent__ChangeFaceAtlas(this, v15);
    UnityEngine_MonoBehaviour__StartCoroutine_70779684((UnityEngine_MonoBehaviour_o *)this, v16, 0LL);
  }
  else
  {
    BattleResultFriendComponent__openCore(this, v15);
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

  if ( (byte_4BCAEC3 & 1) == 0 )
  {
    sub_1C1ABD4(&OptionManager_TypeInfo, method);
    byte_4BCAEC3 = 1;
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
        sub_1C1AE38(SpoilerSetting, v4);
      }
LABEL_14:
      v9 = this->fields.otherUser;
      if ( !v9 || (eventUserSvtLeaderHash = v9->fields.eventUserSvtLeaderHash) == 0LL )
LABEL_23:
        sub_1C1AE30(SpoilerSetting, v4);
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

  if ( (byte_4BCAEC4 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_9833/*"OPEN_SERVANT"*/, method);
    byte_4BCAEC4 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C1AE30(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9833/*"OPEN_SERVANT"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultFriendComponent__SetupButtons(
        BattleResultFriendComponent_o *this,
        bool isActiveFollow,
        bool isActiveFriend,
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  EventDelegate_o *v19; // x21
  EventDelegate_o *v20; // x23
  __int64 v21; // x1
  UnityEngine_Component_o *helpButton; // x0
  UILabel_o *leftButtonLabel; // x24
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x8
  _QWORD *v31; // x9
  __int64 klass_low; // x10
  __int64 v33; // x8
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct UIButton_o *v46; // x8
  __int64 v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  __int64 v50; // x8
  struct UIButton_o *rightButton; // x8
  __int64 v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  __int64 v55; // x8
  UILabel_o *centerButtonLabel; // x22
  struct UIButton_o *centerButton; // x23
  UnityEngine_GameObject_o *v58; // x24
  BattleResultFriendComponent_c *v59; // x8
  __int64 *v60; // x8
  UILabel_o *rightButtonLabel; // x24
  UnityEngine_GameObject_o *gameObject; // x24
  BattleResultFriendComponent_c *v63; // x8
  UnityEngine_GameObject_o *v64; // x0
  UnityEngine_GameObject_o *v65; // x0
  UnityEngine_GameObject_o *v66; // x0
  UnityEngine_GameObject_o *v67; // x0
  EventDelegate_o *v68; // x20
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  __int64 v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  __int64 v78; // x8
  UIButton_c *klass; // x8
  UnityEngine_Color_o v80; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v81; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v82; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BCAED6 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleResultFriendComponent_TypeInfo, isActiveFollow);
    sub_1C1ABD4(&EventDelegate_TypeInfo, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventDelegate__Remove__, v9);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v10);
    sub_1C1ABD4(&StringLiteral_10027/*"OnClickFriend"*/, v11);
    sub_1C1ABD4(&StringLiteral_10047/*"OnClickNoActionFriend"*/, v12);
    sub_1C1ABD4(&StringLiteral_11305/*"RESULT_FRIEND_REQUEST_YES"*/, v13);
    sub_1C1ABD4(&StringLiteral_11299/*"RESULT_FOLLOW_REQUEST_YES"*/, v14);
    sub_1C1ABD4(&StringLiteral_10026/*"OnClickFollow"*/, v15);
    sub_1C1ABD4(&StringLiteral_20492/*"icon_friend"*/, v16);
    sub_1C1ABD4(&StringLiteral_11304/*"RESULT_FRIEND_REQUEST_NO"*/, v17);
    sub_1C1ABD4(&StringLiteral_20491/*"icon_follow"*/, v18);
    byte_4BCAED6 = 1;
  }
  v19 = (EventDelegate_o *)sub_1C1AE20(EventDelegate_TypeInfo);
  EventDelegate___ctor_47893912(v19, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_10027/*"OnClickFriend"*/, 0LL);
  v20 = (EventDelegate_o *)sub_1C1AE20(EventDelegate_TypeInfo);
  EventDelegate___ctor_47893912(v20, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_10026/*"OnClickFollow"*/, 0LL);
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
  helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11304/*"RESULT_FRIEND_REQUEST_NO"*/, 0LL);
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
    v30 = *(_QWORD *)&helpButton->fields.m_CachedPtr;
    v31 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++HIDWORD(helpButton[1].klass);
    if ( !v30 )
      goto LABEL_61;
    klass_low = SLODWORD(helpButton[1].klass);
    if ( (unsigned int)klass_low >= *(_DWORD *)(v30 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)helpButton,
        (Il2CppObject *)v19,
        *(const MethodInfo_363C890 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v33 = v30 + 8 * klass_low;
      LODWORD(helpButton[1].klass) = klass_low + 1;
      *(_QWORD *)(v33 + 32) = v19;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v33 + 32), (int64_t)v19, v24, v25, v26, v27, v28, v29);
    }
    rightButton = this->fields.rightButton;
    if ( !rightButton )
      goto LABEL_61;
    helpButton = (UnityEngine_Component_o *)rightButton->fields.onClick;
    if ( !helpButton )
      goto LABEL_61;
    v52 = *(_QWORD *)&helpButton->fields.m_CachedPtr;
    v53 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++HIDWORD(helpButton[1].klass);
    if ( !v52 )
      goto LABEL_61;
    v54 = SLODWORD(helpButton[1].klass);
    if ( (unsigned int)v54 >= *(_DWORD *)(v52 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)helpButton,
        (Il2CppObject *)v20,
        *(const MethodInfo_363C890 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
    }
    else
    {
      v55 = v52 + 8 * v54;
      LODWORD(helpButton[1].klass) = v54 + 1;
      *(_QWORD *)(v55 + 32) = v20;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v55 + 32), (int64_t)v20, v34, v35, v36, v37, v38, v39);
    }
    centerButton = this->fields.centerButton;
    centerButtonLabel = this->fields.centerButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11305/*"RESULT_FRIEND_REQUEST_YES"*/, 0LL);
    if ( !centerButtonLabel )
      goto LABEL_61;
    UILabel__set_text(centerButtonLabel, (System_String_o *)helpButton, 0LL);
    rightButtonLabel = this->fields.rightButtonLabel;
    helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11299/*"RESULT_FOLLOW_REQUEST_YES"*/, 0LL);
    if ( !rightButtonLabel )
      goto LABEL_61;
    UILabel__set_text(rightButtonLabel, (System_String_o *)helpButton, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.centerButtonLabel;
    if ( !helpButton )
      goto LABEL_61;
    gameObject = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    v63 = BattleResultFriendComponent_TypeInfo;
    if ( !BattleResultFriendComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultFriendComponent_TypeInfo);
      v63 = BattleResultFriendComponent_TypeInfo;
    }
    GameObjectExtensions__AddLocalPositionX(gameObject, v63->static_fields->offsetOfferLabelPosition, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightButtonLabel;
    if ( !helpButton )
      goto LABEL_61;
    v64 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    GameObjectExtensions__AddLocalPositionX(
      v64,
      BattleResultFriendComponent_TypeInfo->static_fields->offsetOfferLabelPosition,
      0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.leftButton;
    if ( !helpButton )
      goto LABEL_61;
    v65 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    GameObjectExtensions__AddLocalPositionX(v65, -this->fields.offsetPosition, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightButton;
    if ( !helpButton )
      goto LABEL_61;
    v66 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    GameObjectExtensions__AddLocalPositionX(v66, this->fields.offsetPosition, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightMarkSprite;
    if ( !helpButton )
      goto LABEL_61;
    v67 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    GameObjectExtensions__AddLocalPositionX(
      v67,
      BattleResultFriendComponent_TypeInfo->static_fields->offsetFollowMarkPosition,
      0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.centerMarkSprite;
    if ( !helpButton )
      goto LABEL_61;
    UISprite__set_spriteName((UISprite_o *)helpButton, (System_String_o *)StringLiteral_20492/*"icon_friend"*/, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightMarkSprite;
    if ( !helpButton )
      goto LABEL_61;
    v60 = &StringLiteral_20491/*"icon_follow"*/;
  }
  else
  {
    helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL);
    if ( !helpButton )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 0, 0LL);
    v46 = this->fields.rightButton;
    if ( !v46 )
      goto LABEL_61;
    helpButton = (UnityEngine_Component_o *)v46->fields.onClick;
    if ( !helpButton )
      goto LABEL_61;
    v47 = *(_QWORD *)&helpButton->fields.m_CachedPtr;
    v48 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++HIDWORD(helpButton[1].klass);
    if ( !v47 )
      goto LABEL_61;
    v49 = SLODWORD(helpButton[1].klass);
    if ( (unsigned int)v49 >= *(_DWORD *)(v47 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)helpButton,
        (Il2CppObject *)v19,
        *(const MethodInfo_363C890 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
    }
    else
    {
      v50 = v47 + 8 * v49;
      LODWORD(helpButton[1].klass) = v49 + 1;
      *(_QWORD *)(v50 + 32) = v19;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v50 + 32), (int64_t)v19, v40, v41, v42, v43, v44, v45);
    }
    centerButton = this->fields.rightButton;
    centerButtonLabel = this->fields.rightButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11305/*"RESULT_FRIEND_REQUEST_YES"*/, 0LL);
    if ( !centerButtonLabel )
      goto LABEL_61;
    UILabel__set_text(centerButtonLabel, (System_String_o *)helpButton, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightButtonLabel;
    if ( !helpButton )
      goto LABEL_61;
    v58 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    v59 = BattleResultFriendComponent_TypeInfo;
    if ( !BattleResultFriendComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultFriendComponent_TypeInfo);
      v59 = BattleResultFriendComponent_TypeInfo;
    }
    GameObjectExtensions__AddLocalPositionX(v58, v59->static_fields->offsetOfferLabelPosition, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightMarkSprite;
    if ( !helpButton )
      goto LABEL_61;
    v60 = &StringLiteral_20492/*"icon_friend"*/;
  }
  UISprite__set_spriteName((UISprite_o *)helpButton, (System_String_o *)*v60, 0LL);
  if ( isActiveFriend && !this->fields.followerStatus )
    return;
  v68 = (EventDelegate_o *)sub_1C1AE20(EventDelegate_TypeInfo);
  EventDelegate___ctor_47893912(v68, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_10047/*"OnClickNoActionFriend"*/, 0LL);
  if ( !centerButton
    || (helpButton = (UnityEngine_Component_o *)centerButton->fields.onClick) == 0LL
    || (System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)helpButton,
          (Il2CppObject *)v19,
          (const MethodInfo_363DDB8 *)Method_System_Collections_Generic_List_EventDelegate__Remove__),
        (helpButton = (UnityEngine_Component_o *)centerButton->fields.onClick) == 0LL)
    || (v75 = *(_QWORD *)&helpButton->fields.m_CachedPtr,
        v76 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++HIDWORD(helpButton[1].klass),
        !v75) )
  {
LABEL_61:
    sub_1C1AE30(helpButton, v21);
  }
  v77 = SLODWORD(helpButton[1].klass);
  if ( (unsigned int)v77 >= *(_DWORD *)(v75 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)helpButton,
      (Il2CppObject *)v68,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
  }
  else
  {
    v78 = v75 + 8 * v77;
    LODWORD(helpButton[1].klass) = v77 + 1;
    *(_QWORD *)(v78 + 32) = v68;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v78 + 32), (int64_t)v68, v69, v70, v71, v72, v73, v74);
  }
  v80.fields.r = 0.5;
  v80.fields.g = 0.5;
  v80.fields.b = 0.5;
  v80.fields.a = 1.0;
  UIButtonColor__set_defaultColor((UIButtonColor_o *)centerButton, v80, 0LL);
  klass = centerButton->klass;
  centerButton->fields.hover = (struct UnityEngine_Color_o)xmmword_BF9D50;
  centerButton->fields.pressed = (struct UnityEngine_Color_o)xmmword_BF9D50;
  ((void (__fastcall *)(struct UIButton_o *, __int64, __int64, Il2CppMethodPointer))klass->vtable._14_SetState.method)(
    centerButton,
    3LL,
    1LL,
    klass->vtable._15_OnClick.methodPtr);
  v81.fields.r = 0.5;
  v81.fields.g = 0.5;
  v81.fields.b = 0.5;
  v81.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)centerButtonLabel, v81, 0LL);
  v82.fields.r = 0.0;
  v82.fields.g = 0.0;
  v82.fields.b = 0.0;
  v82.fields.a = 1.0;
  UILabel__set_effectColor(centerButtonLabel, v82, 0LL);
}


void __fastcall BattleResultFriendComponent__ShowServantConf(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  OtherUserGameEntity_o *otherUser; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  const MethodInfo *v8; // x1
  ServantLeaderInfo_o *v9; // x20
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v13; // x22

  if ( (byte_4BCAEC5 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BattleResultFriendComponent_EndShowServant__, method);
    sub_1C1ABD4(&Method_BattleResultFriendComponent_ShowServantConf__, v3);
    sub_1C1ABD4(&ServantStatusDialog_EndDelegate_TypeInfo, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4BCAEC5 = 1;
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
    v9 = ServantLeaderInfo;
    v10 = Method_BattleResultFriendComponent_ShowServantConf__;
    if ( (*((_BYTE *)Method_BattleResultFriendComponent_ShowServantConf__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1C1ABEC(Method_BattleResultFriendComponent_ShowServantConf__);
    v11 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = (ServantStatusDialog_EndDelegate_o *)sub_1C1AE20(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v13,
      (Il2CppObject *)this,
      Method_BattleResultFriendComponent_EndShowServant__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenServantStatusDialog_31111300((CommonUI_o *)Instance, 5, v9, v13, 0LL);
      return;
    }
LABEL_10:
    sub_1C1AE30(otherUser, method);
  }
  BattleResultFriendComponent__endCloseSHowServant(this, v8);
}


void __fastcall BattleResultFriendComponent__callBackBeginResume(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BCAED4 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_3623/*"CLOSE"*/, method);
    byte_4BCAED4 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C1AE30(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3623/*"CLOSE"*/, 0LL);
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
    sub_1C1AE30(0LL, classPos);
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

  if ( (byte_4BCAEC7 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_3623/*"CLOSE"*/, method);
    byte_4BCAEC7 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C1AE30(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3623/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__followAssign(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  Il2CppObject *Request_object; // x0
  __int64 v11; // x1

  if ( (byte_4BCAECF & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BattleResultFriendComponent_EndRequestFollow__, method);
    sub_1C1ABD4(&Method_BattleResultFriendComponent_followAssign__, v3);
    sub_1C1ABD4(&Method_NetworkManager_getRequest_FollowAssignRequest___, v4);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v5);
    sub_1C1ABD4(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_4BCAECF = 1;
  }
  v7 = Method_BattleResultFriendComponent_followAssign__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_followAssign__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C1ABEC(Method_BattleResultFriendComponent_followAssign__);
  v8 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0, 0LL);
  v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1C1AE20(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_EndRequestFollow__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v9,
                     (const MethodInfo_3023C78 *)Method_NetworkManager_getRequest_FollowAssignRequest___);
  if ( !Request_object )
    sub_1C1AE30(0LL, v11);
  FollowAssignRequest__beginRequest((FollowAssignRequest_o *)Request_object, this->fields.targetId, 0LL);
}


void __fastcall BattleResultFriendComponent__friendOffer(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  Il2CppObject *Request_object; // x0
  __int64 v11; // x1

  if ( (byte_4BCAECD & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BattleResultFriendComponent_EndRequestFriend__, method);
    sub_1C1ABD4(&Method_BattleResultFriendComponent_friendOffer__, v3);
    sub_1C1ABD4(&Method_NetworkManager_getRequest_FriendOfferRequest___, v4);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v5);
    sub_1C1ABD4(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_4BCAECD = 1;
  }
  v7 = Method_BattleResultFriendComponent_friendOffer__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_friendOffer__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C1ABEC(Method_BattleResultFriendComponent_friendOffer__);
  v8 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0, 0LL);
  v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1C1AE20(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_EndRequestFriend__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v9,
                     (const MethodInfo_3023C78 *)Method_NetworkManager_getRequest_FriendOfferRequest___);
  if ( !Request_object )
    sub_1C1AE30(0LL, v11);
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
    sub_1C1AE30(otherUser, *(_QWORD *)&firstClassId);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultFriendComponent__onChangeClass(
        BattleResultFriendComponent_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4BCAEBF & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BattleResultFriendComponent_onChangeClass__, *(_QWORD *)&classPos);
    byte_4BCAEBF = 1;
  }
  v5 = Method_BattleResultFriendComponent_onChangeClass__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_onChangeClass__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C1ABEC(Method_BattleResultFriendComponent_onChangeClass__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  BattleResultFriendComponent__changeClass(this, classPos, v7);
}


void __fastcall BattleResultFriendComponent__openCore(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
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
  __int64 v19; // x20
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  UserGameEntity_o *SelfUserGame; // x22
  Il2CppObject *MasterData_object; // x25
  int32_t FollowSum; // w24
  _BOOL4 v31; // w21
  _BOOL4 v32; // w26
  _BOOL4 enableFollowQuest; // w27
  int v34; // w23
  const MethodInfo *v35; // x3
  int v36; // w21
  UILabel_o *countLabel; // x26
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x25
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  Il2CppObject *v45; // x0
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  UILabel_o *followCountLabel; // x22
  Il2CppObject *v50; // x24
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  Il2CppObject *v54; // x0
  UILabel_o *confLabel; // x22
  Il2CppObject *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  const MethodInfo *v63; // x1
  struct BattleResultComponent_o *parentComp; // x8
  struct BattleResultComponent_resultData_o *battleResult; // x8
  const MethodInfo *v66; // x2
  _BOOL4 IsNeedUseEventSupport; // w8
  int32_t followerClassId; // w22
  int32_t ExistLeaderInfo; // w0
  UnityEngine_Object_o *classButtonControl; // x22
  System_Action_o *v71; // x21
  const MethodInfo *v72; // x2
  int32_t friendKeep; // [xsp+0h] [xbp-70h] BYREF
  int32_t FriendSum; // [xsp+4h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BCAEC2 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventDetailMaster___, v3);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_OtherUserGameMaster___, v4);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_TblFriendMaster___, v5);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserFollowMaster___, v6);
    sub_1C1ABD4(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__, v7);
    sub_1C1ABD4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v8);
    sub_1C1ABD4(&int_TypeInfo, v9);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v10);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v11);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1C1ABD4(&Method_BattleResultFriendComponent___c__DisplayClass45_0__openCore_b__0__, v13);
    sub_1C1ABD4(&BattleResultFriendComponent___c__DisplayClass45_0_TypeInfo, v14);
    sub_1C1ABD4(&StringLiteral_5594/*"END_PROC"*/, v15);
    sub_1C1ABD4(&StringLiteral_11302/*"RESULT_FRIEND_CONF"*/, v16);
    sub_1C1ABD4(&StringLiteral_25476/*"{0}/{1}"*/, v17);
    sub_1C1ABD4(&StringLiteral_6595/*"FOLLOW_NUM"*/, v18);
    byte_4BCAEC2 = 1;
  }
  entity = 0LL;
  v19 = sub_1C1AE20(BattleResultFriendComponent___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_36;
  *(_QWORD *)(v19 + 16) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)this, v22, v23, v24, v25, v26, v27);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  if ( !Instance )
    goto LABEL_36;
  FollowSum = UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0LL);
  Instance = (DataManager_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6595/*"FOLLOW_NUM"*/, 0LL);
  v31 = FollowSum < (int)Instance;
  v32 = this->fields.followerType == 2;
  if ( !MasterData_object )
    goto LABEL_36;
  enableFollowQuest = this->fields.enableFollowQuest;
  v34 = (int)Instance;
  Instance = (DataManager_o *)TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0LL);
  if ( !SelfUserGame )
    goto LABEL_36;
  v36 = enableFollowQuest && v31 && v32;
  BattleResultFriendComponent__Layout(this, v36, (int)Instance < SelfUserGame->fields.friendKeep, v35);
  countLabel = this->fields.countLabel;
  FriendSum = TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0LL);
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FriendSum, v38, v39, v40);
  friendKeep = SelfUserGame->fields.friendKeep;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep, v42, v43, v44);
  Instance = (DataManager_o *)System_String__Format_63054740((System_String_o *)StringLiteral_25476/*"{0}/{1}"*/, v41, v45, 0LL);
  if ( !countLabel )
    goto LABEL_36;
  UILabel__set_text(countLabel, (System_String_o *)Instance, 0LL);
  if ( v36 )
  {
    followCountLabel = this->fields.followCountLabel;
    FriendSum = FollowSum;
    v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FriendSum, v46, v47, v48);
    friendKeep = v34;
    v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep, v51, v52, v53);
    Instance = (DataManager_o *)System_String__Format_63054740((System_String_o *)StringLiteral_25476/*"{0}/{1}"*/, v50, v54, 0LL);
    if ( !followCountLabel )
      goto LABEL_36;
    UILabel__set_text(followCountLabel, (System_String_o *)Instance, 0LL);
  }
  confLabel = this->fields.confLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11302/*"RESULT_FRIEND_CONF"*/, 0LL);
  if ( !confLabel )
    goto LABEL_36;
  UILabel__set_text(confLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  if ( !Instance )
    goto LABEL_36;
  v56 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          this->fields.targetId,
          (const MethodInfo_324ABD4 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
  this->fields.otherUser = (struct OtherUserGameEntity_o *)v56;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.otherUser, (int64_t)v56, v57, v58, v59, v60, v61, v62);
  BattleResultFriendComponent__OtherUserChangeLimitCountBySpoilerProtection(this, v63);
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventDetailMaster___);
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
    (const MethodInfo_32486C4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( entity )
    IsNeedUseEventSupport = EventDetailEntity__IsNeedUseEventSupport((EventDetailEntity_o *)entity, 0LL);
  else
    IsNeedUseEventSupport = 0;
  followerClassId = this->fields.followerClassId;
  this->fields.displayServantType = IsNeedUseEventSupport;
  ExistLeaderInfo = BattleResultFriendComponent__getExistLeaderInfo(this, followerClassId, v66);
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
  if ( v36 )
  {
    *(_BYTE *)(v19 + 24) = EventTutorialMaster__IsTutorialAvailable(-1, 49, 0, 0, 0, 0, 0LL);
    v71 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(
      v71,
      (Il2CppObject *)v19,
      Method_BattleResultFriendComponent___c__DisplayClass45_0__openCore_b__0__,
      0LL);
    EventTutorialMaster__CheckTutorial(-1, 49, v71, 0, 0, 0, 0, 0LL);
  }
  Instance = (DataManager_o *)this->fields.root;
  if ( !Instance
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL),
        BattleResultFriendComponent__changeClass(this, this->fields.followerClassId, v72),
        (Instance = (DataManager_o *)this->fields.myFsm) == 0LL) )
  {
LABEL_36:
    sub_1C1AE30(Instance, v21);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5594/*"END_PROC"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_Object_o *classButtonControl; // x21
  __int64 v18; // x1
  ClassButtonControlComponent_o *v19; // x0
  ClassButtonControlComponent_o *v20; // x20
  ClassButtonControlComponent_CallbackFunc_o *v21; // x21

  v14 = enableFollow;
  if ( (byte_4BCAEBE & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BattleResultFriendComponent_onChangeClass__, *(_QWORD *)&infollowerType);
    sub_1C1ABD4(&ClassButtonControlComponent_CallbackFunc_TypeInfo, v15);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v16);
    byte_4BCAEBE = 1;
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
    v19 = this->fields.classButtonControl;
    if ( !v19
      || (ClassButtonControlComponent__setCursor(v19, infollowerClassId, 0LL),
          v20 = this->fields.classButtonControl,
          v21 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1C1AE20(ClassButtonControlComponent_CallbackFunc_TypeInfo),
          ClassButtonControlComponent_CallbackFunc___ctor(
            v21,
            (Il2CppObject *)this,
            (intptr_t)Method_BattleResultFriendComponent_onChangeClass__,
            0LL),
          !v20) )
    {
      sub_1C1AE30(v19, v18);
    }
    ClassButtonControlComponent__init(v20, v21, 0, 0, 0, 0LL);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleResultFriendComponent__ChangeFaceAtlas_d__44_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  BattleResultFriendComponent_o *_4__this; // x20
  Il2CppObject *v16; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Action_o *releasePerformanceObject; // x8
  UnityEngine_WaitForEndOfFrame_o *v24; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t waitForEndOfFrame_5__2; // x1
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  bool result; // w0
  int64_t v40; // x1
  PartyOrganizationUtility_o *v41; // x19
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int v48; // w8
  System_Collections_IEnumerator_o *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct BattleResultFriendComponent___c__DisplayClass44_0_o *_8__1; // x21
  System_Action_o *v57; // x20
  struct BattleResultFriendComponent___c__DisplayClass44_0_o *v58; // x8
  int64_t v59; // x1
  int64_t v60; // x1
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7

  v8 = this;
  if ( (byte_4BCAEDA & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&AtlasManager_TypeInfo, v9);
    sub_1C1ABD4(&System_GC_TypeInfo, v10);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v11);
    sub_1C1ABD4(&Method_BattleResultFriendComponent___c__DisplayClass44_0__ChangeFaceAtlas_b__0__, v12);
    sub_1C1ABD4(&BattleResultFriendComponent___c__DisplayClass44_0_TypeInfo, v13);
    this = (BattleResultFriendComponent__ChangeFaceAtlas_d__44_o *)sub_1C1ABD4(
                                                                     &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                     v14);
    byte_4BCAEDA = 1;
  }
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v16 = (Il2CppObject *)sub_1C1AE20(BattleResultFriendComponent___c__DisplayClass44_0_TypeInfo);
      System_Object___ctor(v16, 0LL);
      v8->fields.__8__1 = (struct BattleResultFriendComponent___c__DisplayClass44_0_o *)v16;
      sub_1C1AB78((PartyOrganizationUtility_o *)&v8->fields.__8__1, (int64_t)v16, v17, v18, v19, v20, v21, v22);
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
      v24 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C1AE20(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v24, 0LL);
      v8->fields._waitForEndOfFrame_5__2 = v24;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&v8->fields._waitForEndOfFrame_5__2,
        (int64_t)v24,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
      waitForEndOfFrame_5__2 = (int64_t)v8->fields._waitForEndOfFrame_5__2;
      v8->fields.__2__current = (Il2CppObject *)waitForEndOfFrame_5__2;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C1AB78(p__2__current, waitForEndOfFrame_5__2, v33, v34, v35, v36, v37, v38);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    case 1:
      v8->fields.__1__state = -1;
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_64086932(0LL);
      v40 = (int64_t)v8->fields._waitForEndOfFrame_5__2;
      v8->fields.__2__current = (Il2CppObject *)v40;
      v41 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C1AB78(v41, v40, v42, v43, v44, v45, v46, v47);
      v48 = 2;
      goto LABEL_30;
    case 2:
      v8->fields.__1__state = -1;
      this = (BattleResultFriendComponent__ChangeFaceAtlas_d__44_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_31;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleResultFriendComponent__ChangeFaceAtlas_d__44_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_31;
      v49 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v49;
      v41 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C1AB78(v41, (int64_t)v49, v50, v51, v52, v53, v54, v55);
      v48 = 3;
      goto LABEL_30;
    case 3:
      _8__1 = v8->fields.__8__1;
      v8->fields.__1__state = -1;
      if ( !_8__1 )
        goto LABEL_31;
      _8__1->fields.isWait = 1;
      v57 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(
        v57,
        (Il2CppObject *)_8__1,
        Method_BattleResultFriendComponent___c__DisplayClass44_0__ChangeFaceAtlas_b__0__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadFaceAtlas(v57, 1, 0LL);
LABEL_21:
      v58 = v8->fields.__8__1;
      if ( !v58 )
LABEL_31:
        sub_1C1AE30(this, method);
      if ( v58->fields.isWait )
      {
        v59 = (int64_t)v8->fields._waitForEndOfFrame_5__2;
        v8->fields.__2__current = (Il2CppObject *)v59;
        v41 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C1AB78(v41, v59, (int64_t)v2, v3, v4, v5, v6, v7);
        v48 = 4;
      }
      else
      {
        if ( !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_64086932(0LL);
        v60 = (int64_t)v8->fields._waitForEndOfFrame_5__2;
        v8->fields.__2__current = (Il2CppObject *)v60;
        v41 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C1AB78(v41, v60, v61, v62, v63, v64, v65, v66);
        v48 = 5;
      }
LABEL_30:
      *(_DWORD *)&v41[-1].fields._IsQuestStartMenuMode_k__BackingField = v48;
      result = 1;
      break;
    case 4:
      v8->fields.__1__state = -1;
      goto LABEL_21;
    case 5:
      v8->fields.__1__state = -1;
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

  v2 = sub_1C1ABE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C1AE20(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C1ABE8(&Method_BattleResultFriendComponent__ChangeFaceAtlas_d__44_System_Collections_IEnumerator_Reset__);
  sub_1C1ACFC(v3, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleResultFriendComponent_o *_4__this; // x8
  struct BattleResultFriendComponent_o *v10; // x8
  UILabel_o *followTutorialLabel; // x20
  UnityEngine_MonoBehaviour_o *v12; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  System_Collections_Generic_List_object__o *monitor; // x20
  EventDelegate_o *v15; // x21
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  struct BattleResultFriendComponent_o *v26; // x8
  struct BattleResultFriendComponent_o *v27; // x8
  struct BattleResultFriendComponent_o *v28; // x8
  struct BattleResultFriendComponent_o *v29; // x8
  Il2CppObject *Instance; // x19
  UnityEngine_Vector2_o v31; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v32; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  v2 = this;
  if ( (byte_4BCAED9 & 1) == 0 )
  {
    sub_1C1ABD4(&EventDelegate_TypeInfo, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v3);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C1ABD4(&StringLiteral_10059/*"OnClickTutorialFollow"*/, v6);
    sub_1C1ABD4(&StringLiteral_13743/*"TUTORIAL_MESSAGE_FOLLOW_OFFER"*/, v7);
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)sub_1C1ABD4(&StringLiteral_11299/*"RESULT_FOLLOW_REQUEST_YES"*/, v8);
    byte_4BCAED9 = 1;
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
    v10 = v2->fields.__4__this;
    if ( !v10 )
      goto LABEL_29;
    followTutorialLabel = v10->fields.followTutorialLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_11299/*"RESULT_FOLLOW_REQUEST_YES"*/,
                                                                    0LL);
    if ( !followTutorialLabel )
      goto LABEL_29;
    UILabel__set_text(followTutorialLabel, (System_String_o *)this, 0LL);
    v12 = (UnityEngine_MonoBehaviour_o *)v2->fields.__4__this;
    if ( !v12 )
      goto LABEL_29;
    m_CancellationTokenSource = v12[8].fields.m_CancellationTokenSource;
    if ( !m_CancellationTokenSource )
      goto LABEL_29;
    monitor = (System_Collections_Generic_List_object__o *)m_CancellationTokenSource[3].monitor;
    v15 = (EventDelegate_o *)sub_1C1AE20(EventDelegate_TypeInfo);
    EventDelegate___ctor_47893912(v15, v12, (System_String_o *)StringLiteral_10059/*"OnClickTutorialFollow"*/, 0LL);
    if ( !monitor )
      goto LABEL_29;
    items = monitor->fields._items;
    v23 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++monitor->fields._version;
    if ( !items )
      goto LABEL_29;
    size = monitor->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        monitor,
        (Il2CppObject *)v15,
        *(const MethodInfo_363C890 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v25 = &items->obj.klass + size;
      monitor->fields._size = size + 1;
      v25[4] = (Il2CppClass *)v15;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v25 + 4), (int64_t)v15, v16, v17, v18, v19, v20, v21);
    }
    v26 = v2->fields.__4__this;
    if ( !v26 )
      goto LABEL_29;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)v26->fields.followTutorialButton;
    if ( !this )
      goto LABEL_29;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
    v27 = v2->fields.__4__this;
    if ( !v27 )
      goto LABEL_29;
    GameObjectExtensions__AddLocalPositionX((UnityEngine_GameObject_o *)this, v27->fields.offsetPosition, 0LL);
    v28 = v2->fields.__4__this;
    if ( !v28 )
      goto LABEL_29;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)v28->fields.followTutorialButton;
    if ( !this )
      goto LABEL_29;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
    if ( !this
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
          (v29 = v2->fields.__4__this) == 0LL)
      || (this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)v29->fields.rightButton) == 0LL
      || (this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)this,
                                                                          0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_13743/*"TUTORIAL_MESSAGE_FOLLOW_OFFER"*/,
                                                                          0LL),
          !Instance) )
    {
LABEL_29:
      sub_1C1AE30(this, method);
    }
    v31.fields.x = 313.0;
    v31.fields.y = -184.0;
    v32.fields.m_XMin = 162.0;
    v32.fields.m_YMin = -244.0;
    v32.fields.m_Width = 300.0;
    v32.fields.m_Height = 80.0;
    CommonUI__OpenTutorialNotificationDialogArrow(
      (CommonUI_o *)Instance,
      (System_String_o *)this,
      v31,
      v32,
      0.0,
      0LL,
      -1,
      0LL,
      0LL);
  }
}