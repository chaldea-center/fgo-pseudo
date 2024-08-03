void __fastcall ShopActionManager___ctor(ShopActionManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49F8A36 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopActionEntity___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_ShopActionEntity__TypeInfo, v4);
    byte_49F8A36 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_ShopActionEntity__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ShopActionEntity___ctor__);
  this->fields.shopActionList = (struct System_Collections_Generic_List_ShopActionEntity__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.shopActionList, (int32_t)v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ShopActionManager__ExecutionShopAction(ShopActionManager_o *this, const MethodInfo *method)
{
  const MethodInfo_36EC03C **v2; // x20
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
  const MethodInfo_36EC03C **v15; // x24
  __int64 v16; // x1
  __int64 v17; // x2
  EventRewardRootComponent_o *syncRoot; // x29
  System_Action_o *v19; // x20
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *gameObject; // x19
  ShopActionManager_o *v22; // x0
  const MethodInfo *v23; // x1

  v2 = (const MethodInfo_36EC03C **)&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
  while ( 1 )
  {
    if ( (byte_49F8A34 & 1) == 0 )
    {
      sub_1B640C8(&System_Action_TypeInfo, method);
      sub_1B640C8(&EventRewardRootComponent_TypeInfo, v4);
      sub_1B640C8(&Method_System_Collections_Generic_List_ShopActionEntity__RemoveAt__, v5);
      sub_1B640C8(&Method_System_Collections_Generic_List_ShopActionEntity__get_Count__, v6);
      sub_1B640C8(&Method_System_Collections_Generic_List_ShopActionEntity__get_Item__, v7);
      sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
      sub_1B640C8(&Method_ShopActionManager_VoiceEnd__, v9);
      sub_1B640C8(v2, v10);
      byte_49F8A34 = 1;
    }
    shopActionList = (System_Collections_Generic_List_object__o *)this->fields.shopActionList;
    if ( !shopActionList )
LABEL_25:
      sub_1B64324(shopActionList);
    if ( shopActionList->fields._size <= 0 )
      break;
    shopActionList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    shopActionList,
                                                                    0,
                                                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ShopActionEntity__get_Item__);
    if ( !this->fields.shopActionList )
      goto LABEL_25;
    v12 = (ShopActionEntity_o *)shopActionList;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)this->fields.shopActionList,
      0,
      (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_ShopActionEntity__RemoveAt__);
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
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ShopActionEntity__get_Item__);
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
      v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_ShopActionManager_VoiceEnd__, 0LL);
      if ( !syncRoot )
        goto LABEL_25;
      methodPtr_low = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(syncRoot->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventRewardRootComponent_c *)syncRoot->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRewardRootComponent_TypeInfo )
      {
        sub_1B645E4(syncRoot);
        ShopActionManager__VoiceEnd(v22, v23);
        return;
      }
      EventRewardRootComponent__PlayIndividualShopPurchaseVoice(syncRoot, v12, v19, 0LL);
      v2 = v15;
    }
  }
  if ( !this->fields.isVoicePlaying )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
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
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.shopActionList,
    (int32_t)shopActionEntityList,
    (int32_t)callback,
    (int32_t)method);
  this->fields.afterCallback = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.afterCallback, (int32_t)callback, v6, v7);
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
  if ( (byte_49F8A35 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopActionEntity__get_Count__, method);
    this = (ShopActionManager_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49F8A35 = 1;
  }
  shopActionList = v2->fields.shopActionList;
  if ( !shopActionList )
    sub_1B64324(this);
  if ( shopActionList->fields._size <= 0 )
  {
    afterCallback = v2->fields.afterCallback;
    if ( afterCallback )
      ActionExtensions__Call(afterCallback, 0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
  }
  *(_WORD *)&v2->fields.isVoicePlaying = 0;
}