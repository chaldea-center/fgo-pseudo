void __fastcall BattleResultFriendComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4214913 & 1) == 0 )
  {
    sub_B0D8A4(&BattleResultFriendComponent_TypeInfo, v1);
    byte_4214913 = 1;
  }
  BattleResultFriendComponent_TypeInfo->static_fields->offsetOfferLabelPosition = 15.0;
  BattleResultFriendComponent_TypeInfo->static_fields->offsetFollowMarkPosition = 20.0;
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
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42148FC & 1) == 0 )
  {
    sub_B0D8A4(&BattleResultFriendComponent__ChangeFaceAtlas_d__44_TypeInfo, method);
    byte_42148FC = 1;
  }
  v4 = sub_B0D974(BattleResultFriendComponent__ChangeFaceAtlas_d__44_TypeInfo, method, v2);
  BattleResultFriendComponent__ChangeFaceAtlas_d__44___ctor(
    (BattleResultFriendComponent__ChangeFaceAtlas_d__44_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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
  __int64 v13; // x9
  BattleRootComponent_callBackBeginResume_o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  OtherUserGameEntity_o *otherUser; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  SupportInfoJump_o *v24; // x19
  __int64 v25; // x1
  __int64 v26; // x2
  SceneRootComponent_c *klass; // x8
  Il2CppClass *declaringType; // x8
  int32_t name; // w21
  QuestRestrictionInfo_o *v30; // x20
  BattleResultFriendComponent_o *v31; // x0
  const MethodInfo *v32; // x1

  if ( (byte_421490E & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleResultFriendComponent_callBackBeginResume__, method);
    sub_B0D8A4(&BattleRootComponent_TypeInfo, v3);
    sub_B0D8A4(&QuestRestrictionInfo_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    sub_B0D8A4(&SupportInfoJump_TypeInfo, v7);
    sub_B0D8A4(&BattleRootComponent_callBackBeginResume_TypeInfo, v8);
    byte_421490E = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  if ( AvalonSceneManager__checkNowScene(Instance, 10, 0LL) )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    targetRoot = Instance->fields.targetRoot;
    if ( !targetRoot
      || (v10 = BattleRootComponent_TypeInfo,
          v13 = *(&BattleRootComponent_TypeInfo->_2.bitflags2 + 1),
          *(&targetRoot->klass->_2.bitflags2 + 1) >= (unsigned int)v13)
      && (BattleRootComponent_c *)targetRoot->klass->_2.typeHierarchy[v13 - 1] == BattleRootComponent_TypeInfo )
    {
      v14 = (BattleRootComponent_callBackBeginResume_o *)sub_B0D974(
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
        targetRoot[2].klass = (SceneRootComponent_c *)v14;
        sub_B0D840(
          (BattleServantConfConponent_o *)&targetRoot[2],
          (System_Int32_array **)v14,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        otherUser = this->fields.otherUser;
        v24 = (SupportInfoJump_o *)sub_B0D974(SupportInfoJump_TypeInfo, v22, v23);
        SupportInfoJump___ctor(v24, otherUser, 0, 0, 0LL);
        klass = targetRoot[1].klass;
        if ( klass )
        {
          declaringType = klass->_1.declaringType;
          if ( declaringType )
          {
            name = (int32_t)declaringType->_1.name;
            v30 = (QuestRestrictionInfo_o *)sub_B0D974(QuestRestrictionInfo_TypeInfo, v25, v26);
            QuestRestrictionInfo___ctor(v30, name, 0LL);
            if ( v24 )
            {
              SupportInfoJump__SetSetupInfo(v24, 0LL, v30, 0LL);
              Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( Instance )
              {
                AvalonSceneManager__pushScene(Instance, 60, 1, (Il2CppObject *)v24, 0LL);
                return;
              }
            }
          }
        }
      }
LABEL_19:
      sub_B0D97C(Instance);
    }
    v31 = (BattleResultFriendComponent_o *)sub_B0DC70(Instance->fields.targetRoot);
    BattleResultFriendComponent__callBackBeginResume(v31, v32);
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *myFsm; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v17; // x21
  System_String_o *v18; // x20
  __int64 *v19; // x8
  CommonUI_o *Instance; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  NotificationDialog_ClickDelegate_o *v23; // x22

  if ( (byte_421490B & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleResultFriendComponent_OnEndRequestDialog__, result);
    sub_B0D8A4(&NotificationDialog_ClickDelegate_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B0D8A4(&JsonManager_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B0D8A4(&StringLiteral_11106/*"REQUEST_OK"*/, v10);
    sub_B0D8A4(&StringLiteral_11104/*"REQUEST_NG"*/, v11);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v12);
    sub_B0D8A4(&StringLiteral_20536/*"message"*/, v13);
    sub_B0D8A4(&StringLiteral_960/*"0"*/, v14);
    sub_B0D8A4(&StringLiteral_22378/*"status"*/, v15);
    byte_421490B = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21137/*"ng"*/, 0LL) )
  {
    myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v19 = &StringLiteral_11104/*"REQUEST_NG"*/;
      goto LABEL_18;
    }
LABEL_21:
    sub_B0D97C(myFsm);
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)JsonManager__getDictionary(
                                                                                          result,
                                                                                          0LL);
  if ( !myFsm )
    goto LABEL_21;
  v17 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)myFsm;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          myFsm,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_20536/*"message"*/,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_14;
  myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                          v17,
                                                                                          (System_Type_o *)StringLiteral_20536/*"message"*/,
                                                                                          (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_21;
  v18 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))myFsm->klass->vtable._3_ToString.method)(
                             myFsm,
                             myFsm->klass->vtable._4_unknown.methodPtr);
  myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                          v17,
                                                                                          (System_Type_o *)StringLiteral_22378/*"status"*/,
                                                                                          (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_21;
  myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))myFsm->klass->vtable._3_ToString.method)(
                                                                                          myFsm,
                                                                                          myFsm->klass->vtable._4_unknown.methodPtr);
  if ( !myFsm )
    goto LABEL_21;
  if ( System_String__Equals_43837244((System_String_o *)myFsm, (System_String_o *)StringLiteral_960/*"0"*/, 0LL)
    || System_String__IsNullOrEmpty(v18, 0LL) )
  {
LABEL_14:
    myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v19 = &StringLiteral_11106/*"REQUEST_OK"*/;
LABEL_18:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFsm, (System_String_o *)*v19, 0LL);
      return;
    }
    goto LABEL_21;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v23 = (NotificationDialog_ClickDelegate_o *)sub_B0D974(NotificationDialog_ClickDelegate_TypeInfo, v21, v22);
  NotificationDialog_ClickDelegate___ctor(
    v23,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__OpenNotificationDialog_17019096(
    Instance,
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *myFsm; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v17; // x21
  System_String_o *v18; // x20
  __int64 *v19; // x8
  CommonUI_o *Instance; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  NotificationDialog_ClickDelegate_o *v23; // x22

  if ( (byte_4214909 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleResultFriendComponent_OnEndRequestDialog__, result);
    sub_B0D8A4(&NotificationDialog_ClickDelegate_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B0D8A4(&JsonManager_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B0D8A4(&StringLiteral_11106/*"REQUEST_OK"*/, v10);
    sub_B0D8A4(&StringLiteral_11104/*"REQUEST_NG"*/, v11);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v12);
    sub_B0D8A4(&StringLiteral_20536/*"message"*/, v13);
    sub_B0D8A4(&StringLiteral_960/*"0"*/, v14);
    sub_B0D8A4(&StringLiteral_22378/*"status"*/, v15);
    byte_4214909 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21137/*"ng"*/, 0LL) )
  {
    myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v19 = &StringLiteral_11104/*"REQUEST_NG"*/;
      goto LABEL_18;
    }
LABEL_21:
    sub_B0D97C(myFsm);
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)JsonManager__getDictionary(
                                                                                          result,
                                                                                          0LL);
  if ( !myFsm )
    goto LABEL_21;
  v17 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)myFsm;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          myFsm,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_20536/*"message"*/,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_14;
  myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                          v17,
                                                                                          (System_Type_o *)StringLiteral_20536/*"message"*/,
                                                                                          (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_21;
  v18 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))myFsm->klass->vtable._3_ToString.method)(
                             myFsm,
                             myFsm->klass->vtable._4_unknown.methodPtr);
  myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                          v17,
                                                                                          (System_Type_o *)StringLiteral_22378/*"status"*/,
                                                                                          (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_21;
  myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))myFsm->klass->vtable._3_ToString.method)(
                                                                                          myFsm,
                                                                                          myFsm->klass->vtable._4_unknown.methodPtr);
  if ( !myFsm )
    goto LABEL_21;
  if ( System_String__Equals_43837244((System_String_o *)myFsm, (System_String_o *)StringLiteral_960/*"0"*/, 0LL)
    || System_String__IsNullOrEmpty(v18, 0LL) )
  {
LABEL_14:
    myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v19 = &StringLiteral_11106/*"REQUEST_OK"*/;
LABEL_18:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFsm, (System_String_o *)*v19, 0LL);
      return;
    }
    goto LABEL_21;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v23 = (NotificationDialog_ClickDelegate_o *)sub_B0D974(NotificationDialog_ClickDelegate_TypeInfo, v21, v22);
  NotificationDialog_ClickDelegate___ctor(
    v23,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__OpenNotificationDialog_17019096(
    Instance,
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
  CommonUI_o *Instance; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x21
  __int64 v10; // x0

  if ( (byte_4214901 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, flg);
    sub_B0D8A4(&Method_BattleResultFriendComponent_endCloseSHowServant__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4214901 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_BattleResultFriendComponent_endCloseSHowServant__, 0LL);
  if ( !Instance )
    sub_B0D97C(v10);
  CommonUI__CloseServantStatusDialog(Instance, v9, 0LL);
}


void __fastcall BattleResultFriendComponent__Init(
        BattleResultFriendComponent_o *this,
        System_Action_o *releasePerformanceObject,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *root; // x0
  UnityEngine_Object_o *friendIconComp; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  changeVColor_array *v14; // x0
  __int64 v15; // x8
  changeVColor_array *v16; // x21
  unsigned __int64 v17; // x24
  changeVColor_o **m_Items; // x25
  UnityEngine_Object_o *v19; // x22
  __int64 v20; // x0

  if ( (byte_42148F8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel____68010064, releasePerformanceObject);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_42148F8 = 1;
  }
  root = this->fields.root;
  if ( !root )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(root, 0, 0LL);
  friendIconComp = (UnityEngine_Object_o *)this->fields.friendIconComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(friendIconComp, 0LL, 0LL) )
    goto LABEL_22;
  root = (UnityEngine_GameObject_o *)this->fields.friendIconComp;
  if ( !root || (root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)root, 0LL)) == 0LL )
