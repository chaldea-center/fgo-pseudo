void __fastcall BattleResultFriendComponent___cctor(const MethodInfo *method)
{
  if ( (byte_438B83B & 1) == 0 )
  {
    sub_B775C4(&BattleResultFriendComponent_TypeInfo);
    byte_438B83B = 1;
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
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_438B824 & 1) == 0 )
  {
    sub_B775C4(&BattleResultFriendComponent__ChangeFaceAtlas_d__44_TypeInfo);
    byte_438B824 = 1;
  }
  v3 = sub_B77694(BattleResultFriendComponent__ChangeFaceAtlas_d__44_TypeInfo);
  BattleResultFriendComponent__ChangeFaceAtlas_d__44___ctor(
    (BattleResultFriendComponent__ChangeFaceAtlas_d__44_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B7769C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattleResultFriendComponent__ChangeSupportScene(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1
  struct SceneRootComponent_o *targetRoot; // x20
  __int64 v6; // x9
  BattleRootComponent_callBackBeginResume_o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  OtherUserGameEntity_o *otherUser; // x21
  SupportInfoJump_o *v15; // x19
  SceneRootComponent_c *klass; // x8
  Il2CppClass *declaringType; // x8
  int32_t name; // w21
  QuestRestrictionInfo_o *v19; // x20
  BattleResultFriendComponent_o *v20; // x0
  const MethodInfo *v21; // x1

  if ( (byte_438B836 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleResultFriendComponent_callBackBeginResume__);
    sub_B775C4(&BattleRootComponent_TypeInfo);
    sub_B775C4(&QuestRestrictionInfo_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&SupportInfoJump_TypeInfo);
    sub_B775C4(&BattleRootComponent_callBackBeginResume_TypeInfo);
    byte_438B836 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  if ( AvalonSceneManager__checkNowScene(Instance, 10, 0LL) )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    targetRoot = Instance->fields.targetRoot;
    if ( !targetRoot
      || (v6 = *(&BattleRootComponent_TypeInfo->_2.bitflags2 + 1),
          *(&targetRoot->klass->_2.bitflags2 + 1) >= (unsigned int)v6)
      && (BattleRootComponent_c *)targetRoot->klass->_2.typeHierarchy[v6 - 1] == BattleRootComponent_TypeInfo )
    {
      v7 = (BattleRootComponent_callBackBeginResume_o *)sub_B77694(BattleRootComponent_callBackBeginResume_TypeInfo);
      BattleRootComponent_callBackBeginResume___ctor(
        v7,
        (Il2CppObject *)this,
        Method_BattleResultFriendComponent_callBackBeginResume__,
        0LL);
      if ( targetRoot )
      {
        targetRoot[2].klass = (SceneRootComponent_c *)v7;
        sub_B77560(
          (BattleServantConfConponent_o *)&targetRoot[2],
          (System_Int32_array **)v7,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13);
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        otherUser = this->fields.otherUser;
        v15 = (SupportInfoJump_o *)sub_B77694(SupportInfoJump_TypeInfo);
        SupportInfoJump___ctor(v15, otherUser, 0, 0, 0LL);
        klass = targetRoot[1].klass;
        if ( klass )
        {
          declaringType = klass->_1.declaringType;
          if ( declaringType )
          {
            name = (int32_t)declaringType->_1.name;
            v19 = (QuestRestrictionInfo_o *)sub_B77694(QuestRestrictionInfo_TypeInfo);
            QuestRestrictionInfo___ctor(v19, name, 0LL);
            if ( v15 )
            {
              SupportInfoJump__SetSetupInfo(v15, 0LL, v19, 0LL);
              Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( Instance )
              {
                AvalonSceneManager__pushScene(Instance, 60, 1, (Il2CppObject *)v15, 0LL);
                return;
              }
            }
          }
        }
      }
LABEL_19:
      sub_B7769C(Instance, v4);
    }
    v20 = (BattleResultFriendComponent_o *)sub_B77990(Instance->fields.targetRoot);
    BattleResultFriendComponent__callBackBeginResume(v20, v21);
  }
}


void __fastcall BattleResultFriendComponent__EndRequestFollow(
        BattleResultFriendComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *myFsm; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v7; // x21
  System_String_o *v8; // x20
  __int64 *v9; // x8
  CommonUI_o *Instance; // x21
  NotificationDialog_ClickDelegate_o *v11; // x22

  if ( (byte_438B833 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleResultFriendComponent_OnEndRequestDialog__);
    sub_B775C4(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_11294/*"REQUEST_OK"*/);
    sub_B775C4(&StringLiteral_11292/*"REQUEST_NG"*/);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    sub_B775C4(&StringLiteral_20889/*"message"*/);
    sub_B775C4(&StringLiteral_980/*"0"*/);
    sub_B775C4(&StringLiteral_22776/*"status"*/);
    byte_438B833 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21504/*"ng"*/, 0LL) )
  {
    myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v9 = &StringLiteral_11292/*"REQUEST_NG"*/;
      goto LABEL_18;
    }
LABEL_21:
    sub_B7769C(myFsm, v5);
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)JsonManager__getDictionary(
                                                                                          result,
                                                                                          0LL);
  if ( !myFsm )
    goto LABEL_21;
  v7 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)myFsm;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          myFsm,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_20889/*"message"*/,
          (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_14;
  myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                          v7,
                                                                                          (System_Type_o *)StringLiteral_20889/*"message"*/,
                                                                                          (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_21;
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))myFsm->klass->vtable._3_ToString.method)(
                            myFsm,
                            myFsm->klass->vtable._4_unknown.methodPtr);
  myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                          v7,
                                                                                          (System_Type_o *)StringLiteral_22776/*"status"*/,
                                                                                          (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_21;
  myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))myFsm->klass->vtable._3_ToString.method)(
                                                                                          myFsm,
                                                                                          myFsm->klass->vtable._4_unknown.methodPtr);
  if ( !myFsm )
    goto LABEL_21;
  if ( System_String__Equals_44889276((System_String_o *)myFsm, (System_String_o *)StringLiteral_980/*"0"*/, 0LL)
    || System_String__IsNullOrEmpty(v8, 0LL) )
  {
LABEL_14:
    myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v9 = &StringLiteral_11294/*"REQUEST_OK"*/;
LABEL_18:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFsm, (System_String_o *)*v9, 0LL);
      return;
    }
    goto LABEL_21;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (NotificationDialog_ClickDelegate_o *)sub_B77694(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__OpenNotificationDialog_18058264(
    Instance,
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *myFsm; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v7; // x21
  System_String_o *v8; // x20
  __int64 *v9; // x8
  CommonUI_o *Instance; // x21
  NotificationDialog_ClickDelegate_o *v11; // x22

  if ( (byte_438B831 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleResultFriendComponent_OnEndRequestDialog__);
    sub_B775C4(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_11294/*"REQUEST_OK"*/);
    sub_B775C4(&StringLiteral_11292/*"REQUEST_NG"*/);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    sub_B775C4(&StringLiteral_20889/*"message"*/);
    sub_B775C4(&StringLiteral_980/*"0"*/);
    sub_B775C4(&StringLiteral_22776/*"status"*/);
    byte_438B831 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21504/*"ng"*/, 0LL) )
  {
    myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v9 = &StringLiteral_11292/*"REQUEST_NG"*/;
      goto LABEL_18;
    }
LABEL_21:
    sub_B7769C(myFsm, v5);
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)JsonManager__getDictionary(
                                                                                          result,
                                                                                          0LL);
  if ( !myFsm )
    goto LABEL_21;
  v7 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)myFsm;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          myFsm,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_20889/*"message"*/,
          (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_14;
  myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                          v7,
                                                                                          (System_Type_o *)StringLiteral_20889/*"message"*/,
                                                                                          (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_21;
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))myFsm->klass->vtable._3_ToString.method)(
                            myFsm,
                            myFsm->klass->vtable._4_unknown.methodPtr);
  myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                          v7,
                                                                                          (System_Type_o *)StringLiteral_22776/*"status"*/,
                                                                                          (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_21;
  myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))myFsm->klass->vtable._3_ToString.method)(
                                                                                          myFsm,
                                                                                          myFsm->klass->vtable._4_unknown.methodPtr);
  if ( !myFsm )
    goto LABEL_21;
  if ( System_String__Equals_44889276((System_String_o *)myFsm, (System_String_o *)StringLiteral_980/*"0"*/, 0LL)
    || System_String__IsNullOrEmpty(v8, 0LL) )
  {
LABEL_14:
    myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v9 = &StringLiteral_11294/*"REQUEST_OK"*/;
LABEL_18:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFsm, (System_String_o *)*v9, 0LL);
      return;
    }
    goto LABEL_21;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (NotificationDialog_ClickDelegate_o *)sub_B77694(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__OpenNotificationDialog_18058264(
    Instance,
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
  CommonUI_o *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_438B829 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_BattleResultFriendComponent_endCloseSHowServant__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438B829 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleResultFriendComponent_endCloseSHowServant__, 0LL);
  if ( !Instance )
    sub_B7769C(v6, v7);
  CommonUI__CloseServantStatusDialog(Instance, v5, 0LL);
}


