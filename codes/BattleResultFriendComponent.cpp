void __fastcall BattleResultFriendComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FF57E & 1) == 0 )
  {
    sub_1B640C8(&BattleResultFriendComponent_TypeInfo, v1);
    byte_49FF57E = 1;
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
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FF567 & 1) == 0 )
  {
    sub_1B640C8(&BattleResultFriendComponent__ChangeFaceAtlas_d__44_TypeInfo, method);
    byte_49FF567 = 1;
  }
  v4 = sub_1B64314(BattleResultFriendComponent__ChangeFaceAtlas_d__44_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
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
  BattleRootComponent_c *v10; // x1
  __int64 v11; // x2
  struct SceneRootComponent_o *targetRoot; // x20
  __int64 methodPtr_low; // x9
  BattleRootComponent_callBackBeginResume_o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  OtherUserGameEntity_o *otherUser; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  SupportInfoJump_o *v22; // x19
  __int64 v23; // x1
  __int64 v24; // x2
  SceneRootComponent_c *klass; // x8
  Il2CppClass *parent; // x8
  int32_t name; // w21
  QuestRestrictionInfo_o *v28; // x20
  BattleResultFriendComponent_o *v29; // x0
  const MethodInfo *v30; // x1

  if ( (byte_49FF579 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleResultFriendComponent_ChangeSupportScene__, method);
    sub_1B640C8(&Method_BattleResultFriendComponent_callBackBeginResume__, v3);
    sub_1B640C8(&BattleRootComponent_TypeInfo, v4);
    sub_1B640C8(&QuestRestrictionInfo_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1B640C8(&SupportInfoJump_TypeInfo, v7);
    sub_1B640C8(&BattleRootComponent_callBackBeginResume_TypeInfo, v8);
    byte_49FF579 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  if ( AvalonSceneManager__checkNowScene(Instance, 10, 0LL) )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    targetRoot = Instance->fields.targetRoot;
    if ( !targetRoot
      || (v10 = BattleRootComponent_TypeInfo,
          methodPtr_low = LOBYTE(BattleRootComponent_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(targetRoot->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
      && (BattleRootComponent_c *)targetRoot->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleRootComponent_TypeInfo )
    {
      v14 = (BattleRootComponent_callBackBeginResume_o *)sub_1B64314(
                                                           BattleRootComponent_callBackBeginResume_TypeInfo,
                                                           v10,
                                                           v11);
      BattleRootComponent_callBackBeginResume___ctor(
        v14,
        (Il2CppObject *)this,
        Method_BattleResultFriendComponent_callBackBeginResume__,
        0LL);
      if ( targetRoot )
      {
        *(_QWORD *)&targetRoot[1].fields.kind = v14;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&targetRoot[1].fields.kind, (int32_t)v14, v15, v16);
        v17 = Method_BattleResultFriendComponent_ChangeSupportScene__;
        if ( (*((_BYTE *)Method_BattleResultFriendComponent_ChangeSupportScene__ + 83) & 2) != 0 )
          v17 = (_QWORD *)sub_1B640E0(Method_BattleResultFriendComponent_ChangeSupportScene__);
        v18 = (System_Reflection_MethodBase_o *)sub_1B640AC(v17, v17[4]);
        OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0LL);
        otherUser = this->fields.otherUser;
        v22 = (SupportInfoJump_o *)sub_1B64314(SupportInfoJump_TypeInfo, v20, v21);
        SupportInfoJump___ctor(v22, otherUser, 0, 0, 0LL);
        klass = targetRoot[1].klass;
        if ( klass )
        {
          parent = klass->_1.parent;
          if ( parent )
          {
            name = (int32_t)parent->_1.name;
            v28 = (QuestRestrictionInfo_o *)sub_1B64314(QuestRestrictionInfo_TypeInfo, v23, v24);
            QuestRestrictionInfo___ctor(v28, name, 0LL);
            if ( v22 )
            {
              SupportInfoJump__SetSetupInfo(v22, 0LL, v28, 0LL);
              Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( Instance )
              {
                AvalonSceneManager__pushScene(Instance, 60, 1, (Il2CppObject *)v22, 0LL);
                return;
              }
            }
          }
        }
      }
LABEL_18:
      sub_1B64324(Instance);
    }
    sub_1B645E4(Instance->fields.targetRoot);
    BattleResultFriendComponent__callBackBeginResume(v29, v30);
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
  System_Collections_Generic_Dictionary_object__object__o *myFsm; // x0
  System_Collections_Generic_Dictionary_object__object__o *v17; // x21
  System_String_o *v18; // x20
  __int64 *v19; // x8
  Il2CppObject *Instance; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  NotificationDialog_ClickDelegate_o *v23; // x22

  if ( (byte_49FF576 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleResultFriendComponent_OnEndRequestDialog__, result);
    sub_1B640C8(&NotificationDialog_ClickDelegate_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B640C8(&JsonManager_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B640C8(&StringLiteral_11006/*"REQUEST_OK"*/, v10);
    sub_1B640C8(&StringLiteral_11004/*"REQUEST_NG"*/, v11);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v12);
    sub_1B640C8(&StringLiteral_21313/*"message"*/, v13);
    sub_1B640C8(&StringLiteral_1213/*"0"*/, v14);
    sub_1B640C8(&StringLiteral_23425/*"status"*/, v15);
    byte_49FF576 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21968/*"ng"*/, 0LL) )
  {
    myFsm = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v19 = &StringLiteral_11004/*"REQUEST_NG"*/;
      goto LABEL_17;
    }
LABEL_20:
    sub_1B64324(myFsm);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0LL);
  if ( !myFsm )
    goto LABEL_20;
  v17 = myFsm;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFsm,
          (Il2CppObject *)StringLiteral_21313/*"message"*/,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_13;
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v17,
                                                                       (Il2CppObject *)StringLiteral_21313/*"message"*/,
                                                                       (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_20;
  v18 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))myFsm->klass->vtable._3_ToString.method)(
                             myFsm,
                             myFsm->klass->vtable._4_unknown.methodPtr);
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v17,
                                                                       (Il2CppObject *)StringLiteral_23425/*"status"*/,
                                                                       (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_20;
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))myFsm->klass->vtable._3_ToString.method)(
                                                                       myFsm,
                                                                       myFsm->klass->vtable._4_unknown.methodPtr);
  if ( !myFsm )
    goto LABEL_20;
  if ( System_String__Equals_61383712((System_String_o *)myFsm, (System_String_o *)StringLiteral_1213/*"0"*/, 0LL)
    || System_String__IsNullOrEmpty(v18, 0LL) )
  {
LABEL_13:
    myFsm = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v19 = &StringLiteral_11006/*"REQUEST_OK"*/;
LABEL_17:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFsm, (System_String_o *)*v19, 0LL);
      return;
    }
    goto LABEL_20;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v23 = (NotificationDialog_ClickDelegate_o *)sub_1B64314(NotificationDialog_ClickDelegate_TypeInfo, v21, v22);
  NotificationDialog_ClickDelegate___ctor(
    v23,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_20;
  CommonUI__OpenNotificationDialog_30347532(
    (CommonUI_o *)Instance,
    0LL,
    v18,
    v23,
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
  System_Collections_Generic_Dictionary_object__object__o *myFsm; // x0
  System_Collections_Generic_Dictionary_object__object__o *v17; // x21
  System_String_o *v18; // x20
  __int64 *v19; // x8
  Il2CppObject *Instance; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  NotificationDialog_ClickDelegate_o *v23; // x22

  if ( (byte_49FF574 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleResultFriendComponent_OnEndRequestDialog__, result);
    sub_1B640C8(&NotificationDialog_ClickDelegate_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B640C8(&JsonManager_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B640C8(&StringLiteral_11006/*"REQUEST_OK"*/, v10);
    sub_1B640C8(&StringLiteral_11004/*"REQUEST_NG"*/, v11);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v12);
    sub_1B640C8(&StringLiteral_21313/*"message"*/, v13);
    sub_1B640C8(&StringLiteral_1213/*"0"*/, v14);
    sub_1B640C8(&StringLiteral_23425/*"status"*/, v15);
    byte_49FF574 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21968/*"ng"*/, 0LL) )
  {
    myFsm = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v19 = &StringLiteral_11004/*"REQUEST_NG"*/;
      goto LABEL_17;
    }
LABEL_20:
    sub_1B64324(myFsm);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0LL);
  if ( !myFsm )
    goto LABEL_20;
  v17 = myFsm;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFsm,
          (Il2CppObject *)StringLiteral_21313/*"message"*/,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_13;
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v17,
                                                                       (Il2CppObject *)StringLiteral_21313/*"message"*/,
                                                                       (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_20;
  v18 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))myFsm->klass->vtable._3_ToString.method)(
                             myFsm,
                             myFsm->klass->vtable._4_unknown.methodPtr);
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v17,
                                                                       (Il2CppObject *)StringLiteral_23425/*"status"*/,
                                                                       (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_20;
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))myFsm->klass->vtable._3_ToString.method)(
                                                                       myFsm,
                                                                       myFsm->klass->vtable._4_unknown.methodPtr);
  if ( !myFsm )
    goto LABEL_20;
  if ( System_String__Equals_61383712((System_String_o *)myFsm, (System_String_o *)StringLiteral_1213/*"0"*/, 0LL)
    || System_String__IsNullOrEmpty(v18, 0LL) )
  {
LABEL_13:
    myFsm = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v19 = &StringLiteral_11006/*"REQUEST_OK"*/;
LABEL_17:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFsm, (System_String_o *)*v19, 0LL);
      return;
    }
    goto LABEL_20;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v23 = (NotificationDialog_ClickDelegate_o *)sub_1B64314(NotificationDialog_ClickDelegate_TypeInfo, v21, v22);
  NotificationDialog_ClickDelegate___ctor(
    v23,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_20;
  CommonUI__OpenNotificationDialog_30347532(
    (CommonUI_o *)Instance,
    0LL,
    v18,
    v23,
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
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x21
  __int64 v10; // x0

  if ( (byte_49FF56C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, flg);
    sub_1B640C8(&Method_BattleResultFriendComponent_endCloseSHowServant__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49FF56C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_BattleResultFriendComponent_endCloseSHowServant__, 0LL);
  if ( !Instance )
    sub_1B64324(v10);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v9, 0LL);
}


void __fastcall BattleResultFriendComponent__Init(
        BattleResultFriendComponent_o *this,
        System_Action_o *releasePerformanceObject,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *root; // x0
  UnityEngine_Object_o *friendIconComp; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  System_Object_array *ComponentsInChildren_object; // x0
  __int64 v11; // x1
  __int64 v12; // x8
  System_Object_array *v13; // x21
  unsigned __int64 v14; // x24
  Il2CppObject **m_Items; // x25
  UnityEngine_Object_o *v16; // x22

  if ( (byte_49FF563 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel____75773696, releasePerformanceObject);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49FF563 = 1;
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
    sub_1B64324(root);
  ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                  root,
                                  1,
                                  (const MethodInfo_2E88B78 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel____75773696);
  if ( ComponentsInChildren_object )
  {
    v12 = *(_QWORD *)&ComponentsInChildren_object->max_length;
    v13 = ComponentsInChildren_object;
    if ( (int)v12 >= 1 )
    {
      v14 = 0LL;
      m_Items = ComponentsInChildren_object->m_Items;
      do
      {
        if ( v14 >= (unsigned int)v12 )
LABEL_21:
          sub_1B6432C(ComponentsInChildren_object, v11);
        v16 = (UnityEngine_Object_o *)m_Items[v14];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        ComponentsInChildren_object = (System_Object_array *)UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
        if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
        {
          if ( v14 >= v13->max_length )
            goto LABEL_21;
          root = (UnityEngine_GameObject_o *)m_Items[v14];
          if ( !root )
            goto LABEL_22;
          UILabel__SetDefaultFont((UILabel_o *)root, 0LL);
        }
        LODWORD(v12) = v13->max_length;
        ++v14;
      }
      while ( (__int64)v14 < (int)v12 );
    }
  }
LABEL_20:
  this->fields.releasePerformanceObject = releasePerformanceObject;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.releasePerformanceObject,
    (int32_t)releasePerformanceObject,
    v8,
    v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultFriendComponent__Layout(
        BattleResultFriendComponent_o *this,
        bool isActiveFollow,
        bool isActiveFriend,
        const MethodInfo *method)
{
  _BOOL4 v4; // w20
  _BOOL4 v5; // w21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x26
  Il2CppObject *v15; // x0
  System_String_o *v16; // x22
  System_String_o *errLabel; // x0
  void *v18; // x23
  char v19; // w24
  System_String_o *v20; // x1
  System_String_o **v21; // x8
  int v22; // w21
  System_String_o **v23; // x24
  const MethodInfo *v24; // x3
  System_String_o *v25; // x23
  UILabel_o *titleLabel; // x21
  UILabel_o *friendWarningLabel; // x20
  int32_t followerStatus; // [xsp+Ch] [xbp-54h] BYREF

  v4 = isActiveFriend;
  v5 = isActiveFollow;
  if ( (byte_49FF57B & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, isActiveFollow);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_11042/*"RESULT_FRIENDANDFOLLOW_TITLE"*/, v8);
    sub_1B640C8(&StringLiteral_11044/*"RESULT_FRIEND_ERR_{0}"*/, v9);
    sub_1B640C8(&StringLiteral_11048/*"RESULT_MAXFRIEND_WARNING"*/, v10);
    sub_1B640C8(&StringLiteral_11047/*"RESULT_FRIEND_TITLE"*/, v11);
    sub_1B640C8(&StringLiteral_11041/*"RESULT_FOLLOW_TITLE"*/, v12);
    sub_1B640C8(&StringLiteral_1/*""*/, v13);
    byte_49FF57B = 1;
  }
  v14 = StringLiteral_11048/*"RESULT_MAXFRIEND_WARNING"*/;
  followerStatus = this->fields.followerStatus;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &followerStatus);
  v16 = System_String__Format((System_String_o *)StringLiteral_11044/*"RESULT_FRIEND_ERR_{0}"*/, v15, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  errLabel = LocalizationManager__Get(v16, 0LL);
  if ( !v16 )
    goto LABEL_33;
  v18 = errLabel;
  errLabel = (System_String_o *)System_String__Equals_61383712(v16, errLabel, 0LL);
  if ( !this->fields.errLabel )
    goto LABEL_33;
  v19 = (char)errLabel;
  v20 = (System_String_o *)(((unsigned __int8)errLabel & 1) != 0 ? StringLiteral_1/*""*/ : v18);
  UILabel__set_text(this->fields.errLabel, v20, 0LL);
  if ( v19 & 1 | (!v5 || !v4) )
  {
    v16 = (System_String_o *)v14;
  }
  else
  {
    errLabel = (System_String_o *)this->fields.errLabel;
    if ( !errLabel )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)errLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    LOBYTE(v4) = 0;
  }
  errLabel = (System_String_o *)this->fields.followCountRoot;
  if ( !errLabel )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)errLabel, v5, 0LL);
  errLabel = (System_String_o *)this->fields.friendWarningLabel;
  if ( !errLabel )
    goto LABEL_33;
  errLabel = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)errLabel, 0LL);
  if ( !errLabel )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)errLabel, !v4, 0LL);
  errLabel = (System_String_o *)this->fields.countRoot;
  if ( !errLabel )
    goto LABEL_33;
  v21 = (System_String_o **)&StringLiteral_11042/*"RESULT_FRIENDANDFOLLOW_TITLE"*/;
  v22 = v5;
  if ( !v22 )
    v21 = (System_String_o **)&StringLiteral_11047/*"RESULT_FRIEND_TITLE"*/;
  if ( v4 )
    v23 = v21;
  else
    v23 = (System_String_o **)&StringLiteral_11041/*"RESULT_FOLLOW_TITLE"*/;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)errLabel, v4, 0LL);
  BattleResultFriendComponent__SetupButtons(this, v22, v4, v24);
  v25 = *v23;
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  errLabel = LocalizationManager__Get(v25, 0LL);
  if ( !titleLabel )
    goto LABEL_33;
  UILabel__set_text(titleLabel, errLabel, 0LL);
  if ( v4 )
    goto LABEL_31;
  friendWarningLabel = this->fields.friendWarningLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  errLabel = LocalizationManager__Get(v16, 0LL);
  if ( !friendWarningLabel )
