void __fastcall BattleResultFriendComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8937 & 1) == 0 )
  {
    sub_B5D5C4(&BattleResultFriendComponent_TypeInfo, v1, v2, v3);
    byte_42E8937 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E8920 & 1) == 0 )
  {
    sub_B5D5C4(&BattleResultFriendComponent__ChangeFaceAtlas_d__44_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8920 = 1;
  }
  v5 = sub_B5D694(BattleResultFriendComponent__ChangeFaceAtlas_d__44_TypeInfo);
  BattleResultFriendComponent__ChangeFaceAtlas_d__44___ctor(
    (BattleResultFriendComponent__ChangeFaceAtlas_d__44_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleResultFriendComponent__ChangeSupportScene(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v24; // x1
  struct SceneRootComponent_o *targetRoot; // x20
  __int64 v26; // x9
  BattleRootComponent_callBackBeginResume_o *v27; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  OtherUserGameEntity_o *otherUser; // x21
  SupportInfoJump_o *v35; // x19
  SceneRootComponent_c *klass; // x8
  Il2CppClass *declaringType; // x8
  int32_t name; // w21
  QuestRestrictionInfo_o *v39; // x20
  BattleResultFriendComponent_o *v40; // x0
  const MethodInfo *v41; // x1

  if ( (byte_42E8932 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleResultFriendComponent_callBackBeginResume__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleRootComponent_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&QuestRestrictionInfo_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&SupportInfoJump_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&BattleRootComponent_callBackBeginResume_TypeInfo, v20, v21, v22);
    byte_42E8932 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  if ( AvalonSceneManager__checkNowScene(Instance, 10, 0LL) )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    targetRoot = Instance->fields.targetRoot;
    if ( !targetRoot
      || (v26 = *(&BattleRootComponent_TypeInfo->_2.bitflags2 + 1),
          *(&targetRoot->klass->_2.bitflags2 + 1) >= (unsigned int)v26)
      && (BattleRootComponent_c *)targetRoot->klass->_2.typeHierarchy[v26 - 1] == BattleRootComponent_TypeInfo )
    {
      v27 = (BattleRootComponent_callBackBeginResume_o *)sub_B5D694(BattleRootComponent_callBackBeginResume_TypeInfo);
      BattleRootComponent_callBackBeginResume___ctor(
        v27,
        (Il2CppObject *)this,
        Method_BattleResultFriendComponent_callBackBeginResume__,
        0LL);
      if ( targetRoot )
      {
        targetRoot[2].klass = (SceneRootComponent_c *)v27;
        sub_B5D560(
          (BattleServantConfConponent_o *)&targetRoot[2],
          (System_Int32_array **)v27,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        otherUser = this->fields.otherUser;
        v35 = (SupportInfoJump_o *)sub_B5D694(SupportInfoJump_TypeInfo);
        SupportInfoJump___ctor(v35, otherUser, 0, 0, 0LL);
        klass = targetRoot[1].klass;
        if ( klass )
        {
          declaringType = klass->_1.declaringType;
          if ( declaringType )
          {
            name = (int32_t)declaringType->_1.name;
            v39 = (QuestRestrictionInfo_o *)sub_B5D694(QuestRestrictionInfo_TypeInfo);
            QuestRestrictionInfo___ctor(v39, name, 0LL);
            if ( v35 )
            {
              SupportInfoJump__SetSetupInfo(v35, 0LL, v39, 0LL);
              Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( Instance )
              {
                AvalonSceneManager__pushScene(Instance, 60, 1, (Il2CppObject *)v35, 0LL);
                return;
              }
            }
          }
        }
      }
LABEL_19:
      sub_B5D69C(Instance, v24);
    }
    v40 = (BattleResultFriendComponent_o *)sub_B5D990(Instance->fields.targetRoot);
    BattleResultFriendComponent__callBackBeginResume(v40, v41);
  }
}


void __fastcall BattleResultFriendComponent__EndRequestFollow(
        BattleResultFriendComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  __int64 v39; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *myFsm; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v41; // x21
  System_String_o *v42; // x20
  __int64 *v43; // x8
  CommonUI_o *Instance; // x21
  NotificationDialog_ClickDelegate_o *v45; // x22

  if ( (byte_42E892F & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleResultFriendComponent_OnEndRequestDialog__, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&NotificationDialog_ClickDelegate_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v12, v13, v14);
    sub_B5D5C4(&JsonManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_11212/*"REQUEST_OK"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_11210/*"REQUEST_NG"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_20733/*"message"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_973/*"0"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_22605/*"status"*/, v36, v37, v38);
    byte_42E892F = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
  {
    myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v43 = &StringLiteral_11210/*"REQUEST_NG"*/;
      goto LABEL_18;
    }
LABEL_21:
    sub_B5D69C(myFsm, v39);
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)JsonManager__getDictionary(
                                                                                          result,
                                                                                          0LL);
  if ( !myFsm )
    goto LABEL_21;
  v41 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)myFsm;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          myFsm,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_20733/*"message"*/,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_14;
  myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                          v41,
                                                                                          (System_Type_o *)StringLiteral_20733/*"message"*/,
                                                                                          (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_21;
  v42 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))myFsm->klass->vtable._3_ToString.method)(
                             myFsm,
                             myFsm->klass->vtable._4_unknown.methodPtr);
  myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                          v41,
                                                                                          (System_Type_o *)StringLiteral_22605/*"status"*/,
                                                                                          (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_21;
  myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))myFsm->klass->vtable._3_ToString.method)(
                                                                                          myFsm,
                                                                                          myFsm->klass->vtable._4_unknown.methodPtr);
  if ( !myFsm )
    goto LABEL_21;
  if ( System_String__Equals_44565128((System_String_o *)myFsm, (System_String_o *)StringLiteral_973/*"0"*/, 0LL)
    || System_String__IsNullOrEmpty(v42, 0LL) )
  {
LABEL_14:
    myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v43 = &StringLiteral_11212/*"REQUEST_OK"*/;
LABEL_18:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFsm, (System_String_o *)*v43, 0LL);
      return;
    }
    goto LABEL_21;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v45 = (NotificationDialog_ClickDelegate_o *)sub_B5D694(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v45,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__OpenNotificationDialog_18204284(
    Instance,
    0LL,
    v42,
    v45,
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  __int64 v39; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *myFsm; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v41; // x21
  System_String_o *v42; // x20
  __int64 *v43; // x8
  CommonUI_o *Instance; // x21
  NotificationDialog_ClickDelegate_o *v45; // x22

  if ( (byte_42E892D & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleResultFriendComponent_OnEndRequestDialog__, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&NotificationDialog_ClickDelegate_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v12, v13, v14);
    sub_B5D5C4(&JsonManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_11212/*"REQUEST_OK"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_11210/*"REQUEST_NG"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_20733/*"message"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_973/*"0"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_22605/*"status"*/, v36, v37, v38);
    byte_42E892D = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
  {
    myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v43 = &StringLiteral_11210/*"REQUEST_NG"*/;
      goto LABEL_18;
    }
LABEL_21:
    sub_B5D69C(myFsm, v39);
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)JsonManager__getDictionary(
                                                                                          result,
                                                                                          0LL);
  if ( !myFsm )
    goto LABEL_21;
  v41 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)myFsm;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          myFsm,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_20733/*"message"*/,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_14;
  myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                          v41,
                                                                                          (System_Type_o *)StringLiteral_20733/*"message"*/,
                                                                                          (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_21;
  v42 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))myFsm->klass->vtable._3_ToString.method)(
                             myFsm,
                             myFsm->klass->vtable._4_unknown.methodPtr);
  myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                          v41,
                                                                                          (System_Type_o *)StringLiteral_22605/*"status"*/,
                                                                                          (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFsm )
    goto LABEL_21;
  myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))myFsm->klass->vtable._3_ToString.method)(
                                                                                          myFsm,
                                                                                          myFsm->klass->vtable._4_unknown.methodPtr);
  if ( !myFsm )
    goto LABEL_21;
  if ( System_String__Equals_44565128((System_String_o *)myFsm, (System_String_o *)StringLiteral_973/*"0"*/, 0LL)
    || System_String__IsNullOrEmpty(v42, 0LL) )
  {
LABEL_14:
    myFsm = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.myFsm;
    if ( myFsm )
    {
      v43 = &StringLiteral_11212/*"REQUEST_OK"*/;
LABEL_18:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFsm, (System_String_o *)*v43, 0LL);
      return;
    }
    goto LABEL_21;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v45 = (NotificationDialog_ClickDelegate_o *)sub_B5D694(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v45,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__OpenNotificationDialog_18204284(
    Instance,
    0LL,
    v42,
    v45,
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
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CommonUI_o *Instance; // x20
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E8925 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, flg, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BattleResultFriendComponent_endCloseSHowServant__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    byte_42E8925 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_BattleResultFriendComponent_endCloseSHowServant__, 0LL);
  if ( !Instance )
    sub_B5D69C(v13, v14);
  CommonUI__CloseServantStatusDialog(Instance, v12, 0LL);
}