LABEL_24:
    sub_B0D97C(root);
  v14 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
          root,
          1,
          (const MethodInfo_1B63008 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel____68010064);
  if ( v14 )
  {
    v15 = *(_QWORD *)&v14->max_length;
    v16 = v14;
    if ( (int)v15 >= 1 )
    {
      v17 = 0LL;
      m_Items = v14->m_Items;
      do
      {
        if ( v17 >= (unsigned int)v15 )
        {
LABEL_23:
          v20 = sub_B0D9A8(v14);
          sub_B0D948(v20, 0LL);
        }
        v19 = (UnityEngine_Object_o *)m_Items[v17];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v14 = (changeVColor_array *)UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
        if ( ((unsigned __int8)v14 & 1) != 0 )
        {
          if ( v17 >= v16->max_length )
            goto LABEL_23;
          root = (UnityEngine_GameObject_o *)m_Items[v17];
          if ( !root )
            goto LABEL_24;
          UILabel__SetDefaultFont((UILabel_o *)root, 0LL);
        }
        LODWORD(v15) = v16->max_length;
        ++v17;
      }
      while ( (__int64)v17 < (int)v15 );
    }
  }
LABEL_22:
  this->fields.releasePerformanceObject = releasePerformanceObject;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.releasePerformanceObject,
    (System_Int32_array **)releasePerformanceObject,
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
  _BOOL4 v4; // w20
  _BOOL4 v5; // w21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x25
  Il2CppObject *v15; // x0
  System_String_o *v16; // x22
  System_String_o *errLabel; // x0
  System_String_o *v18; // x23
  int v19; // w8
  const MethodInfo *v20; // x3
  System_String_o **v21; // x8
  System_String_o *v22; // x23
  UILabel_o *titleLabel; // x21
  UILabel_o *friendWarningLabel; // x20
  int32_t followerStatus; // [xsp+Ch] [xbp-34h] BYREF

  v4 = isActiveFriend;
  v5 = isActiveFollow;
  if ( (byte_4214910 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, isActiveFollow);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_11142/*"RESULT_FRIENDANDFOLLOW_TITLE"*/, v8);
    sub_B0D8A4(&StringLiteral_11144/*"RESULT_FRIEND_ERR_{0}"*/, v9);
    sub_B0D8A4(&StringLiteral_11148/*"RESULT_MAXFRIEND_WARNING"*/, v10);
    sub_B0D8A4(&StringLiteral_11147/*"RESULT_FRIEND_TITLE"*/, v11);
    sub_B0D8A4(&StringLiteral_11141/*"RESULT_FOLLOW_TITLE"*/, v12);
    sub_B0D8A4(&StringLiteral_1/*""*/, v13);
    byte_4214910 = 1;
  }
  v14 = StringLiteral_11148/*"RESULT_MAXFRIEND_WARNING"*/;
  followerStatus = this->fields.followerStatus;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &followerStatus);
  v16 = System_String__Format((System_String_o *)StringLiteral_11144/*"RESULT_FRIEND_ERR_{0}"*/, v15, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  errLabel = LocalizationManager__Get(v16, 0LL);
  if ( !v16 )
    goto LABEL_35;
  v18 = errLabel;
  errLabel = (System_String_o *)System_String__Equals_43837244(v16, errLabel, 0LL);
  if ( !this->fields.errLabel )
    goto LABEL_35;
  if ( ((unsigned __int8)errLabel & 1) != 0 )
  {
    UILabel__set_text(this->fields.errLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v19 = 0;
  }
  else
  {
    UILabel__set_text(this->fields.errLabel, v18, 0LL);
    v19 = 1;
  }
  if ( (v19 & (v5 && v4)) != 0 )
  {
    errLabel = (System_String_o *)this->fields.errLabel;
    if ( !errLabel )
      goto LABEL_35;
    UILabel__set_text((UILabel_o *)errLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    LOBYTE(v4) = 0;
  }
  else
  {
    v16 = (System_String_o *)v14;
  }
  errLabel = (System_String_o *)this->fields.followCountRoot;
  if ( !errLabel )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)errLabel, v5, 0LL);
  errLabel = (System_String_o *)this->fields.friendWarningLabel;
  if ( !errLabel )
    goto LABEL_35;
  errLabel = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)errLabel, 0LL);
  if ( !errLabel )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)errLabel, !v4, 0LL);
  errLabel = (System_String_o *)this->fields.countRoot;
  if ( !errLabel )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)errLabel, v4, 0LL);
  BattleResultFriendComponent__SetupButtons(this, v5, v4, v20);
  v21 = (System_String_o **)&StringLiteral_11142/*"RESULT_FRIENDANDFOLLOW_TITLE"*/;
  if ( !v5 )
    v21 = (System_String_o **)&StringLiteral_11147/*"RESULT_FRIEND_TITLE"*/;
  if ( !v4 )
    v21 = (System_String_o **)&StringLiteral_11141/*"RESULT_FOLLOW_TITLE"*/;
  v22 = *v21;
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  errLabel = LocalizationManager__Get(v22, 0LL);
  if ( !titleLabel )
    goto LABEL_35;
  UILabel__set_text(titleLabel, errLabel, 0LL);
  if ( v4 )
    goto LABEL_33;
  friendWarningLabel = this->fields.friendWarningLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  errLabel = LocalizationManager__Get(v16, 0LL);
  if ( !friendWarningLabel )
