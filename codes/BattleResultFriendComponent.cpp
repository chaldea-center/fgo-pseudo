void __fastcall BattleResultFriendComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B19553 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleResultFriendComponent_TypeInfo, v1, v2);
    byte_4B19553 = 1;
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
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B1953C & 1) == 0 )
  {
    sub_1BCA7E0(&BattleResultFriendComponent__ChangeFaceAtlas_d__44_TypeInfo, method, v2);
    byte_4B1953C = 1;
  }
  v5 = sub_1BCAA2C(BattleResultFriendComponent__ChangeFaceAtlas_d__44_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleResultFriendComponent__ChangeSupportScene(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  AvalonSceneManager_o *Instance; // x0
  BattleRootComponent_c *v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  struct SceneRootComponent_o *targetRoot; // x20
  __int64 methodPtr_low; // x9
  BattleRootComponent_callBackBeginResume_o *v22; // x21
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  OtherUserGameEntity_o *otherUser; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  SupportInfoJump_o *v35; // x19
  __int64 v36; // x2
  __int64 v37; // x3
  SceneRootComponent_c *klass; // x8
  Il2CppClass *parent; // x8
  int32_t name; // w21
  QuestRestrictionInfo_o *v41; // x20
  BattleResultFriendComponent_o *v42; // x0
  const MethodInfo *v43; // x1

  if ( (byte_4B1954E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultFriendComponent_ChangeSupportScene__, method, v2);
    sub_1BCA7E0(&Method_BattleResultFriendComponent_callBackBeginResume__, v4, v5);
    sub_1BCA7E0(&BattleRootComponent_TypeInfo, v6, v7);
    sub_1BCA7E0(&QuestRestrictionInfo_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&SupportInfoJump_TypeInfo, v12, v13);
    sub_1BCA7E0(&BattleRootComponent_callBackBeginResume_TypeInfo, v14, v15);
    byte_4B1954E = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  if ( AvalonSceneManager__checkNowScene(Instance, 10, 0LL) )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    targetRoot = Instance->fields.targetRoot;
    if ( !targetRoot
      || (v17 = BattleRootComponent_TypeInfo,
          methodPtr_low = LOBYTE(BattleRootComponent_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(targetRoot->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
      && (BattleRootComponent_c *)targetRoot->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleRootComponent_TypeInfo )
    {
      v22 = (BattleRootComponent_callBackBeginResume_o *)sub_1BCAA2C(
                                                           BattleRootComponent_callBackBeginResume_TypeInfo,
                                                           v17,
                                                           v18,
                                                           v19);
      BattleRootComponent_callBackBeginResume___ctor(
        v22,
        (Il2CppObject *)this,
        Method_BattleResultFriendComponent_callBackBeginResume__,
        0LL);
      if ( targetRoot )
      {
        *(_QWORD *)&targetRoot[1].fields.kind = v22;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&targetRoot[1].fields.kind,
          (int64_t)v22,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
        v29 = Method_BattleResultFriendComponent_ChangeSupportScene__;
        if ( (*((_BYTE *)Method_BattleResultFriendComponent_ChangeSupportScene__ + 83) & 2) != 0 )
          v29 = (_QWORD *)sub_1BCA7F8(Method_BattleResultFriendComponent_ChangeSupportScene__);
        v30 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v29, v29[4]);
        OverwriteAssetSoundName__PlaySystemSe(v30, 0, 0LL);
        otherUser = this->fields.otherUser;
        v35 = (SupportInfoJump_o *)sub_1BCAA2C(SupportInfoJump_TypeInfo, v32, v33, v34);
        SupportInfoJump___ctor(v35, otherUser, 0, 0, 0LL);
        klass = targetRoot[1].klass;
        if ( klass )
        {
          parent = klass->_1.parent;
          if ( parent )
          {
            name = (int32_t)parent->_1.name;
            v41 = (QuestRestrictionInfo_o *)sub_1BCAA2C(QuestRestrictionInfo_TypeInfo, v17, v36, v37);
            QuestRestrictionInfo___ctor(v41, name, 0LL);
            if ( v35 )
            {
              SupportInfoJump__SetSetupInfo(v35, 0LL, v41, 0LL);
              Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( Instance )
              {
                AvalonSceneManager__pushScene(Instance, 60, 1, (Il2CppObject *)v35, 0LL);
                return;
              }
            }
          }
        }
      }
LABEL_18:
      sub_1BCAA3C(Instance, v17);
    }
    sub_1BCACFC(Instance->fields.targetRoot);
    BattleResultFriendComponent__callBackBeginResume(v42, v43);
  }
}


void __fastcall BattleResultFriendComponent__EndRequestFollow(
        BattleResultFriendComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  System_Collections_Generic_Dictionary_object__object__o *myFsm; // x0
  System_Collections_Generic_Dictionary_object__object__o *v29; // x21
  System_String_o *v30; // x20
  __int64 *v31; // x8
  Il2CppObject *Instance; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  NotificationDialog_ClickDelegate_o *v36; // x22

  if ( (byte_4B1954B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultFriendComponent_OnEndRequestDialog__, result, method);
    sub_1BCA7E0(&NotificationDialog_ClickDelegate_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9, v10);
    sub_1BCA7E0(&JsonManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14);
    sub_1BCA7E0(&StringLiteral_11197/*"REQUEST_OK"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_11195/*"REQUEST_NG"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_21627/*"message"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_1209/*"0"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_23770/*"status"*/, v25, v26);
    byte_4B1954B = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
  {
    myFsm = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v31 = &StringLiteral_11195/*"REQUEST_NG"*/;
      goto LABEL_17;
    }
LABEL_20:
    sub_1BCAA3C(myFsm, v27);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v27);
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0LL);
  if ( !myFsm )
    goto LABEL_20;
  v29 = myFsm;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFsm,
          (Il2CppObject *)StringLiteral_21627/*"message"*/,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_13;
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v29,
                                                                       (Il2CppObject *)StringLiteral_21627/*"message"*/,
                                                                       (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_20;
  v30 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))myFsm->klass->vtable._3_ToString.method)(
                             myFsm,
                             myFsm->klass->vtable._4_unknown.methodPtr);
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v29,
                                                                       (Il2CppObject *)StringLiteral_23770/*"status"*/,
                                                                       (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_20;
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))myFsm->klass->vtable._3_ToString.method)(
                                                                       myFsm,
                                                                       myFsm->klass->vtable._4_unknown.methodPtr);
  if ( !myFsm )
    goto LABEL_20;
  if ( System_String__Equals_62409536((System_String_o *)myFsm, (System_String_o *)StringLiteral_1209/*"0"*/, 0LL)
    || System_String__IsNullOrEmpty(v30, 0LL) )
  {
LABEL_13:
    myFsm = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v31 = &StringLiteral_11197/*"REQUEST_OK"*/;
LABEL_17:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFsm, (System_String_o *)*v31, 0LL);
      return;
    }
    goto LABEL_20;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v36 = (NotificationDialog_ClickDelegate_o *)sub_1BCAA2C(NotificationDialog_ClickDelegate_TypeInfo, v33, v34, v35);
  NotificationDialog_ClickDelegate___ctor(
    v36,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_20;
  CommonUI__OpenNotificationDialog_30768824(
    (CommonUI_o *)Instance,
    0LL,
    v30,
    v36,
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  System_Collections_Generic_Dictionary_object__object__o *myFsm; // x0
  System_Collections_Generic_Dictionary_object__object__o *v29; // x21
  System_String_o *v30; // x20
  __int64 *v31; // x8
  Il2CppObject *Instance; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  NotificationDialog_ClickDelegate_o *v36; // x22

  if ( (byte_4B19549 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultFriendComponent_OnEndRequestDialog__, result, method);
    sub_1BCA7E0(&NotificationDialog_ClickDelegate_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9, v10);
    sub_1BCA7E0(&JsonManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14);
    sub_1BCA7E0(&StringLiteral_11197/*"REQUEST_OK"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_11195/*"REQUEST_NG"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_21627/*"message"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_1209/*"0"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_23770/*"status"*/, v25, v26);
    byte_4B19549 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
  {
    myFsm = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v31 = &StringLiteral_11195/*"REQUEST_NG"*/;
      goto LABEL_17;
    }
LABEL_20:
    sub_1BCAA3C(myFsm, v27);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v27);
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0LL);
  if ( !myFsm )
    goto LABEL_20;
  v29 = myFsm;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFsm,
          (Il2CppObject *)StringLiteral_21627/*"message"*/,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_13;
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v29,
                                                                       (Il2CppObject *)StringLiteral_21627/*"message"*/,
                                                                       (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_20;
  v30 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))myFsm->klass->vtable._3_ToString.method)(
                             myFsm,
                             myFsm->klass->vtable._4_unknown.methodPtr);
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v29,
                                                                       (Il2CppObject *)StringLiteral_23770/*"status"*/,
                                                                       (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_20;
  myFsm = (System_Collections_Generic_Dictionary_object__object__o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))myFsm->klass->vtable._3_ToString.method)(
                                                                       myFsm,
                                                                       myFsm->klass->vtable._4_unknown.methodPtr);
  if ( !myFsm )
    goto LABEL_20;
  if ( System_String__Equals_62409536((System_String_o *)myFsm, (System_String_o *)StringLiteral_1209/*"0"*/, 0LL)
    || System_String__IsNullOrEmpty(v30, 0LL) )
  {
LABEL_13:
    myFsm = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v31 = &StringLiteral_11197/*"REQUEST_OK"*/;
LABEL_17:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFsm, (System_String_o *)*v31, 0LL);
      return;
    }
    goto LABEL_20;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v36 = (NotificationDialog_ClickDelegate_o *)sub_1BCAA2C(NotificationDialog_ClickDelegate_TypeInfo, v33, v34, v35);
  NotificationDialog_ClickDelegate___ctor(
    v36,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_20;
  CommonUI__OpenNotificationDialog_30768824(
    (CommonUI_o *)Instance,
    0LL,
    v30,
    v36,
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4B19541 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, flg, method);
    sub_1BCA7E0(&Method_BattleResultFriendComponent_endCloseSHowServant__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B19541 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_BattleResultFriendComponent_endCloseSHowServant__, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v13, v14);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v12, 0LL);
}