LABEL_33:
    sub_1B64324(errLabel);
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

  if ( (byte_49FF571 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_6406/*"FOLLOW_CONNECT"*/, method);
    byte_49FF571 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_6406/*"FOLLOW_CONNECT"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickFriend(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF56E & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3816/*"CONNECT"*/, method);
    byte_49FF56E = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3816/*"CONNECT"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickHelp(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_49FF57D & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleResultFriendComponent_OnClickHelp__, method);
    byte_49FF57D = 1;
  }
  v2 = Method_BattleResultFriendComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1B640E0(Method_BattleResultFriendComponent_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_1B640AC(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 49, 0LL, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickNo(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF570 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9197/*"NEXT"*/, method);
    byte_49FF570 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9197/*"NEXT"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickNoActionFriend(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_49FF56F & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleResultFriendComponent_OnClickNoActionFriend__, method);
    byte_49FF56F = 1;
  }
  v2 = Method_BattleResultFriendComponent_OnClickNoActionFriend__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_OnClickNoActionFriend__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1B640E0(Method_BattleResultFriendComponent_OnClickNoActionFriend__);
  v3 = (System_Reflection_MethodBase_o *)sub_1B640AC(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 2, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickSupportInfo(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF578 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3418/*"CHANGE_SUPPORT"*/, method);
    byte_49FF578 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3418/*"CHANGE_SUPPORT"*/, 0LL);
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
  int32_t v8; // w2
  int32_t v9; // w3
  ServantStatusBattleListViewItem_o *v10; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FF572 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_PickupUserFollowerMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(
      &Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__,
      v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49FF572 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseTutorialNotificationDialogArrow((CommonUI_o *)Instance, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
  if ( !Instance )
    goto LABEL_12;
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          (const MethodInfo_30D412C *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__) )
    goto LABEL_11;
  Instance = entity;
  if ( !entity )
LABEL_12:
    sub_1B64324(Instance);
  v10 = (ServantStatusBattleListViewItem_o *)&entity[1];
  if ( entity[1].klass )
  {
    v10->klass = 0LL;
    sub_1B6406C(v10, 0, v8, v9);
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

  if ( (byte_49FF577 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_1B640C8(&StringLiteral_11006/*"REQUEST_OK"*/, v4);
    byte_49FF577 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_11006/*"REQUEST_OK"*/, 0LL);
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

  if ( (byte_49FF566 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_TblFriendMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserFollowMaster___, v3);
    sub_1B640C8(&OptionManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B640C8(&StringLiteral_9197/*"NEXT"*/, v6);
    sub_1B640C8(&StringLiteral_6410/*"FOLLOW_NUM"*/, v7);
    byte_49FF566 = 1;
  }
  if ( this->fields.followerType != 2 )
    goto LABEL_11;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserFollowMaster___);
  if ( !Instance )
    goto LABEL_21;
  FollowSum = UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0LL);
  Instance = (DataManager_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6410/*"FOLLOW_NUM"*/, 0LL);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9197/*"NEXT"*/, 0LL);
      return;
    }