LABEL_35:
    sub_B0D97C(errLabel);
  UILabel__set_text(friendWarningLabel, errLabel, 0LL);
LABEL_33:
  errLabel = (System_String_o *)this->fields.countGrid;
  if ( !errLabel )
    goto LABEL_35;
  ((void (__fastcall *)(System_String_o *, Il2CppMethodPointer))errLabel->klass->vtable._8_System_IConvertible_ToChar.method)(
    errLabel,
    errLabel->klass->vtable._9_System_IConvertible_ToSByte.methodPtr);
}


void __fastcall BattleResultFriendComponent__OnClickFollow(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4214906 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_6418/*"FOLLOW_CONNECT"*/, method);
    byte_4214906 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_6418/*"FOLLOW_CONNECT"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickFriend(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4214903 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3355/*"CONNECT"*/, method);
    byte_4214903 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3355/*"CONNECT"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickHelp(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4214912 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4214912 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 49, 0LL, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickNo(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4214905 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9321/*"NEXT"*/, method);
    byte_4214905 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9321/*"NEXT"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickNoActionFriend(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4214904 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4214904 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickSupportInfo(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_421490D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_2969/*"CHANGE_SUPPORT"*/, method);
    byte_421490D = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_2969/*"CHANGE_SUPPORT"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickTutorialFollow(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x0
  const MethodInfo *v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  BattleServantConfConponent_o *p_fields; // x0
  UserGameEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4214907 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_PickupUserFollowerMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    sub_B0D8A4(
      &Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__,
      v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4214907 = 1;
  }
  entity = 0LL;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseTutorialNotificationDialogArrow(Instance, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (CommonUI_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
  if ( !Instance )
    goto LABEL_13;
  if ( !DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
          (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)Instance,
          &entity,
          (const MethodInfo_2669EE4 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__) )
    goto LABEL_12;
  Instance = (CommonUI_o *)entity;
  if ( !entity )
LABEL_13:
    sub_B0D97C(Instance);
  p_fields = (BattleServantConfConponent_o *)&entity->fields;
  if ( entity->fields.userId )
  {
    p_fields->klass = 0LL;
    sub_B0D840(p_fields, 0LL, v8, v9, v10, v11, v12, v13);
  }
LABEL_12:
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

  if ( (byte_421490C & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_B0D8A4(&StringLiteral_11106/*"REQUEST_OK"*/, v4);
    byte_421490C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B0D97C(Instance);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_11106/*"REQUEST_OK"*/, 0LL);
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
  TblFriendMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int32_t FollowSum; // w22
  _BOOL4 enableFollowQuest; // w23
  _BOOL4 v13; // w22
  _BOOL4 v14; // w24
  const MethodInfo *v15; // x1
  System_Collections_IEnumerator_o *v16; // x1

  if ( (byte_42148FB & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_TblFriendMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserFollowMaster___, v3);
    sub_B0D8A4(&OptionManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B0D8A4(&StringLiteral_9321/*"NEXT"*/, v6);
    sub_B0D8A4(&StringLiteral_6422/*"FOLLOW_NUM"*/, v7);
    byte_42148FB = 1;
  }
  if ( this->fields.followerType != 2 )
    goto LABEL_18;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = (TblFriendMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  if ( !Instance )
    goto LABEL_21;
  FollowSum = UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0LL);
  Instance = (DataManager_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6422/*"FOLLOW_NUM"*/, 0LL);
  enableFollowQuest = this->fields.enableFollowQuest;
  v13 = FollowSum < (int)Instance;
  v14 = this->fields.followerType == 2;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_21;
  Instance = (DataManager_o *)TblFriendMaster__GetFriendSum(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !SelfUserGame )
    goto LABEL_21;
  if ( (!v13 || !enableFollowQuest || !v14) && (int)Instance >= SelfUserGame->fields.friendKeep )
  {
LABEL_18:
    Instance = (DataManager_o *)this->fields.myFsm;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9321/*"NEXT"*/, 0LL);
      return;
    }
