void __fastcall BattleResultFriendComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FA3D4 & 1) == 0 )
  {
    sub_B16FFC(&BattleResultFriendComponent_TypeInfo, v1);
    byte_40FA3D4 = 1;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FA3BD & 1) == 0 )
  {
    sub_B16FFC(&BattleResultFriendComponent__ChangeFaceAtlas_d__44_TypeInfo, method);
    byte_40FA3BD = 1;
  }
  v6 = sub_B170CC(BattleResultFriendComponent__ChangeFaceAtlas_d__44_TypeInfo, method, v2, v3, v4);
  BattleResultFriendComponent__ChangeFaceAtlas_d__44___ctor(
    (BattleResultFriendComponent__ChangeFaceAtlas_d__44_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
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
  WebViewManager_o *v10; // x0
  BattleRootComponent_c *v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  struct UIPanel_o *basePanel; // x20
  __int64 v16; // x9
  BattleRootComponent_callBackBeginResume_o *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  OtherUserGameEntity_o *otherUser; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  SupportInfoJump_o *v29; // x19
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  __int64 v34; // x8
  __int64 v35; // x8
  int32_t v36; // w21
  QuestRestrictionInfo_o *v37; // x20
  AvalonSceneManager_o *v38; // x0
  BattleResultFriendComponent_o *v39; // x0
  const MethodInfo *v40; // x1

  if ( (byte_40FA3CF & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleResultFriendComponent_callBackBeginResume__, method);
    sub_B16FFC(&BattleRootComponent_TypeInfo, v3);
    sub_B16FFC(&QuestRestrictionInfo_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    sub_B16FFC(&SupportInfoJump_TypeInfo, v7);
    sub_B16FFC(&BattleRootComponent_callBackBeginResume_TypeInfo, v8);
    byte_40FA3CF = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  if ( AvalonSceneManager__checkNowScene(Instance, 10, 0LL) )
  {
    v10 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !v10 )
      goto LABEL_19;
    basePanel = v10->fields.basePanel;
    if ( !basePanel
      || (v11 = BattleRootComponent_TypeInfo,
          v16 = *(&BattleRootComponent_TypeInfo->_2.bitflags2 + 1),
          *(&basePanel->klass->_2.bitflags2 + 1) >= (unsigned int)v16)
      && (BattleRootComponent_c *)basePanel->klass->_2.typeHierarchy[v16 - 1] == BattleRootComponent_TypeInfo )
    {
      v17 = (BattleRootComponent_callBackBeginResume_o *)sub_B170CC(
                                                           BattleRootComponent_callBackBeginResume_TypeInfo,
                                                           v11,
                                                           v12,
                                                           v13,
                                                           v14);
      BattleRootComponent_callBackBeginResume___ctor(
        v17,
        (Il2CppObject *)this,
        Method_BattleResultFriendComponent_callBackBeginResume__,
        0LL);
      if ( basePanel )
      {
        basePanel->fields.mParent = (struct UIRect_o *)v17;
        sub_B16F98(
          (BattleServantConfConponent_o *)&basePanel->fields.mParent,
          (System_Int32_array **)v17,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        otherUser = this->fields.otherUser;
        v29 = (SupportInfoJump_o *)sub_B170CC(SupportInfoJump_TypeInfo, v25, v26, v27, v28);
        SupportInfoJump___ctor(v29, otherUser, 0, 0, 0LL);
        v34 = *(_QWORD *)&basePanel->fields.updateAnchors;
        if ( v34 )
        {
          v35 = *(_QWORD *)(v34 + 80);
          if ( v35 )
          {
            v36 = *(_DWORD *)(v35 + 16);
            v37 = (QuestRestrictionInfo_o *)sub_B170CC(QuestRestrictionInfo_TypeInfo, v30, v31, v32, v33);
            QuestRestrictionInfo___ctor(v37, v36, 0LL);
            if ( v29 )
            {
              SupportInfoJump__SetSetupInfo(v29, 0LL, v37, 0LL);
              v38 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( v38 )
              {
                AvalonSceneManager__pushScene(v38, 60, 1, (Il2CppObject *)v29, 0LL);
                return;
              }
            }
          }
        }
      }
LABEL_19:
      sub_B170D4();
    }
    v39 = (BattleResultFriendComponent_o *)sub_B173C8(v10->fields.basePanel);
    BattleResultFriendComponent__callBackBeginResume(v39, v40);
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
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v17; // x21
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  System_String_o *v19; // x20
  UnityEngine_Purchasing_IStoreExtension_o *v20; // x0
  System_String_o *v21; // x0
  PlayMakerFSM_o *myFsm; // x0
  __int64 *v23; // x8
  CommonUI_o *Instance; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  NotificationDialog_ClickDelegate_o *v29; // x22

  if ( (byte_40FA3CC & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleResultFriendComponent_OnEndRequestDialog__, result);
    sub_B16FFC(&NotificationDialog_ClickDelegate_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B16FFC(&JsonManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B16FFC(&StringLiteral_11043/*"REQUEST_OK"*/, v10);
    sub_B16FFC(&StringLiteral_11041/*"REQUEST_NG"*/, v11);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v12);
    sub_B16FFC(&StringLiteral_20390/*"message"*/, v13);
    sub_B16FFC(&StringLiteral_951/*"0"*/, v14);
    sub_B16FFC(&StringLiteral_22210/*"status"*/, v15);
    byte_40FA3CC = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_20980/*"ng"*/, 0LL) )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      v23 = &StringLiteral_11041/*"REQUEST_NG"*/;
      goto LABEL_18;
    }
LABEL_21:
    sub_B170D4();
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(result, 0LL);
  if ( !Dictionary )
    goto LABEL_21;
  v17 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Dictionary;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Dictionary,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_20390/*"message"*/,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_14;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           v17,
           (System_Type_o *)StringLiteral_20390/*"message"*/,
           (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_21;
  v19 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                             Item,
                             Item->klass->vtable[4].methodPtr);
  v20 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
          v17,
          (System_Type_o *)StringLiteral_22210/*"status"*/,
          (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v20 )
    goto LABEL_21;
  v21 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v20->klass->vtable[3].method)(
                             v20,
                             v20->klass->vtable[4].methodPtr);
  if ( !v21 )
    goto LABEL_21;
  if ( System_String__Equals_43731072(v21, (System_String_o *)StringLiteral_951/*"0"*/, 0LL)
    || System_String__IsNullOrEmpty(v19, 0LL) )
  {
LABEL_14:
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      v23 = &StringLiteral_11043/*"REQUEST_OK"*/;
LABEL_18:
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v23, 0LL);
      return;
    }
    goto LABEL_21;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v29 = (NotificationDialog_ClickDelegate_o *)sub_B170CC(NotificationDialog_ClickDelegate_TypeInfo, v25, v26, v27, v28);
  NotificationDialog_ClickDelegate___ctor(
    v29,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__OpenNotificationDialog_18239760(
    Instance,
    0LL,
    v19,
    v29,
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
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v17; // x21
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  System_String_o *v19; // x20
  UnityEngine_Purchasing_IStoreExtension_o *v20; // x0
  System_String_o *v21; // x0
  PlayMakerFSM_o *myFsm; // x0
  __int64 *v23; // x8
  CommonUI_o *Instance; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  NotificationDialog_ClickDelegate_o *v29; // x22

  if ( (byte_40FA3CA & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleResultFriendComponent_OnEndRequestDialog__, result);
    sub_B16FFC(&NotificationDialog_ClickDelegate_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B16FFC(&JsonManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B16FFC(&StringLiteral_11043/*"REQUEST_OK"*/, v10);
    sub_B16FFC(&StringLiteral_11041/*"REQUEST_NG"*/, v11);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v12);
    sub_B16FFC(&StringLiteral_20390/*"message"*/, v13);
    sub_B16FFC(&StringLiteral_951/*"0"*/, v14);
    sub_B16FFC(&StringLiteral_22210/*"status"*/, v15);
    byte_40FA3CA = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_20980/*"ng"*/, 0LL) )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      v23 = &StringLiteral_11041/*"REQUEST_NG"*/;
      goto LABEL_18;
    }
LABEL_21:
    sub_B170D4();
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(result, 0LL);
  if ( !Dictionary )
    goto LABEL_21;
  v17 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Dictionary;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Dictionary,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_20390/*"message"*/,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_14;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           v17,
           (System_Type_o *)StringLiteral_20390/*"message"*/,
           (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_21;
  v19 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                             Item,
                             Item->klass->vtable[4].methodPtr);
  v20 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
          v17,
          (System_Type_o *)StringLiteral_22210/*"status"*/,
          (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v20 )
    goto LABEL_21;
  v21 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v20->klass->vtable[3].method)(
                             v20,
                             v20->klass->vtable[4].methodPtr);
  if ( !v21 )
    goto LABEL_21;
  if ( System_String__Equals_43731072(v21, (System_String_o *)StringLiteral_951/*"0"*/, 0LL)
    || System_String__IsNullOrEmpty(v19, 0LL) )
  {
LABEL_14:
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      v23 = &StringLiteral_11043/*"REQUEST_OK"*/;
LABEL_18:
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v23, 0LL);
      return;
    }
    goto LABEL_21;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v29 = (NotificationDialog_ClickDelegate_o *)sub_B170CC(NotificationDialog_ClickDelegate_TypeInfo, v25, v26, v27, v28);
  NotificationDialog_ClickDelegate___ctor(
    v29,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__OpenNotificationDialog_18239760(
    Instance,
    0LL,
    v19,
    v29,
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
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x21

  if ( (byte_40FA3C2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, flg);
    sub_B16FFC(&Method_BattleResultFriendComponent_endCloseSHowServant__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40FA3C2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_BattleResultFriendComponent_endCloseSHowServant__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantStatusDialog(Instance, v11, 0LL);
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
  UnityEngine_Component_o *v14; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  changeVColor_array *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x8
  changeVColor_array *v19; // x21
  unsigned __int64 v20; // x24
  changeVColor_o **m_Items; // x25
  UnityEngine_Object_o *v22; // x22
  UILabel_o *v23; // x0

  if ( (byte_40FA3B9 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel____66859736, releasePerformanceObject);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FA3B9 = 1;
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
  v14 = (UnityEngine_Component_o *)this->fields.friendIconComp;
  if ( !v14 || (gameObject = UnityEngine_Component__get_gameObject(v14, 0LL)) == 0LL )
LABEL_24:
    sub_B170D4();
  v16 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
          gameObject,
          1,
          (const MethodInfo_19D1940 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel____66859736);
  if ( v16 )
  {
    v18 = *(_QWORD *)&v16->max_length;
    v19 = v16;
    if ( (int)v18 >= 1 )
    {
      v20 = 0LL;
      m_Items = v16->m_Items;
      do
      {
        if ( v20 >= (unsigned int)v18 )
        {
LABEL_23:
          sub_B17100(v16, v17, v8);
          sub_B170A0();
        }
        v22 = (UnityEngine_Object_o *)m_Items[v20];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v16 = (changeVColor_array *)UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
        if ( ((unsigned __int8)v16 & 1) != 0 )
        {
          if ( v20 >= v19->max_length )
            goto LABEL_23;
          v23 = (UILabel_o *)m_Items[v20];
          if ( !v23 )
            goto LABEL_24;
          UILabel__SetDefaultFont(v23, 0LL);
        }
        LODWORD(v18) = v19->max_length;
        ++v20;
      }
      while ( (__int64)v20 < (int)v18 );
    }
  }
LABEL_22:
  this->fields.releasePerformanceObject = releasePerformanceObject;
  sub_B16F98(
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
  System_String_o *v17; // x0
  System_String_o *v18; // x23
  bool v19; // w0
  int v20; // w8
  UILabel_o *errLabel; // x0
  UnityEngine_GameObject_o *followCountRoot; // x0
  UnityEngine_Component_o *friendWarningLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *countRoot; // x0
  const MethodInfo *v26; // x3
  System_String_o **v27; // x8
  System_String_o *v28; // x23
  UILabel_o *titleLabel; // x21
  System_String_o *v30; // x0
  UILabel_o *v31; // x20
  System_String_o *v32; // x0
  struct UIGrid_o *countGrid; // x0
  int32_t followerStatus; // [xsp+Ch] [xbp-34h] BYREF

  v4 = isActiveFriend;
  v5 = isActiveFollow;
  if ( (byte_40FA3D1 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, isActiveFollow);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_11079/*"RESULT_FRIENDANDFOLLOW_TITLE"*/, v8);
    sub_B16FFC(&StringLiteral_11081/*"RESULT_FRIEND_ERR_{0}"*/, v9);
    sub_B16FFC(&StringLiteral_11085/*"RESULT_MAXFRIEND_WARNING"*/, v10);
    sub_B16FFC(&StringLiteral_11084/*"RESULT_FRIEND_TITLE"*/, v11);
    sub_B16FFC(&StringLiteral_11078/*"RESULT_FOLLOW_TITLE"*/, v12);
    sub_B16FFC(&StringLiteral_1/*""*/, v13);
    byte_40FA3D1 = 1;
  }
  v14 = StringLiteral_11085/*"RESULT_MAXFRIEND_WARNING"*/;
  followerStatus = this->fields.followerStatus;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &followerStatus);
  v16 = System_String__Format((System_String_o *)StringLiteral_11081/*"RESULT_FRIEND_ERR_{0}"*/, v15, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v17 = LocalizationManager__Get(v16, 0LL);
  if ( !v16 )
    goto LABEL_35;
  v18 = v17;
  v19 = System_String__Equals_43731072(v16, v17, 0LL);
  if ( !this->fields.errLabel )
    goto LABEL_35;
  if ( v19 )
  {
    UILabel__set_text(this->fields.errLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v20 = 0;
  }
  else
  {
    UILabel__set_text(this->fields.errLabel, v18, 0LL);
    v20 = 1;
  }
  if ( (v20 & (v5 && v4)) != 0 )
  {
    errLabel = this->fields.errLabel;
    if ( !errLabel )
      goto LABEL_35;
    UILabel__set_text(errLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    LOBYTE(v4) = 0;
  }
  else
  {
    v16 = (System_String_o *)v14;
  }
  followCountRoot = this->fields.followCountRoot;
  if ( !followCountRoot )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(followCountRoot, v5, 0LL);
  friendWarningLabel = (UnityEngine_Component_o *)this->fields.friendWarningLabel;
  if ( !friendWarningLabel )
    goto LABEL_35;
  gameObject = UnityEngine_Component__get_gameObject(friendWarningLabel, 0LL);
  if ( !gameObject )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(gameObject, !v4, 0LL);
  countRoot = this->fields.countRoot;
  if ( !countRoot )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(countRoot, v4, 0LL);
  BattleResultFriendComponent__SetupButtons(this, v5, v4, v26);
  v27 = (System_String_o **)&StringLiteral_11079/*"RESULT_FRIENDANDFOLLOW_TITLE"*/;
  if ( !v5 )
    v27 = (System_String_o **)&StringLiteral_11084/*"RESULT_FRIEND_TITLE"*/;
  if ( !v4 )
    v27 = (System_String_o **)&StringLiteral_11078/*"RESULT_FOLLOW_TITLE"*/;
  v28 = *v27;
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v30 = LocalizationManager__Get(v28, 0LL);
  if ( !titleLabel )
    goto LABEL_35;
  UILabel__set_text(titleLabel, v30, 0LL);
  if ( v4 )
    goto LABEL_33;
  v31 = this->fields.friendWarningLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v32 = LocalizationManager__Get(v16, 0LL);
  if ( !v31 )
LABEL_35:
    sub_B170D4();
  UILabel__set_text(v31, v32, 0LL);
LABEL_33:
  countGrid = this->fields.countGrid;
  if ( !countGrid )
    goto LABEL_35;
  ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))countGrid->klass->vtable._8_Reposition.method)(
    countGrid,
    countGrid->klass->vtable._9_ResetPosition.methodPtr);
}


void __fastcall BattleResultFriendComponent__OnClickFollow(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA3C7 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6383/*"FOLLOW_CONNECT"*/, method);
    byte_40FA3C7 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_6383/*"FOLLOW_CONNECT"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickFriend(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA3C4 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3333/*"CONNECT"*/, method);
    byte_40FA3C4 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3333/*"CONNECT"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickHelp(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  if ( (byte_40FA3D3 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FA3D3 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 49, 0LL, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickNo(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA3C6 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9268/*"NEXT"*/, method);
    byte_40FA3C6 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9268/*"NEXT"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickNoActionFriend(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FA3C5 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FA3C5 = 1;
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

  if ( (byte_40FA3CE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2948/*"CHANGE_SUPPORT"*/, method);
    byte_40FA3CE = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_2948/*"CHANGE_SUPPORT"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__OnClickTutorialFollow(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x0
  DataMasterBase_UserGameMaster__UserGameEntity__long__o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  BattleServantConfConponent_o *p_fields; // x0
  UserGameEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FA3C8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_PickupUserFollowerMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(
      &Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__,
      v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40FA3C8 = 1;
  }
  entity = 0LL;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseTutorialNotificationDialogArrow(Instance, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_13;
  if ( !DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          (const MethodInfo_266F698 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__) )
    goto LABEL_12;
  if ( !entity )
LABEL_13:
    sub_B170D4();
  p_fields = (BattleServantConfConponent_o *)&entity->fields;
  if ( entity->fields.userId )
  {
    p_fields->klass = 0LL;
    sub_B16F98(p_fields, 0LL, v9, v10, v11, v12, v13, v14);
  }
LABEL_12:
  BattleResultFriendComponent__OnClickFollow(this, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultFriendComponent__OnEndRequestDialog(
        BattleResultFriendComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  CommonUI_o *Instance; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA3CD & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_B16FFC(&StringLiteral_11043/*"REQUEST_OK"*/, v4);
    byte_40FA3CD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog(Instance, 0LL), (myFsm = this->fields.myFsm) == 0LL) )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_11043/*"REQUEST_OK"*/, 0LL);
}