LABEL_21:
    sub_1B64324(Instance);
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
    UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v16, 0LL);
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

  if ( (byte_49FF569 & 1) == 0 )
  {
    sub_1B640C8(&OptionManager_TypeInfo, method);
    byte_49FF569 = 1;
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
        sub_1B6432C(SpoilerSetting, v4);
      }
LABEL_14:
      v9 = this->fields.otherUser;
      if ( !v9 || (eventUserSvtLeaderHash = v9->fields.eventUserSvtLeaderHash) == 0LL )
LABEL_23:
        sub_1B64324(SpoilerSetting);
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

  if ( (byte_49FF56A & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9603/*"OPEN_SERVANT"*/, method);
    byte_49FF56A = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9603/*"OPEN_SERVANT"*/, 0LL);
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
  __int64 v20; // x1
  __int64 v21; // x2
  EventDelegate_o *v22; // x23
  UnityEngine_Component_o *helpButton; // x0
  UILabel_o *leftButtonLabel; // x24
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 klass_low; // x10
  __int64 v30; // x8
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  struct UIButton_o *v35; // x8
  __int64 v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  __int64 v39; // x8
  struct UIButton_o *rightButton; // x8
  __int64 v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  __int64 v44; // x8
  UILabel_o *centerButtonLabel; // x22
  struct UIButton_o *centerButton; // x23
  UnityEngine_GameObject_o *v47; // x24
  BattleResultFriendComponent_c *v48; // x8
  __int64 *v49; // x8
  UILabel_o *rightButtonLabel; // x24
  UnityEngine_GameObject_o *gameObject; // x24
  BattleResultFriendComponent_c *v52; // x8
  UnityEngine_GameObject_o *v53; // x0
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_GameObject_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  EventDelegate_o *v59; // x20
  int32_t v60; // w2
  int32_t v61; // w3
  __int64 v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  __int64 v65; // x8
  UIButton_c *klass; // x8
  UnityEngine_Color_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FF57C & 1) == 0 )
  {
    sub_1B640C8(&BattleResultFriendComponent_TypeInfo, isActiveFollow);
    sub_1B640C8(&EventDelegate_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDelegate__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDelegate__Remove__, v9);
    sub_1B640C8(&LocalizationManager_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_9795/*"OnClickFriend"*/, v11);
    sub_1B640C8(&StringLiteral_9815/*"OnClickNoActionFriend"*/, v12);
    sub_1B640C8(&StringLiteral_11046/*"RESULT_FRIEND_REQUEST_YES"*/, v13);
    sub_1B640C8(&StringLiteral_11040/*"RESULT_FOLLOW_REQUEST_YES"*/, v14);
    sub_1B640C8(&StringLiteral_9794/*"OnClickFollow"*/, v15);
    sub_1B640C8(&StringLiteral_20073/*"icon_friend"*/, v16);
    sub_1B640C8(&StringLiteral_11045/*"RESULT_FRIEND_REQUEST_NO"*/, v17);
    sub_1B640C8(&StringLiteral_20072/*"icon_follow"*/, v18);
    byte_49FF57C = 1;
  }
  v19 = (EventDelegate_o *)sub_1B64314(EventDelegate_TypeInfo, isActiveFollow, isActiveFriend);
  EventDelegate___ctor_46509032(v19, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9795/*"OnClickFriend"*/, 0LL);
  v22 = (EventDelegate_o *)sub_1B64314(EventDelegate_TypeInfo, v20, v21);
  EventDelegate___ctor_46509032(v22, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9794/*"OnClickFollow"*/, 0LL);
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
  helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11045/*"RESULT_FRIEND_REQUEST_NO"*/, 0LL);
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
    v27 = *(_QWORD *)&helpButton->fields.m_CachedPtr;
    v28 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++HIDWORD(helpButton[1].klass);
    if ( !v27 )
      goto LABEL_61;
    klass_low = SLODWORD(helpButton[1].klass);
    if ( (unsigned int)klass_low >= *(_DWORD *)(v27 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)helpButton,
        (Il2CppObject *)v19,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v30 = v27 + 8 * klass_low;
      LODWORD(helpButton[1].klass) = klass_low + 1;
      *(_QWORD *)(v30 + 32) = v19;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 32), (int32_t)v19, v25, v26);
    }
    rightButton = this->fields.rightButton;
    if ( !rightButton )
      goto LABEL_61;
    helpButton = (UnityEngine_Component_o *)rightButton->fields.onClick;
    if ( !helpButton )
      goto LABEL_61;
    v41 = *(_QWORD *)&helpButton->fields.m_CachedPtr;
    v42 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++HIDWORD(helpButton[1].klass);
    if ( !v41 )
      goto LABEL_61;
    v43 = SLODWORD(helpButton[1].klass);
    if ( (unsigned int)v43 >= *(_DWORD *)(v41 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)helpButton,
        (Il2CppObject *)v22,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
    }
    else
    {
      v44 = v41 + 8 * v43;
      LODWORD(helpButton[1].klass) = v43 + 1;
      *(_QWORD *)(v44 + 32) = v22;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v44 + 32), (int32_t)v22, v31, v32);
    }
    centerButton = this->fields.centerButton;
    centerButtonLabel = this->fields.centerButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11046/*"RESULT_FRIEND_REQUEST_YES"*/, 0LL);
    if ( !centerButtonLabel )
      goto LABEL_61;
    UILabel__set_text(centerButtonLabel, (System_String_o *)helpButton, 0LL);
    rightButtonLabel = this->fields.rightButtonLabel;
    helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11040/*"RESULT_FOLLOW_REQUEST_YES"*/, 0LL);
    if ( !rightButtonLabel )
      goto LABEL_61;
    UILabel__set_text(rightButtonLabel, (System_String_o *)helpButton, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.centerButtonLabel;
    if ( !helpButton )
      goto LABEL_61;
    gameObject = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    v52 = BattleResultFriendComponent_TypeInfo;
    if ( !BattleResultFriendComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultFriendComponent_TypeInfo);
      v52 = BattleResultFriendComponent_TypeInfo;
    }
    GameObjectExtensions__AddLocalPositionX(gameObject, v52->static_fields->offsetOfferLabelPosition, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightButtonLabel;
    if ( !helpButton )
      goto LABEL_61;
    v53 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    GameObjectExtensions__AddLocalPositionX(
      v53,
      BattleResultFriendComponent_TypeInfo->static_fields->offsetOfferLabelPosition,
      0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.leftButton;
    if ( !helpButton )
      goto LABEL_61;
    v54 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    GameObjectExtensions__AddLocalPositionX(v54, -this->fields.offsetPosition, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightButton;
    if ( !helpButton )
      goto LABEL_61;
    v55 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    GameObjectExtensions__AddLocalPositionX(v55, this->fields.offsetPosition, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightMarkSprite;
    if ( !helpButton )
      goto LABEL_61;
    v56 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    GameObjectExtensions__AddLocalPositionX(
      v56,
      BattleResultFriendComponent_TypeInfo->static_fields->offsetFollowMarkPosition,
      0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.centerMarkSprite;
    if ( !helpButton )
      goto LABEL_61;
    UISprite__set_spriteName((UISprite_o *)helpButton, (System_String_o *)StringLiteral_20073/*"icon_friend"*/, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightMarkSprite;
    if ( !helpButton )
      goto LABEL_61;
    v49 = &StringLiteral_20072/*"icon_follow"*/;
  }
  else
  {
    helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL);
    if ( !helpButton )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 0, 0LL);
    v35 = this->fields.rightButton;
    if ( !v35 )
      goto LABEL_61;
    helpButton = (UnityEngine_Component_o *)v35->fields.onClick;
    if ( !helpButton )
      goto LABEL_61;
    v36 = *(_QWORD *)&helpButton->fields.m_CachedPtr;
    v37 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++HIDWORD(helpButton[1].klass);
    if ( !v36 )
      goto LABEL_61;
    v38 = SLODWORD(helpButton[1].klass);
    if ( (unsigned int)v38 >= *(_DWORD *)(v36 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)helpButton,
        (Il2CppObject *)v19,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
    }
    else
    {
      v39 = v36 + 8 * v38;
      LODWORD(helpButton[1].klass) = v38 + 1;
      *(_QWORD *)(v39 + 32) = v19;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v39 + 32), (int32_t)v19, v33, v34);
    }
    centerButton = this->fields.rightButton;
    centerButtonLabel = this->fields.rightButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11046/*"RESULT_FRIEND_REQUEST_YES"*/, 0LL);
    if ( !centerButtonLabel )
      goto LABEL_61;
    UILabel__set_text(centerButtonLabel, (System_String_o *)helpButton, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightButtonLabel;
    if ( !helpButton )
      goto LABEL_61;
    v47 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    v48 = BattleResultFriendComponent_TypeInfo;
    if ( !BattleResultFriendComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultFriendComponent_TypeInfo);
      v48 = BattleResultFriendComponent_TypeInfo;
    }
    GameObjectExtensions__AddLocalPositionX(v47, v48->static_fields->offsetOfferLabelPosition, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightMarkSprite;
    if ( !helpButton )
      goto LABEL_61;
    v49 = &StringLiteral_20073/*"icon_friend"*/;
  }
  UISprite__set_spriteName((UISprite_o *)helpButton, (System_String_o *)*v49, 0LL);
  if ( isActiveFriend && !this->fields.followerStatus )
    return;
  v59 = (EventDelegate_o *)sub_1B64314(EventDelegate_TypeInfo, v57, v58);
  EventDelegate___ctor_46509032(v59, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9815/*"OnClickNoActionFriend"*/, 0LL);
  if ( !centerButton
    || (helpButton = (UnityEngine_Component_o *)centerButton->fields.onClick) == 0LL
    || (System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)helpButton,
          (Il2CppObject *)v19,
          (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_EventDelegate__Remove__),
        (helpButton = (UnityEngine_Component_o *)centerButton->fields.onClick) == 0LL)
    || (v62 = *(_QWORD *)&helpButton->fields.m_CachedPtr,
        v63 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++HIDWORD(helpButton[1].klass),
        !v62) )
  {
LABEL_61:
    sub_1B64324(helpButton);
  }
  v64 = SLODWORD(helpButton[1].klass);
  if ( (unsigned int)v64 >= *(_DWORD *)(v62 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)helpButton,
      (Il2CppObject *)v59,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
  }
  else
  {
    v65 = v62 + 8 * v64;
    LODWORD(helpButton[1].klass) = v64 + 1;
    *(_QWORD *)(v65 + 32) = v59;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v65 + 32), (int32_t)v59, v60, v61);
  }
  v67.fields.r = 0.5;
  v67.fields.g = 0.5;
  v67.fields.b = 0.5;
  v67.fields.a = 1.0;
  UIButtonColor__set_defaultColor((UIButtonColor_o *)centerButton, v67, 0LL);
  klass = centerButton->klass;
  centerButton->fields.hover = (struct UnityEngine_Color_o)xmmword_BA2910;
  centerButton->fields.pressed = (struct UnityEngine_Color_o)xmmword_BA2910;
  ((void (__fastcall *)(struct UIButton_o *, __int64, __int64, Il2CppMethodPointer))klass->vtable._14_SetState.method)(
    centerButton,
    3LL,
    1LL,
    klass->vtable._15_OnClick.methodPtr);
  v68.fields.r = 0.5;
  v68.fields.g = 0.5;
  v68.fields.b = 0.5;
  v68.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)centerButtonLabel, v68, 0LL);
  v69.fields.r = 0.0;
  v69.fields.g = 0.0;
  v69.fields.b = 0.0;
  v69.fields.a = 1.0;
  UILabel__set_effectColor(centerButtonLabel, v69, 0LL);
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
  __int64 v13; // x1
  __int64 v14; // x2
  ServantStatusDialog_EndDelegate_o *v15; // x22

  if ( (byte_49FF56B & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleResultFriendComponent_EndShowServant__, method);
    sub_1B640C8(&Method_BattleResultFriendComponent_ShowServantConf__, v3);
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49FF56B = 1;
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
      v10 = (_QWORD *)sub_1B640E0(Method_BattleResultFriendComponent_ShowServantConf__);
    v11 = (System_Reflection_MethodBase_o *)sub_1B640AC(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v13, v14);
    ServantStatusDialog_EndDelegate___ctor(
      v15,
      (Il2CppObject *)this,
      Method_BattleResultFriendComponent_EndShowServant__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenServantStatusDialog_30357468((CommonUI_o *)Instance, 5, v9, v15, 0LL);
      return;
    }
LABEL_10:
    sub_1B64324(otherUser);
  }
  BattleResultFriendComponent__endCloseSHowServant(this, v8);
}