void __fastcall BattleResultFriendComponent__Init(
        BattleResultFriendComponent_o *this,
        System_Action_o *releasePerformanceObject,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *root; // x0
  UnityEngine_Object_o *friendIconComp; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  changeVColor_array *v13; // x0
  __int64 v14; // x8
  changeVColor_array *v15; // x21
  unsigned __int64 v16; // x24
  changeVColor_o **m_Items; // x25
  UnityEngine_Object_o *v18; // x22
  __int64 v19; // x0

  if ( (byte_438B820 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel____69525984);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438B820 = 1;
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
    sub_B7769C(root, releasePerformanceObject);
  v13 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
          root,
          1,
          (const MethodInfo_1DEC424 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel____69525984);
  if ( v13 )
  {
    v14 = *(_QWORD *)&v13->max_length;
    v15 = v13;
    if ( (int)v14 >= 1 )
    {
      v16 = 0LL;
      m_Items = v13->m_Items;
      do
      {
        if ( v16 >= (unsigned int)v14 )
        {
LABEL_23:
          v19 = sub_B776C8(v13);
          sub_B77668(v19, 0LL);
        }
        v18 = (UnityEngine_Object_o *)m_Items[v16];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v13 = (changeVColor_array *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
        if ( ((unsigned __int8)v13 & 1) != 0 )
        {
          if ( v16 >= v15->max_length )
            goto LABEL_23;
          root = (UnityEngine_GameObject_o *)m_Items[v16];
          if ( !root )
            goto LABEL_24;
          UILabel__SetDefaultFont((UILabel_o *)root, 0LL);
        }
        LODWORD(v14) = v15->max_length;
        ++v16;
      }
      while ( (__int64)v16 < (int)v14 );
    }
  }
LABEL_22:
  this->fields.releasePerformanceObject = releasePerformanceObject;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.releasePerformanceObject,
    (System_Int32_array **)releasePerformanceObject,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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
  __int64 v7; // x25
  Il2CppObject *v8; // x0
  System_String_o *v9; // x22
  System_String_o *errLabel; // x0
  __int64 v11; // x1
  System_String_o *v12; // x23
  int v13; // w8
  const MethodInfo *v14; // x3
  System_String_o **v15; // x8
  System_String_o *v16; // x23
  UILabel_o *titleLabel; // x21
  UILabel_o *friendWarningLabel; // x20
  int32_t followerStatus; // [xsp+Ch] [xbp-34h] BYREF

  v4 = isActiveFriend;
  v5 = isActiveFollow;
  if ( (byte_438B838 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_11330/*"RESULT_FRIENDANDFOLLOW_TITLE"*/);
    sub_B775C4(&StringLiteral_11332/*"RESULT_FRIEND_ERR_{0}"*/);
    sub_B775C4(&StringLiteral_11336/*"RESULT_MAXFRIEND_WARNING"*/);
    sub_B775C4(&StringLiteral_11335/*"RESULT_FRIEND_TITLE"*/);
    sub_B775C4(&StringLiteral_11329/*"RESULT_FOLLOW_TITLE"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438B838 = 1;
  }
  v7 = StringLiteral_11336/*"RESULT_MAXFRIEND_WARNING"*/;
  followerStatus = this->fields.followerStatus;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &followerStatus, isActiveFriend);
  v9 = System_String__Format((System_String_o *)StringLiteral_11332/*"RESULT_FRIEND_ERR_{0}"*/, v8, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  errLabel = LocalizationManager__Get(v9, 0LL);
  if ( !v9 )
    goto LABEL_35;
  v12 = errLabel;
  errLabel = (System_String_o *)System_String__Equals_44889276(v9, errLabel, 0LL);
  if ( !this->fields.errLabel )
    goto LABEL_35;
  if ( ((unsigned __int8)errLabel & 1) != 0 )
  {
    UILabel__set_text(this->fields.errLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v13 = 0;
  }
  else
  {
    UILabel__set_text(this->fields.errLabel, v12, 0LL);
    v13 = 1;
  }
  if ( (v13 & (v5 && v4)) != 0 )
  {
    errLabel = (System_String_o *)this->fields.errLabel;
    if ( !errLabel )
      goto LABEL_35;
    UILabel__set_text((UILabel_o *)errLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    LOBYTE(v4) = 0;
  }
  else
  {
    v9 = (System_String_o *)v7;
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
  BattleResultFriendComponent__SetupButtons(this, v5, v4, v14);
  v15 = (System_String_o **)&StringLiteral_11330/*"RESULT_FRIENDANDFOLLOW_TITLE"*/;
  if ( !v5 )
    v15 = (System_String_o **)&StringLiteral_11335/*"RESULT_FRIEND_TITLE"*/;
  if ( !v4 )
    v15 = (System_String_o **)&StringLiteral_11329/*"RESULT_FOLLOW_TITLE"*/;
  v16 = *v15;
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  errLabel = LocalizationManager__Get(v16, 0LL);
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
  errLabel = LocalizationManager__Get(v9, 0LL);
  if ( !friendWarningLabel )
LABEL_35:
    sub_B7769C(errLabel, v11);
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

  if ( (byte_438B82E & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_6549/*"FOLLOW_CONNECT"*/);
    byte_438B82E = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_6549/*"FOLLOW_CONNECT"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickFriend(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_438B82B & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_3468/*"CONNECT"*/);
    byte_438B82B = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3468/*"CONNECT"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickHelp(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  if ( (byte_438B83A & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B83A = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 49, 0LL, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickNo(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_438B82D & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_9466/*"NEXT"*/);
    byte_438B82D = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9466/*"NEXT"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickNoActionFriend(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_438B82C & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B82C = 1;
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

  if ( (byte_438B835 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_3074/*"CHANGE_SUPPORT"*/);
    byte_438B835 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3074/*"CHANGE_SUPPORT"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickTutorialFollow(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_fields; // x0
  UserGameEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438B82F & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438B82F = 1;
  }
  entity = 0LL;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseTutorialNotificationDialogArrow(Instance, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (CommonUI_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
  if ( !Instance )
    goto LABEL_13;
  if ( !DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
          (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)Instance,
          &entity,
          (const MethodInfo_21FBBA4 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__) )
    goto LABEL_12;
  Instance = (CommonUI_o *)entity;
  if ( !entity )
LABEL_13:
    sub_B7769C(Instance, v4);
  p_fields = (BattleServantConfConponent_o *)&entity->fields;
  if ( entity->fields.userId )
  {
    p_fields->klass = 0LL;
    sub_B77560(p_fields, 0LL, v5, v6, v7, v8, v9, v10);
  }
LABEL_12:
  BattleResultFriendComponent__OnClickFollow(this, v4);
}


void __fastcall BattleResultFriendComponent__OnEndRequestDialog(
        BattleResultFriendComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_438B834 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_11294/*"REQUEST_OK"*/);
    byte_438B834 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B7769C(Instance, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_11294/*"REQUEST_OK"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__Open(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x20
  DataManager_o *Instance; // x0
  TblFriendMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int32_t FollowSum; // w22
  _BOOL4 enableFollowQuest; // w23
  _BOOL4 v8; // w22
  _BOOL4 v9; // w24
  const MethodInfo *v10; // x1
  System_Collections_IEnumerator_o *v11; // x1

  if ( (byte_438B823 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_B775C4(&OptionManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_9466/*"NEXT"*/);
    sub_B775C4(&StringLiteral_6553/*"FOLLOW_NUM"*/);
    byte_438B823 = 1;
  }
  if ( this->fields.followerType != 2 )
    goto LABEL_18;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = (TblFriendMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  if ( !Instance )
    goto LABEL_21;
  FollowSum = UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0LL);
  Instance = (DataManager_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6553/*"FOLLOW_NUM"*/, 0LL);
  enableFollowQuest = this->fields.enableFollowQuest;
  v8 = FollowSum < (int)Instance;
  v9 = this->fields.followerType == 2;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_21;
  Instance = (DataManager_o *)TblFriendMaster__GetFriendSum(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !SelfUserGame )
    goto LABEL_21;
  if ( (!v8 || !enableFollowQuest || !v9) && (int)Instance >= SelfUserGame->fields.friendKeep )
  {
LABEL_18:
    Instance = (DataManager_o *)this->fields.myFsm;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9466/*"NEXT"*/, 0LL);
      return;
    }
LABEL_21:
    sub_B7769C(Instance, method);
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
    v11 = BattleResultFriendComponent__ChangeFaceAtlas(this, v10);
    UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
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
  __int64 v13; // x0

  if ( (byte_438B826 & 1) == 0 )
  {
    sub_B775C4(&OptionManager_TypeInfo);
    byte_438B826 = 1;
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
        v8 = 0;
        while ( v8 < max_length )
        {
          SpoilerSetting = userSvtLeaderHash->m_Items[v8];
          if ( !SpoilerSetting )
            goto LABEL_24;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0LL);
          max_length = userSvtLeaderHash->max_length;
          if ( (int)++v8 >= max_length )
            goto LABEL_15;
        }
LABEL_23:
        v13 = sub_B776C8(SpoilerSetting);
        sub_B77668(v13, 0LL);
      }
LABEL_15:
      v9 = this->fields.otherUser;
      if ( !v9 || (eventUserSvtLeaderHash = v9->fields.eventUserSvtLeaderHash) == 0LL )
LABEL_24:
        sub_B7769C(SpoilerSetting, v4);
      v11 = eventUserSvtLeaderHash->max_length;
      if ( v11 >= 1 )
      {
        v12 = 0;
        while ( v12 < v11 )
        {
          SpoilerSetting = eventUserSvtLeaderHash->m_Items[v12];
          if ( !SpoilerSetting )
            goto LABEL_24;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0LL);
          v11 = eventUserSvtLeaderHash->max_length;
          if ( (int)++v12 >= v11 )
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

  if ( (byte_438B827 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_9946/*"OPEN_SERVANT"*/);
    byte_438B827 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9946/*"OPEN_SERVANT"*/, 0LL);
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
  struct UIButton_o *rightButton; // x8
  struct UIButton_o *centerButton; // x23
  UILabel_o *centerButtonLabel; // x22
  UILabel_o *rightButtonLabel; // x24
  UnityEngine_GameObject_o *gameObject; // x24
  BattleResultFriendComponent_c *v17; // x8
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0
  __int64 *v22; // x8
  struct UIButton_o *v23; // x8
  UnityEngine_GameObject_o *v24; // x24
  BattleResultFriendComponent_c *v25; // x8
  EventDelegate_o *v26; // x20
  UIButton_c *klass; // x8
  UnityEngine_Color_o grey; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o gray; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o black; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438B839 & 1) == 0 )
  {
    sub_B775C4(&BattleResultFriendComponent_TypeInfo);
    sub_B775C4(&EventDelegate_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventDelegate__Remove__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_10129/*"OnClickFriend"*/);
    sub_B775C4(&StringLiteral_10149/*"OnClickNoActionFriend"*/);
    sub_B775C4(&StringLiteral_11334/*"RESULT_FRIEND_REQUEST_YES"*/);
    sub_B775C4(&StringLiteral_11328/*"RESULT_FOLLOW_REQUEST_YES"*/);
    sub_B775C4(&StringLiteral_10128/*"OnClickFollow"*/);
    sub_B775C4(&StringLiteral_19735/*"icon_friend"*/);
    sub_B775C4(&StringLiteral_11333/*"RESULT_FRIEND_REQUEST_NO"*/);
    sub_B775C4(&StringLiteral_19734/*"icon_follow"*/);
    byte_438B839 = 1;
  }
  v7 = (EventDelegate_o *)sub_B77694(EventDelegate_TypeInfo);
  EventDelegate___ctor_30345964(v7, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_10129/*"OnClickFriend"*/, 0LL);
  v8 = (EventDelegate_o *)sub_B77694(EventDelegate_TypeInfo);
  EventDelegate___ctor_30345964(v8, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_10128/*"OnClickFollow"*/, 0LL);
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
  helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11333/*"RESULT_FRIEND_REQUEST_NO"*/, 0LL);
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
      (EventMissionProgressRequest_Argument_ProgressData_o *)v7,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
    rightButton = this->fields.rightButton;
    if ( !rightButton )
      goto LABEL_50;
    helpButton = (UnityEngine_Component_o *)rightButton->fields.onClick;
    if ( !helpButton )
      goto LABEL_50;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)helpButton,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v8,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
    centerButton = this->fields.centerButton;
    centerButtonLabel = this->fields.centerButtonLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11334/*"RESULT_FRIEND_REQUEST_YES"*/, 0LL);
    if ( !centerButtonLabel )
      goto LABEL_50;
    UILabel__set_text(centerButtonLabel, (System_String_o *)helpButton, 0LL);
    rightButtonLabel = this->fields.rightButtonLabel;
    helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11328/*"RESULT_FOLLOW_REQUEST_YES"*/, 0LL);
    if ( !rightButtonLabel )
      goto LABEL_50;
    UILabel__set_text(rightButtonLabel, (System_String_o *)helpButton, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.centerButtonLabel;
    if ( !helpButton )
      goto LABEL_50;
    gameObject = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    v17 = BattleResultFriendComponent_TypeInfo;
    if ( (BYTE3(BattleResultFriendComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultFriendComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultFriendComponent_TypeInfo);
      v17 = BattleResultFriendComponent_TypeInfo;
    }
    GameObjectExtensions__AddLocalPositionX(gameObject, v17->static_fields->offsetOfferLabelPosition, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightButtonLabel;
    if ( !helpButton )
      goto LABEL_50;
    v18 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    GameObjectExtensions__AddLocalPositionX(
      v18,
      BattleResultFriendComponent_TypeInfo->static_fields->offsetOfferLabelPosition,
      0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.leftButton;
    if ( !helpButton )
      goto LABEL_50;
    v19 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    GameObjectExtensions__AddLocalPositionX(v19, -this->fields.offsetPosition, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightButton;
    if ( !helpButton )
      goto LABEL_50;
    v20 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    GameObjectExtensions__AddLocalPositionX(v20, this->fields.offsetPosition, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightMarkSprite;
    if ( !helpButton )
      goto LABEL_50;
    v21 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    GameObjectExtensions__AddLocalPositionX(
      v21,
      BattleResultFriendComponent_TypeInfo->static_fields->offsetFollowMarkPosition,
      0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.centerMarkSprite;
    if ( !helpButton )
      goto LABEL_50;
    UISprite__set_spriteName((UISprite_o *)helpButton, (System_String_o *)StringLiteral_19735/*"icon_friend"*/, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightMarkSprite;
    if ( !helpButton )
      goto LABEL_50;
    v22 = &StringLiteral_19734/*"icon_follow"*/;
  }
  else
  {
    helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL);
    if ( !helpButton )
      goto LABEL_50;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 0, 0LL);
    v23 = this->fields.rightButton;
    if ( !v23 )
      goto LABEL_50;
    helpButton = (UnityEngine_Component_o *)v23->fields.onClick;
    if ( !helpButton )
      goto LABEL_50;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)helpButton,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v7,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
    centerButton = this->fields.rightButton;
    centerButtonLabel = this->fields.rightButtonLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11334/*"RESULT_FRIEND_REQUEST_YES"*/, 0LL);
    if ( !centerButtonLabel )
      goto LABEL_50;
    UILabel__set_text(centerButtonLabel, (System_String_o *)helpButton, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightButtonLabel;
    if ( !helpButton )
      goto LABEL_50;
    v24 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    v25 = BattleResultFriendComponent_TypeInfo;
    if ( (BYTE3(BattleResultFriendComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultFriendComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultFriendComponent_TypeInfo);
      v25 = BattleResultFriendComponent_TypeInfo;
    }
    GameObjectExtensions__AddLocalPositionX(v24, v25->static_fields->offsetOfferLabelPosition, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightMarkSprite;
    if ( !helpButton )
      goto LABEL_50;
    v22 = &StringLiteral_19735/*"icon_friend"*/;
  }
  UISprite__set_spriteName((UISprite_o *)helpButton, (System_String_o *)*v22, 0LL);
  if ( !isActiveFriend || this->fields.followerStatus )
  {
    v26 = (EventDelegate_o *)sub_B77694(EventDelegate_TypeInfo);
    EventDelegate___ctor_30345964(v26, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_10149/*"OnClickNoActionFriend"*/, 0LL);
    if ( centerButton )
    {
      helpButton = (UnityEngine_Component_o *)centerButton->fields.onClick;
      if ( helpButton )
      {
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)helpButton,
          (WarBoardManager_TaskList_o *)v7,
          (const MethodInfo_3054C44 *)Method_System_Collections_Generic_List_EventDelegate__Remove__);
        helpButton = (UnityEngine_Component_o *)centerButton->fields.onClick;
        if ( helpButton )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)helpButton,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
          grey = UnityEngine_Color__get_grey(0LL);
          UIButtonColor__set_defaultColor((UIButtonColor_o *)centerButton, grey, 0LL);
          centerButton->fields.hover = UnityEngine_Color__get_grey(0LL);
          v29 = UnityEngine_Color__get_grey(0LL);
          klass = centerButton->klass;
          centerButton->fields.pressed = v29;
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
    sub_B7769C(helpButton, v9);
  }
}


void __fastcall BattleResultFriendComponent__ShowServantConf(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  OtherUserGameEntity_o *otherUser; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  const MethodInfo *v5; // x1
  ServantLeaderInfo_o *v6; // x20
  CommonUI_o *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v8; // x22

  if ( (byte_438B828 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleResultFriendComponent_EndShowServant__);
    sub_B775C4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B828 = 1;
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
    v6 = ServantLeaderInfo;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (ServantStatusDialog_EndDelegate_o *)sub_B77694(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v8,
      (Il2CppObject *)this,
      Method_BattleResultFriendComponent_EndShowServant__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenServantStatusDialog_18068936(Instance, 5, v6, v8, 0LL);
      return;
    }
LABEL_11:
    sub_B7769C(otherUser, method);
  }
  BattleResultFriendComponent__endCloseSHowServant(this, v5);
}


void __fastcall BattleResultFriendComponent__callBackBeginResume(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_438B837 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_3213/*"CLOSE"*/);
    byte_438B837 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3213/*"CLOSE"*/, 0LL);
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
    sub_B7769C(0LL, classPos);
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

  if ( (byte_438B82A & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_3213/*"CLOSE"*/);
    byte_438B82A = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3213/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__followAssign(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  FollowAssignRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v5; // x1

  if ( (byte_438B832 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleResultFriendComponent_EndRequestFollow__);
    sub_B775C4(&Method_NetworkManager_getRequest_FollowAssignRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B832 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_EndRequestFollow__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (FollowAssignRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                 v3,
                                                                 (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_FollowAssignRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B7769C(0LL, v5);
  FollowAssignRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.targetId, 0LL);
}


void __fastcall BattleResultFriendComponent__friendOffer(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  FriendOfferRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v5; // x1

  if ( (byte_438B830 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleResultFriendComponent_EndRequestFriend__);
    sub_B775C4(&Method_NetworkManager_getRequest_FriendOfferRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B830 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_EndRequestFriend__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (FriendOfferRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                v3,
                                                                (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_FriendOfferRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B7769C(0LL, v5);
  FriendOfferRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.targetId, 0LL);
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
    sub_B7769C(otherUser, *(_QWORD *)&firstClassId);
  v9 = *(unsigned int *)(v8 + 24);
  if ( (__int64)(v9 << 32) < 1 )
    return -1;
  v10 = 0LL;
  v11 = v8 + 32;
  while ( 1 )
  {
    if ( v10 >= v9 )
    {
      v14 = sub_B776C8(otherUser);
      sub_B77668(v14, 0LL);
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


void __fastcall BattleResultFriendComponent__onChangeClass(
        BattleResultFriendComponent_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( (byte_438B822 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B822 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  BattleResultFriendComponent__changeClass(this, classPos, v5);
}


void __fastcall BattleResultFriendComponent__openCore(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UserGameEntity_o *SelfUserGame; // x22
  TblFriendMaster_o *MasterData_WarQuestSelectionMaster; // x25
  int32_t FollowSum; // w24
  _BOOL4 enableFollowQuest; // w21
  _BOOL4 v16; // w26
  _BOOL4 v17; // w27
  int v18; // w23
  const MethodInfo *v19; // x3
  int v20; // w21
  UILabel_o *countLabel; // x26
  __int64 v22; // x2
  Il2CppObject *v23; // x25
  __int64 v24; // x2
  Il2CppObject *v25; // x0
  __int64 v26; // x2
  UILabel_o *followCountLabel; // x22
  Il2CppObject *v28; // x24
  __int64 v29; // x2
  Il2CppObject *v30; // x0
  UILabel_o *confLabel; // x22
  UserServantEntity_o *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
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
  int32_t friendKeep; // [xsp+0h] [xbp-60h] BYREF
  int32_t FriendSum; // [xsp+4h] [xbp-5Ch] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_438B825 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_B775C4(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_BattleResultFriendComponent___c__DisplayClass45_0__openCore_b__0__);
    sub_B775C4(&BattleResultFriendComponent___c__DisplayClass45_0_TypeInfo);
    sub_B775C4(&StringLiteral_5639/*"END_PROC"*/);
    sub_B775C4(&StringLiteral_11331/*"RESULT_FRIEND_CONF"*/);
    sub_B775C4(&StringLiteral_24097/*"{0}/{1}"*/);
    sub_B775C4(&StringLiteral_6553/*"FOLLOW_NUM"*/);
    byte_438B825 = 1;
  }
  entity = 0LL;
  v3 = sub_B77694(BattleResultFriendComponent___c__DisplayClass45_0_TypeInfo);
  BattleResultFriendComponent___c__DisplayClass45_0___ctor(
    (BattleResultFriendComponent___c__DisplayClass45_0_o *)v3,
    0LL);
  if ( !v3 )
    goto LABEL_38;
  *(_QWORD *)(v3 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (TblFriendMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  if ( !Instance )
    goto LABEL_38;
  FollowSum = UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0LL);
  Instance = (DataManager_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6553/*"FOLLOW_NUM"*/, 0LL);
  enableFollowQuest = this->fields.enableFollowQuest;
  v16 = FollowSum < (int)Instance;
  v17 = this->fields.followerType == 2;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_38;
  v18 = (int)Instance;
  Instance = (DataManager_o *)TblFriendMaster__GetFriendSum(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !SelfUserGame )
    goto LABEL_38;
  v20 = v16 && enableFollowQuest && v17;
  BattleResultFriendComponent__Layout(this, v20, (int)Instance < SelfUserGame->fields.friendKeep, v19);
  countLabel = this->fields.countLabel;
  FriendSum = TblFriendMaster__GetFriendSum(MasterData_WarQuestSelectionMaster, 0LL);
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FriendSum, v22);
  friendKeep = SelfUserGame->fields.friendKeep;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep, v24);
  Instance = (DataManager_o *)System_String__Format_44897472((System_String_o *)StringLiteral_24097/*"{0}/{1}"*/, v23, v25, 0LL);
  if ( !countLabel )
    goto LABEL_38;
  UILabel__set_text(countLabel, (System_String_o *)Instance, 0LL);
  if ( v20 )
  {
    followCountLabel = this->fields.followCountLabel;
    FriendSum = FollowSum;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FriendSum, v26);
    friendKeep = v18;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep, v29);
    Instance = (DataManager_o *)System_String__Format_44897472((System_String_o *)StringLiteral_24097/*"{0}/{1}"*/, v28, v30, 0LL);
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
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11331/*"RESULT_FRIEND_CONF"*/, 0LL);
  if ( !confLabel )
    goto LABEL_38;
  UILabel__set_text(confLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  if ( !Instance )
    goto LABEL_38;
  v32 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
          this->fields.targetId,
          (const MethodInfo_21FBABC *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
  this->fields.otherUser = (struct OtherUserGameEntity_o *)v32;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.otherUser,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  BattleResultFriendComponent__OtherUserChangeLimitCountBySpoilerProtection(this, v39);
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
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
    (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
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
  if ( v20 )
  {
    *(_BYTE *)(v3 + 24) = EventTutorialMaster__IsTutorialAvailable(-1, 49, 0, 0, 0, 0, 0LL);
    v47 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
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
LABEL_38:
    sub_B7769C(Instance, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5639/*"END_PROC"*/, 0LL);
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
  UnityEngine_Object_o *classButtonControl; // x21
  __int64 v16; // x1
  ClassButtonControlComponent_o *v17; // x0
  ClassButtonControlComponent_o *v18; // x20
  ClassButtonControlComponent_CallbackFunc_o *v19; // x21

  if ( (byte_438B821 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleResultFriendComponent_onChangeClass__);
    sub_B775C4(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438B821 = 1;
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
    v17 = this->fields.classButtonControl;
    if ( !v17
      || (ClassButtonControlComponent__setCursor(v17, infollowerClassId, 0LL),
          v18 = this->fields.classButtonControl,
          v19 = (ClassButtonControlComponent_CallbackFunc_o *)sub_B77694(ClassButtonControlComponent_CallbackFunc_TypeInfo),
          ClassButtonControlComponent_CallbackFunc___ctor(
            v19,
            (Il2CppObject *)this,
            Method_BattleResultFriendComponent_onChangeClass__,
            0LL),
          !v18) )
    {
      sub_B7769C(v17, v16);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleResultFriendComponent__ChangeFaceAtlas_d__44_o *v8; // x19
  BattleResultFriendComponent_o *_4__this; // x20
  Il2CppObject *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Action_o *releasePerformanceObject; // x0
  UnityEngine_WaitForEndOfFrame_o *v18; // x20
  BattleServantConfConponent_o *p_waitForEndOfFrame_5__2; // x19
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **klass; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  bool result; // w0
  Il2CppObject **p__8__1; // x22
  System_Int32_array **v35; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct BattleResultFriendComponent___c__DisplayClass44_0_o *_8__1; // x8
  Il2CppObject *v44; // x21
  System_Action_o *v45; // x20
  System_Int32_array **v46; // x1
  int v47; // w8
  System_Int32_array **waitForEndOfFrame_5__2; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7

  v8 = this;
  if ( (byte_4388E0A & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&System_GC_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_B775C4(&Method_BattleResultFriendComponent___c__DisplayClass44_0__ChangeFaceAtlas_b__0__);
    sub_B775C4(&BattleResultFriendComponent___c__DisplayClass44_0_TypeInfo);
    this = (BattleResultFriendComponent__ChangeFaceAtlas_d__44_o *)sub_B775C4(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4388E0A = 1;
  }
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v10 = (Il2CppObject *)sub_B77694(BattleResultFriendComponent___c__DisplayClass44_0_TypeInfo);
      System_Object___ctor(v10, 0LL);
      v8->fields.__8__1 = (struct BattleResultFriendComponent___c__DisplayClass44_0_o *)v10;
      sub_B77560(
        (BattleServantConfConponent_o *)&v8->fields.__8__1,
        (System_Int32_array **)v10,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
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
      v18 = (UnityEngine_WaitForEndOfFrame_o *)sub_B77694(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v18, 0LL);
      v8->fields._waitForEndOfFrame_5__2 = v18;
      p_waitForEndOfFrame_5__2 = (BattleServantConfConponent_o *)&v8->fields._waitForEndOfFrame_5__2;
      sub_B77560(p_waitForEndOfFrame_5__2, (System_Int32_array **)v18, v20, v21, v22, v23, v24, v25);
      klass = (System_Int32_array **)p_waitForEndOfFrame_5__2->klass;
      *(_QWORD *)&p_waitForEndOfFrame_5__2[-1].fields.isEquip = p_waitForEndOfFrame_5__2->klass;
      sub_B77560(
        (BattleServantConfConponent_o *)((char *)p_waitForEndOfFrame_5__2 - 24),
        klass,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      result = 1;
      LODWORD(p_waitForEndOfFrame_5__2[-1].fields.BattleAssetUIAtlas) = 1;
      return result;
    case 1:
      v8->fields.__1__state = -1;
      if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_44383624(0LL);
      waitForEndOfFrame_5__2 = (System_Int32_array **)v8->fields._waitForEndOfFrame_5__2;
      v8->fields.__2__current = (Il2CppObject *)waitForEndOfFrame_5__2;
      sub_B77560(
        (BattleServantConfConponent_o *)&v8->fields.__2__current,
        waitForEndOfFrame_5__2,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54);
      v47 = 2;
      goto LABEL_34;
    case 2:
      v8->fields.__1__state = -1;
      this = (BattleResultFriendComponent__ChangeFaceAtlas_d__44_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_36;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleResultFriendComponent__ChangeFaceAtlas_d__44_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_36;
      v35 = (System_Int32_array **)AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v35;
      p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B77560(p__2__current, v35, v37, v38, v39, v40, v41, v42);
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 3;
      goto LABEL_35;
    case 3:
      p__8__1 = (Il2CppObject **)&v8->fields.__8__1;
      _8__1 = v8->fields.__8__1;
      v8->fields.__1__state = -1;
      if ( !_8__1 )
        goto LABEL_36;
      _8__1->fields.isWait = 1;
      v44 = *p__8__1;
      v45 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(
        v45,
        v44,
        Method_BattleResultFriendComponent___c__DisplayClass44_0__ChangeFaceAtlas_b__0__,
        0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadFaceAtlas(v45, 1, 0LL);
LABEL_20:
      if ( !*p__8__1 )
LABEL_36:
        sub_B7769C(this, method);
      if ( LOBYTE((*p__8__1)[1].klass) )
      {
        v46 = (System_Int32_array **)v8->fields._waitForEndOfFrame_5__2;
        v8->fields.__2__current = (Il2CppObject *)v46;
        sub_B77560((BattleServantConfConponent_o *)&v8->fields.__2__current, v46, v2, v3, v4, v5, v6, v7);
        v47 = 4;
      }
      else
      {
        if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_44383624(0LL);
        v55 = (System_Int32_array **)v8->fields._waitForEndOfFrame_5__2;
        v8->fields.__2__current = (Il2CppObject *)v55;
        sub_B77560((BattleServantConfConponent_o *)&v8->fields.__2__current, v55, v56, v57, v58, v59, v60, v61);
        v47 = 5;
      }
LABEL_34:
      v8->fields.__1__state = v47;
LABEL_35:
      result = 1;
      break;
    case 4:
      p__8__1 = (Il2CppObject **)&v8->fields.__8__1;
      v8->fields.__1__state = -1;
      goto LABEL_20;
    case 5:
      v8->fields.__1__state = -1;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_BattleResultFriendComponent__ChangeFaceAtlas_d__44_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
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
  UnityEngine_MonoBehaviour_o *v6; // x21
  void *monitor; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  EventDelegate_o *v9; // x22
  struct BattleResultFriendComponent_o *v10; // x8
  struct BattleResultFriendComponent_o *v11; // x8
  struct BattleResultFriendComponent_o *v12; // x8
  struct BattleResultFriendComponent_o *v13; // x8
  CommonUI_o *Instance; // x19
  System_String_o *v15; // x0
  System_String_o *v16; // x20
  float v17; // s4
  float v18; // s5
  float v19; // s6
  float v20; // s7
  UnityEngine_Rect_o v21; // [xsp+10h] [xbp-30h] BYREF
  UnityEngine_Vector2_o v22; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4388E09 & 1) == 0 )
  {
    sub_B775C4(&EventDelegate_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_10159/*"OnClickTutorialFollow"*/);
    sub_B775C4(&StringLiteral_13763/*"TUTORIAL_MESSAGE_FOLLOW_OFFER"*/);
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)sub_B775C4(&StringLiteral_11328/*"RESULT_FOLLOW_REQUEST_YES"*/);
    byte_4388E09 = 1;
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
    v4 = v2->fields.__4__this;
    if ( !v4 )
      goto LABEL_26;
    followTutorialLabel = v4->fields.followTutorialLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_11328/*"RESULT_FOLLOW_REQUEST_YES"*/,
                                                                    0LL);
    if ( !followTutorialLabel )
      goto LABEL_26;
    UILabel__set_text(followTutorialLabel, (System_String_o *)this, 0LL);
    v6 = (UnityEngine_MonoBehaviour_o *)v2->fields.__4__this;
    if ( !v6 )
      goto LABEL_26;
    monitor = v6[11].monitor;
    if ( !monitor )
      goto LABEL_26;
    v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*((_QWORD *)monitor + 24);
    v9 = (EventDelegate_o *)sub_B77694(EventDelegate_TypeInfo);
    EventDelegate___ctor_30345964(v9, v6, (System_String_o *)StringLiteral_10159/*"OnClickTutorialFollow"*/, 0LL);
    if ( !v8 )
      goto LABEL_26;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v8,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
    v10 = v2->fields.__4__this;
    if ( !v10 )
      goto LABEL_26;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)v10->fields.followTutorialButton;
    if ( !this )
      goto LABEL_26;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
    v11 = v2->fields.__4__this;
    if ( !v11 )
      goto LABEL_26;
    GameObjectExtensions__AddLocalPositionX((UnityEngine_GameObject_o *)this, v11->fields.offsetPosition, 0LL);
    v12 = v2->fields.__4__this;
    if ( !v12 )
      goto LABEL_26;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)v12->fields.followTutorialButton;
    if ( !this )
      goto LABEL_26;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
    if ( !this )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v13 = v2->fields.__4__this;
    if ( !v13 )
      goto LABEL_26;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)v13->fields.rightButton;
    if ( !this )
      goto LABEL_26;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
    if ( !this )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_13763/*"TUTORIAL_MESSAGE_FOLLOW_OFFER"*/, 0LL);
    v23.fields.m_XMin = 162.0;
    v23.fields.m_YMin = -244.0;
    v23.fields.m_Width = 300.0;
    v23.fields.m_Height = 80.0;
    v16 = v15;
    *(_QWORD *)&v21.fields.m_XMin = 0LL;
    *(_QWORD *)&v21.fields.m_Width = 0LL;
    UnityEngine_Rect___ctor(v23, v17, v18, v19, v20, (const MethodInfo *)&v21);
    if ( !Instance )
LABEL_26:
      sub_B7769C(this, method);
    v22.fields.x = 313.0;
    v22.fields.y = -184.0;
    CommonUI__OpenTutorialNotificationDialogArrow(Instance, v16, v22, v21, 0.0, 0LL, -1, 0LL, 0LL);
  }
}