void __fastcall BattleResultFriendComponent__Init(
        BattleResultFriendComponent_o *this,
        System_Action_o *releasePerformanceObject,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_GameObject_o *root; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *friendIconComp; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Object_array *ComponentsInChildren_object; // x0
  __int64 v17; // x8
  System_Object_array *v18; // x21
  unsigned __int64 v19; // x24
  Il2CppObject **m_Items; // x25
  UnityEngine_Object_o *v21; // x22

  if ( (byte_4B19538 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel____76906248,
      releasePerformanceObject,
      method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B19538 = 1;
  }
  root = this->fields.root;
  if ( !root )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(root, 0, 0LL);
  friendIconComp = (UnityEngine_Object_o *)this->fields.friendIconComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( !UnityEngine_Object__op_Inequality(friendIconComp, 0LL, 0LL) )
    goto LABEL_20;
  root = (UnityEngine_GameObject_o *)this->fields.friendIconComp;
  if ( !root || (root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)root, 0LL)) == 0LL )
LABEL_22:
    sub_1BCAA3C(root, releasePerformanceObject);
  ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                  root,
                                  1,
                                  (const MethodInfo_2F63370 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel____76906248);
  if ( ComponentsInChildren_object )
  {
    v17 = *(_QWORD *)&ComponentsInChildren_object->max_length;
    v18 = ComponentsInChildren_object;
    if ( (int)v17 >= 1 )
    {
      v19 = 0LL;
      m_Items = ComponentsInChildren_object->m_Items;
      do
      {
        if ( v19 >= (unsigned int)v17 )
LABEL_21:
          sub_1BCAA44(ComponentsInChildren_object, releasePerformanceObject);
        v21 = (UnityEngine_Object_o *)m_Items[v19];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, releasePerformanceObject);
        ComponentsInChildren_object = (System_Object_array *)UnityEngine_Object__op_Inequality(v21, 0LL, 0LL);
        if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
        {
          if ( v19 >= v18->max_length )
            goto LABEL_21;
          root = (UnityEngine_GameObject_o *)m_Items[v19];
          if ( !root )
            goto LABEL_22;
          UILabel__SetDefaultFont((UILabel_o *)root, 0LL);
        }
        LODWORD(v17) = v18->max_length;
        ++v19;
      }
      while ( (__int64)v19 < (int)v17 );
    }
  }
