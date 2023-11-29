void __fastcall ShopActionManager___ctor(ShopActionManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FF36C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopActionEntity___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_ShopActionEntity__TypeInfo, v6);
    byte_40FF36C = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_ShopActionEntity__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ShopActionEntity___ctor__);
  this->fields.shopActionList = (struct System_Collections_Generic_List_ShopActionEntity__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.shopActionList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ShopActionManager__ExecutionShopAction(ShopActionManager_o *this, const MethodInfo *method)
{
  const MethodInfo_2A54F38 **v2; // x20
  System_Action_c **v3; // x26
  ShopActionEntity_o *v5; // x28
  int32_t actionType; // w8
  struct System_Collections_Generic_List_ShopActionEntity__o *v7; // x8
  ShopActionEntity_o *v8; // x8
  const MethodInfo_2A54F38 **v9; // x23
  WebViewManager_o *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  EventRewardRootComponent_o *basePanel; // x20
  System_Action_c **v16; // x24
  System_Action_o *v17; // x26
  __int64 v18; // x9
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *shopActionList; // x0
  UnityEngine_Object_o *gameObject; // x19
  ShopActionManager_o *v28; // x0
  const MethodInfo *v29; // x1

  v2 = (const MethodInfo_2A54F38 **)&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
  v3 = &System_Action_TypeInfo;
  while ( 1 )
  {
    if ( (byte_40FF36A & 1) == 0 )
    {
      sub_B16FFC(v3, method);
      sub_B16FFC(&EventRewardRootComponent_TypeInfo, v19);
      sub_B16FFC(&Method_System_Collections_Generic_List_ShopActionEntity__RemoveAt__, v20);
      sub_B16FFC(&Method_System_Collections_Generic_List_ShopActionEntity__get_Count__, v21);
      sub_B16FFC(&Method_System_Collections_Generic_List_ShopActionEntity__get_Item__, v22);
      sub_B16FFC(&UnityEngine_Object_TypeInfo, v23);
      sub_B16FFC(&Method_ShopActionManager_VoiceEnd__, v24);
      sub_B16FFC(v2, v25);
      byte_40FF36A = 1;
    }
    shopActionList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.shopActionList;
    if ( !shopActionList )
LABEL_25:
      sub_B170D4();
    if ( shopActionList->fields._size <= 0 )
      break;
    v5 = (ShopActionEntity_o *)shopActionList->fields._items->m_Items[0];
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      shopActionList,
      0,
      (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_ShopActionEntity__RemoveAt__);
    if ( !v5 )
      goto LABEL_25;
    actionType = v5->fields.actionType;
    if ( actionType != 8 )
    {
      if ( actionType != 5 )
        return;
      v7 = this->fields.shopActionList;
      this->fields.isVoicePlaying = 1;
      if ( !v7 )
        goto LABEL_25;
      if ( v7->fields._size >= 1 )
      {
        v8 = v7->fields._items->m_Items[0];
        if ( v8 )
        {
          if ( v8->fields.actionType == 8 )
            this->fields.isVoiceWaiting = 1;
        }
      }
      v9 = v2;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance(*v2);
      if ( !Instance )
        goto LABEL_25;
      basePanel = (EventRewardRootComponent_o *)Instance->fields.basePanel;
      v16 = v3;
      v17 = (System_Action_o *)sub_B170CC(*v3, v11, v12, v13, v14);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_ShopActionManager_VoiceEnd__, 0LL);
      if ( !basePanel )
        goto LABEL_25;
      v18 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
      if ( *(&basePanel->klass->_2.bitflags2 + 1) < (unsigned int)v18
        || (EventRewardRootComponent_c *)basePanel->klass->_2.typeHierarchy[v18 - 1] != EventRewardRootComponent_TypeInfo )
      {
        sub_B173C8(basePanel);
        ShopActionManager__VoiceEnd(v28, v29);
        return;
      }
      EventRewardRootComponent__PlayIndividualShopPurchaseVoice(basePanel, v5, v17, 0LL);
      v2 = v9;
      v3 = v16;
    }
  }
  if ( !this->fields.isVoicePlaying )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
  }
}


bool __fastcall ShopActionManager__IsVoiceWait(ShopActionManager_o *this, const MethodInfo *method)
{
  return this->fields.isVoicePlaying && this->fields.isVoiceWaiting;
}


void __fastcall ShopActionManager__SetShopAction(
        ShopActionManager_o *this,
        System_Collections_Generic_List_ShopActionEntity__o *shopActionEntityList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x1

  this->fields.shopActionList = shopActionEntityList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.shopActionList,
    (System_Int32_array **)shopActionEntityList,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.afterCallback = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.afterCallback,
    (System_Int32_array **)callback,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  ShopActionManager__ExecutionShopAction(this, v16);
}


void __fastcall ShopActionManager__VoiceEnd(ShopActionManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_ShopActionEntity__o *shopActionList; // x8
  System_Action_o *afterCallback; // x0
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_40FF36B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopActionEntity__get_Count__, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FF36B = 1;
  }
  shopActionList = this->fields.shopActionList;
  if ( !shopActionList )
    sub_B170D4();
  if ( shopActionList->fields._size <= 0 )
  {
    afterCallback = this->fields.afterCallback;
    if ( afterCallback )
      ActionExtensions__Call(afterCallback, 0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
  }
  *(_WORD *)&this->fields.isVoicePlaying = 0;
}