void __fastcall BattleResultFriendComponent__Open(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UserGameEntity_o *SelfUserGame; // x20
  WebViewManager_o *Instance; // x0
  TblFriendMaster_o *MasterData_WarQuestSelectionMaster; // x21
  WebViewManager_o *v11; // x0
  UserFollowMaster_o *v12; // x0
  int32_t FollowSum; // w22
  int32_t Value; // w0
  _BOOL4 enableFollowQuest; // w23
  _BOOL4 v16; // w22
  _BOOL4 v17; // w24
  int32_t FriendSum; // w0
  UnityEngine_GameObject_o *followTutorialMask; // x0
  UnityEngine_Component_o *followTutorialButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v22; // x1
  System_Collections_IEnumerator_o *v23; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA3BC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TblFriendMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserFollowMaster___, v3);
    sub_B16FFC(&OptionManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_9268/*"NEXT"*/, v6);
    sub_B16FFC(&StringLiteral_6387/*"FOLLOW_NUM"*/, v7);
    byte_40FA3BC = 1;
  }
  if ( this->fields.followerType != 2 )
    goto LABEL_18;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = (TblFriendMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  v11 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v11 )
    goto LABEL_21;
  v12 = (UserFollowMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)v11,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  if ( !v12 )
    goto LABEL_21;
  FollowSum = UserFollowMaster__GetFollowSum(v12, 0LL);
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_6387/*"FOLLOW_NUM"*/, 0LL);
  enableFollowQuest = this->fields.enableFollowQuest;
  v16 = FollowSum < Value;
  v17 = this->fields.followerType == 2;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_21;
  FriendSum = TblFriendMaster__GetFriendSum(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !SelfUserGame )
    goto LABEL_21;
  if ( (!v16 || !enableFollowQuest || !v17) && FriendSum >= SelfUserGame->fields.friendKeep )
  {
LABEL_18:
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9268/*"NEXT"*/, 0LL);
      return;
    }