LABEL_21:
    sub_B0D97C(Instance);
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
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    v16 = BattleResultFriendComponent__ChangeFaceAtlas(this, v15);
    UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v16, 0LL);
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
  struct OtherUserGameEntity_o *otherUser; // x8
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x20
  int max_length; // w8
  unsigned int v7; // w21
  struct OtherUserGameEntity_o *v8; // x8
  struct ServantLeaderInfo_array *eventUserSvtLeaderHash; // x19
  int v10; // w8
  unsigned int v11; // w20
  __int64 v12; // x0

  if ( (byte_42148FE & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, method);
    byte_42148FE = 1;
  }
  if ( this->fields.otherUser )
  {
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    SpoilerSetting = (ServantLeaderInfo_o *)OptionManager__GetSpoilerSetting(0LL);
    if ( ((unsigned __int8)SpoilerSetting & 1) == 0 )
    {
      otherUser = this->fields.otherUser;
      if ( !otherUser )
        goto LABEL_24;
      userSvtLeaderHash = otherUser->fields.userSvtLeaderHash;
      if ( !userSvtLeaderHash )
        goto LABEL_24;
      max_length = userSvtLeaderHash->max_length;
      if ( max_length >= 1 )
      {
        v7 = 0;
        while ( v7 < max_length )
        {
          SpoilerSetting = userSvtLeaderHash->m_Items[v7];
          if ( !SpoilerSetting )
            goto LABEL_24;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0LL);
          max_length = userSvtLeaderHash->max_length;
          if ( (int)++v7 >= max_length )
            goto LABEL_15;
        }
LABEL_23:
        v12 = sub_B0D9A8(SpoilerSetting);
        sub_B0D948(v12, 0LL);
      }
LABEL_15:
      v8 = this->fields.otherUser;
      if ( !v8 || (eventUserSvtLeaderHash = v8->fields.eventUserSvtLeaderHash) == 0LL )
LABEL_24:
        sub_B0D97C(SpoilerSetting);
      v10 = eventUserSvtLeaderHash->max_length;
      if ( v10 >= 1 )
      {
        v11 = 0;
        while ( v11 < v10 )
        {
          SpoilerSetting = eventUserSvtLeaderHash->m_Items[v11];
          if ( !SpoilerSetting )
            goto LABEL_24;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0LL);
          v10 = eventUserSvtLeaderHash->max_length;
          if ( (int)++v11 >= v10 )
            return;
        }
        goto LABEL_23;
      }
    }
  }
}