void __fastcall BattleResultFriendComponent__callBackBeginResume(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF57A & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3558/*"CLOSE"*/, method);
    byte_49FF57A = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3558/*"CLOSE"*/, 0LL);
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
    sub_1B64324(0LL);
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

  if ( (byte_49FF56D & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3558/*"CLOSE"*/, method);
    byte_49FF56D = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3558/*"CLOSE"*/, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x2
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  Il2CppObject *Request_object; // x0

  if ( (byte_49FF575 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleResultFriendComponent_EndRequestFollow__, method);
    sub_1B640C8(&Method_BattleResultFriendComponent_followAssign__, v3);
    sub_1B640C8(&Method_NetworkManager_getRequest_FollowAssignRequest___, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_49FF575 = 1;
  }
  v7 = Method_BattleResultFriendComponent_followAssign__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_followAssign__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B640E0(Method_BattleResultFriendComponent_followAssign__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0LL);
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_EndRequestFollow__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v11,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_FollowAssignRequest___);
  if ( !Request_object )
    sub_1B64324(0LL);
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
  __int64 v9; // x1
  __int64 v10; // x2
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  Il2CppObject *Request_object; // x0

  if ( (byte_49FF573 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleResultFriendComponent_EndRequestFriend__, method);
    sub_1B640C8(&Method_BattleResultFriendComponent_friendOffer__, v3);
    sub_1B640C8(&Method_NetworkManager_getRequest_FriendOfferRequest___, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_49FF573 = 1;
  }
  v7 = Method_BattleResultFriendComponent_friendOffer__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_friendOffer__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B640E0(Method_BattleResultFriendComponent_friendOffer__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0LL);
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_EndRequestFriend__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v11,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_FriendOfferRequest___);
  if ( !Request_object )
    sub_1B64324(0LL);
  FriendOfferRequest__beginRequest((FriendOfferRequest_o *)Request_object, this->fields.targetId, 0LL);
}


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
    sub_1B64324(otherUser);
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

  if ( (byte_49FF565 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleResultFriendComponent_onChangeClass__, *(_QWORD *)&classPos);
    byte_49FF565 = 1;
  }
  v5 = Method_BattleResultFriendComponent_onChangeClass__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_onChangeClass__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_BattleResultFriendComponent_onChangeClass__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  BattleResultFriendComponent__changeClass(this, classPos, v7);
}


