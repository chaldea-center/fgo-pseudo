void ShopActionManager___ctor(ShopActionManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596C780 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ShopActionEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ShopActionEntity__TypeInfo);
    byte_596C780 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ShopActionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ShopActionEntity___ctor__);
  this->fields.shopActionList = (struct System_Collections_Generic_List_ShopActionEntity__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.shopActionList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ShopActionManager__ExecutionShopAction(ShopActionManager_o *this, const MethodInfo *method)
{
  const MethodInfo_47A29F8 **v2; // x20
  System_Collections_Generic_List_object__o *shopActionList; // x0
  ShopActionEntity_o *v5; // x28
  int32_t actionType; // w8
  Il2CppObject *Item; // x0
  const MethodInfo_47A29F8 **v8; // x24
  EventRewardRootComponent_o *syncRoot; // x29
  System_Action_o *v10; // x20
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 naturalAligment; // x9
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *gameObject; // x19
  ShopActionManager_o *v17; // x0
  const MethodInfo *v18; // x1

  v2 = (const MethodInfo_47A29F8 **)&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
  while ( 1 )
  {
    if ( (byte_596C77E & 1) == 0 )
    {
      sub_2213A60(&System_Action_TypeInfo);
      sub_2213A60(&EventRewardRootComponent_TypeInfo);
      sub_2213A60(&Method_System_Collections_Generic_List_ShopActionEntity__RemoveAt__);
      sub_2213A60(&Method_System_Collections_Generic_List_ShopActionEntity__get_Count__);
      sub_2213A60(&Method_System_Collections_Generic_List_ShopActionEntity__get_Item__);
      sub_2213A60(&UnityEngine_Object_TypeInfo);
      sub_2213A60(&Method_ShopActionManager_VoiceEnd__);
      sub_2213A60(v2);
      byte_596C77E = 1;
    }
    shopActionList = (System_Collections_Generic_List_object__o *)this->fields.shopActionList;
    if ( !shopActionList )
LABEL_25:
      sub_2213CDC(shopActionList, method);
    if ( shopActionList->fields._size <= 0 )
      break;
    shopActionList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    shopActionList,
                                                                    0,
                                                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ShopActionEntity__get_Item__);
    if ( !this->fields.shopActionList )
      goto LABEL_25;
    v5 = (ShopActionEntity_o *)shopActionList;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)this->fields.shopActionList,
      0,
      (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_ShopActionEntity__RemoveAt__);
    if ( !v5 )
      goto LABEL_25;
    actionType = v5->fields.actionType;
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
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ShopActionEntity__get_Item__);
        if ( Item )
        {
          if ( LODWORD(Item[1].monitor) == 8 )
            this->fields.isVoiceWaiting = 1;
        }
      }
      v8 = v2;
      shopActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance(*v2);
      if ( !shopActionList )
        goto LABEL_25;
      syncRoot = (EventRewardRootComponent_o *)shopActionList->fields._syncRoot;
      v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_ShopActionManager_VoiceEnd__, 0);
      if ( !syncRoot )
        goto LABEL_25;
      naturalAligment = EventRewardRootComponent_TypeInfo->_2.naturalAligment;
      if ( syncRoot->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (EventRewardRootComponent_c *)syncRoot->klass->_2.typeHierarchy[naturalAligment - 1] != EventRewardRootComponent_TypeInfo )
      {
        sub_221405C(syncRoot, EventRewardRootComponent_TypeInfo, v11, v12);
        ShopActionManager__VoiceEnd(v17, v18);
        return;
      }
      EventRewardRootComponent__PlayIndividualShopPurchaseVoice(syncRoot, v5, v10, 0);
      v2 = v8;
    }
  }
  if ( !this->fields.isVoicePlaying )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
  }
}


bool ShopActionManager__IsVoiceWait(ShopActionManager_o *this, const MethodInfo *method)
{
  return this->fields.isVoicePlaying && this->fields.isVoiceWaiting;
}


void ShopActionManager__SetShopAction(
        ShopActionManager_o *this,
        System_Collections_Generic_List_ShopActionEntity__o *shopActionEntityList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  const MethodInfo *v16; // x1

  this->fields.shopActionList = shopActionEntityList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.shopActionList,
    (int32_t)shopActionEntityList,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.afterCallback = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.afterCallback,
    (int32_t)callback,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  ShopActionManager__ExecutionShopAction(this, v16);
}


void ShopActionManager__VoiceEnd(ShopActionManager_o *this, const MethodInfo *method)
{
  ShopActionManager_o *v2; // x19
  struct System_Collections_Generic_List_ShopActionEntity__o *shopActionList; // x8
  System_Action_o *afterCallback; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *gameObject; // x20

  v2 = this;
  if ( (byte_596C77F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ShopActionEntity__get_Count__);
    this = (ShopActionManager_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C77F = 1;
  }
  shopActionList = v2->fields.shopActionList;
  if ( !shopActionList )
    sub_2213CDC(this, method);
  if ( shopActionList->fields._size <= 0 )
  {
    afterCallback = v2->fields.afterCallback;
    if ( afterCallback )
      ActionExtensions__Call(afterCallback, 0);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
  }
  *(_WORD *)&v2->fields.isVoicePlaying = 0;
}