LABEL_21:
    sub_B170D4();
  }
  followTutorialMask = this->fields.followTutorialMask;
  if ( !followTutorialMask )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(followTutorialMask, 0, 0LL);
  followTutorialButton = (UnityEngine_Component_o *)this->fields.followTutorialButton;
  if ( !followTutorialButton )
    goto LABEL_21;
  gameObject = UnityEngine_Component__get_gameObject(followTutorialButton, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    v23 = BattleResultFriendComponent__ChangeFaceAtlas(this, v22);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v23, 0LL);
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
  _BOOL8 SpoilerSetting; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct OtherUserGameEntity_o *otherUser; // x8
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x20
  int max_length; // w8
  unsigned int v9; // w21
  ServantLeaderInfo_o *v10; // x0
  struct OtherUserGameEntity_o *v11; // x8
  struct ServantLeaderInfo_array *eventUserSvtLeaderHash; // x19
  int v13; // w8
  unsigned int v14; // w20
  ServantLeaderInfo_o *v15; // x0

  if ( (byte_40FA3BF & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40FA3BF = 1;
  }
  if ( this->fields.otherUser )
  {
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    SpoilerSetting = OptionManager__GetSpoilerSetting(0LL);
    if ( !SpoilerSetting )
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
        v9 = 0;
        while ( v9 < max_length )
        {
          v10 = userSvtLeaderHash->m_Items[v9];
          if ( !v10 )
            goto LABEL_24;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(v10, 0LL);
          max_length = userSvtLeaderHash->max_length;
          if ( (int)++v9 >= max_length )
            goto LABEL_15;
        }
LABEL_23:
        sub_B17100(SpoilerSetting, v4, v5);
        sub_B170A0();
      }
LABEL_15:
      v11 = this->fields.otherUser;
      if ( !v11 || (eventUserSvtLeaderHash = v11->fields.eventUserSvtLeaderHash) == 0LL )
LABEL_24:
        sub_B170D4();
      v13 = eventUserSvtLeaderHash->max_length;
      if ( v13 >= 1 )
      {
        v14 = 0;
        while ( v14 < v13 )
        {
          v15 = eventUserSvtLeaderHash->m_Items[v14];
          if ( !v15 )
            goto LABEL_24;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(v15, 0LL);
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
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA3C0 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9742/*"OPEN_SERVANT"*/, method);
    byte_40FA3C0 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9742/*"OPEN_SERVANT"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultFriendComponent__SetupButtons(
        BattleResultFriendComponent_o *this,
        bool isActiveFollow,
        bool isActiveFriend,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  EventDelegate_o *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  EventDelegate_o *v25; // x23
  UnityEngine_Component_o *helpButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *leftButtonLabel; // x24
  System_String_o *v29; // x0
  UnityEngine_Component_o *centerButton; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *klass; // x0
  struct UIButton_o *rightButton; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *onClick; // x0
  struct UIButton_o *v34; // x23
  UILabel_o *centerButtonLabel; // x22
  System_String_o *v36; // x0
  UILabel_o *rightButtonLabel; // x24
  System_String_o *v38; // x0
  UnityEngine_Component_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x24
  BattleResultFriendComponent_c *v41; // x8
  UnityEngine_Component_o *v42; // x0
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_Component_o *leftButton; // x0
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_Component_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  UnityEngine_Component_o *rightMarkSprite; // x0
  UnityEngine_GameObject_o *v49; // x0
  UISprite_o *centerMarkSprite; // x0
  UISprite_o *v51; // x0
  __int64 *v52; // x8
  UnityEngine_GameObject_o *v53; // x0
  struct UIButton_o *v54; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v55; // x0
  System_String_o *v56; // x0
  UnityEngine_Component_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x24
  BattleResultFriendComponent_c *v59; // x8
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  EventDelegate_o *v64; // x20
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v65; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v66; // x0
  UIButton_c *v67; // x8
  UnityEngine_Color_o grey; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o gray; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o black; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FA3D2 & 1) == 0 )
  {
    sub_B16FFC(&BattleResultFriendComponent_TypeInfo, isActiveFollow);
    sub_B16FFC(&EventDelegate_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDelegate__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDelegate__Remove__, v10);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_9915/*"OnClickFriend"*/, v12);
    sub_B16FFC(&StringLiteral_9935/*"OnClickNoActionFriend"*/, v13);
    sub_B16FFC(&StringLiteral_11083/*"RESULT_FRIEND_REQUEST_YES"*/, v14);
    sub_B16FFC(&StringLiteral_11077/*"RESULT_FOLLOW_REQUEST_YES"*/, v15);
    sub_B16FFC(&StringLiteral_9914/*"OnClickFollow"*/, v16);
    sub_B16FFC(&StringLiteral_19269/*"icon_friend"*/, v17);
    sub_B16FFC(&StringLiteral_11082/*"RESULT_FRIEND_REQUEST_NO"*/, v18);
    sub_B16FFC(&StringLiteral_19268/*"icon_follow"*/, v19);
    byte_40FA3D2 = 1;
  }
  v20 = (EventDelegate_o *)sub_B170CC(EventDelegate_TypeInfo, isActiveFollow, isActiveFriend, method, v4);
  EventDelegate___ctor_29412928(v20, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9915/*"OnClickFriend"*/, 0LL);
  v25 = (EventDelegate_o *)sub_B170CC(EventDelegate_TypeInfo, v21, v22, v23, v24);
  EventDelegate___ctor_29412928(v25, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9914/*"OnClickFollow"*/, 0LL);
  helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
  if ( !helpButton )
    goto LABEL_50;
  gameObject = UnityEngine_Component__get_gameObject(helpButton, 0LL);
  if ( !gameObject )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  leftButtonLabel = this->fields.leftButtonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_11082/*"RESULT_FRIEND_REQUEST_NO"*/, 0LL);
  if ( !leftButtonLabel )
    goto LABEL_50;
  UILabel__set_text(leftButtonLabel, v29, 0LL);
  centerButton = (UnityEngine_Component_o *)this->fields.centerButton;
  if ( !centerButton )
    goto LABEL_50;
  if ( isActiveFollow )
  {
    klass = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)centerButton[8].klass;
    if ( !klass )
      goto LABEL_50;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      klass,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
    rightButton = this->fields.rightButton;
    if ( !rightButton )
      goto LABEL_50;
    onClick = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)rightButton->fields.onClick;
    if ( !onClick )
      goto LABEL_50;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      onClick,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
    v34 = this->fields.centerButton;
    centerButtonLabel = this->fields.centerButtonLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_11083/*"RESULT_FRIEND_REQUEST_YES"*/, 0LL);
    if ( !centerButtonLabel )
      goto LABEL_50;
    UILabel__set_text(centerButtonLabel, v36, 0LL);
    rightButtonLabel = this->fields.rightButtonLabel;
    v38 = LocalizationManager__Get((System_String_o *)StringLiteral_11077/*"RESULT_FOLLOW_REQUEST_YES"*/, 0LL);
    if ( !rightButtonLabel )
      goto LABEL_50;
    UILabel__set_text(rightButtonLabel, v38, 0LL);
    v39 = (UnityEngine_Component_o *)this->fields.centerButtonLabel;
    if ( !v39 )
      goto LABEL_50;
    v40 = UnityEngine_Component__get_gameObject(v39, 0LL);
    v41 = BattleResultFriendComponent_TypeInfo;
    if ( (BYTE3(BattleResultFriendComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultFriendComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultFriendComponent_TypeInfo);
      v41 = BattleResultFriendComponent_TypeInfo;
    }
    GameObjectExtensions__AddLocalPositionX(v40, v41->static_fields->offsetOfferLabelPosition, 0LL);
    v42 = (UnityEngine_Component_o *)this->fields.rightButtonLabel;
    if ( !v42 )
      goto LABEL_50;
    v43 = UnityEngine_Component__get_gameObject(v42, 0LL);
    GameObjectExtensions__AddLocalPositionX(
      v43,
      BattleResultFriendComponent_TypeInfo->static_fields->offsetOfferLabelPosition,
      0LL);
    leftButton = (UnityEngine_Component_o *)this->fields.leftButton;
    if ( !leftButton )
      goto LABEL_50;
    v45 = UnityEngine_Component__get_gameObject(leftButton, 0LL);
    GameObjectExtensions__AddLocalPositionX(v45, -this->fields.offsetPosition, 0LL);
    v46 = (UnityEngine_Component_o *)this->fields.rightButton;
    if ( !v46 )
      goto LABEL_50;
    v47 = UnityEngine_Component__get_gameObject(v46, 0LL);
    GameObjectExtensions__AddLocalPositionX(v47, this->fields.offsetPosition, 0LL);
    rightMarkSprite = (UnityEngine_Component_o *)this->fields.rightMarkSprite;
    if ( !rightMarkSprite )
      goto LABEL_50;
    v49 = UnityEngine_Component__get_gameObject(rightMarkSprite, 0LL);
    GameObjectExtensions__AddLocalPositionX(
      v49,
      BattleResultFriendComponent_TypeInfo->static_fields->offsetFollowMarkPosition,
      0LL);
    centerMarkSprite = this->fields.centerMarkSprite;
    if ( !centerMarkSprite )
      goto LABEL_50;
    UISprite__set_spriteName(centerMarkSprite, (System_String_o *)StringLiteral_19269/*"icon_friend"*/, 0LL);
    v51 = this->fields.rightMarkSprite;
    if ( !v51 )
      goto LABEL_50;
    v52 = &StringLiteral_19268/*"icon_follow"*/;
  }
  else
  {
    v53 = UnityEngine_Component__get_gameObject(centerButton, 0LL);
    if ( !v53 )
      goto LABEL_50;
    UnityEngine_GameObject__SetActive(v53, 0, 0LL);
    v54 = this->fields.rightButton;
    if ( !v54 )
      goto LABEL_50;
    v55 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v54->fields.onClick;
    if ( !v55 )
      goto LABEL_50;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v55,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
    v34 = this->fields.rightButton;
    centerButtonLabel = this->fields.rightButtonLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v56 = LocalizationManager__Get((System_String_o *)StringLiteral_11083/*"RESULT_FRIEND_REQUEST_YES"*/, 0LL);
    if ( !centerButtonLabel )
      goto LABEL_50;
    UILabel__set_text(centerButtonLabel, v56, 0LL);
    v57 = (UnityEngine_Component_o *)this->fields.rightButtonLabel;
    if ( !v57 )
      goto LABEL_50;
    v58 = UnityEngine_Component__get_gameObject(v57, 0LL);
    v59 = BattleResultFriendComponent_TypeInfo;
    if ( (BYTE3(BattleResultFriendComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultFriendComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultFriendComponent_TypeInfo);
      v59 = BattleResultFriendComponent_TypeInfo;
    }
    GameObjectExtensions__AddLocalPositionX(v58, v59->static_fields->offsetOfferLabelPosition, 0LL);
    v51 = this->fields.rightMarkSprite;
    if ( !v51 )
      goto LABEL_50;
    v52 = &StringLiteral_19269/*"icon_friend"*/;
  }
  UISprite__set_spriteName(v51, (System_String_o *)*v52, 0LL);
  if ( !isActiveFriend || this->fields.followerStatus )
  {
    v64 = (EventDelegate_o *)sub_B170CC(EventDelegate_TypeInfo, v60, v61, v62, v63);
    EventDelegate___ctor_29412928(v64, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9935/*"OnClickNoActionFriend"*/, 0LL);
    if ( v34 )
    {
      v65 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v34->fields.onClick;
      if ( v65 )
      {
        System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          v65,
          (WarBoardManager_TaskList_o *)v20,
          (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_EventDelegate__Remove__);
        v66 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v34->fields.onClick;
        if ( v66 )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v66,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v64,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
          grey = UnityEngine_Color__get_grey(0LL);
          UIButtonColor__set_defaultColor((UIButtonColor_o *)v34, grey, 0LL);
          v34->fields.hover = UnityEngine_Color__get_grey(0LL);
          v69 = UnityEngine_Color__get_grey(0LL);
          v67 = v34->klass;
          v34->fields.pressed = v69;
          ((void (__fastcall *)(struct UIButton_o *, __int64, __int64, Il2CppMethodPointer))v67->vtable._14_SetState.method)(
            v34,
            3LL,
            1LL,
            v67->vtable._15_OnClick.methodPtr);
          gray = UnityEngine_Color__get_gray(0LL);
          UIWidget__set_color((UIWidget_o *)centerButtonLabel, gray, 0LL);
          black = UnityEngine_Color__get_black(0LL);
          UILabel__set_effectColor(centerButtonLabel, black, 0LL);
          return;
        }
      }
    }
LABEL_50:
    sub_B170D4();
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
  __int64 v13; // x3
  __int64 v14; // x4
  ServantStatusDialog_EndDelegate_o *v15; // x22

  if ( (byte_40FA3C1 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleResultFriendComponent_EndShowServant__, method);
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FA3C1 = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(ServantStatusDialog_EndDelegate_TypeInfo, v11, v12, v13, v14);
    ServantStatusDialog_EndDelegate___ctor(
      v15,
      (Il2CppObject *)this,
      Method_BattleResultFriendComponent_EndShowServant__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenServantStatusDialog_18250312(Instance, 5, v9, v15, 0LL);
      return;
    }
LABEL_11:
    sub_B170D4();
  }
  BattleResultFriendComponent__endCloseSHowServant(this, v8);
}