LABEL_20:
  this->fields.releasePerformanceObject = releasePerformanceObject;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.releasePerformanceObject,
    (int64_t)releasePerformanceObject,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x26
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  System_String_o *v24; // x22
  System_String_o *errLabel; // x0
  __int64 v26; // x1
  void *v27; // x23
  char v28; // w24
  System_String_o *v29; // x1
  System_String_o **v30; // x8
  int v31; // w21
  System_String_o **v32; // x24
  const MethodInfo *v33; // x3
  __int64 v34; // x1
  System_String_o *v35; // x23
  UILabel_o *titleLabel; // x21
  UILabel_o *friendWarningLabel; // x20
  int32_t followerStatus; // [xsp+Ch] [xbp-54h] BYREF

  v4 = isActiveFriend;
  v5 = isActiveFollow;
  if ( (byte_4B19550 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, isActiveFollow, isActiveFriend);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_11233/*"RESULT_FRIENDANDFOLLOW_TITLE"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_11235/*"RESULT_FRIEND_ERR_{0}"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_11239/*"RESULT_MAXFRIEND_WARNING"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_11238/*"RESULT_FRIEND_TITLE"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_11232/*"RESULT_FOLLOW_TITLE"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v19, v20);
    byte_4B19550 = 1;
  }
  v21 = StringLiteral_11239/*"RESULT_MAXFRIEND_WARNING"*/;
  followerStatus = this->fields.followerStatus;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &followerStatus);
  v24 = System_String__Format((System_String_o *)StringLiteral_11235/*"RESULT_FRIEND_ERR_{0}"*/, v22, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
  errLabel = LocalizationManager__Get(v24, 0LL);
  if ( !v24 )
    goto LABEL_33;
  v27 = errLabel;
  errLabel = (System_String_o *)System_String__Equals_62409536(v24, errLabel, 0LL);
  if ( !this->fields.errLabel )
    goto LABEL_33;
  v28 = (char)errLabel;
  v29 = (System_String_o *)(((unsigned __int8)errLabel & 1) != 0 ? StringLiteral_1/*""*/ : v27);
  UILabel__set_text(this->fields.errLabel, v29, 0LL);
  if ( v28 & 1 | (!v5 || !v4) )
  {
    v24 = (System_String_o *)v21;
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
  v30 = (System_String_o **)&StringLiteral_11233/*"RESULT_FRIENDANDFOLLOW_TITLE"*/;
  v31 = v5;
  if ( !v31 )
    v30 = (System_String_o **)&StringLiteral_11238/*"RESULT_FRIEND_TITLE"*/;
  if ( v4 )
    v32 = v30;
  else
    v32 = (System_String_o **)&StringLiteral_11232/*"RESULT_FOLLOW_TITLE"*/;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)errLabel, v4, 0LL);
  BattleResultFriendComponent__SetupButtons(this, v31, v4, v33);
  v35 = *v32;
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
  errLabel = LocalizationManager__Get(v35, 0LL);
  if ( !titleLabel )
    goto LABEL_33;
  UILabel__set_text(titleLabel, errLabel, 0LL);
  if ( v4 )
    goto LABEL_31;
  friendWarningLabel = this->fields.friendWarningLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
  errLabel = LocalizationManager__Get(v24, 0LL);
  if ( !friendWarningLabel )
LABEL_33:
    sub_1BCAA3C(errLabel, v26);
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
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B19546 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_6553/*"FOLLOW_CONNECT"*/, method, v2);
    byte_4B19546 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_6553/*"FOLLOW_CONNECT"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickFriend(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B19543 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3872/*"CONNECT"*/, method, v2);
    byte_4B19543 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3872/*"CONNECT"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickHelp(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4B19552 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultFriendComponent_OnClickHelp__, method, v2);
    byte_4B19552 = 1;
  }
  v3 = Method_BattleResultFriendComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_OnClickHelp__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BCA7F8(Method_BattleResultFriendComponent_OnClickHelp__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 49, 0LL, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickNo(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B19545 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9370/*"NEXT"*/, method, v2);
    byte_4B19545 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9370/*"NEXT"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickNoActionFriend(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4B19544 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultFriendComponent_OnClickNoActionFriend__, method, v2);
    byte_4B19544 = 1;
  }
  v3 = Method_BattleResultFriendComponent_OnClickNoActionFriend__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_OnClickNoActionFriend__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BCA7F8(Method_BattleResultFriendComponent_OnClickNoActionFriend__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 2, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickSupportInfo(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B1954D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3466/*"CHANGE_SUPPORT"*/, method, v2);
    byte_4B1954D = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3466/*"CHANGE_SUPPORT"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickTutorialFollow(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  const MethodInfo *v11; // x1
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  PartyOrganizationUtility_o *v19; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B19547 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_PickupUserFollowerMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(
      &Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__,
      v6,
      v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B19547 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseTutorialNotificationDialogArrow((CommonUI_o *)Instance, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
  if ( !Instance )
    goto LABEL_12;
  if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          (const MethodInfo_31B30C8 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__) )
    goto LABEL_11;
  Instance = entity;
  if ( !entity )
LABEL_12:
    sub_1BCAA3C(Instance, v11);
  v19 = (PartyOrganizationUtility_o *)&entity[1];
  if ( entity[1].klass )
  {
    v19->klass = 0LL;
    sub_1BCA784(v19, 0LL, v13, v14, v15, v16, v17, v18);
  }
LABEL_11:
  BattleResultFriendComponent__OnClickFollow(this, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultFriendComponent__OnEndRequestDialog(
        BattleResultFriendComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  CommonUI_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B1954C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    sub_1BCA7E0(&StringLiteral_11197/*"REQUEST_OK"*/, v4, v5);
    byte_4B1954C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1BCAA3C(Instance, v7);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_11197/*"REQUEST_OK"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__Open(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UserGameEntity_o *SelfUserGame; // x20
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  int32_t FollowSum; // w22
  _BOOL4 v18; // w22
  _BOOL4 v19; // w23
  _BOOL4 enableFollowQuest; // w24
  __int64 v21; // x1
  const MethodInfo *v22; // x1
  System_Collections_IEnumerator_o *v23; // x1

  if ( (byte_4B1953B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TblFriendMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserFollowMaster___, v4, v5);
    sub_1BCA7E0(&OptionManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&StringLiteral_9370/*"NEXT"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_6557/*"FOLLOW_NUM"*/, v12, v13);
    byte_4B1953B = 1;
  }
  if ( this->fields.followerType != 2 )
    goto LABEL_11;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  if ( !Instance )
    goto LABEL_21;
  FollowSum = UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0LL);
  Instance = (DataManager_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6557/*"FOLLOW_NUM"*/, 0LL);
  v18 = FollowSum < (int)Instance;
  v19 = this->fields.followerType == 2;
  if ( !MasterData_object )
    goto LABEL_21;
  enableFollowQuest = this->fields.enableFollowQuest;
  Instance = (DataManager_o *)TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0LL);
  if ( !SelfUserGame )
    goto LABEL_21;
  if ( (!enableFollowQuest || !v18 || !v19) && (int)Instance >= SelfUserGame->fields.friendKeep )
  {
LABEL_11:
    Instance = (DataManager_o *)this->fields.myFsm;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9370/*"NEXT"*/, 0LL);
      return;
    }
LABEL_21:
    sub_1BCAA3C(Instance, method);
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
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v21);
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    v23 = BattleResultFriendComponent__ChangeFaceAtlas(this, v22);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v23, 0LL);
  }
  else
  {
    BattleResultFriendComponent__openCore(this, v22);
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
  __int64 v2; // x2
  ServantLeaderInfo_o *SpoilerSetting; // x0
  __int64 v5; // x1
  struct OtherUserGameEntity_o *otherUser; // x8
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x20
  int max_length; // w8
  unsigned int v9; // w21
  struct OtherUserGameEntity_o *v10; // x8
  struct ServantLeaderInfo_array *eventUserSvtLeaderHash; // x19
  int v12; // w8
  unsigned int v13; // w20

  if ( (byte_4B1953E & 1) == 0 )
  {
    sub_1BCA7E0(&OptionManager_TypeInfo, method, v2);
    byte_4B1953E = 1;
  }
  if ( this->fields.otherUser )
  {
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
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
        v9 = 0;
        while ( v9 < max_length )
        {
          SpoilerSetting = userSvtLeaderHash->m_Items[v9];
          if ( !SpoilerSetting )
            goto LABEL_23;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0LL);
          max_length = userSvtLeaderHash->max_length;
          if ( (int)++v9 >= max_length )
            goto LABEL_14;
        }
LABEL_22:
        sub_1BCAA44(SpoilerSetting, v5);
      }
