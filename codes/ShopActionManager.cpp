void __fastcall ShopActionManager___ctor(ShopActionManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B1266E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopActionEntity___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_ShopActionEntity__TypeInfo, v5, v6);
    byte_4B1266E = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_ShopActionEntity__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ShopActionEntity___ctor__);
  this->fields.shopActionList = (struct System_Collections_Generic_List_ShopActionEntity__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.shopActionList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ShopActionManager__ExecutionShopAction(ShopActionManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo_37DEB14 **v3; // x20
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
  System_Collections_Generic_List_object__o *shopActionList; // x0
  ShopActionEntity_o *v20; // x28
  int32_t actionType; // w8
  Il2CppObject *Item; // x0
  const MethodInfo_37DEB14 **v23; // x24
  __int64 v24; // x2
  __int64 v25; // x3
  EventRewardRootComponent_o *syncRoot; // x29
  System_Action_o *v27; // x20
  __int64 methodPtr_low; // x9
  __int64 v29; // x1
  UnityEngine_Object_o *gameObject; // x19
  ShopActionManager_o *v31; // x0
  const MethodInfo *v32; // x1

  v3 = (const MethodInfo_37DEB14 **)&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
  while ( 1 )
  {
    if ( (byte_4B1266C & 1) == 0 )
    {
      sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
      sub_1BCA7E0(&EventRewardRootComponent_TypeInfo, v5, v6);
      sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopActionEntity__RemoveAt__, v7, v8);
      sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopActionEntity__get_Count__, v9, v10);
      sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopActionEntity__get_Item__, v11, v12);
      sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
      sub_1BCA7E0(&Method_ShopActionManager_VoiceEnd__, v15, v16);
      sub_1BCA7E0(v3, v17, v18);
      byte_4B1266C = 1;
    }
    shopActionList = (System_Collections_Generic_List_object__o *)this->fields.shopActionList;
    if ( !shopActionList )
LABEL_25:
      sub_1BCAA3C(shopActionList, method);
    if ( shopActionList->fields._size <= 0 )
      break;
    shopActionList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    shopActionList,
                                                                    0,
                                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ShopActionEntity__get_Item__);
    if ( !this->fields.shopActionList )
      goto LABEL_25;
    v20 = (ShopActionEntity_o *)shopActionList;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)this->fields.shopActionList,
      0,
      (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_ShopActionEntity__RemoveAt__);
    if ( !v20 )
      goto LABEL_25;
    actionType = v20->fields.actionType;
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
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ShopActionEntity__get_Item__);
        if ( Item )
        {
          if ( LODWORD(Item[1].monitor) == 8 )
            this->fields.isVoiceWaiting = 1;
        }
      }
      v23 = v3;
      shopActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance(*v3);
      if ( !shopActionList )
        goto LABEL_25;
      syncRoot = (EventRewardRootComponent_o *)shopActionList->fields._syncRoot;
      v27 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v24, v25);
      System_Action___ctor(v27, (Il2CppObject *)this, Method_ShopActionManager_VoiceEnd__, 0LL);
      if ( !syncRoot )
        goto LABEL_25;
      methodPtr_low = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(syncRoot->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventRewardRootComponent_c *)syncRoot->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRewardRootComponent_TypeInfo )
      {
        sub_1BCACFC(syncRoot);
        ShopActionManager__VoiceEnd(v31, v32);
        return;
      }
      EventRewardRootComponent__PlayIndividualShopPurchaseVoice(syncRoot, v20, v27, 0LL);
      v3 = v23;
    }
  }
  if ( !this->fields.isVoicePlaying )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  const MethodInfo *v16; // x1

  this->fields.shopActionList = shopActionEntityList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.shopActionList,
    (int64_t)shopActionEntityList,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.afterCallback = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.afterCallback,
    (int64_t)callback,
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
  __int64 v2; // x2
  ShopActionManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_List_ShopActionEntity__o *shopActionList; // x8
  System_Action_o *afterCallback; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x20

  v3 = this;
  if ( (byte_4B1266D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopActionEntity__get_Count__, method, v2);
    this = (ShopActionManager_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B1266D = 1;
  }
  shopActionList = v3->fields.shopActionList;
  if ( !shopActionList )
    sub_1BCAA3C(this, method);
  if ( shopActionList->fields._size <= 0 )
  {
    afterCallback = v3->fields.afterCallback;
    if ( afterCallback )
      ActionExtensions__Call(afterCallback, 0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  }
  *(_WORD *)&v3->fields.isVoicePlaying = 0;
}