void __fastcall BattleResultFriendComponent__callBackBeginResume(
        BattleResultFriendComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FA3D0 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3080/*"CLOSE"*/, method);
    byte_40FA3D0 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3080/*"CLOSE"*/, 0LL);
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
    sub_B170D4();
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

  if ( (byte_40FA3C3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3080/*"CLOSE"*/, method);
    byte_40FA3C3 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3080/*"CLOSE"*/, 0LL);
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
  __int64 v9; // x3
  __int64 v10; // x4
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  FollowAssignRequest_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_40FA3CB & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleResultFriendComponent_EndRequestFollow__, method);
    sub_B16FFC(&Method_NetworkManager_getRequest_FollowAssignRequest___, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    byte_40FA3CB = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(NetworkManager_ResultCallbackFunc_TypeInfo, v7, v8, v9, v10);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_EndRequestFollow__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (FollowAssignRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                 v11,
                                                                 (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_FollowAssignRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B170D4();
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
  __int64 v9; // x3
  __int64 v10; // x4
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  FriendOfferRequest_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_40FA3C9 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleResultFriendComponent_EndRequestFriend__, method);
    sub_B16FFC(&Method_NetworkManager_getRequest_FriendOfferRequest___, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    byte_40FA3C9 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(NetworkManager_ResultCallbackFunc_TypeInfo, v7, v8, v9, v10);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleResultFriendComponent_EndRequestFriend__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (FriendOfferRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                v11,
                                                                (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_FriendOfferRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B170D4();
  FriendOfferRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.targetId, 0LL);
}


int32_t __fastcall BattleResultFriendComponent__getExistLeaderInfo(
        BattleResultFriendComponent_o *this,
        int32_t firstClassId,
        const MethodInfo *method)
{
  OtherUserGameEntity_o *otherUser; // x0
  int32_t v5; // w19
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct OtherUserGameEntity_o *v9; // x8
  __int64 v10; // x9
  __int64 v11; // x11
  unsigned __int64 v12; // x8
  unsigned __int64 v13; // x9
  __int64 v14; // x11
  __int64 v15; // x12

  otherUser = this->fields.otherUser;
  if ( !otherUser )
    goto LABEL_18;
  v5 = firstClassId;
  ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                        otherUser,
                        firstClassId,
                        0,
                        this->fields.displayServantType,
                        this->fields.followerDeckId,
                        0LL);
  if ( ServantLeaderInfo && ServantLeaderInfo->fields.userSvtId )
    return v5;
  v9 = this->fields.otherUser;
  if ( !v9 )
    goto LABEL_18;
  v10 = 72LL;
  if ( this->fields.displayServantType )
    v10 = 80LL;
  v11 = *(__int64 *)((char *)&v9->klass + v10);
  if ( !v11 )
LABEL_18:
    sub_B170D4();
  v12 = *(unsigned int *)(v11 + 24);
  if ( (__int64)(v12 << 32) < 1 )
    return -1;
  v13 = 0LL;
  v14 = v11 + 32;
  while ( 1 )
  {
    if ( v13 >= v12 )
    {
      sub_B17100(ServantLeaderInfo, v7, v8);
      sub_B170A0();
    }
    v15 = *(_QWORD *)(v14 + 8 * v13);
    if ( v15 )
    {
      if ( *(_QWORD *)(v15 + 40) )
        break;
    }
    if ( (__int64)++v13 >= (int)v12 )
      return -1;
  }
  return *(_DWORD *)(v15 + 32);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultFriendComponent__onChangeClass(
        BattleResultFriendComponent_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( (byte_40FA3BB & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, *(_QWORD *)&classPos);
    byte_40FA3BB = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  BattleResultFriendComponent__changeClass(this, classPos, v5);
}


void __fastcall BattleResultFriendComponent__openCore(BattleResultFriendComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UserGameEntity_o *SelfUserGame; // x22
  WebViewManager_o *Instance; // x0
  TblFriendMaster_o *MasterData_WarQuestSelectionMaster; // x25
  WebViewManager_o *v32; // x0
  UserFollowMaster_o *v33; // x0
  int32_t FollowSum; // w24
  int32_t Value; // w0
  _BOOL4 enableFollowQuest; // w21
  _BOOL4 v37; // w26
  _BOOL4 v38; // w27
  int v39; // w23
  int32_t FriendSum; // w0
  const MethodInfo *v41; // x3
  int v42; // w21
  UILabel_o *countLabel; // x26
  Il2CppObject *v44; // x25
  Il2CppObject *v45; // x0
  System_String_o *v46; // x0
  UILabel_o *followCountLabel; // x22
  Il2CppObject *v48; // x24
  Il2CppObject *v49; // x0
  System_String_o *v50; // x0
  UILabel_o *confLabel; // x22
  System_String_o *v52; // x0
  WebViewManager_o *v53; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v54; // x0
  UserServantEntity_o *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  const MethodInfo *v62; // x1
  WebViewManager_o *v63; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v64; // x0
  struct BattleResultComponent_o *parentComp; // x8
  struct BattleResultComponent_resultData_o *battleResult; // x8
  const MethodInfo *v67; // x2
  _BOOL4 IsNeedUseEventSupport; // w8
  int32_t followerClassId; // w22
  int32_t ExistLeaderInfo; // w0
  UnityEngine_Object_o *classButtonControl; // x22
  ClassButtonControlComponent_o *v72; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  System_Action_o *v77; // x21
  UnityEngine_GameObject_o *root; // x0
  const MethodInfo *v79; // x2
  PlayMakerFSM_o *myFsm; // x0
  int32_t friendKeep; // [xsp+0h] [xbp-60h] BYREF
  int32_t v82; // [xsp+4h] [xbp-5Ch] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FA3BE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_OtherUserGameMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_TblFriendMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserFollowMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__, v10);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v11);
    sub_B16FFC(&int_TypeInfo, v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&Method_BattleResultFriendComponent___c__DisplayClass45_0__openCore_b__0__, v16);
    sub_B16FFC(&BattleResultFriendComponent___c__DisplayClass45_0_TypeInfo, v17);
    sub_B16FFC(&StringLiteral_5481/*"END_PROC"*/, v18);
    sub_B16FFC(&StringLiteral_11080/*"RESULT_FRIEND_CONF"*/, v19);
    sub_B16FFC(&StringLiteral_23516/*"{0}/{1}"*/, v20);
    sub_B16FFC(&StringLiteral_6387/*"FOLLOW_NUM"*/, v21);
    byte_40FA3BE = 1;
  }
  entity = 0LL;
  v22 = sub_B170CC(BattleResultFriendComponent___c__DisplayClass45_0_TypeInfo, method, v2, v3, v4);
  BattleResultFriendComponent___c__DisplayClass45_0___ctor(
    (BattleResultFriendComponent___c__DisplayClass45_0_o *)v22,
    0LL);
  if ( !v22 )
    goto LABEL_38;
  *(_QWORD *)(v22 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v22 + 16), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (TblFriendMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  v32 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v32 )
    goto LABEL_38;
  v33 = (UserFollowMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)v32,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  if ( !v33 )
    goto LABEL_38;
  FollowSum = UserFollowMaster__GetFollowSum(v33, 0LL);
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_6387/*"FOLLOW_NUM"*/, 0LL);
  enableFollowQuest = this->fields.enableFollowQuest;
  v37 = FollowSum < Value;
  v38 = this->fields.followerType == 2;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_38;
  v39 = Value;
  FriendSum = TblFriendMaster__GetFriendSum(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !SelfUserGame )
    goto LABEL_38;
  v42 = v37 && enableFollowQuest && v38;
  BattleResultFriendComponent__Layout(this, v42, FriendSum < SelfUserGame->fields.friendKeep, v41);
  countLabel = this->fields.countLabel;
  v82 = TblFriendMaster__GetFriendSum(MasterData_WarQuestSelectionMaster, 0LL);
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82);
  friendKeep = SelfUserGame->fields.friendKeep;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep);
  v46 = System_String__Format_43739268((System_String_o *)StringLiteral_23516/*"{0}/{1}"*/, v44, v45, 0LL);
  if ( !countLabel )
    goto LABEL_38;
  UILabel__set_text(countLabel, v46, 0LL);
  if ( v42 )
  {
    followCountLabel = this->fields.followCountLabel;
    v82 = FollowSum;
    v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82);
    friendKeep = v39;
    v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep);
    v50 = System_String__Format_43739268((System_String_o *)StringLiteral_23516/*"{0}/{1}"*/, v48, v49, 0LL);
    if ( !followCountLabel )
      goto LABEL_38;
    UILabel__set_text(followCountLabel, v50, 0LL);
  }
  confLabel = this->fields.confLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_11080/*"RESULT_FRIEND_CONF"*/, 0LL);
  if ( !confLabel )
    goto LABEL_38;
  UILabel__set_text(confLabel, v52, 0LL);
  v53 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v53 )
    goto LABEL_38;
  v54 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)v53,
                                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  if ( !v54 )
    goto LABEL_38;
  v55 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
          v54,
          this->fields.targetId,
          (const MethodInfo_266F5B0 *)Method_DataMasterBase_OtherUserGameMaster__OtherUserGameEntity__long__GetEntity__);
  this->fields.otherUser = (struct OtherUserGameEntity_o *)v55;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.otherUser,
    (System_Int32_array **)v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  BattleResultFriendComponent__OtherUserChangeLimitCountBySpoilerProtection(this, v62);
  entity = 0LL;
  v63 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v63 )
    goto LABEL_38;
  v64 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v63,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  parentComp = this->fields.parentComp;
  if ( !parentComp )
    goto LABEL_38;
  battleResult = parentComp->fields.battleResult;
  if ( !battleResult || !v64 )
    goto LABEL_38;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    v64,
    &entity,
    battleResult->fields.eventId,
    (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( entity )
    IsNeedUseEventSupport = EventDetailEntity__IsNeedUseEventSupport((EventDetailEntity_o *)entity, 0LL);
  else
    IsNeedUseEventSupport = 0;
  followerClassId = this->fields.followerClassId;
  this->fields.displayServantType = IsNeedUseEventSupport;
  ExistLeaderInfo = BattleResultFriendComponent__getExistLeaderInfo(this, followerClassId, v67);
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
      v72 = this->fields.classButtonControl;
      if ( !v72 )
        goto LABEL_38;
      ClassButtonControlComponent__setCursor(v72, this->fields.followerClassId, 0LL);
    }
  }
  this->fields.dispClassId = this->fields.followerClassId;
  if ( v42 )
  {
    *(_BYTE *)(v22 + 24) = EventTutorialMaster__IsTutorialAvailable(-1, 49, 0, 0, 0, 0, 0LL);
    v77 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v73, v74, v75, v76);
    System_Action___ctor(
      v77,
      (Il2CppObject *)v22,
      Method_BattleResultFriendComponent___c__DisplayClass45_0__openCore_b__0__,
      0LL);
    EventTutorialMaster__CheckTutorial(-1, 49, v77, 0, 0, 0, 0, 0LL);
  }
  root = this->fields.root;
  if ( !root
    || (UnityEngine_GameObject__SetActive(root, 1, 0LL),
        BattleResultFriendComponent__changeClass(this, this->fields.followerClassId, v79),
        (myFsm = this->fields.myFsm) == 0LL) )
  {
LABEL_38:
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481/*"END_PROC"*/, 0LL);
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
  __int64 v22; // x3
  __int64 v23; // x4
  ClassButtonControlComponent_CallbackFunc_o *v24; // x21

  if ( (byte_40FA3BA & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleResultFriendComponent_onChangeClass__, *(_QWORD *)&infollowerType);
    sub_B16FFC(&ClassButtonControlComponent_CallbackFunc_TypeInfo, v15);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v16);
    byte_40FA3BA = 1;
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
          v24 = (ClassButtonControlComponent_CallbackFunc_o *)sub_B170CC(
                                                                ClassButtonControlComponent_CallbackFunc_TypeInfo,
                                                                v20,
                                                                v21,
                                                                v22,
                                                                v23),
          ClassButtonControlComponent_CallbackFunc___ctor(
            v24,
            (Il2CppObject *)this,
            Method_BattleResultFriendComponent_onChangeClass__,
            0LL),
          !v19) )
    {
      sub_B170D4();
    }
    ClassButtonControlComponent__init(v19, v24, 0, 0, 0, 0LL);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct BattleResultFriendComponent_o *_4__this; // x20
  Il2CppObject *v13; // x21
  System_Action_o *releasePerformanceObject; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  UnityEngine_WaitForEndOfFrame_o *v19; // x20
  struct UnityEngine_WaitForEndOfFrame_o **p_waitForEndOfFrame_5__2; // x19
  struct UnityEngine_WaitForEndOfFrame_o *v21; // x1
  bool result; // w0
  struct BattleResultFriendComponent___c__DisplayClass44_0_o **p__8__1; // x22
  AssetManager_o *Instance; // x0
  AssetManager_o *v25; // x0
  Il2CppObject *v26; // x0
  Il2CppObject **p__2__current; // x19
  struct BattleResultFriendComponent___c__DisplayClass44_0_o *_8__1; // x8
  Il2CppObject *v29; // x21
  System_Action_o *v30; // x20
  Il2CppObject *v31; // x1
  int32_t v32; // w8
  Il2CppObject *waitForEndOfFrame_5__2; // x1
  Il2CppObject *v34; // x1

  if ( (byte_40F718C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AtlasManager_TypeInfo, v6);
    sub_B16FFC(&System_GC_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v8);
    sub_B16FFC(&Method_BattleResultFriendComponent___c__DisplayClass44_0__ChangeFaceAtlas_b__0__, v9);
    sub_B16FFC(&BattleResultFriendComponent___c__DisplayClass44_0_TypeInfo, v10);
    sub_B16FFC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v11);
    byte_40F718C = 1;
  }
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      v13 = (Il2CppObject *)sub_B170CC(BattleResultFriendComponent___c__DisplayClass44_0_TypeInfo, method, v2, v3, v4);
      System_Object___ctor(v13, 0LL);
      this->fields.__8__1 = (struct BattleResultFriendComponent___c__DisplayClass44_0_o *)v13;
      sub_B16F98(&this->fields.__8__1, v13);
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
      v19 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(UnityEngine_WaitForEndOfFrame_TypeInfo, v15, v16, v17, v18);
      UnityEngine_WaitForEndOfFrame___ctor(v19, 0LL);
      this->fields._waitForEndOfFrame_5__2 = v19;
      p_waitForEndOfFrame_5__2 = &this->fields._waitForEndOfFrame_5__2;
      sub_B16F98(p_waitForEndOfFrame_5__2, v19);
      v21 = *p_waitForEndOfFrame_5__2;
      *(p_waitForEndOfFrame_5__2 - 3) = *p_waitForEndOfFrame_5__2;
      sub_B16F98(p_waitForEndOfFrame_5__2 - 3, v21);
      result = 1;
      *((_DWORD *)p_waitForEndOfFrame_5__2 - 8) = 1;
      return result;
    case 1:
      this->fields.__1__state = -1;
      if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_42843716(0LL);
      waitForEndOfFrame_5__2 = (Il2CppObject *)this->fields._waitForEndOfFrame_5__2;
      this->fields.__2__current = waitForEndOfFrame_5__2;
      sub_B16F98(&this->fields.__2__current, waitForEndOfFrame_5__2);
      v32 = 2;
      goto LABEL_34;
    case 2:
      this->fields.__1__state = -1;
      Instance = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !Instance )
        goto LABEL_36;
      AssetManager__RequestUnloadUnusedAssets(Instance, 0LL, 0LL);
      v25 = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !v25 )
        goto LABEL_36;
      v26 = (Il2CppObject *)AssetManager__WaitForExecutionUnloadUnuseAssets(v25, 0LL);
      this->fields.__2__current = v26;
      p__2__current = &this->fields.__2__current;
      sub_B16F98(p__2__current, v26);
      *((_DWORD *)p__2__current - 2) = 3;
      goto LABEL_35;
    case 3:
      p__8__1 = &this->fields.__8__1;
      _8__1 = this->fields.__8__1;
      this->fields.__1__state = -1;
      if ( !_8__1 )
        goto LABEL_36;
      _8__1->fields.isWait = 1;
      v29 = (Il2CppObject *)*p__8__1;
      v30 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
      System_Action___ctor(
        v30,
        v29,
        Method_BattleResultFriendComponent___c__DisplayClass44_0__ChangeFaceAtlas_b__0__,
        0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadFaceAtlas(v30, 1, 0LL);
LABEL_20:
      if ( !*p__8__1 )
LABEL_36:
        sub_B170D4();
      if ( (*p__8__1)->fields.isWait )
      {
        v31 = (Il2CppObject *)this->fields._waitForEndOfFrame_5__2;
        this->fields.__2__current = v31;
        sub_B16F98(&this->fields.__2__current, v31);
        v32 = 4;
      }
      else
      {
        if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_42843716(0LL);
        v34 = (Il2CppObject *)this->fields._waitForEndOfFrame_5__2;
        this->fields.__2__current = v34;
        sub_B16F98(&this->fields.__2__current, v34);
        v32 = 5;
      }
LABEL_34:
      this->fields.__1__state = v32;
LABEL_35:
      result = 1;
      break;
    case 4:
      p__8__1 = &this->fields.__8__1;
      this->fields.__1__state = -1;
      goto LABEL_20;
    case 5:
      this->fields.__1__state = -1;
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattleResultFriendComponent__ChangeFaceAtlas_d__44_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleResultFriendComponent_o *_4__this; // x8
  UnityEngine_GameObject_o *followTutorialMask; // x0
  struct BattleResultFriendComponent_o *v11; // x8
  UILabel_o *followTutorialLabel; // x20
  System_String_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  UnityEngine_MonoBehaviour_o *v18; // x21
  void *monitor; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  EventDelegate_o *v21; // x22
  struct BattleResultFriendComponent_o *v22; // x8
  UnityEngine_Component_o *followTutorialButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct BattleResultFriendComponent_o *v25; // x8
  struct BattleResultFriendComponent_o *v26; // x8
  UnityEngine_Component_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  struct BattleResultFriendComponent_o *v29; // x8
  UnityEngine_Component_o *rightButton; // x0
  UnityEngine_GameObject_o *v31; // x0
  CommonUI_o *Instance; // x19
  System_String_o *v33; // x0
  System_String_o *v34; // x20
  float v35; // s4
  float v36; // s5
  float v37; // s6
  float v38; // s7
  UnityEngine_Rect_o v39; // [xsp+10h] [xbp-30h] BYREF
  UnityEngine_Vector2_o v40; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F718B & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDelegate__Add__, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_9945/*"OnClickTutorialFollow"*/, v6);
    sub_B16FFC(&StringLiteral_13457/*"TUTORIAL_MESSAGE_FOLLOW_OFFER"*/, v7);
    sub_B16FFC(&StringLiteral_11077/*"RESULT_FOLLOW_REQUEST_YES"*/, v8);
    byte_40F718B = 1;
  }
  if ( this->fields.isFollowTutorial )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_26;
    followTutorialMask = _4__this->fields.followTutorialMask;
    if ( !followTutorialMask )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(followTutorialMask, 1, 0LL);
    v11 = this->fields.__4__this;
    if ( !v11 )
      goto LABEL_26;
    followTutorialLabel = v11->fields.followTutorialLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_11077/*"RESULT_FOLLOW_REQUEST_YES"*/, 0LL);
    if ( !followTutorialLabel )
      goto LABEL_26;
    UILabel__set_text(followTutorialLabel, v13, 0LL);
    v18 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    if ( !v18 )
      goto LABEL_26;
    monitor = v18[11].monitor;
    if ( !monitor )
      goto LABEL_26;
    v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*((_QWORD *)monitor
                                                                                                  + 24);
    v21 = (EventDelegate_o *)sub_B170CC(EventDelegate_TypeInfo, v14, v15, v16, v17);
    EventDelegate___ctor_29412928(v21, v18, (System_String_o *)StringLiteral_9945/*"OnClickTutorialFollow"*/, 0LL);
    if ( !v20 )
      goto LABEL_26;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v20,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
    v22 = this->fields.__4__this;
    if ( !v22 )
      goto LABEL_26;
    followTutorialButton = (UnityEngine_Component_o *)v22->fields.followTutorialButton;
    if ( !followTutorialButton )
      goto LABEL_26;
    gameObject = UnityEngine_Component__get_gameObject(followTutorialButton, 0LL);
    v25 = this->fields.__4__this;
    if ( !v25 )
      goto LABEL_26;
    GameObjectExtensions__AddLocalPositionX(gameObject, v25->fields.offsetPosition, 0LL);
    v26 = this->fields.__4__this;
    if ( !v26 )
      goto LABEL_26;
    v27 = (UnityEngine_Component_o *)v26->fields.followTutorialButton;
    if ( !v27 )
      goto LABEL_26;
    v28 = UnityEngine_Component__get_gameObject(v27, 0LL);
    if ( !v28 )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(v28, 1, 0LL);
    v29 = this->fields.__4__this;
    if ( !v29 )
      goto LABEL_26;
    rightButton = (UnityEngine_Component_o *)v29->fields.rightButton;
    if ( !rightButton )
      goto LABEL_26;
    v31 = UnityEngine_Component__get_gameObject(rightButton, 0LL);
    if ( !v31 )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(v31, 0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_13457/*"TUTORIAL_MESSAGE_FOLLOW_OFFER"*/, 0LL);
    v41.fields.m_XMin = 162.0;
    v41.fields.m_YMin = -244.0;
    v41.fields.m_Width = 300.0;
    v41.fields.m_Height = 80.0;
    v34 = v33;
    *(_QWORD *)&v39.fields.m_XMin = 0LL;
    *(_QWORD *)&v39.fields.m_Width = 0LL;
    UnityEngine_Rect___ctor(v41, v35, v36, v37, v38, (const MethodInfo *)&v39);
    if ( !Instance )
LABEL_26:
      sub_B170D4();
    v40.fields.x = 313.0;
    v40.fields.y = -184.0;
    CommonUI__OpenTutorialNotificationDialogArrow(Instance, v34, v40, v39, 0.0, 0LL, -1, 0LL, 0LL);
  }
}