LABEL_14:
      v10 = this->fields.otherUser;
      if ( !v10 || (eventUserSvtLeaderHash = v10->fields.eventUserSvtLeaderHash) == 0LL )
LABEL_23:
        sub_1BCAA3C(SpoilerSetting, v5);
      v12 = eventUserSvtLeaderHash->max_length;
      if ( v12 >= 1 )
      {
        v13 = 0;
        while ( v13 < v12 )
        {
          SpoilerSetting = eventUserSvtLeaderHash->m_Items[v13];
          if ( !SpoilerSetting )
            goto LABEL_23;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0LL);
          v12 = eventUserSvtLeaderHash->max_length;
          if ( (int)++v13 >= v12 )
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
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B1953F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9779/*"OPEN_SERVANT"*/, method, v2);
    byte_4B1953F = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9779/*"OPEN_SERVANT"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultFriendComponent__SetupButtons(
        BattleResultFriendComponent_o *this,
        bool isActiveFollow,
        bool isActiveFriend,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  EventDelegate_o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  EventDelegate_o *v35; // x23
  __int64 v36; // x1
  UnityEngine_Component_o *helpButton; // x0
  __int64 v38; // x1
  UILabel_o *leftButtonLabel; // x24
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x8
  _QWORD *v47; // x9
  __int64 klass_low; // x10
  __int64 v49; // x8
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  struct UIButton_o *v62; // x8
  __int64 v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  __int64 v66; // x8
  __int64 v67; // x1
  struct UIButton_o *rightButton; // x8
  __int64 v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  __int64 v72; // x8
  __int64 v73; // x1
  UILabel_o *centerButtonLabel; // x22
  struct UIButton_o *centerButton; // x23
  __int64 v76; // x1
  UnityEngine_GameObject_o *v77; // x24
  BattleResultFriendComponent_c *v78; // x8
  __int64 *v79; // x8
  UILabel_o *rightButtonLabel; // x24
  __int64 v81; // x1
  UnityEngine_GameObject_o *gameObject; // x24
  BattleResultFriendComponent_c *v83; // x8
  UnityEngine_GameObject_o *v84; // x0
  UnityEngine_GameObject_o *v85; // x0
  UnityEngine_GameObject_o *v86; // x0
  UnityEngine_GameObject_o *v87; // x0
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x3
  EventDelegate_o *v91; // x20
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  __int64 v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  __int64 v101; // x8
  UIButton_c *klass; // x8
  UnityEngine_Color_o v103; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v104; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v105; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19551 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleResultFriendComponent_TypeInfo, isActiveFollow, isActiveFriend);
    sub_1BCA7E0(&EventDelegate_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Remove__, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_9973/*"OnClickFriend"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_9993/*"OnClickNoActionFriend"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_11237/*"RESULT_FRIEND_REQUEST_YES"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_11231/*"RESULT_FOLLOW_REQUEST_YES"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_9972/*"OnClickFollow"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_20366/*"icon_friend"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_11236/*"RESULT_FRIEND_REQUEST_NO"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_20365/*"icon_follow"*/, v29, v30);
    byte_4B19551 = 1;
  }
  v31 = (EventDelegate_o *)sub_1BCAA2C(EventDelegate_TypeInfo, isActiveFollow, isActiveFriend, method);
  EventDelegate___ctor_47349156(v31, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9973/*"OnClickFriend"*/, 0LL);
  v35 = (EventDelegate_o *)sub_1BCAA2C(EventDelegate_TypeInfo, v32, v33, v34);
  EventDelegate___ctor_47349156(v35, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9972/*"OnClickFollow"*/, 0LL);
  helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
  if ( !helpButton )
    goto LABEL_61;
  helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL);
  if ( !helpButton )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 1, 0LL);
  leftButtonLabel = this->fields.leftButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38);
  helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11236/*"RESULT_FRIEND_REQUEST_NO"*/, 0LL);
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
    v46 = *(_QWORD *)&helpButton->fields.m_CachedPtr;
    v47 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++HIDWORD(helpButton[1].klass);
    if ( !v46 )
      goto LABEL_61;
    klass_low = SLODWORD(helpButton[1].klass);
    if ( (unsigned int)klass_low >= *(_DWORD *)(v46 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)helpButton,
        (Il2CppObject *)v31,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
    }
    else
    {
      v49 = v46 + 8 * klass_low;
      LODWORD(helpButton[1].klass) = klass_low + 1;
      *(_QWORD *)(v49 + 32) = v31;
      sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 32), (int64_t)v31, v40, v41, v42, v43, v44, v45);
    }
    rightButton = this->fields.rightButton;
    if ( !rightButton )
      goto LABEL_61;
    helpButton = (UnityEngine_Component_o *)rightButton->fields.onClick;
    if ( !helpButton )
      goto LABEL_61;
    v69 = *(_QWORD *)&helpButton->fields.m_CachedPtr;
    v70 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++HIDWORD(helpButton[1].klass);
    if ( !v69 )
      goto LABEL_61;
    v71 = SLODWORD(helpButton[1].klass);
    if ( (unsigned int)v71 >= *(_DWORD *)(v69 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)helpButton,
        (Il2CppObject *)v35,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
    }
    else
    {
      v72 = v69 + 8 * v71;
      LODWORD(helpButton[1].klass) = v71 + 1;
      *(_QWORD *)(v72 + 32) = v35;
      sub_1BCA784((PartyOrganizationUtility_o *)(v72 + 32), (int64_t)v35, v50, v51, v52, v53, v54, v55);
    }
    centerButton = this->fields.centerButton;
    centerButtonLabel = this->fields.centerButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v73);
    helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11237/*"RESULT_FRIEND_REQUEST_YES"*/, 0LL);
    if ( !centerButtonLabel )
      goto LABEL_61;
    UILabel__set_text(centerButtonLabel, (System_String_o *)helpButton, 0LL);
    rightButtonLabel = this->fields.rightButtonLabel;
    helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11231/*"RESULT_FOLLOW_REQUEST_YES"*/, 0LL);
    if ( !rightButtonLabel )
      goto LABEL_61;
    UILabel__set_text(rightButtonLabel, (System_String_o *)helpButton, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.centerButtonLabel;
    if ( !helpButton )
      goto LABEL_61;
    gameObject = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    v83 = BattleResultFriendComponent_TypeInfo;
    if ( !BattleResultFriendComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultFriendComponent_TypeInfo, v81);
      v83 = BattleResultFriendComponent_TypeInfo;
    }
    GameObjectExtensions__AddLocalPositionX(gameObject, v83->static_fields->offsetOfferLabelPosition, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightButtonLabel;
    if ( !helpButton )
      goto LABEL_61;
    v84 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    GameObjectExtensions__AddLocalPositionX(
      v84,
      BattleResultFriendComponent_TypeInfo->static_fields->offsetOfferLabelPosition,
      0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.leftButton;
    if ( !helpButton )
      goto LABEL_61;
    v85 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    GameObjectExtensions__AddLocalPositionX(v85, -this->fields.offsetPosition, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightButton;
    if ( !helpButton )
      goto LABEL_61;
    v86 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    GameObjectExtensions__AddLocalPositionX(v86, this->fields.offsetPosition, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightMarkSprite;
    if ( !helpButton )
      goto LABEL_61;
    v87 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    GameObjectExtensions__AddLocalPositionX(
      v87,
      BattleResultFriendComponent_TypeInfo->static_fields->offsetFollowMarkPosition,
      0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.centerMarkSprite;
    if ( !helpButton )
      goto LABEL_61;
    UISprite__set_spriteName((UISprite_o *)helpButton, (System_String_o *)StringLiteral_20366/*"icon_friend"*/, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightMarkSprite;
    if ( !helpButton )
      goto LABEL_61;
    v79 = &StringLiteral_20365/*"icon_follow"*/;
  }
  else
  {
    helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL);
    if ( !helpButton )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 0, 0LL);
    v62 = this->fields.rightButton;
    if ( !v62 )
      goto LABEL_61;
    helpButton = (UnityEngine_Component_o *)v62->fields.onClick;
    if ( !helpButton )
      goto LABEL_61;
    v63 = *(_QWORD *)&helpButton->fields.m_CachedPtr;
    v64 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++HIDWORD(helpButton[1].klass);
    if ( !v63 )
      goto LABEL_61;
    v65 = SLODWORD(helpButton[1].klass);
    if ( (unsigned int)v65 >= *(_DWORD *)(v63 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)helpButton,
        (Il2CppObject *)v31,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
    }
    else
    {
      v66 = v63 + 8 * v65;
      LODWORD(helpButton[1].klass) = v65 + 1;
      *(_QWORD *)(v66 + 32) = v31;
      sub_1BCA784((PartyOrganizationUtility_o *)(v66 + 32), (int64_t)v31, v56, v57, v58, v59, v60, v61);
    }
    centerButton = this->fields.rightButton;
    centerButtonLabel = this->fields.rightButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v67);
    helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11237/*"RESULT_FRIEND_REQUEST_YES"*/, 0LL);
    if ( !centerButtonLabel )
      goto LABEL_61;
    UILabel__set_text(centerButtonLabel, (System_String_o *)helpButton, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightButtonLabel;
    if ( !helpButton )
      goto LABEL_61;
    v77 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    v78 = BattleResultFriendComponent_TypeInfo;
    if ( !BattleResultFriendComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultFriendComponent_TypeInfo, v76);
      v78 = BattleResultFriendComponent_TypeInfo;
    }
    GameObjectExtensions__AddLocalPositionX(v77, v78->static_fields->offsetOfferLabelPosition, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightMarkSprite;
    if ( !helpButton )
      goto LABEL_61;
    v79 = &StringLiteral_20366/*"icon_friend"*/;
  }
  UISprite__set_spriteName((UISprite_o *)helpButton, (System_String_o *)*v79, 0LL);
  if ( isActiveFriend && !this->fields.followerStatus )
    return;
  v91 = (EventDelegate_o *)sub_1BCAA2C(EventDelegate_TypeInfo, v88, v89, v90);
  EventDelegate___ctor_47349156(v91, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9993/*"OnClickNoActionFriend"*/, 0LL);
  if ( !centerButton
    || (helpButton = (UnityEngine_Component_o *)centerButton->fields.onClick) == 0LL
    || (System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)helpButton,
          (Il2CppObject *)v31,
          (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_EventDelegate__Remove__),
        (helpButton = (UnityEngine_Component_o *)centerButton->fields.onClick) == 0LL)
    || (v98 = *(_QWORD *)&helpButton->fields.m_CachedPtr,
        v99 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++HIDWORD(helpButton[1].klass),
        !v98) )
  {
LABEL_61:
    sub_1BCAA3C(helpButton, v36);
  }
  v100 = SLODWORD(helpButton[1].klass);
  if ( (unsigned int)v100 >= *(_DWORD *)(v98 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)helpButton,
      (Il2CppObject *)v91,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
  }
  else
  {
    v101 = v98 + 8 * v100;
    LODWORD(helpButton[1].klass) = v100 + 1;
    *(_QWORD *)(v101 + 32) = v91;
    sub_1BCA784((PartyOrganizationUtility_o *)(v101 + 32), (int64_t)v91, v92, v93, v94, v95, v96, v97);
  }
  v103.fields.r = 0.5;
  v103.fields.g = 0.5;
  v103.fields.b = 0.5;
  v103.fields.a = 1.0;
  UIButtonColor__set_defaultColor((UIButtonColor_o *)centerButton, v103, 0LL);
  klass = centerButton->klass;
  centerButton->fields.hover = (struct UnityEngine_Color_o)xmmword_BD2310;
  centerButton->fields.pressed = (struct UnityEngine_Color_o)xmmword_BD2310;
  ((void (__fastcall *)(struct UIButton_o *, __int64, __int64, Il2CppMethodPointer))klass->vtable._14_SetState.method)(
    centerButton,
    3LL,
    1LL,
    klass->vtable._15_OnClick.methodPtr);
  v104.fields.r = 0.5;
  v104.fields.g = 0.5;
  v104.fields.b = 0.5;
  v104.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)centerButtonLabel, v104, 0LL);
  v105.fields.r = 0.0;
  v105.fields.g = 0.0;
  v105.fields.b = 0.0;
  v105.fields.a = 1.0;
  UILabel__set_effectColor(centerButtonLabel, v105, 0LL);
}


