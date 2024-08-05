void __fastcall ShopActionManager___ctor(ShopActionManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FAB25 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_ShopActionEntity___ctor__, method);
    sub_1B64870(&System_Collections_Generic_List_ShopActionEntity__TypeInfo, v3);
    byte_49FAB25 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_ShopActionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_ShopActionEntity___ctor__);
  this->fields.shopActionList = (struct System_Collections_Generic_List_ShopActionEntity__o *)v4;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.shopActionList, (int32_t)v4, v5, v6);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ShopActionManager__ExecutionShopAction(ShopActionManager_o *this, const MethodInfo *method)
{
  const MethodInfo_36EE318 **v2; // x20
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *shopActionList; // x0
  ShopActionEntity_o *v12; // x28
  int32_t actionType; // w8
  Il2CppObject *Item; // x0
  const MethodInfo_36EE318 **v15; // x24
  EventRewardRootComponent_o *syncRoot; // x29
  System_Action_o *v17; // x20
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *gameObject; // x19
  ShopActionManager_o *v20; // x0
  const MethodInfo *v21; // x1

  v2 = (const MethodInfo_36EE318 **)&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
  while ( 1 )
  {
    if ( (byte_49FAB23 & 1) == 0 )
    {
      sub_1B64870(&System_Action_TypeInfo, method);
      sub_1B64870(&EventRewardRootComponent_TypeInfo, v4);
      sub_1B64870(&Method_System_Collections_Generic_List_ShopActionEntity__RemoveAt__, v5);
      sub_1B64870(&Method_System_Collections_Generic_List_ShopActionEntity__get_Count__, v6);
      sub_1B64870(&Method_System_Collections_Generic_List_ShopActionEntity__get_Item__, v7);
      sub_1B64870(&UnityEngine_Object_TypeInfo, v8);
      sub_1B64870(&Method_ShopActionManager_VoiceEnd__, v9);
      sub_1B64870(v2, v10);
      byte_49FAB23 = 1;
    }
    shopActionList = (System_Collections_Generic_List_object__o *)this->fields.shopActionList;
    if ( !shopActionList )
LABEL_25:
      sub_1B64ACC(shopActionList, method);
    if ( shopActionList->fields._size <= 0 )
      break;
    shopActionList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    shopActionList,
                                                                    0,
                                                                    (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ShopActionEntity__get_Item__);
    if ( !this->fields.shopActionList )
      goto LABEL_25;
    v12 = (ShopActionEntity_o *)shopActionList;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)this->fields.shopActionList,
      0,
      (const MethodInfo_34B1224 *)Method_System_Collections_Generic_List_ShopActionEntity__RemoveAt__);
    if ( !v12 )
      goto LABEL_25;
    actionType = v12->fields.actionType;
    if ( actionType != 8 )
    {
      if ( actionType != 5 )
        return;
      shopActionList = (System_Collections_Generic_List_object__o *)this->fields.shopActionList;
      this->fields.isVoicePlaying = 1;
      if ( !shopActionList )
        goto LABEL_25;
      if ( shopActionList->fields._size >= 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 shopActionList,
                 0,
                 (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ShopActionEntity__get_Item__);
        if ( Item )
        {
          if ( LODWORD(Item[1].monitor) == 8 )
            this->fields.isVoiceWaiting = 1;
        }
      }
      v15 = v2;
      shopActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance(*v2);
      if ( !shopActionList )
        goto LABEL_25;
      syncRoot = (EventRewardRootComponent_o *)shopActionList->fields._syncRoot;
      v17 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_ShopActionManager_VoiceEnd__, 0LL);
      if ( !syncRoot )
        goto LABEL_25;
      methodPtr_low = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(syncRoot->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventRewardRootComponent_c *)syncRoot->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRewardRootComponent_TypeInfo )
      {
        sub_1B64D8C(syncRoot);
        ShopActionManager__VoiceEnd(v20, v21);
        return;
      }
      EventRewardRootComponent__PlayIndividualShopPurchaseVoice(syncRoot, v12, v17, 0LL);
      v2 = v15;
    }
  }
  if ( !this->fields.isVoicePlaying )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69135916(gameObject, 0LL);
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
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x1

  this->fields.shopActionList = shopActionEntityList;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.shopActionList,
    (int32_t)shopActionEntityList,
    (int32_t)callback,
    (int32_t)method);
  this->fields.afterCallback = callback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.afterCallback, (int32_t)callback, v6, v7);
  ShopActionManager__ExecutionShopAction(this, v8);
}


void __fastcall ShopActionManager__VoiceEnd(ShopActionManager_o *this, const MethodInfo *method)
{
  ShopActionManager_o *v2; // x19
  __int64 v3; // x1
  struct System_Collections_Generic_List_ShopActionEntity__o *shopActionList; // x8
  System_Action_o *afterCallback; // x0
  UnityEngine_Object_o *gameObject; // x20

  v2 = this;
  if ( (byte_49FAB24 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_ShopActionEntity__get_Count__, method);
    this = (ShopActionManager_o *)sub_1B64870(&UnityEngine_Object_TypeInfo, v3);
    byte_49FAB24 = 1;
  }
  shopActionList = v2->fields.shopActionList;
  if ( !shopActionList )
    sub_1B64ACC(this, method);
  if ( shopActionList->fields._size <= 0 )
  {
    afterCallback = v2->fields.afterCallback;
    if ( afterCallback )
      ActionExtensions__Call(afterCallback, 0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69135916(gameObject, 0LL);
  }
  *(_WORD *)&v2->fields.isVoicePlaying = 0;
}