void __fastcall BattleResultFriendComponent__openCore(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v19; // x1
  __int64 v20; // x20
  DataManager_o *Instance; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  UserGameEntity_o *SelfUserGame; // x22
  Il2CppObject *MasterData_object; // x25
  int32_t FollowSum; // w24
  _BOOL4 v27; // w21
  _BOOL4 v28; // w26
  _BOOL4 enableFollowQuest; // w27
  int v30; // w23
  const MethodInfo *v31; // x3
  int v32; // w21
  UILabel_o *countLabel; // x26
  Il2CppObject *v34; // x25
  Il2CppObject *v35; // x0
  UILabel_o *followCountLabel; // x22
  Il2CppObject *v37; // x24
  Il2CppObject *v38; // x0
  UILabel_o *confLabel; // x22
  Il2CppObject *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  const MethodInfo *v43; // x1
  struct BattleResultComponent_o *parentComp; // x8
  struct BattleResultComponent_resultData_o *battleResult; // x8
  const MethodInfo *v46; // x2
  _BOOL4 IsNeedUseEventSupport; // w8
  int32_t followerClassId; // w22
  int32_t ExistLeaderInfo; // w0
  UnityEngine_Object_o *classButtonControl; // x22
  __int64 v51; // x1
  __int64 v52; // x2
  System_Action_o *v53; // x21
  const MethodInfo *v54; // x2
  int32_t friendKeep; // [xsp+0h] [xbp-70h] BYREF
  int32_t FriendSum; // [xsp+4h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FF568 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_OtherUserGameMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_TblFriendMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserFollowMaster___, v7);
    sub_1B640C8(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__, v8);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v9);
    sub_1B640C8(&int_TypeInfo, v10);
    sub_1B640C8(&LocalizationManager_TypeInfo, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B640C8(&Method_BattleResultFriendComponent___c__DisplayClass45_0__openCore_b__0__, v14);
    sub_1B640C8(&BattleResultFriendComponent___c__DisplayClass45_0_TypeInfo, v15);
    sub_1B640C8(&StringLiteral_5463/*"END_PROC"*/, v16);
    sub_1B640C8(&StringLiteral_11043/*"RESULT_FRIEND_CONF"*/, v17);
    sub_1B640C8(&StringLiteral_24954/*"{0}/{1}"*/, v18);
    sub_1B640C8(&StringLiteral_6410/*"FOLLOW_NUM"*/, v19);
    byte_49FF568 = 1;
  }
  entity = 0LL;
  v20 = sub_1B64314(BattleResultFriendComponent___c__DisplayClass45_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_36;
  *(_QWORD *)(v20 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 16), (int32_t)this, v22, v23);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserFollowMaster___);
  if ( !Instance )
    goto LABEL_36;
  FollowSum = UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0LL);
  Instance = (DataManager_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6410/*"FOLLOW_NUM"*/, 0LL);
  v27 = FollowSum < (int)Instance;
  v28 = this->fields.followerType == 2;
  if ( !MasterData_object )
    goto LABEL_36;
  enableFollowQuest = this->fields.enableFollowQuest;
  v30 = (int)Instance;
  Instance = (DataManager_o *)TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0LL);
  if ( !SelfUserGame )
    goto LABEL_36;
  v32 = enableFollowQuest && v27 && v28;
  BattleResultFriendComponent__Layout(this, v32, (int)Instance < SelfUserGame->fields.friendKeep, v31);
  countLabel = this->fields.countLabel;
  FriendSum = TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0LL);
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FriendSum);
  friendKeep = SelfUserGame->fields.friendKeep;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep);
  Instance = (DataManager_o *)System_String__Format_61389768((System_String_o *)StringLiteral_24954/*"{0}/{1}"*/, v34, v35, 0LL);
  if ( !countLabel )
    goto LABEL_36;
  UILabel__set_text(countLabel, (System_String_o *)Instance, 0LL);
  if ( v32 )
  {
    followCountLabel = this->fields.followCountLabel;
    FriendSum = FollowSum;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FriendSum);
    friendKeep = v30;
    v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep);
    Instance = (DataManager_o *)System_String__Format_61389768((System_String_o *)StringLiteral_24954/*"{0}/{1}"*/, v37, v38, 0LL);
    if ( !followCountLabel )
      goto LABEL_36;
    UILabel__set_text(followCountLabel, (System_String_o *)Instance, 0LL);
  }
  confLabel = this->fields.confLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11043/*"RESULT_FRIEND_CONF"*/, 0LL);
  if ( !confLabel )
    goto LABEL_36;
  UILabel__set_text(confLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  if ( !Instance )
    goto LABEL_36;
  v40 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          this->fields.targetId,
          (const MethodInfo_30D4050 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
  this->fields.otherUser = (struct OtherUserGameEntity_o *)v40;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.otherUser, (int32_t)v40, v41, v42);
  BattleResultFriendComponent__OtherUserChangeLimitCountBySpoilerProtection(this, v43);
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
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
    (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( entity )
    IsNeedUseEventSupport = EventDetailEntity__IsNeedUseEventSupport((EventDetailEntity_o *)entity, 0LL);
  else
    IsNeedUseEventSupport = 0;
  followerClassId = this->fields.followerClassId;
  this->fields.displayServantType = IsNeedUseEventSupport;
  ExistLeaderInfo = BattleResultFriendComponent__getExistLeaderInfo(this, followerClassId, v46);
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
  if ( v32 )
  {
    *(_BYTE *)(v20 + 24) = EventTutorialMaster__IsTutorialAvailable(-1, 49, 0, 0, 0, 0, 0LL);
    v53 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v51, v52);
    System_Action___ctor(
      v53,
      (Il2CppObject *)v20,
      Method_BattleResultFriendComponent___c__DisplayClass45_0__openCore_b__0__,
      0LL);
    EventTutorialMaster__CheckTutorial(-1, 49, v53, 0, 0, 0, 0, 0LL);
  }
  Instance = (DataManager_o *)this->fields.root;
  if ( !Instance
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL),
        BattleResultFriendComponent__changeClass(this, this->fields.followerClassId, v54),
        (Instance = (DataManager_o *)this->fields.myFsm) == 0LL) )
  {
LABEL_36:
    sub_1B64324(Instance);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
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
  ClassButtonControlComponent_o *v18; // x0
  ClassButtonControlComponent_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  ClassButtonControlComponent_CallbackFunc_o *v22; // x21

  v14 = enableFollow;
  if ( (byte_49FF564 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleResultFriendComponent_onChangeClass__, *(_QWORD *)&infollowerType);
    sub_1B640C8(&ClassButtonControlComponent_CallbackFunc_TypeInfo, v15);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v16);
    byte_49FF564 = 1;
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
    v18 = this->fields.classButtonControl;
    if ( !v18
      || (ClassButtonControlComponent__setCursor(v18, infollowerClassId, 0LL),
          v19 = this->fields.classButtonControl,
          v22 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1B64314(
                                                                ClassButtonControlComponent_CallbackFunc_TypeInfo,
                                                                v20,
                                                                v21),
          ClassButtonControlComponent_CallbackFunc___ctor(
            v22,
            (Il2CppObject *)this,
            (intptr_t)Method_BattleResultFriendComponent_onChangeClass__,
            0LL),
          !v19) )
    {
      sub_1B64324(v18);
    }
    ClassButtonControlComponent__init(v19, v22, 0, 0, 0, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct BattleResultFriendComponent_o *_4__this; // x20
  Il2CppObject *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x0
  const MethodInfo *v15; // x1
  struct System_Action_o *releasePerformanceObject; // x8
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_WaitForEndOfFrame_o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppObject *waitForEndOfFrame_5__2; // x1
  Il2CppObject **p__2__current; // x19
  int32_t v24; // w2
  int32_t v25; // w3
  bool result; // w0

  if ( (byte_49FF580 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AtlasManager_TypeInfo, v4);
    sub_1B640C8(&System_GC_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v6);
    sub_1B640C8(&Method_BattleResultFriendComponent___c__DisplayClass44_0__ChangeFaceAtlas_b__0__, v7);
    sub_1B640C8(&BattleResultFriendComponent___c__DisplayClass44_0_TypeInfo, v8);
    sub_1B640C8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v9);
    byte_49FF580 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( this->fields.__1__state )
    return 0;
  this->fields.__1__state = -1;
  v11 = (Il2CppObject *)sub_1B64314(BattleResultFriendComponent___c__DisplayClass44_0_TypeInfo, method, v2);
  System_Object___ctor(v11, 0LL);
  this->fields.__8__1 = (struct BattleResultFriendComponent___c__DisplayClass44_0_o *)v11;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__8__1, (int32_t)v11, v12, v13);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseFaceBattleAtlas(0LL);
  if ( !_4__this )
    sub_1B64324(v14);
  releasePerformanceObject = _4__this->fields.releasePerformanceObject;
  if ( releasePerformanceObject )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))releasePerformanceObject->fields.m_target)(
      releasePerformanceObject->fields.original_method_info,
      *(_QWORD *)&releasePerformanceObject->fields.extra_arg);
  BattleResultFriendComponent__openCore(_4__this, v15);
  v19 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v17, v18);
  UnityEngine_WaitForEndOfFrame___ctor(v19, 0LL);
  this->fields._waitForEndOfFrame_5__2 = v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._waitForEndOfFrame_5__2, (int32_t)v19, v20, v21);
  waitForEndOfFrame_5__2 = (Il2CppObject *)this->fields._waitForEndOfFrame_5__2;
  this->fields.__2__current = waitForEndOfFrame_5__2;
  p__2__current = &this->fields.__2__current;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)waitForEndOfFrame_5__2, v24, v25);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattleResultFriendComponent__ChangeFaceAtlas_d__44_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_MonoBehaviour_o *v14; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  System_Collections_Generic_List_object__o *monitor; // x20
  EventDelegate_o *v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  struct BattleResultFriendComponent_o *v24; // x8
  struct BattleResultFriendComponent_o *v25; // x8
  struct BattleResultFriendComponent_o *v26; // x8
  struct BattleResultFriendComponent_o *v27; // x8
  Il2CppObject *Instance; // x19
  UnityEngine_Vector2_o v29; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v30; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  v2 = this;
  if ( (byte_49FF57F & 1) == 0 )
  {
    sub_1B640C8(&EventDelegate_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDelegate__Add__, v3);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&StringLiteral_9827/*"OnClickTutorialFollow"*/, v6);
    sub_1B640C8(&StringLiteral_13429/*"TUTORIAL_MESSAGE_FOLLOW_OFFER"*/, v7);
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)sub_1B640C8(&StringLiteral_11040/*"RESULT_FOLLOW_REQUEST_YES"*/, v8);
    byte_49FF57F = 1;
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
                                                                    (System_String_o *)StringLiteral_11040/*"RESULT_FOLLOW_REQUEST_YES"*/,
                                                                    0LL);
    if ( !followTutorialLabel )
      goto LABEL_29;
    UILabel__set_text(followTutorialLabel, (System_String_o *)this, 0LL);
    v14 = (UnityEngine_MonoBehaviour_o *)v2->fields.__4__this;
    if ( !v14 )
      goto LABEL_29;
    m_CancellationTokenSource = v14[8].fields.m_CancellationTokenSource;
    if ( !m_CancellationTokenSource )
      goto LABEL_29;
    monitor = (System_Collections_Generic_List_object__o *)m_CancellationTokenSource[3].monitor;
    v17 = (EventDelegate_o *)sub_1B64314(EventDelegate_TypeInfo, v12, v13);
    EventDelegate___ctor_46509032(v17, v14, (System_String_o *)StringLiteral_9827/*"OnClickTutorialFollow"*/, 0LL);
    if ( !monitor )
      goto LABEL_29;
    items = monitor->fields._items;
    v21 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++monitor->fields._version;
    if ( !items )
      goto LABEL_29;
    size = monitor->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        monitor,
        (Il2CppObject *)v17,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = &items->obj.klass + size;
      monitor->fields._size = size + 1;
      v23[4] = (Il2CppClass *)v17;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v17, v18, v19);
    }
    v24 = v2->fields.__4__this;
    if ( !v24 )
      goto LABEL_29;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)v24->fields.followTutorialButton;
    if ( !this )
      goto LABEL_29;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
    v25 = v2->fields.__4__this;
    if ( !v25 )
      goto LABEL_29;
    GameObjectExtensions__AddLocalPositionX((UnityEngine_GameObject_o *)this, v25->fields.offsetPosition, 0LL);
    v26 = v2->fields.__4__this;
    if ( !v26 )
      goto LABEL_29;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)v26->fields.followTutorialButton;
    if ( !this )
      goto LABEL_29;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
    if ( !this
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
          (v27 = v2->fields.__4__this) == 0LL)
      || (this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)v27->fields.rightButton) == 0LL
      || (this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)this,
                                                                          0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_13429/*"TUTORIAL_MESSAGE_FOLLOW_OFFER"*/,
                                                                          0LL),
          !Instance) )
    {
LABEL_29:
      sub_1B64324(this);
    }
    v29.fields.x = 313.0;
    v29.fields.y = -184.0;
    v30.fields.m_XMin = 162.0;
    v30.fields.m_YMin = -244.0;
    v30.fields.m_Width = 300.0;
    v30.fields.m_Height = 80.0;
    CommonUI__OpenTutorialNotificationDialogArrow(
      (CommonUI_o *)Instance,
      (System_String_o *)this,
      v29,
      v30,
      0.0,
      0LL,
      -1,
      0LL,
      0LL);
  }
}