void __fastcall BattleResultFriendComponent__ShowServantConf(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  OtherUserGameEntity_o *otherUser; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  const MethodInfo *v12; // x1
  ServantLeaderInfo_o *v13; // x20
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  Il2CppObject *Instance; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  ServantStatusDialog_EndDelegate_o *v20; // x22

  if ( (byte_4B19540 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultFriendComponent_EndShowServant__, method, v2);
    sub_1BCA7E0(&Method_BattleResultFriendComponent_ShowServantConf__, v4, v5);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B19540 = 1;
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
    v13 = ServantLeaderInfo;
    v14 = Method_BattleResultFriendComponent_ShowServantConf__;
    if ( (*((_BYTE *)Method_BattleResultFriendComponent_ShowServantConf__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1BCA7F8(Method_BattleResultFriendComponent_ShowServantConf__);
    v15 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v14, v14[4]);
    OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v17, v18, v19);
    ServantStatusDialog_EndDelegate___ctor(
      v20,
      (Il2CppObject *)this,
      Method_BattleResultFriendComponent_EndShowServant__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenServantStatusDialog_30778732((CommonUI_o *)Instance, 5, v13, v20, 0LL);
      return;
    }
LABEL_10:
    sub_1BCAA3C(otherUser, method);
  }
  BattleResultFriendComponent__endCloseSHowServant(this, v12);
}


void __fastcall BattleResultFriendComponent__callBackBeginResume(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B1954F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3608/*"CLOSE"*/, method, v2);
    byte_4B1954F = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3608/*"CLOSE"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultFriendComponent__changeClass(
        BattleResultFriendComponent_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  FriendIconComponent_o *friendIconComp; // x0

  friendIconComp = this->fields.friendIconComp;
  this->fields.dispClassId = classPos;
  if ( !friendIconComp )
    sub_1BCAA3C(0LL, *(_QWORD *)&classPos);
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
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B19542 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3608/*"CLOSE"*/, method, v2);
    byte_4B19542 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3608/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__followAssign(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  __int64 v18; // x1
  Il2CppObject *Request_object; // x0
  __int64 v20; // x1

  if ( (byte_4B1954A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultFriendComponent_EndRequestFollow__, method, v2);
    sub_1BCA7E0(&Method_BattleResultFriendComponent_followAssign__, v4, v5);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_FollowAssignRequest___, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
    byte_4B1954A = 1;
  }
  v12 = Method_BattleResultFriendComponent_followAssign__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_followAssign__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1BCA7F8(Method_BattleResultFriendComponent_followAssign__);
  v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 8, 0LL);
  v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15, v16);
  NetworkManager_ResultCallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_EndRequestFollow__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
  Request_object = NetworkManager__getRequest_object_(
                     v17,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_FollowAssignRequest___);
  if ( !Request_object )
    sub_1BCAA3C(0LL, v20);
  FollowAssignRequest__beginRequest((FollowAssignRequest_o *)Request_object, this->fields.targetId, 0LL);
}