void __fastcall BattleResultFriendComponent__ServantConfClick(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42148FF & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9796/*"OPEN_SERVANT"*/, method);
    byte_42148FF = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9796/*"OPEN_SERVANT"*/, 0LL);
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
  struct UIButton_o *rightButton; // x8
  struct UIButton_o *centerButton; // x23
  UILabel_o *centerButtonLabel; // x22
  UILabel_o *rightButtonLabel; // x24
  UnityEngine_GameObject_o *gameObject; // x24
  BattleResultFriendComponent_c *v30; // x8
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  __int64 *v35; // x8
  struct UIButton_o *v36; // x8
  UnityEngine_GameObject_o *v37; // x24
  BattleResultFriendComponent_c *v38; // x8
  __int64 v39; // x1
  __int64 v40; // x2
  EventDelegate_o *v41; // x20
  UIButton_c *klass; // x8
  UnityEngine_Color_o grey; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o gray; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o black; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4214911 & 1) == 0 )
  {
    sub_B0D8A4(&BattleResultFriendComponent_TypeInfo, isActiveFollow);
    sub_B0D8A4(&EventDelegate_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDelegate__Remove__, v9);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_9971/*"OnClickFriend"*/, v11);
    sub_B0D8A4(&StringLiteral_9991/*"OnClickNoActionFriend"*/, v12);
    sub_B0D8A4(&StringLiteral_11146/*"RESULT_FRIEND_REQUEST_YES"*/, v13);
    sub_B0D8A4(&StringLiteral_11140/*"RESULT_FOLLOW_REQUEST_YES"*/, v14);
    sub_B0D8A4(&StringLiteral_9970/*"OnClickFollow"*/, v15);
    sub_B0D8A4(&StringLiteral_19404/*"icon_friend"*/, v16);
    sub_B0D8A4(&StringLiteral_11145/*"RESULT_FRIEND_REQUEST_NO"*/, v17);
    sub_B0D8A4(&StringLiteral_19403/*"icon_follow"*/, v18);
    byte_4214911 = 1;
  }
  v19 = (EventDelegate_o *)sub_B0D974(EventDelegate_TypeInfo, isActiveFollow, isActiveFriend);
  EventDelegate___ctor_28889692(v19, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9971/*"OnClickFriend"*/, 0LL);
  v22 = (EventDelegate_o *)sub_B0D974(EventDelegate_TypeInfo, v20, v21);
  EventDelegate___ctor_28889692(v22, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9970/*"OnClickFollow"*/, 0LL);
  helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
  if ( !helpButton )
    goto LABEL_50;
  helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL);
  if ( !helpButton )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 1, 0LL);
  leftButtonLabel = this->fields.leftButtonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11145/*"RESULT_FRIEND_REQUEST_NO"*/, 0LL);
  if ( !leftButtonLabel )
    goto LABEL_50;
  UILabel__set_text(leftButtonLabel, (System_String_o *)helpButton, 0LL);
  helpButton = (UnityEngine_Component_o *)this->fields.centerButton;
  if ( !helpButton )
    goto LABEL_50;
  if ( isActiveFollow )
  {
    helpButton = (UnityEngine_Component_o *)helpButton[8].klass;
    if ( !helpButton )
      goto LABEL_50;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)helpButton,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
    rightButton = this->fields.rightButton;
    if ( !rightButton )
      goto LABEL_50;
    helpButton = (UnityEngine_Component_o *)rightButton->fields.onClick;
    if ( !helpButton )
      goto LABEL_50;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)helpButton,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
    centerButton = this->fields.centerButton;
    centerButtonLabel = this->fields.centerButtonLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11146/*"RESULT_FRIEND_REQUEST_YES"*/, 0LL);
    if ( !centerButtonLabel )
      goto LABEL_50;
    UILabel__set_text(centerButtonLabel, (System_String_o *)helpButton, 0LL);
    rightButtonLabel = this->fields.rightButtonLabel;
    helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11140/*"RESULT_FOLLOW_REQUEST_YES"*/, 0LL);
    if ( !rightButtonLabel )
      goto LABEL_50;
    UILabel__set_text(rightButtonLabel, (System_String_o *)helpButton, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.centerButtonLabel;
    if ( !helpButton )
      goto LABEL_50;
    gameObject = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    v30 = BattleResultFriendComponent_TypeInfo;
    if ( (BYTE3(BattleResultFriendComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultFriendComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultFriendComponent_TypeInfo);
      v30 = BattleResultFriendComponent_TypeInfo;
    }
    GameObjectExtensions__AddLocalPositionX(gameObject, v30->static_fields->offsetOfferLabelPosition, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightButtonLabel;
    if ( !helpButton )
      goto LABEL_50;
    v31 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    GameObjectExtensions__AddLocalPositionX(
      v31,
      BattleResultFriendComponent_TypeInfo->static_fields->offsetOfferLabelPosition,
      0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.leftButton;
    if ( !helpButton )
      goto LABEL_50;
    v32 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    GameObjectExtensions__AddLocalPositionX(v32, -this->fields.offsetPosition, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightButton;
    if ( !helpButton )
      goto LABEL_50;
    v33 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    GameObjectExtensions__AddLocalPositionX(v33, this->fields.offsetPosition, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightMarkSprite;
    if ( !helpButton )
      goto LABEL_50;
    v34 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    GameObjectExtensions__AddLocalPositionX(
      v34,
      BattleResultFriendComponent_TypeInfo->static_fields->offsetFollowMarkPosition,
      0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.centerMarkSprite;
    if ( !helpButton )
      goto LABEL_50;
    UISprite__set_spriteName((UISprite_o *)helpButton, (System_String_o *)StringLiteral_19404/*"icon_friend"*/, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightMarkSprite;
    if ( !helpButton )
      goto LABEL_50;
    v35 = &StringLiteral_19403/*"icon_follow"*/;
  }
  else
  {
    helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL);
    if ( !helpButton )
      goto LABEL_50;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 0, 0LL);
    v36 = this->fields.rightButton;
    if ( !v36 )
      goto LABEL_50;
    helpButton = (UnityEngine_Component_o *)v36->fields.onClick;
    if ( !helpButton )
      goto LABEL_50;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)helpButton,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
    centerButton = this->fields.rightButton;
    centerButtonLabel = this->fields.rightButtonLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11146/*"RESULT_FRIEND_REQUEST_YES"*/, 0LL);
    if ( !centerButtonLabel )
      goto LABEL_50;
    UILabel__set_text(centerButtonLabel, (System_String_o *)helpButton, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightButtonLabel;
    if ( !helpButton )
      goto LABEL_50;
    v37 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    v38 = BattleResultFriendComponent_TypeInfo;
    if ( (BYTE3(BattleResultFriendComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultFriendComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultFriendComponent_TypeInfo);
      v38 = BattleResultFriendComponent_TypeInfo;
    }
    GameObjectExtensions__AddLocalPositionX(v37, v38->static_fields->offsetOfferLabelPosition, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightMarkSprite;
    if ( !helpButton )
      goto LABEL_50;
    v35 = &StringLiteral_19404/*"icon_friend"*/;
  }
  UISprite__set_spriteName((UISprite_o *)helpButton, (System_String_o *)*v35, 0LL);
  if ( !isActiveFriend || this->fields.followerStatus )
  {
    v41 = (EventDelegate_o *)sub_B0D974(EventDelegate_TypeInfo, v39, v40);
    EventDelegate___ctor_28889692(v41, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9991/*"OnClickNoActionFriend"*/, 0LL);
    if ( centerButton )
    {
      helpButton = (UnityEngine_Component_o *)centerButton->fields.onClick;
      if ( helpButton )
      {
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)helpButton,
          (WarBoardManager_TaskList_o *)v19,
          (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_EventDelegate__Remove__);
        helpButton = (UnityEngine_Component_o *)centerButton->fields.onClick;
        if ( helpButton )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)helpButton,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v41,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
          grey = UnityEngine_Color__get_grey(0LL);
          UIButtonColor__set_defaultColor((UIButtonColor_o *)centerButton, grey, 0LL);
          centerButton->fields.hover = UnityEngine_Color__get_grey(0LL);
          v44 = UnityEngine_Color__get_grey(0LL);
          klass = centerButton->klass;
          centerButton->fields.pressed = v44;
          ((void (__fastcall *)(struct UIButton_o *, __int64, __int64, Il2CppMethodPointer))klass->vtable._14_SetState.method)(
            centerButton,
            3LL,
            1LL,
            klass->vtable._15_OnClick.methodPtr);
          gray = UnityEngine_Color__get_gray(0LL);
          UIWidget__set_color((UIWidget_o *)centerButtonLabel, gray, 0LL);
          black = UnityEngine_Color__get_black(0LL);
          UILabel__set_effectColor(centerButtonLabel, black, 0LL);
          return;
        }
      }
    }
LABEL_50:
    sub_B0D97C(helpButton);
  }
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
  CommonUI_o *Instance; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  ServantStatusDialog_EndDelegate_o *v13; // x22

  if ( (byte_4214900 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleResultFriendComponent_EndShowServant__, method);
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_4214900 = 1;
  }
  otherUser = this->fields.otherUser;
  if ( !otherUser )
    goto LABEL_11;
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
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v11, v12);
    ServantStatusDialog_EndDelegate___ctor(
      v13,
      (Il2CppObject *)this,
      Method_BattleResultFriendComponent_EndShowServant__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenServantStatusDialog_17029768(Instance, 5, v9, v13, 0LL);
      return;
    }
LABEL_11:
    sub_B0D97C(otherUser);
  }
  BattleResultFriendComponent__endCloseSHowServant(this, v8);
}


void __fastcall BattleResultFriendComponent__callBackBeginResume(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_421490F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3101/*"CLOSE"*/, method);
    byte_421490F = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3101/*"CLOSE"*/, 0LL);
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
    sub_B0D97C(0LL);
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

  if ( (byte_4214902 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3101/*"CLOSE"*/, method);
    byte_4214902 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3101/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__followAssign(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  FollowAssignRequest_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_421490A & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleResultFriendComponent_EndRequestFollow__, method);
    sub_B0D8A4(&Method_NetworkManager_getRequest_FollowAssignRequest___, v3);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    byte_421490A = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  v9 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v7, v8);
  NetworkManager_ResultCallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_EndRequestFollow__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (FollowAssignRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                 v9,
                                                                 (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_FollowAssignRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B0D97C(0LL);
  FollowAssignRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.targetId, 0LL);
}