void __fastcall BattleResultFriendComponent__Init(
        BattleResultFriendComponent_o *this,
        System_Action_o *releasePerformanceObject,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_GameObject_o *root; // x0
  UnityEngine_Object_o *friendIconComp; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  changeVColor_array *v17; // x0
  __int64 v18; // x8
  changeVColor_array *v19; // x21
  unsigned __int64 v20; // x24
  changeVColor_o **m_Items; // x25
  UnityEngine_Object_o *v22; // x22
  __int64 v23; // x0

  if ( (byte_42E891C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel____68867360,
      (_DWORD)releasePerformanceObject,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E891C = 1;
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
    sub_B5D69C(root, releasePerformanceObject);
  v17 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
          root,
          1,
          (const MethodInfo_1CC47FC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel____68867360);
  if ( v17 )
  {
    v18 = *(_QWORD *)&v17->max_length;
    v19 = v17;
    if ( (int)v18 >= 1 )
    {
      v20 = 0LL;
      m_Items = v17->m_Items;
      do
      {
        if ( v20 >= (unsigned int)v18 )
        {
LABEL_23:
          v23 = sub_B5D6C8(v17);
          sub_B5D668(v23, 0LL);
        }
        v22 = (UnityEngine_Object_o *)m_Items[v20];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v17 = (changeVColor_array *)UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
        if ( ((unsigned __int8)v17 & 1) != 0 )
        {
          if ( v20 >= v19->max_length )
            goto LABEL_23;
          root = (UnityEngine_GameObject_o *)m_Items[v20];
          if ( !root )
            goto LABEL_24;
          UILabel__SetDefaultFont((UILabel_o *)root, 0LL);
        }
        LODWORD(v18) = v19->max_length;
        ++v20;
      }
      while ( (__int64)v20 < (int)v18 );
    }
  }
LABEL_22:
  this->fields.releasePerformanceObject = releasePerformanceObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.releasePerformanceObject,
    (System_Int32_array **)releasePerformanceObject,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void __fastcall BattleResultFriendComponent__Layout(
        BattleResultFriendComponent_o *this,
        bool isActiveFollow,
        bool isActiveFriend,
        const MethodInfo *method)
{
  _BOOL4 v4; // w20
  _BOOL4 v5; // w21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  __int64 v28; // x25
  Il2CppObject *v29; // x0
  System_String_o *v30; // x22
  System_String_o *errLabel; // x0
  __int64 v32; // x1
  System_String_o *v33; // x23
  int v34; // w8
  const MethodInfo *v35; // x3
  System_String_o **v36; // x8
  System_String_o *v37; // x23
  UILabel_o *titleLabel; // x21
  UILabel_o *friendWarningLabel; // x20
  int32_t followerStatus; // [xsp+Ch] [xbp-34h] BYREF

  v4 = isActiveFriend;
  v5 = isActiveFollow;
  if ( (byte_42E8934 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, isActiveFollow, isActiveFriend, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_11248/*"RESULT_FRIENDANDFOLLOW_TITLE"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_11250/*"RESULT_FRIEND_ERR_{0}"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_11254/*"RESULT_MAXFRIEND_WARNING"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_11253/*"RESULT_FRIEND_TITLE"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_11247/*"RESULT_FOLLOW_TITLE"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_1/*""*/, v25, v26, v27);
    byte_42E8934 = 1;
  }
  v28 = StringLiteral_11254/*"RESULT_MAXFRIEND_WARNING"*/;
  followerStatus = this->fields.followerStatus;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &followerStatus);
  v30 = System_String__Format((System_String_o *)StringLiteral_11250/*"RESULT_FRIEND_ERR_{0}"*/, v29, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  errLabel = LocalizationManager__Get(v30, 0LL);
  if ( !v30 )
    goto LABEL_35;
  v33 = errLabel;
  errLabel = (System_String_o *)System_String__Equals_44565128(v30, errLabel, 0LL);
  if ( !this->fields.errLabel )
    goto LABEL_35;
  if ( ((unsigned __int8)errLabel & 1) != 0 )
  {
    UILabel__set_text(this->fields.errLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v34 = 0;
  }
  else
  {
    UILabel__set_text(this->fields.errLabel, v33, 0LL);
    v34 = 1;
  }
  if ( (v34 & (v5 && v4)) != 0 )
  {
    errLabel = (System_String_o *)this->fields.errLabel;
    if ( !errLabel )
      goto LABEL_35;
    UILabel__set_text((UILabel_o *)errLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    LOBYTE(v4) = 0;
  }
  else
  {
    v30 = (System_String_o *)v28;
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
  BattleResultFriendComponent__SetupButtons(this, v5, v4, v35);
  v36 = (System_String_o **)&StringLiteral_11248/*"RESULT_FRIENDANDFOLLOW_TITLE"*/;
  if ( !v5 )
    v36 = (System_String_o **)&StringLiteral_11253/*"RESULT_FRIEND_TITLE"*/;
  if ( !v4 )
    v36 = (System_String_o **)&StringLiteral_11247/*"RESULT_FOLLOW_TITLE"*/;
  v37 = *v36;
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  errLabel = LocalizationManager__Get(v37, 0LL);
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
  errLabel = LocalizationManager__Get(v30, 0LL);
  if ( !friendWarningLabel )
LABEL_35:
    sub_B5D69C(errLabel, v32);
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
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E892A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6480/*"FOLLOW_CONNECT"*/, (_DWORD)method, v2, v3);
    byte_42E892A = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_6480/*"FOLLOW_CONNECT"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickFriend(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E8927 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3408/*"CONNECT"*/, (_DWORD)method, v2, v3);
    byte_42E8927 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3408/*"CONNECT"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickHelp(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8936 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8936 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 49, 0LL, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickNo(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E8929 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9393/*"NEXT"*/, (_DWORD)method, v2, v3);
    byte_42E8929 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9393/*"NEXT"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickNoActionFriend(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8928 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8928 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickSupportInfo(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E8931 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3016/*"CHANGE_SUPPORT"*/, (_DWORD)method, v2, v3);
    byte_42E8931 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3016/*"CHANGE_SUPPORT"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickTutorialFollow(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  CommonUI_o *Instance; // x0
  const MethodInfo *v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  BattleServantConfConponent_o *p_fields; // x0
  UserGameEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E892B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_PickupUserFollowerMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(
      &Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    byte_42E892B = 1;
  }
  entity = 0LL;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseTutorialNotificationDialogArrow(Instance, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (CommonUI_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
  if ( !Instance )
    goto LABEL_13;
  if ( !DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
          (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)Instance,
          &entity,
          (const MethodInfo_23FB120 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__) )
    goto LABEL_12;
  Instance = (CommonUI_o *)entity;
  if ( !entity )
LABEL_13:
    sub_B5D69C(Instance, v15);
  p_fields = (BattleServantConfConponent_o *)&entity->fields;
  if ( entity->fields.userId )
  {
    p_fields->klass = 0LL;
    sub_B5D560(p_fields, 0LL, v16, v17, v18, v19, v20, v21);
  }
LABEL_12:
  BattleResultFriendComponent__OnClickFollow(this, v15);
}


void __fastcall BattleResultFriendComponent__OnEndRequestDialog(
        BattleResultFriendComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CommonUI_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E8930 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_11212/*"REQUEST_OK"*/, v5, v6, v7);
    byte_42E8930 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B5D69C(Instance, v9);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_11212/*"REQUEST_OK"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__Open(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  UserGameEntity_o *SelfUserGame; // x20
  DataManager_o *Instance; // x0
  TblFriendMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int32_t FollowSum; // w22
  _BOOL4 enableFollowQuest; // w23
  _BOOL4 v25; // w22
  _BOOL4 v26; // w24
  const MethodInfo *v27; // x1
  System_Collections_IEnumerator_o *v28; // x1

  if ( (byte_42E891F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_TblFriendMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserFollowMaster___, v5, v6, v7);
    sub_B5D5C4(&OptionManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_9393/*"NEXT"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_6484/*"FOLLOW_NUM"*/, v17, v18, v19);
    byte_42E891F = 1;
  }
  if ( this->fields.followerType != 2 )
    goto LABEL_18;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = (TblFriendMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserFollowMaster___);
  if ( !Instance )
    goto LABEL_21;
  FollowSum = UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0LL);
  Instance = (DataManager_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6484/*"FOLLOW_NUM"*/, 0LL);
  enableFollowQuest = this->fields.enableFollowQuest;
  v25 = FollowSum < (int)Instance;
  v26 = this->fields.followerType == 2;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_21;
  Instance = (DataManager_o *)TblFriendMaster__GetFriendSum(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !SelfUserGame )
    goto LABEL_21;
  if ( (!v25 || !enableFollowQuest || !v26) && (int)Instance >= SelfUserGame->fields.friendKeep )
  {
LABEL_18:
    Instance = (DataManager_o *)this->fields.myFsm;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9393/*"NEXT"*/, 0LL);
      return;
    }