void __fastcall BattleResultFriendComponent__friendOffer(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  __int64 v18; // x1
  Il2CppObject *Request_object; // x0
  __int64 v20; // x1

  if ( (byte_4B19548 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultFriendComponent_EndRequestFriend__, method, v2);
    sub_1BCA7E0(&Method_BattleResultFriendComponent_friendOffer__, v4, v5);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_FriendOfferRequest___, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
    byte_4B19548 = 1;
  }
  v12 = Method_BattleResultFriendComponent_friendOffer__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_friendOffer__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1BCA7F8(Method_BattleResultFriendComponent_friendOffer__);
  v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 8, 0LL);
  v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15, v16);
  NetworkManager_ResultCallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_EndRequestFriend__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
  Request_object = NetworkManager__getRequest_object_(
                     v17,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_FriendOfferRequest___);
  if ( !Request_object )
    sub_1BCAA3C(0LL, v20);
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
    sub_1BCAA3C(otherUser, *(_QWORD *)&firstClassId);
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

  if ( (byte_4B1953A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultFriendComponent_onChangeClass__, *(_QWORD *)&classPos, method);
    byte_4B1953A = 1;
  }
  v5 = Method_BattleResultFriendComponent_onChangeClass__;
  if ( (*((_BYTE *)Method_BattleResultFriendComponent_onChangeClass__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_BattleResultFriendComponent_onChangeClass__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  BattleResultFriendComponent__changeClass(this, classPos, v7);
}


void __fastcall BattleResultFriendComponent__openCore(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x20
  DataManager_o *Instance; // x0
  __int64 v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  UserGameEntity_o *SelfUserGame; // x22
  Il2CppObject *MasterData_object; // x25
  int32_t FollowSum; // w24
  _BOOL4 v49; // w21
  _BOOL4 v50; // w26
  _BOOL4 enableFollowQuest; // w27
  int v52; // w23
  const MethodInfo *v53; // x3
  int v54; // w21
  UILabel_o *countLabel; // x26
  Il2CppObject *v56; // x25
  Il2CppObject *v57; // x0
  __int64 v58; // x1
  UILabel_o *followCountLabel; // x22
  Il2CppObject *v60; // x24
  Il2CppObject *v61; // x0
  UILabel_o *confLabel; // x22
  Il2CppObject *v63; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  const MethodInfo *v70; // x1
  struct BattleResultComponent_o *parentComp; // x8
  struct BattleResultComponent_resultData_o *battleResult; // x8
  const MethodInfo *v73; // x2
  _BOOL4 IsNeedUseEventSupport; // w8
  int32_t followerClassId; // w22
  int32_t ExistLeaderInfo; // w0
  UnityEngine_Object_o *classButtonControl; // x22
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  System_Action_o *v81; // x21
  const MethodInfo *v82; // x2
  int32_t friendKeep; // [xsp+0h] [xbp-70h] BYREF
  int32_t FriendSum; // [xsp+4h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B1953D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_OtherUserGameMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TblFriendMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserFollowMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v15, v16);
    sub_1BCA7E0(&int_TypeInfo, v17, v18);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    sub_1BCA7E0(&Method_BattleResultFriendComponent___c__DisplayClass45_0__openCore_b__0__, v25, v26);
    sub_1BCA7E0(&BattleResultFriendComponent___c__DisplayClass45_0_TypeInfo, v27, v28);
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_11234/*"RESULT_FRIEND_CONF"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_25309/*"{0}/{1}"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_6557/*"FOLLOW_NUM"*/, v35, v36);
    byte_4B1953D = 1;
  }
  entity = 0LL;
  v37 = sub_1BCAA2C(BattleResultFriendComponent___c__DisplayClass45_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v37, 0LL);
  if ( !v37 )
    goto LABEL_36;
  *(_QWORD *)(v37 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 16), (int64_t)this, v40, v41, v42, v43, v44, v45);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  if ( !Instance )
    goto LABEL_36;
  FollowSum = UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0LL);
  Instance = (DataManager_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6557/*"FOLLOW_NUM"*/, 0LL);
  v49 = FollowSum < (int)Instance;
  v50 = this->fields.followerType == 2;
  if ( !MasterData_object )
    goto LABEL_36;
  enableFollowQuest = this->fields.enableFollowQuest;
  v52 = (int)Instance;
  Instance = (DataManager_o *)TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0LL);
  if ( !SelfUserGame )
    goto LABEL_36;
  v54 = enableFollowQuest && v49 && v50;
  BattleResultFriendComponent__Layout(this, v54, (int)Instance < SelfUserGame->fields.friendKeep, v53);
  countLabel = this->fields.countLabel;
  FriendSum = TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0LL);
  v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FriendSum);
  friendKeep = SelfUserGame->fields.friendKeep;
  v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep);
  Instance = (DataManager_o *)System_String__Format_62415592((System_String_o *)StringLiteral_25309/*"{0}/{1}"*/, v56, v57, 0LL);
  if ( !countLabel )
    goto LABEL_36;
  UILabel__set_text(countLabel, (System_String_o *)Instance, 0LL);
  if ( v54 )
  {
    followCountLabel = this->fields.followCountLabel;
    FriendSum = FollowSum;
    v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FriendSum);
    friendKeep = v52;
    v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep);
    Instance = (DataManager_o *)System_String__Format_62415592((System_String_o *)StringLiteral_25309/*"{0}/{1}"*/, v60, v61, 0LL);
    if ( !followCountLabel )
      goto LABEL_36;
    UILabel__set_text(followCountLabel, (System_String_o *)Instance, 0LL);
  }
  confLabel = this->fields.confLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v58);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11234/*"RESULT_FRIEND_CONF"*/, 0LL);
  if ( !confLabel )
    goto LABEL_36;
  UILabel__set_text(confLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  if ( !Instance )
    goto LABEL_36;
  v63 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          this->fields.targetId,
          (const MethodInfo_31B2FEC *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
  this->fields.otherUser = (struct OtherUserGameEntity_o *)v63;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.otherUser, (int64_t)v63, v64, v65, v66, v67, v68, v69);
  BattleResultFriendComponent__OtherUserChangeLimitCountBySpoilerProtection(this, v70);
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
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
    (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( entity )
    IsNeedUseEventSupport = EventDetailEntity__IsNeedUseEventSupport((EventDetailEntity_o *)entity, 0LL);
  else
    IsNeedUseEventSupport = 0;
  followerClassId = this->fields.followerClassId;
  this->fields.displayServantType = IsNeedUseEventSupport;
  ExistLeaderInfo = BattleResultFriendComponent__getExistLeaderInfo(this, followerClassId, v73);
  this->fields.followerClassId = ExistLeaderInfo;
  if ( followerClassId != ExistLeaderInfo )
  {
    classButtonControl = (UnityEngine_Object_o *)this->fields.classButtonControl;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
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
  if ( v54 )
  {
    *(_BYTE *)(v37 + 24) = EventTutorialMaster__IsTutorialAvailable(-1, 49, 0, 0, 0, 0, 0LL);
    v81 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v78, v79, v80);
    System_Action___ctor(
      v81,
      (Il2CppObject *)v37,
      Method_BattleResultFriendComponent___c__DisplayClass45_0__openCore_b__0__,
      0LL);
    EventTutorialMaster__CheckTutorial(-1, 49, v81, 0, 0, 0, 0, 0LL);
  }
  Instance = (DataManager_o *)this->fields.root;
  if ( !Instance
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL),
        BattleResultFriendComponent__changeClass(this, this->fields.followerClassId, v82),
        (Instance = (DataManager_o *)this->fields.myFsm) == 0LL) )
  {
LABEL_36:
    sub_1BCAA3C(Instance, v39);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  UnityEngine_Object_o *classButtonControl; // x21
  __int64 v21; // x1
  ClassButtonControlComponent_o *v22; // x0
  ClassButtonControlComponent_o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  ClassButtonControlComponent_CallbackFunc_o *v27; // x21

  v14 = enableFollow;
  if ( (byte_4B19539 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_BattleResultFriendComponent_onChangeClass__,
      *(_QWORD *)&infollowerType,
      *(_QWORD *)&infollowerStatus);
    sub_1BCA7E0(&ClassButtonControlComponent_CallbackFunc_TypeInfo, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    byte_4B19539 = 1;
  }
  this->fields.followerType = Follower__getType(infollowerType, 0LL);
  this->fields.followerStatus = infollowerStatus;
  this->fields.targetId = followerId;
  this->fields.followerClassId = infollowerClassId;
  this->fields.followerDeckId = followerDeckId;
  this->fields.enableFollowQuest = v14;
  classButtonControl = (UnityEngine_Object_o *)this->fields.classButtonControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  if ( UnityEngine_Object__op_Inequality(classButtonControl, 0LL, 0LL) )
  {
    v22 = this->fields.classButtonControl;
    if ( !v22
      || (ClassButtonControlComponent__setCursor(v22, infollowerClassId, 0LL),
          v23 = this->fields.classButtonControl,
          v27 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                                ClassButtonControlComponent_CallbackFunc_TypeInfo,
                                                                v24,
                                                                v25,
                                                                v26),
          ClassButtonControlComponent_CallbackFunc___ctor(
            v27,
            (Il2CppObject *)this,
            (intptr_t)Method_BattleResultFriendComponent_onChangeClass__,
            0LL),
          !v23) )
    {
      sub_1BCAA3C(v22, v21);
    }
    ClassButtonControlComponent__init(v23, v27, 0, 0, 0, 0LL);
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
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleResultFriendComponent__ChangeFaceAtlas_d__44_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  BattleResultFriendComponent_o *_4__this; // x20
  Il2CppObject *v22; // x21
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x1
  struct System_Action_o *releasePerformanceObject; // x8
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  UnityEngine_WaitForEndOfFrame_o *v34; // x20
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t waitForEndOfFrame_5__2; // x1
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  bool result; // w0
  int64_t v50; // x1
  PartyOrganizationUtility_o *v51; // x19
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int v58; // w8
  System_Collections_IEnumerator_o *v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct BattleResultFriendComponent___c__DisplayClass44_0_o *_8__1; // x21
  System_Action_o *v67; // x20
  __int64 v68; // x1
  struct BattleResultFriendComponent___c__DisplayClass44_0_o *v69; // x8
  int64_t v70; // x1
  int64_t v71; // x1
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7

  v8 = this;
  if ( (byte_4B19555 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_GC_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&Method_BattleResultFriendComponent___c__DisplayClass44_0__ChangeFaceAtlas_b__0__, v15, v16);
    sub_1BCA7E0(&BattleResultFriendComponent___c__DisplayClass44_0_TypeInfo, v17, v18);
    this = (BattleResultFriendComponent__ChangeFaceAtlas_d__44_o *)sub_1BCA7E0(
                                                                     &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                     v19,
                                                                     v20);
    byte_4B19555 = 1;
  }
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v22 = (Il2CppObject *)sub_1BCAA2C(BattleResultFriendComponent___c__DisplayClass44_0_TypeInfo, method, v2, v3);
      System_Object___ctor(v22, 0LL);
      v8->fields.__8__1 = (struct BattleResultFriendComponent___c__DisplayClass44_0_o *)v22;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.__8__1, (int64_t)v22, v23, v24, v25, v26, v27, v28);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v29);
      AtlasManager__ReleaseFaceBattleAtlas(0LL);
      if ( !_4__this )
        goto LABEL_31;
      releasePerformanceObject = _4__this->fields.releasePerformanceObject;
      if ( releasePerformanceObject )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))releasePerformanceObject->fields.m_target)(
          releasePerformanceObject->fields.original_method_info,
          *(_QWORD *)&releasePerformanceObject->fields.extra_arg);
      BattleResultFriendComponent__openCore(_4__this, method);
      v34 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, v31, v32, v33);
      UnityEngine_WaitForEndOfFrame___ctor(v34, 0LL);
      v8->fields._waitForEndOfFrame_5__2 = v34;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields._waitForEndOfFrame_5__2,
        (int64_t)v34,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
      waitForEndOfFrame_5__2 = (int64_t)v8->fields._waitForEndOfFrame_5__2;
      v8->fields.__2__current = (Il2CppObject *)waitForEndOfFrame_5__2;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(p__2__current, waitForEndOfFrame_5__2, v43, v44, v45, v46, v47, v48);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    case 1:
      v8->fields.__1__state = -1;
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, method);
      System_GC__Collect_63447616(0LL);
      v50 = (int64_t)v8->fields._waitForEndOfFrame_5__2;
      v8->fields.__2__current = (Il2CppObject *)v50;
      v51 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(v51, v50, v52, v53, v54, v55, v56, v57);
      v58 = 2;
      goto LABEL_30;
    case 2:
      v8->fields.__1__state = -1;
      this = (BattleResultFriendComponent__ChangeFaceAtlas_d__44_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_31;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleResultFriendComponent__ChangeFaceAtlas_d__44_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_31;
      v59 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v59;
      v51 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(v51, (int64_t)v59, v60, v61, v62, v63, v64, v65);
      v58 = 3;
      goto LABEL_30;
    case 3:
      _8__1 = v8->fields.__8__1;
      v8->fields.__1__state = -1;
      if ( !_8__1 )
        goto LABEL_31;
      _8__1->fields.isWait = 1;
      v67 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
      System_Action___ctor(
        v67,
        (Il2CppObject *)_8__1,
        Method_BattleResultFriendComponent___c__DisplayClass44_0__ChangeFaceAtlas_b__0__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v68);
      AtlasManager__LoadFaceAtlas(v67, 1, 0LL);
LABEL_21:
      v69 = v8->fields.__8__1;
      if ( !v69 )
LABEL_31:
        sub_1BCAA3C(this, method);
      if ( v69->fields.isWait )
      {
        v70 = (int64_t)v8->fields._waitForEndOfFrame_5__2;
        v8->fields.__2__current = (Il2CppObject *)v70;
        v51 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BCA784(v51, v70, (int64_t)v2, v3, v4, v5, v6, v7);
        v58 = 4;
      }
      else
      {
        if ( !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, method);
        System_GC__Collect_63447616(0LL);
        v71 = (int64_t)v8->fields._waitForEndOfFrame_5__2;
        v8->fields.__2__current = (Il2CppObject *)v71;
        v51 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BCA784(v51, v71, v72, v73, v74, v75, v76, v77);
        v58 = 5;
      }
LABEL_30:
      *(_DWORD *)&v51[-1].fields._IsQuestStartMenuMode_k__BackingField = v58;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_BattleResultFriendComponent__ChangeFaceAtlas_d__44_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  BattleResultFriendComponent___c__DisplayClass45_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  struct BattleResultFriendComponent_o *_4__this; // x8
  struct BattleResultFriendComponent_o *v17; // x8
  UILabel_o *followTutorialLabel; // x20
  __int64 v19; // x2
  __int64 v20; // x3
  UnityEngine_MonoBehaviour_o *v21; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  System_Collections_Generic_List_object__o *monitor; // x20
  EventDelegate_o *v24; // x21
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  struct BattleResultFriendComponent_o *v35; // x8
  struct BattleResultFriendComponent_o *v36; // x8
  struct BattleResultFriendComponent_o *v37; // x8
  struct BattleResultFriendComponent_o *v38; // x8
  Il2CppObject *Instance; // x19
  UnityEngine_Vector2_o v40; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v41; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  v3 = this;
  if ( (byte_4B19554 & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Add__, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&StringLiteral_10005/*"OnClickTutorialFollow"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_13661/*"TUTORIAL_MESSAGE_FOLLOW_OFFER"*/, v12, v13);
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)sub_1BCA7E0(&StringLiteral_11231/*"RESULT_FOLLOW_REQUEST_YES"*/, v14, v15);
    byte_4B19554 = 1;
  }
  if ( v3->fields.isFollowTutorial )
  {
    _4__this = v3->fields.__4__this;
    if ( !_4__this )
      goto LABEL_29;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)_4__this->fields.followTutorialMask;
    if ( !this )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v17 = v3->fields.__4__this;
    if ( !v17 )
      goto LABEL_29;
    followTutorialLabel = v17->fields.followTutorialLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_11231/*"RESULT_FOLLOW_REQUEST_YES"*/,
                                                                    0LL);
    if ( !followTutorialLabel )
      goto LABEL_29;
    UILabel__set_text(followTutorialLabel, (System_String_o *)this, 0LL);
    v21 = (UnityEngine_MonoBehaviour_o *)v3->fields.__4__this;
    if ( !v21 )
      goto LABEL_29;
    m_CancellationTokenSource = v21[8].fields.m_CancellationTokenSource;
    if ( !m_CancellationTokenSource )
      goto LABEL_29;
    monitor = (System_Collections_Generic_List_object__o *)m_CancellationTokenSource[3].monitor;
    v24 = (EventDelegate_o *)sub_1BCAA2C(EventDelegate_TypeInfo, method, v19, v20);
    EventDelegate___ctor_47349156(v24, v21, (System_String_o *)StringLiteral_10005/*"OnClickTutorialFollow"*/, 0LL);
    if ( !monitor )
      goto LABEL_29;
    items = monitor->fields._items;
    v32 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++monitor->fields._version;
    if ( !items )
      goto LABEL_29;
    size = monitor->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        monitor,
        (Il2CppObject *)v24,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = &items->obj.klass + size;
      monitor->fields._size = size + 1;
      v34[4] = (Il2CppClass *)v24;
      sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 4), (int64_t)v24, v25, v26, v27, v28, v29, v30);
    }
    v35 = v3->fields.__4__this;
    if ( !v35 )
      goto LABEL_29;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)v35->fields.followTutorialButton;
    if ( !this )
      goto LABEL_29;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
    v36 = v3->fields.__4__this;
    if ( !v36 )
      goto LABEL_29;
    GameObjectExtensions__AddLocalPositionX((UnityEngine_GameObject_o *)this, v36->fields.offsetPosition, 0LL);
    v37 = v3->fields.__4__this;
    if ( !v37 )
      goto LABEL_29;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)v37->fields.followTutorialButton;
    if ( !this )
      goto LABEL_29;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
    if ( !this
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
          (v38 = v3->fields.__4__this) == 0LL)
      || (this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)v38->fields.rightButton) == 0LL
      || (this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)this,
                                                                          0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)LocalizationManager__Get(
                                                                          (System_String_o *)StringLiteral_13661/*"TUTORIAL_MESSAGE_FOLLOW_OFFER"*/,
                                                                          0LL),
          !Instance) )
    {
LABEL_29:
      sub_1BCAA3C(this, method);
    }
    v40.fields.x = 313.0;
    v40.fields.y = -184.0;
    v41.fields.m_XMin = 162.0;
    v41.fields.m_YMin = -244.0;
    v41.fields.m_Width = 300.0;
    v41.fields.m_Height = 80.0;
    CommonUI__OpenTutorialNotificationDialogArrow(
      (CommonUI_o *)Instance,
      (System_String_o *)this,
      v40,
      v41,
      0.0,
      0LL,
      -1,
      0LL,
      0LL);
  }
}