void __fastcall BattleResultFriendComponent__friendOffer(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  FriendOfferRequest_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_4214908 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleResultFriendComponent_EndRequestFriend__, method);
    sub_B0D8A4(&Method_NetworkManager_getRequest_FriendOfferRequest___, v3);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    byte_4214908 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  v9 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v7, v8);
  NetworkManager_ResultCallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_EndRequestFriend__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (FriendOfferRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                v9,
                                                                (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_FriendOfferRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B0D97C(0LL);
  FriendOfferRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.targetId, 0LL);
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
  __int64 v8; // x11
  unsigned __int64 v9; // x8
  unsigned __int64 v10; // x9
  __int64 v11; // x11
  __int64 v12; // x12
  __int64 v14; // x0

  otherUser = this->fields.otherUser;
  if ( !otherUser )
    goto LABEL_18;
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
    goto LABEL_18;
  v7 = 72LL;
  if ( this->fields.displayServantType )
    v7 = 80LL;
  v8 = *(__int64 *)((char *)&v6->klass + v7);
  if ( !v8 )
LABEL_18:
    sub_B0D97C(otherUser);
  v9 = *(unsigned int *)(v8 + 24);
  if ( (__int64)(v9 << 32) < 1 )
    return -1;
  v10 = 0LL;
  v11 = v8 + 32;
  while ( 1 )
  {
    if ( v10 >= v9 )
    {
      v14 = sub_B0D9A8(otherUser);
      sub_B0D948(v14, 0LL);
    }
    v12 = *(_QWORD *)(v11 + 8 * v10);
    if ( v12 )
    {
      if ( *(_QWORD *)(v12 + 40) )
        break;
    }
    if ( (__int64)++v10 >= (int)v9 )
      return -1;
  }
  return *(_DWORD *)(v12 + 32);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultFriendComponent__onChangeClass(
        BattleResultFriendComponent_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( (byte_42148FA & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, *(_QWORD *)&classPos);
    byte_42148FA = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  BattleResultFriendComponent__changeClass(this, classPos, v5);
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
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UserGameEntity_o *SelfUserGame; // x22
  TblFriendMaster_o *MasterData_WarQuestSelectionMaster; // x25
  int32_t FollowSum; // w24
  _BOOL4 enableFollowQuest; // w21
  _BOOL4 v32; // w26
  _BOOL4 v33; // w27
  int v34; // w23
  const MethodInfo *v35; // x3
  int v36; // w21
  UILabel_o *countLabel; // x26
  Il2CppObject *v38; // x25
  Il2CppObject *v39; // x0
  UILabel_o *followCountLabel; // x22
  Il2CppObject *v41; // x24
  Il2CppObject *v42; // x0
  UILabel_o *confLabel; // x22
  UserServantEntity_o *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  const MethodInfo *v51; // x1
  struct BattleResultComponent_o *parentComp; // x8
  struct BattleResultComponent_resultData_o *battleResult; // x8
  const MethodInfo *v54; // x2
  _BOOL4 IsNeedUseEventSupport; // w8
  int32_t followerClassId; // w22
  int32_t ExistLeaderInfo; // w0
  UnityEngine_Object_o *classButtonControl; // x22
  __int64 v59; // x1
  __int64 v60; // x2
  System_Action_o *v61; // x21
  const MethodInfo *v62; // x2
  int32_t friendKeep; // [xsp+0h] [xbp-60h] BYREF
  int32_t FriendSum; // [xsp+4h] [xbp-5Ch] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42148FD & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_OtherUserGameMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TblFriendMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserFollowMaster___, v7);
    sub_B0D8A4(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__, v8);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v9);
    sub_B0D8A4(&int_TypeInfo, v10);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B0D8A4(&Method_BattleResultFriendComponent___c__DisplayClass45_0__openCore_b__0__, v14);
    sub_B0D8A4(&BattleResultFriendComponent___c__DisplayClass45_0_TypeInfo, v15);
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, v16);
    sub_B0D8A4(&StringLiteral_11143/*"RESULT_FRIEND_CONF"*/, v17);
    sub_B0D8A4(&StringLiteral_23688/*"{0}/{1}"*/, v18);
    sub_B0D8A4(&StringLiteral_6422/*"FOLLOW_NUM"*/, v19);
    byte_42148FD = 1;
  }
  entity = 0LL;
  v20 = sub_B0D974(BattleResultFriendComponent___c__DisplayClass45_0_TypeInfo, method, v2);
  BattleResultFriendComponent___c__DisplayClass45_0___ctor(
    (BattleResultFriendComponent___c__DisplayClass45_0_o *)v20,
    0LL);
  if ( !v20 )
    goto LABEL_38;
  *(_QWORD *)(v20 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (TblFriendMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  if ( !Instance )
    goto LABEL_38;
  FollowSum = UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0LL);
  Instance = (DataManager_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6422/*"FOLLOW_NUM"*/, 0LL);
  enableFollowQuest = this->fields.enableFollowQuest;
  v32 = FollowSum < (int)Instance;
  v33 = this->fields.followerType == 2;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_38;
  v34 = (int)Instance;
  Instance = (DataManager_o *)TblFriendMaster__GetFriendSum(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !SelfUserGame )
    goto LABEL_38;
  v36 = v32 && enableFollowQuest && v33;
  BattleResultFriendComponent__Layout(this, v36, (int)Instance < SelfUserGame->fields.friendKeep, v35);
  countLabel = this->fields.countLabel;
  FriendSum = TblFriendMaster__GetFriendSum(MasterData_WarQuestSelectionMaster, 0LL);
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FriendSum);
  friendKeep = SelfUserGame->fields.friendKeep;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep);
  Instance = (DataManager_o *)System_String__Format_43845440((System_String_o *)StringLiteral_23688/*"{0}/{1}"*/, v38, v39, 0LL);
  if ( !countLabel )
    goto LABEL_38;
  UILabel__set_text(countLabel, (System_String_o *)Instance, 0LL);
  if ( v36 )
  {
    followCountLabel = this->fields.followCountLabel;
    FriendSum = FollowSum;
    v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FriendSum);
    friendKeep = v34;
    v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep);
    Instance = (DataManager_o *)System_String__Format_43845440((System_String_o *)StringLiteral_23688/*"{0}/{1}"*/, v41, v42, 0LL);
    if ( !followCountLabel )
      goto LABEL_38;
    UILabel__set_text(followCountLabel, (System_String_o *)Instance, 0LL);
  }
  confLabel = this->fields.confLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11143/*"RESULT_FRIEND_CONF"*/, 0LL);
  if ( !confLabel )
    goto LABEL_38;
  UILabel__set_text(confLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  if ( !Instance )
    goto LABEL_38;
  v44 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
          this->fields.targetId,
          (const MethodInfo_2669DFC *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
  this->fields.otherUser = (struct OtherUserGameEntity_o *)v44;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.otherUser,
    (System_Int32_array **)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  BattleResultFriendComponent__OtherUserChangeLimitCountBySpoilerProtection(this, v51);
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  parentComp = this->fields.parentComp;
  if ( !parentComp )
    goto LABEL_38;
  battleResult = parentComp->fields.battleResult;
  if ( !battleResult || !Instance )
    goto LABEL_38;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
    &entity,
    battleResult->fields.eventId,
    (const MethodInfo_2669C30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( entity )
    IsNeedUseEventSupport = EventDetailEntity__IsNeedUseEventSupport((EventDetailEntity_o *)entity, 0LL);
  else
    IsNeedUseEventSupport = 0;
  followerClassId = this->fields.followerClassId;
  this->fields.displayServantType = IsNeedUseEventSupport;
  ExistLeaderInfo = BattleResultFriendComponent__getExistLeaderInfo(this, followerClassId, v54);
  this->fields.followerClassId = ExistLeaderInfo;
  if ( followerClassId != ExistLeaderInfo )
  {
    classButtonControl = (UnityEngine_Object_o *)this->fields.classButtonControl;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(classButtonControl, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.classButtonControl;
      if ( !Instance )
        goto LABEL_38;
      ClassButtonControlComponent__setCursor(
        (ClassButtonControlComponent_o *)Instance,
        this->fields.followerClassId,
        0LL);
    }
  }
  this->fields.dispClassId = this->fields.followerClassId;
  if ( v36 )
  {
    *(_BYTE *)(v20 + 24) = EventTutorialMaster__IsTutorialAvailable(-1, 49, 0, 0, 0, 0, 0LL);
    v61 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v59, v60);
    System_Action___ctor(
      v61,
      (Il2CppObject *)v20,
      Method_BattleResultFriendComponent___c__DisplayClass45_0__openCore_b__0__,
      0LL);
    EventTutorialMaster__CheckTutorial(-1, 49, v61, 0, 0, 0, 0, 0LL);
  }
  Instance = (DataManager_o *)this->fields.root;
  if ( !Instance
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL),
        BattleResultFriendComponent__changeClass(this, this->fields.followerClassId, v62),
        (Instance = (DataManager_o *)this->fields.myFsm) == 0LL) )
  {
LABEL_38:
    sub_B0D97C(Instance);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
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
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_Object_o *classButtonControl; // x21
  ClassButtonControlComponent_o *v18; // x0
  ClassButtonControlComponent_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  ClassButtonControlComponent_CallbackFunc_o *v22; // x21

  if ( (byte_42148F9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleResultFriendComponent_onChangeClass__, *(_QWORD *)&infollowerType);
    sub_B0D8A4(&ClassButtonControlComponent_CallbackFunc_TypeInfo, v15);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v16);
    byte_42148F9 = 1;
  }
  this->fields.followerType = Follower__getType(infollowerType, 0LL);
  this->fields.followerStatus = infollowerStatus;
  this->fields.targetId = followerId;
  this->fields.followerClassId = infollowerClassId;
  this->fields.followerDeckId = followerDeckId;
  this->fields.enableFollowQuest = enableFollow;
  classButtonControl = (UnityEngine_Object_o *)this->fields.classButtonControl;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classButtonControl, 0LL, 0LL) )
  {
    v18 = this->fields.classButtonControl;
    if ( !v18
      || (ClassButtonControlComponent__setCursor(v18, infollowerClassId, 0LL),
          v19 = this->fields.classButtonControl,
          v22 = (ClassButtonControlComponent_CallbackFunc_o *)sub_B0D974(
                                                                ClassButtonControlComponent_CallbackFunc_TypeInfo,
                                                                v20,
                                                                v21),
          ClassButtonControlComponent_CallbackFunc___ctor(
            v22,
            (Il2CppObject *)this,
            Method_BattleResultFriendComponent_onChangeClass__,
            0LL),
          !v19) )
    {
      sub_B0D97C(v18);
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
  BattleResultFriendComponent__ChangeFaceAtlas_d__44_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BattleResultFriendComponent_o *_4__this; // x20
  Il2CppObject *v11; // x21
  System_Action_o *releasePerformanceObject; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_WaitForEndOfFrame_o *v15; // x20
  struct UnityEngine_WaitForEndOfFrame_o **p_waitForEndOfFrame_5__2; // x19
  struct UnityEngine_WaitForEndOfFrame_o *v17; // x1
  bool result; // w0
  Il2CppObject **p__8__1; // x22
  System_Collections_IEnumerator_o *v20; // x0
  Il2CppObject **p__2__current; // x19
  struct BattleResultFriendComponent___c__DisplayClass44_0_o *_8__1; // x8
  Il2CppObject *v23; // x21
  System_Action_o *v24; // x20
  Il2CppObject *v25; // x1
  int v26; // w8
  Il2CppObject *waitForEndOfFrame_5__2; // x1
  Il2CppObject *v28; // x1

  v3 = this;
  if ( (byte_4211EC2 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AtlasManager_TypeInfo, v4);
    sub_B0D8A4(&System_GC_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v6);
    sub_B0D8A4(&Method_BattleResultFriendComponent___c__DisplayClass44_0__ChangeFaceAtlas_b__0__, v7);
    sub_B0D8A4(&BattleResultFriendComponent___c__DisplayClass44_0_TypeInfo, v8);
    this = (BattleResultFriendComponent__ChangeFaceAtlas_d__44_o *)sub_B0D8A4(
                                                                     &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                     v9);
    byte_4211EC2 = 1;
  }
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      v11 = (Il2CppObject *)sub_B0D974(BattleResultFriendComponent___c__DisplayClass44_0_TypeInfo, method, v2);
      System_Object___ctor(v11, 0LL);
      v3->fields.__8__1 = (struct BattleResultFriendComponent___c__DisplayClass44_0_o *)v11;
      sub_B0D840(&v3->fields.__8__1, v11);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__ReleaseFaceBattleAtlas(0LL);
      if ( !_4__this )
        goto LABEL_36;
      releasePerformanceObject = _4__this->fields.releasePerformanceObject;
      if ( releasePerformanceObject )
        System_Action__Invoke(releasePerformanceObject, 0LL);
      BattleResultFriendComponent__openCore(_4__this, 0LL);
      v15 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v13, v14);
      UnityEngine_WaitForEndOfFrame___ctor(v15, 0LL);
      v3->fields._waitForEndOfFrame_5__2 = v15;
      p_waitForEndOfFrame_5__2 = &v3->fields._waitForEndOfFrame_5__2;
      sub_B0D840(p_waitForEndOfFrame_5__2, v15);
      v17 = *p_waitForEndOfFrame_5__2;
      *(p_waitForEndOfFrame_5__2 - 3) = *p_waitForEndOfFrame_5__2;
      sub_B0D840(p_waitForEndOfFrame_5__2 - 3, v17);
      result = 1;
      *((_DWORD *)p_waitForEndOfFrame_5__2 - 8) = 1;
      return result;
    case 1:
      v3->fields.__1__state = -1;
      if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_43098652(0LL);
      waitForEndOfFrame_5__2 = (Il2CppObject *)v3->fields._waitForEndOfFrame_5__2;
      v3->fields.__2__current = waitForEndOfFrame_5__2;
      sub_B0D840(&v3->fields.__2__current, waitForEndOfFrame_5__2);
      v26 = 2;
      goto LABEL_34;
    case 2:
      v3->fields.__1__state = -1;
      this = (BattleResultFriendComponent__ChangeFaceAtlas_d__44_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_36;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleResultFriendComponent__ChangeFaceAtlas_d__44_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_36;
      v20 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v20;
      p__2__current = &v3->fields.__2__current;
      sub_B0D840(p__2__current, v20);
      *((_DWORD *)p__2__current - 2) = 3;
      goto LABEL_35;
    case 3:
      p__8__1 = (Il2CppObject **)&v3->fields.__8__1;
      _8__1 = v3->fields.__8__1;
      v3->fields.__1__state = -1;
      if ( !_8__1 )
        goto LABEL_36;
      _8__1->fields.isWait = 1;
      v23 = *p__8__1;
      v24 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
      System_Action___ctor(
        v24,
        v23,
        Method_BattleResultFriendComponent___c__DisplayClass44_0__ChangeFaceAtlas_b__0__,
        0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadFaceAtlas(v24, 1, 0LL);
LABEL_20:
      if ( !*p__8__1 )
LABEL_36:
        sub_B0D97C(this);
      if ( LOBYTE((*p__8__1)[1].klass) )
      {
        v25 = (Il2CppObject *)v3->fields._waitForEndOfFrame_5__2;
        v3->fields.__2__current = v25;
        sub_B0D840(&v3->fields.__2__current, v25);
        v26 = 4;
      }
      else
      {
        if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_43098652(0LL);
        v28 = (Il2CppObject *)v3->fields._waitForEndOfFrame_5__2;
        v3->fields.__2__current = v28;
        sub_B0D840(&v3->fields.__2__current, v28);
        v26 = 5;
      }
LABEL_34:
      v3->fields.__1__state = v26;
LABEL_35:
      result = 1;
      break;
    case 4:
      p__8__1 = (Il2CppObject **)&v3->fields.__8__1;
      v3->fields.__1__state = -1;
      goto LABEL_20;
    case 5:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_36;
      BattleResultFriendComponent__changeClass(_4__this, _4__this->fields.dispClassId, 0LL);
LABEL_29:
      result = 0;
      break;
    default:
      goto LABEL_29;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_BattleResultFriendComponent__ChangeFaceAtlas_d__44_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  UnityEngine_MonoBehaviour_o *v14; // x21
  void *monitor; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x20
  EventDelegate_o *v17; // x22
  struct BattleResultFriendComponent_o *v18; // x8
  struct BattleResultFriendComponent_o *v19; // x8
  struct BattleResultFriendComponent_o *v20; // x8
  struct BattleResultFriendComponent_o *v21; // x8
  CommonUI_o *Instance; // x19
  System_String_o *v23; // x0
  System_String_o *v24; // x20
  float v25; // s4
  float v26; // s5
  float v27; // s6
  float v28; // s7
  UnityEngine_Rect_o v29; // [xsp+10h] [xbp-30h] BYREF
  UnityEngine_Vector2_o v30; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4211EC1 & 1) == 0 )
  {
    sub_B0D8A4(&EventDelegate_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v3);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&StringLiteral_10001/*"OnClickTutorialFollow"*/, v6);
    sub_B0D8A4(&StringLiteral_13557/*"TUTORIAL_MESSAGE_FOLLOW_OFFER"*/, v7);
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)sub_B0D8A4(&StringLiteral_11140/*"RESULT_FOLLOW_REQUEST_YES"*/, v8);
    byte_4211EC1 = 1;
  }
  if ( v2->fields.isFollowTutorial )
  {
    _4__this = v2->fields.__4__this;
    if ( !_4__this )
      goto LABEL_26;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)_4__this->fields.followTutorialMask;
    if ( !this )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v10 = v2->fields.__4__this;
    if ( !v10 )
      goto LABEL_26;
    followTutorialLabel = v10->fields.followTutorialLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_11140/*"RESULT_FOLLOW_REQUEST_YES"*/,
                                                                    0LL);
    if ( !followTutorialLabel )
      goto LABEL_26;
    UILabel__set_text(followTutorialLabel, (System_String_o *)this, 0LL);
    v14 = (UnityEngine_MonoBehaviour_o *)v2->fields.__4__this;
    if ( !v14 )
      goto LABEL_26;
    monitor = v14[11].monitor;
    if ( !monitor )
      goto LABEL_26;
    v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*((_QWORD *)monitor
                                                                                                  + 24);
    v17 = (EventDelegate_o *)sub_B0D974(EventDelegate_TypeInfo, v12, v13);
    EventDelegate___ctor_28889692(v17, v14, (System_String_o *)StringLiteral_10001/*"OnClickTutorialFollow"*/, 0LL);
    if ( !v16 )
      goto LABEL_26;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v16,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
    v18 = v2->fields.__4__this;
    if ( !v18 )
      goto LABEL_26;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)v18->fields.followTutorialButton;
    if ( !this )
      goto LABEL_26;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
    v19 = v2->fields.__4__this;
    if ( !v19 )
      goto LABEL_26;
    GameObjectExtensions__AddLocalPositionX((UnityEngine_GameObject_o *)this, v19->fields.offsetPosition, 0LL);
    v20 = v2->fields.__4__this;
    if ( !v20 )
      goto LABEL_26;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)v20->fields.followTutorialButton;
    if ( !this )
      goto LABEL_26;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
    if ( !this )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v21 = v2->fields.__4__this;
    if ( !v21 )
      goto LABEL_26;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)v21->fields.rightButton;
    if ( !this )
      goto LABEL_26;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
    if ( !this )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_13557/*"TUTORIAL_MESSAGE_FOLLOW_OFFER"*/, 0LL);
    v31.fields.m_XMin = 162.0;
    v31.fields.m_YMin = -244.0;
    v31.fields.m_Width = 300.0;
    v31.fields.m_Height = 80.0;
    v24 = v23;
    *(_QWORD *)&v29.fields.m_XMin = 0LL;
    *(_QWORD *)&v29.fields.m_Width = 0LL;
    UnityEngine_Rect___ctor(v31, v25, v26, v27, v28, (const MethodInfo *)&v29);
    if ( !Instance )
LABEL_26:
      sub_B0D97C(this);
    v30.fields.x = 313.0;
    v30.fields.y = -184.0;
    CommonUI__OpenTutorialNotificationDialogArrow(Instance, v24, v30, v29, 0.0, 0LL, -1, 0LL, 0LL);
  }
}