LABEL_21:
    sub_B5D69C(Instance, method);
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
    v28 = BattleResultFriendComponent__ChangeFaceAtlas(this, v27);
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v28, 0LL);
  }
  else
  {
    BattleResultFriendComponent__openCore(this, v27);
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
  int v2; // w2
  __int64 v3; // x3
  ServantLeaderInfo_o *SpoilerSetting; // x0
  __int64 v6; // x1
  struct OtherUserGameEntity_o *otherUser; // x8
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x20
  int max_length; // w8
  unsigned int v10; // w21
  struct OtherUserGameEntity_o *v11; // x8
  struct ServantLeaderInfo_array *eventUserSvtLeaderHash; // x19
  int v13; // w8
  unsigned int v14; // w20
  __int64 v15; // x0

  if ( (byte_42E8922 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8922 = 1;
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
        v10 = 0;
        while ( v10 < max_length )
        {
          SpoilerSetting = userSvtLeaderHash->m_Items[v10];
          if ( !SpoilerSetting )
            goto LABEL_24;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0LL);
          max_length = userSvtLeaderHash->max_length;
          if ( (int)++v10 >= max_length )
            goto LABEL_15;
        }
LABEL_23:
        v15 = sub_B5D6C8(SpoilerSetting);
        sub_B5D668(v15, 0LL);
      }
LABEL_15:
      v11 = this->fields.otherUser;
      if ( !v11 || (eventUserSvtLeaderHash = v11->fields.eventUserSvtLeaderHash) == 0LL )
LABEL_24:
        sub_B5D69C(SpoilerSetting, v6);
      v13 = eventUserSvtLeaderHash->max_length;
      if ( v13 >= 1 )
      {
        v14 = 0;
        while ( v14 < v13 )
        {
          SpoilerSetting = eventUserSvtLeaderHash->m_Items[v14];
          if ( !SpoilerSetting )
            goto LABEL_24;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0LL);
          v13 = eventUserSvtLeaderHash->max_length;
          if ( (int)++v14 >= v13 )
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
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E8923 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9871/*"OPEN_SERVANT"*/, (_DWORD)method, v2, v3);
    byte_42E8923 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9871/*"OPEN_SERVANT"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__SetupButtons(
        BattleResultFriendComponent_o *this,
        bool isActiveFollow,
        bool isActiveFriend,
        const MethodInfo *method)
{
  char v7; // w1
  char v8; // w2
  __int64 v9; // x3
  char v10; // w1
  char v11; // w2
  __int64 v12; // x3
  char v13; // w1
  char v14; // w2
  __int64 v15; // x3
  char v16; // w1
  char v17; // w2
  __int64 v18; // x3
  char v19; // w1
  char v20; // w2
  __int64 v21; // x3
  char v22; // w1
  char v23; // w2
  __int64 v24; // x3
  char v25; // w1
  char v26; // w2
  __int64 v27; // x3
  char v28; // w1
  char v29; // w2
  __int64 v30; // x3
  char v31; // w1
  char v32; // w2
  __int64 v33; // x3
  char v34; // w1
  char v35; // w2
  __int64 v36; // x3
  char v37; // w1
  char v38; // w2
  __int64 v39; // x3
  char v40; // w1
  char v41; // w2
  __int64 v42; // x3
  EventDelegate_o *v43; // x21
  EventDelegate_o *v44; // x23
  __int64 v45; // x1
  UnityEngine_Component_o *helpButton; // x0
  UILabel_o *leftButtonLabel; // x24
  struct UIButton_o *rightButton; // x8
  struct UIButton_o *centerButton; // x23
  UILabel_o *centerButtonLabel; // x22
  UILabel_o *rightButtonLabel; // x24
  UnityEngine_GameObject_o *gameObject; // x24
  BattleResultFriendComponent_c *v53; // x8
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_GameObject_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  UnityEngine_GameObject_o *v57; // x0
  __int64 *v58; // x8
  struct UIButton_o *v59; // x8
  UnityEngine_GameObject_o *v60; // x24
  BattleResultFriendComponent_c *v61; // x8
  EventDelegate_o *v62; // x20
  UIButton_c *klass; // x8
  UnityEngine_Color_o grey; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o gray; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o black; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E8935 & 1) == 0 )
  {
    sub_B5D5C4(&BattleResultFriendComponent_TypeInfo, isActiveFollow, isActiveFriend, method);
    sub_B5D5C4(&EventDelegate_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDelegate__Remove__, v13, v14, v15);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_10053/*"OnClickFriend"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_10073/*"OnClickNoActionFriend"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_11252/*"RESULT_FRIEND_REQUEST_YES"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_11246/*"RESULT_FOLLOW_REQUEST_YES"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_10052/*"OnClickFollow"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_19587/*"icon_friend"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_11251/*"RESULT_FRIEND_REQUEST_NO"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_19586/*"icon_follow"*/, v40, v41, v42);
    byte_42E8935 = 1;
  }
  v43 = (EventDelegate_o *)sub_B5D694(EventDelegate_TypeInfo);
  EventDelegate___ctor_29822752(v43, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_10053/*"OnClickFriend"*/, 0LL);
  v44 = (EventDelegate_o *)sub_B5D694(EventDelegate_TypeInfo);
  EventDelegate___ctor_29822752(v44, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_10052/*"OnClickFollow"*/, 0LL);
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
  helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11251/*"RESULT_FRIEND_REQUEST_NO"*/, 0LL);
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
      (EventMissionProgressRequest_Argument_ProgressData_o *)v43,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
    rightButton = this->fields.rightButton;
    if ( !rightButton )
      goto LABEL_50;
    helpButton = (UnityEngine_Component_o *)rightButton->fields.onClick;
    if ( !helpButton )
      goto LABEL_50;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)helpButton,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v44,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
    centerButton = this->fields.centerButton;
    centerButtonLabel = this->fields.centerButtonLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11252/*"RESULT_FRIEND_REQUEST_YES"*/, 0LL);
    if ( !centerButtonLabel )
      goto LABEL_50;
    UILabel__set_text(centerButtonLabel, (System_String_o *)helpButton, 0LL);
    rightButtonLabel = this->fields.rightButtonLabel;
    helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11246/*"RESULT_FOLLOW_REQUEST_YES"*/, 0LL);
    if ( !rightButtonLabel )
      goto LABEL_50;
    UILabel__set_text(rightButtonLabel, (System_String_o *)helpButton, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.centerButtonLabel;
    if ( !helpButton )
      goto LABEL_50;
    gameObject = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    v53 = BattleResultFriendComponent_TypeInfo;
    if ( (BYTE3(BattleResultFriendComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultFriendComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultFriendComponent_TypeInfo);
      v53 = BattleResultFriendComponent_TypeInfo;
    }
    GameObjectExtensions__AddLocalPositionX(gameObject, v53->static_fields->offsetOfferLabelPosition, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightButtonLabel;
    if ( !helpButton )
      goto LABEL_50;
    v54 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    GameObjectExtensions__AddLocalPositionX(
      v54,
      BattleResultFriendComponent_TypeInfo->static_fields->offsetOfferLabelPosition,
      0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.leftButton;
    if ( !helpButton )
      goto LABEL_50;
    v55 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    GameObjectExtensions__AddLocalPositionX(v55, -this->fields.offsetPosition, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightButton;
    if ( !helpButton )
      goto LABEL_50;
    v56 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    GameObjectExtensions__AddLocalPositionX(v56, this->fields.offsetPosition, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightMarkSprite;
    if ( !helpButton )
      goto LABEL_50;
    v57 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    GameObjectExtensions__AddLocalPositionX(
      v57,
      BattleResultFriendComponent_TypeInfo->static_fields->offsetFollowMarkPosition,
      0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.centerMarkSprite;
    if ( !helpButton )
      goto LABEL_50;
    UISprite__set_spriteName((UISprite_o *)helpButton, (System_String_o *)StringLiteral_19587/*"icon_friend"*/, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightMarkSprite;
    if ( !helpButton )
      goto LABEL_50;
    v58 = &StringLiteral_19586/*"icon_follow"*/;
  }
  else
  {
    helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL);
    if ( !helpButton )
      goto LABEL_50;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 0, 0LL);
    v59 = this->fields.rightButton;
    if ( !v59 )
      goto LABEL_50;
    helpButton = (UnityEngine_Component_o *)v59->fields.onClick;
    if ( !helpButton )
      goto LABEL_50;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)helpButton,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v43,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
    centerButton = this->fields.rightButton;
    centerButtonLabel = this->fields.rightButtonLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    helpButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11252/*"RESULT_FRIEND_REQUEST_YES"*/, 0LL);
    if ( !centerButtonLabel )
      goto LABEL_50;
    UILabel__set_text(centerButtonLabel, (System_String_o *)helpButton, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightButtonLabel;
    if ( !helpButton )
      goto LABEL_50;
    v60 = UnityEngine_Component__get_gameObject(helpButton, 0LL);
    v61 = BattleResultFriendComponent_TypeInfo;
    if ( (BYTE3(BattleResultFriendComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultFriendComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultFriendComponent_TypeInfo);
      v61 = BattleResultFriendComponent_TypeInfo;
    }
    GameObjectExtensions__AddLocalPositionX(v60, v61->static_fields->offsetOfferLabelPosition, 0LL);
    helpButton = (UnityEngine_Component_o *)this->fields.rightMarkSprite;
    if ( !helpButton )
      goto LABEL_50;
    v58 = &StringLiteral_19587/*"icon_friend"*/;
  }
  UISprite__set_spriteName((UISprite_o *)helpButton, (System_String_o *)*v58, 0LL);
  if ( !isActiveFriend || this->fields.followerStatus )
  {
    v62 = (EventDelegate_o *)sub_B5D694(EventDelegate_TypeInfo);
    EventDelegate___ctor_29822752(v62, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_10073/*"OnClickNoActionFriend"*/, 0LL);
    if ( centerButton )
    {
      helpButton = (UnityEngine_Component_o *)centerButton->fields.onClick;
      if ( helpButton )
      {
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)helpButton,
          (WarBoardManager_TaskList_o *)v43,
          (const MethodInfo_305896C *)Method_System_Collections_Generic_List_EventDelegate__Remove__);
        helpButton = (UnityEngine_Component_o *)centerButton->fields.onClick;
        if ( helpButton )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)helpButton,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v62,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
          grey = UnityEngine_Color__get_grey(0LL);
          UIButtonColor__set_defaultColor((UIButtonColor_o *)centerButton, grey, 0LL);
          centerButton->fields.hover = UnityEngine_Color__get_grey(0LL);
          v65 = UnityEngine_Color__get_grey(0LL);
          klass = centerButton->klass;
          centerButton->fields.pressed = v65;
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
    sub_B5D69C(helpButton, v45);
  }
}


void __fastcall BattleResultFriendComponent__ShowServantConf(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  OtherUserGameEntity_o *otherUser; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  const MethodInfo *v16; // x1
  ServantLeaderInfo_o *v17; // x20
  CommonUI_o *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v19; // x22

  if ( (byte_42E8924 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleResultFriendComponent_EndShowServant__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42E8924 = 1;
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
    v17 = ServantLeaderInfo;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v19,
      (Il2CppObject *)this,
      Method_BattleResultFriendComponent_EndShowServant__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenServantStatusDialog_18214956(Instance, 5, v17, v19, 0LL);
      return;
    }
LABEL_11:
    sub_B5D69C(otherUser, method);
  }
  BattleResultFriendComponent__endCloseSHowServant(this, v16);
}


void __fastcall BattleResultFriendComponent__callBackBeginResume(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E8933 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3154/*"CLOSE"*/, (_DWORD)method, v2, v3);
    byte_42E8933 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3154/*"CLOSE"*/, 0LL);
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
    sub_B5D69C(0LL, classPos);
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
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E8926 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3154/*"CLOSE"*/, (_DWORD)method, v2, v3);
    byte_42E8926 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3154/*"CLOSE"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__followAssign(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  FollowAssignRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v19; // x1

  if ( (byte_42E892E & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleResultFriendComponent_EndRequestFollow__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_FollowAssignRequest___, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    byte_42E892E = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  v17 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_EndRequestFollow__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (FollowAssignRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                 v17,
                                                                 (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_FollowAssignRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B5D69C(0LL, v19);
  FollowAssignRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.targetId, 0LL);
}


void __fastcall BattleResultFriendComponent__friendOffer(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  FriendOfferRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v19; // x1

  if ( (byte_42E892C & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleResultFriendComponent_EndRequestFriend__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_FriendOfferRequest___, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    byte_42E892C = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  v17 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_EndRequestFriend__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (FriendOfferRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                v17,
                                                                (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_FriendOfferRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B5D69C(0LL, v19);
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
    sub_B5D69C(otherUser, *(_QWORD *)&firstClassId);
  v9 = *(unsigned int *)(v8 + 24);
  if ( (__int64)(v9 << 32) < 1 )
    return -1;
  v10 = 0LL;
  v11 = v8 + 32;
  while ( 1 )
  {
    if ( v10 >= v9 )
    {
      v14 = sub_B5D6C8(otherUser);
      sub_B5D668(v14, 0LL);
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
  __int64 v3; // x3
  const MethodInfo *v6; // x2

  if ( (byte_42E891E & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, classPos, (_DWORD)method, v3);
    byte_42E891E = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  BattleResultFriendComponent__changeClass(this, classPos, v6);
}


void __fastcall BattleResultFriendComponent__openCore(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  __int64 v53; // x20
  DataManager_o *Instance; // x0
  __int64 v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  UserGameEntity_o *SelfUserGame; // x22
  TblFriendMaster_o *MasterData_WarQuestSelectionMaster; // x25
  int32_t FollowSum; // w24
  _BOOL4 enableFollowQuest; // w21
  _BOOL4 v66; // w26
  _BOOL4 v67; // w27
  int v68; // w23
  const MethodInfo *v69; // x3
  int v70; // w21
  UILabel_o *countLabel; // x26
  Il2CppObject *v72; // x25
  Il2CppObject *v73; // x0
  UILabel_o *followCountLabel; // x22
  Il2CppObject *v75; // x24
  Il2CppObject *v76; // x0
  UILabel_o *confLabel; // x22
  UserServantEntity_o *v78; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  const MethodInfo *v85; // x1
  struct BattleResultComponent_o *parentComp; // x8
  struct BattleResultComponent_resultData_o *battleResult; // x8
  const MethodInfo *v88; // x2
  _BOOL4 IsNeedUseEventSupport; // w8
  int32_t followerClassId; // w22
  int32_t ExistLeaderInfo; // w0
  UnityEngine_Object_o *classButtonControl; // x22
  System_Action_o *v93; // x21
  const MethodInfo *v94; // x2
  int32_t friendKeep; // [xsp+0h] [xbp-60h] BYREF
  int32_t FriendSum; // [xsp+4h] [xbp-5Ch] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E8921 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_OtherUserGameMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TblFriendMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserFollowMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__, v17, v18, v19);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v20, v21, v22);
    sub_B5D5C4(&int_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33, v34);
    sub_B5D5C4(&Method_BattleResultFriendComponent___c__DisplayClass45_0__openCore_b__0__, v35, v36, v37);
    sub_B5D5C4(&BattleResultFriendComponent___c__DisplayClass45_0_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_11249/*"RESULT_FRIEND_CONF"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_23922/*"{0}/{1}"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_6484/*"FOLLOW_NUM"*/, v50, v51, v52);
    byte_42E8921 = 1;
  }
  entity = 0LL;
  v53 = sub_B5D694(BattleResultFriendComponent___c__DisplayClass45_0_TypeInfo);
  BattleResultFriendComponent___c__DisplayClass45_0___ctor(
    (BattleResultFriendComponent___c__DisplayClass45_0_o *)v53,
    0LL);
  if ( !v53 )
    goto LABEL_38;
  *(_QWORD *)(v53 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v53 + 16), (System_Int32_array **)this, v56, v57, v58, v59, v60, v61);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (TblFriendMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserFollowMaster___);
  if ( !Instance )
    goto LABEL_38;
  FollowSum = UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0LL);
  Instance = (DataManager_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6484/*"FOLLOW_NUM"*/, 0LL);
  enableFollowQuest = this->fields.enableFollowQuest;
  v66 = FollowSum < (int)Instance;
  v67 = this->fields.followerType == 2;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_38;
  v68 = (int)Instance;
  Instance = (DataManager_o *)TblFriendMaster__GetFriendSum(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !SelfUserGame )
    goto LABEL_38;
  v70 = v66 && enableFollowQuest && v67;
  BattleResultFriendComponent__Layout(this, v70, (int)Instance < SelfUserGame->fields.friendKeep, v69);
  countLabel = this->fields.countLabel;
  FriendSum = TblFriendMaster__GetFriendSum(MasterData_WarQuestSelectionMaster, 0LL);
  v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FriendSum);
  friendKeep = SelfUserGame->fields.friendKeep;
  v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep);
  Instance = (DataManager_o *)System_String__Format_44573324((System_String_o *)StringLiteral_23922/*"{0}/{1}"*/, v72, v73, 0LL);
  if ( !countLabel )
    goto LABEL_38;
  UILabel__set_text(countLabel, (System_String_o *)Instance, 0LL);
  if ( v70 )
  {
    followCountLabel = this->fields.followCountLabel;
    FriendSum = FollowSum;
    v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FriendSum);
    friendKeep = v68;
    v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep);
    Instance = (DataManager_o *)System_String__Format_44573324((System_String_o *)StringLiteral_23922/*"{0}/{1}"*/, v75, v76, 0LL);
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
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11249/*"RESULT_FRIEND_CONF"*/, 0LL);
  if ( !confLabel )
    goto LABEL_38;
  UILabel__set_text(confLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  if ( !Instance )
    goto LABEL_38;
  v78 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
          this->fields.targetId,
          (const MethodInfo_23FB038 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
  this->fields.otherUser = (struct OtherUserGameEntity_o *)v78;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.otherUser,
    (System_Int32_array **)v78,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  BattleResultFriendComponent__OtherUserChangeLimitCountBySpoilerProtection(this, v85);
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
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
    (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( entity )
    IsNeedUseEventSupport = EventDetailEntity__IsNeedUseEventSupport((EventDetailEntity_o *)entity, 0LL);
  else
    IsNeedUseEventSupport = 0;
  followerClassId = this->fields.followerClassId;
  this->fields.displayServantType = IsNeedUseEventSupport;
  ExistLeaderInfo = BattleResultFriendComponent__getExistLeaderInfo(this, followerClassId, v88);
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
  if ( v70 )
  {
    *(_BYTE *)(v53 + 24) = EventTutorialMaster__IsTutorialAvailable(-1, 49, 0, 0, 0, 0, 0LL);
    v93 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v93,
      (Il2CppObject *)v53,
      Method_BattleResultFriendComponent___c__DisplayClass45_0__openCore_b__0__,
      0LL);
    EventTutorialMaster__CheckTutorial(-1, 49, v93, 0, 0, 0, 0, 0LL);
  }
  Instance = (DataManager_o *)this->fields.root;
  if ( !Instance
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL),
        BattleResultFriendComponent__changeClass(this, this->fields.followerClassId, v94),
        (Instance = (DataManager_o *)this->fields.myFsm) == 0LL) )
  {
LABEL_38:
    sub_B5D69C(Instance, v55);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  UnityEngine_Object_o *classButtonControl; // x21
  __int64 v22; // x1
  ClassButtonControlComponent_o *v23; // x0
  ClassButtonControlComponent_o *v24; // x20
  ClassButtonControlComponent_CallbackFunc_o *v25; // x21

  if ( (byte_42E891D & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleResultFriendComponent_onChangeClass__, infollowerType, infollowerStatus, followerId);
    sub_B5D5C4(&ClassButtonControlComponent_CallbackFunc_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    byte_42E891D = 1;
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
    v23 = this->fields.classButtonControl;
    if ( !v23
      || (ClassButtonControlComponent__setCursor(v23, infollowerClassId, 0LL),
          v24 = this->fields.classButtonControl,
          v25 = (ClassButtonControlComponent_CallbackFunc_o *)sub_B5D694(ClassButtonControlComponent_CallbackFunc_TypeInfo),
          ClassButtonControlComponent_CallbackFunc___ctor(
            v25,
            (Il2CppObject *)this,
            Method_BattleResultFriendComponent_onChangeClass__,
            0LL),
          !v24) )
    {
      sub_B5D69C(v23, v22);
    }
    ClassButtonControlComponent__init(v24, v25, 0, 0, 0, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  BattleResultFriendComponent__ChangeFaceAtlas_d__44_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  BattleResultFriendComponent_o *_4__this; // x20
  Il2CppObject *v24; // x21
  System_Action_o *releasePerformanceObject; // x0
  UnityEngine_WaitForEndOfFrame_o *v26; // x20
  struct UnityEngine_WaitForEndOfFrame_o **p_waitForEndOfFrame_5__2; // x19
  bool result; // w0
  Il2CppObject **p__8__1; // x22
  Il2CppObject **p__2__current; // x19
  struct BattleResultFriendComponent___c__DisplayClass44_0_o *_8__1; // x8
  Il2CppObject *v32; // x21
  System_Action_o *v33; // x20
  int v34; // w8

  v4 = this;
  if ( (byte_42E60AE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_GC_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&Method_BattleResultFriendComponent___c__DisplayClass44_0__ChangeFaceAtlas_b__0__, v14, v15, v16);
    sub_B5D5C4(&BattleResultFriendComponent___c__DisplayClass44_0_TypeInfo, v17, v18, v19);
    this = (BattleResultFriendComponent__ChangeFaceAtlas_d__44_o *)sub_B5D5C4(
                                                                     &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                     v20,
                                                                     v21,
                                                                     v22);
    byte_42E60AE = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v24 = (Il2CppObject *)sub_B5D694(BattleResultFriendComponent___c__DisplayClass44_0_TypeInfo);
      System_Object___ctor(v24, 0LL);
      v4->fields.__8__1 = (struct BattleResultFriendComponent___c__DisplayClass44_0_o *)v24;
      sub_B5D560(&v4->fields.__8__1);
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
      v26 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v26, 0LL);
      v4->fields._waitForEndOfFrame_5__2 = v26;
      p_waitForEndOfFrame_5__2 = &v4->fields._waitForEndOfFrame_5__2;
      sub_B5D560(p_waitForEndOfFrame_5__2);
      *(p_waitForEndOfFrame_5__2 - 3) = *p_waitForEndOfFrame_5__2;
      sub_B5D560(p_waitForEndOfFrame_5__2 - 3);
      result = 1;
      *((_DWORD *)p_waitForEndOfFrame_5__2 - 8) = 1;
      return result;
    case 1:
      v4->fields.__1__state = -1;
      if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_43893280(0LL);
      v4->fields.__2__current = (Il2CppObject *)v4->fields._waitForEndOfFrame_5__2;
      sub_B5D560(&v4->fields.__2__current);
      v34 = 2;
      goto LABEL_34;
    case 2:
      v4->fields.__1__state = -1;
      this = (BattleResultFriendComponent__ChangeFaceAtlas_d__44_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_36;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleResultFriendComponent__ChangeFaceAtlas_d__44_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_36;
      v4->fields.__2__current = (Il2CppObject *)AssetManager__WaitForExecutionUnloadUnuseAssets(
                                                  (AssetManager_o *)this,
                                                  0LL);
      p__2__current = &v4->fields.__2__current;
      sub_B5D560(p__2__current);
      *((_DWORD *)p__2__current - 2) = 3;
      goto LABEL_35;
    case 3:
      p__8__1 = (Il2CppObject **)&v4->fields.__8__1;
      _8__1 = v4->fields.__8__1;
      v4->fields.__1__state = -1;
      if ( !_8__1 )
        goto LABEL_36;
      _8__1->fields.isWait = 1;
      v32 = *p__8__1;
      v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v33,
        v32,
        Method_BattleResultFriendComponent___c__DisplayClass44_0__ChangeFaceAtlas_b__0__,
        0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadFaceAtlas(v33, 1, 0LL);
LABEL_20:
      if ( !*p__8__1 )
LABEL_36:
        sub_B5D69C(this, method);
      if ( LOBYTE((*p__8__1)[1].klass) )
      {
        v4->fields.__2__current = (Il2CppObject *)v4->fields._waitForEndOfFrame_5__2;
        sub_B5D560(&v4->fields.__2__current);
        v34 = 4;
      }
      else
      {
        if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_43893280(0LL);
        v4->fields.__2__current = (Il2CppObject *)v4->fields._waitForEndOfFrame_5__2;
        sub_B5D560(&v4->fields.__2__current);
        v34 = 5;
      }
LABEL_34:
      v4->fields.__1__state = v34;
LABEL_35:
      result = 1;
      break;
    case 4:
      p__8__1 = (Il2CppObject **)&v4->fields.__8__1;
      v4->fields.__1__state = -1;
      goto LABEL_20;
    case 5:
      v4->fields.__1__state = -1;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleResultFriendComponent__ChangeFaceAtlas_d__44_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  BattleResultFriendComponent___c__DisplayClass45_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  struct BattleResultFriendComponent_o *_4__this; // x8
  struct BattleResultFriendComponent_o *v24; // x8
  UILabel_o *followTutorialLabel; // x20
  UnityEngine_MonoBehaviour_o *v26; // x21
  void *monitor; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x20
  EventDelegate_o *v29; // x22
  struct BattleResultFriendComponent_o *v30; // x8
  struct BattleResultFriendComponent_o *v31; // x8
  struct BattleResultFriendComponent_o *v32; // x8
  struct BattleResultFriendComponent_o *v33; // x8
  CommonUI_o *Instance; // x19
  System_String_o *v35; // x0
  System_String_o *v36; // x20
  float v37; // s4
  float v38; // s5
  float v39; // s6
  float v40; // s7
  UnityEngine_Rect_o v41; // [xsp+10h] [xbp-30h] BYREF
  UnityEngine_Vector2_o v42; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_42E60AD & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_10083/*"OnClickTutorialFollow"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_13669/*"TUTORIAL_MESSAGE_FOLLOW_OFFER"*/, v17, v18, v19);
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)sub_B5D5C4(&StringLiteral_11246/*"RESULT_FOLLOW_REQUEST_YES"*/, v20, v21, v22);
    byte_42E60AD = 1;
  }
  if ( v4->fields.isFollowTutorial )
  {
    _4__this = v4->fields.__4__this;
    if ( !_4__this )
      goto LABEL_26;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)_4__this->fields.followTutorialMask;
    if ( !this )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v24 = v4->fields.__4__this;
    if ( !v24 )
      goto LABEL_26;
    followTutorialLabel = v24->fields.followTutorialLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_11246/*"RESULT_FOLLOW_REQUEST_YES"*/,
                                                                    0LL);
    if ( !followTutorialLabel )
      goto LABEL_26;
    UILabel__set_text(followTutorialLabel, (System_String_o *)this, 0LL);
    v26 = (UnityEngine_MonoBehaviour_o *)v4->fields.__4__this;
    if ( !v26 )
      goto LABEL_26;
    monitor = v26[11].monitor;
    if ( !monitor )
      goto LABEL_26;
    v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*((_QWORD *)monitor
                                                                                                  + 24);
    v29 = (EventDelegate_o *)sub_B5D694(EventDelegate_TypeInfo);
    EventDelegate___ctor_29822752(v29, v26, (System_String_o *)StringLiteral_10083/*"OnClickTutorialFollow"*/, 0LL);
    if ( !v28 )
      goto LABEL_26;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v28,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
    v30 = v4->fields.__4__this;
    if ( !v30 )
      goto LABEL_26;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)v30->fields.followTutorialButton;
    if ( !this )
      goto LABEL_26;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
    v31 = v4->fields.__4__this;
    if ( !v31 )
      goto LABEL_26;
    GameObjectExtensions__AddLocalPositionX((UnityEngine_GameObject_o *)this, v31->fields.offsetPosition, 0LL);
    v32 = v4->fields.__4__this;
    if ( !v32 )
      goto LABEL_26;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)v32->fields.followTutorialButton;
    if ( !this )
      goto LABEL_26;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
    if ( !this )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v33 = v4->fields.__4__this;
    if ( !v33 )
      goto LABEL_26;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)v33->fields.rightButton;
    if ( !this )
      goto LABEL_26;
    this = (BattleResultFriendComponent___c__DisplayClass45_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
    if ( !this )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_13669/*"TUTORIAL_MESSAGE_FOLLOW_OFFER"*/, 0LL);
    v43.fields.m_XMin = 162.0;
    v43.fields.m_YMin = -244.0;
    v43.fields.m_Width = 300.0;
    v43.fields.m_Height = 80.0;
    v36 = v35;
    *(_QWORD *)&v41.fields.m_XMin = 0LL;
    *(_QWORD *)&v41.fields.m_Width = 0LL;
    UnityEngine_Rect___ctor(v43, v37, v38, v39, v40, (const MethodInfo *)&v41);
    if ( !Instance )
LABEL_26:
      sub_B5D69C(this, method);
    v42.fields.x = 313.0;
    v42.fields.y = -184.0;
    CommonUI__OpenTutorialNotificationDialogArrow(Instance, v36, v42, v41, 0.0, 0LL, -1, 0LL, 0LL);
  }
}