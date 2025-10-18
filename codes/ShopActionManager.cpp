void ShopActionManager___ctor(ShopActionManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3F15F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ShopActionEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ShopActionEntity__TypeInfo);
    byte_4C3F15F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ShopActionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ShopActionEntity___ctor__);
  this->fields.shopActionList = (struct System_Collections_Generic_List_ShopActionEntity__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.shopActionList, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ShopActionManager__ExecutionShopAction(ShopActionManager_o *this, const MethodInfo *method)
{
  const MethodInfo_39ED16C **v2; // x20
  System_Collections_Generic_List_object__o *shopActionList; // x0
  ShopActionEntity_o *v5; // x28
  int32_t actionType; // w8
  Il2CppObject *Item; // x0
  const MethodInfo_39ED16C **v8; // x24
  EventRewardRootComponent_o *syncRoot; // x29
  System_Action_o *v10; // x20
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *gameObject; // x19
  ShopActionManager_o *v13; // x0
  const MethodInfo *v14; // x1

  v2 = (const MethodInfo_39ED16C **)&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
  while ( 1 )
  {
    if ( (byte_4C3F15D & 1) == 0 )
    {
      sub_1C37058(&System_Action_TypeInfo);
      sub_1C37058(&EventRewardRootComponent_TypeInfo);
      sub_1C37058(&Method_System_Collections_Generic_List_ShopActionEntity__RemoveAt__);
      sub_1C37058(&Method_System_Collections_Generic_List_ShopActionEntity__get_Count__);
      sub_1C37058(&Method_System_Collections_Generic_List_ShopActionEntity__get_Item__);
      sub_1C37058(&UnityEngine_Object_TypeInfo);
      sub_1C37058(&Method_ShopActionManager_VoiceEnd__);
      sub_1C37058(v2);
      byte_4C3F15D = 1;
    }
    shopActionList = (System_Collections_Generic_List_object__o *)this->fields.shopActionList;
    if ( !shopActionList )
LABEL_25:
      sub_1C372B4(shopActionList);
    if ( shopActionList->fields._size <= 0 )
      break;
    shopActionList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    shopActionList,
                                                                    0,
                                                                    (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ShopActionEntity__get_Item__);
    if ( !this->fields.shopActionList )
      goto LABEL_25;
    v5 = (ShopActionEntity_o *)shopActionList;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)this->fields.shopActionList,
      0,
      (const MethodInfo_37A47F8 *)Method_System_Collections_Generic_List_ShopActionEntity__RemoveAt__);
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
                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ShopActionEntity__get_Item__);
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
      v10 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_ShopActionManager_VoiceEnd__, 0);
      if ( !syncRoot )
        goto LABEL_25;
      naturalAligment = EventRewardRootComponent_TypeInfo->_2.naturalAligment;
      if ( syncRoot->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (EventRewardRootComponent_c *)syncRoot->klass->_2.typeHierarchy[naturalAligment - 1] != EventRewardRootComponent_TypeInfo )
      {
        sub_1C37574(syncRoot);
        ShopActionManager__VoiceEnd(v13, v14);
        return;
      }
      EventRewardRootComponent__PlayIndividualShopPurchaseVoice(syncRoot, v5, v10, 0);
      v2 = v8;
    }
  }
  if ( !this->fields.isVoicePlaying )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(gameObject, 0);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  this->fields.shopActionList = shopActionEntityList;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.shopActionList,
    (int32_t)shopActionEntityList,
    (int32_t)callback,
    method);
  this->fields.afterCallback = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.afterCallback, (int32_t)callback, v6, v7);
  ShopActionManager__ExecutionShopAction(this, v8);
}


void ShopActionManager__VoiceEnd(ShopActionManager_o *this, const MethodInfo *method)
{
  ShopActionManager_o *v2; // x19
  struct System_Collections_Generic_List_ShopActionEntity__o *shopActionList; // x8
  System_Action_o *afterCallback; // x0
  UnityEngine_Object_o *gameObject; // x20

  v2 = this;
  if ( (byte_4C3F15E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ShopActionEntity__get_Count__);
    this = (ShopActionManager_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F15E = 1;
  }
  shopActionList = v2->fields.shopActionList;
  if ( !shopActionList )
    sub_1C372B4(this);
  if ( shopActionList->fields._size <= 0 )
  {
    afterCallback = v2->fields.afterCallback;
    if ( afterCallback )
      ActionExtensions__Call(afterCallback, 0);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(gameObject, 0);
  }
  *(_WORD *)&v2->fields.isVoicePlaying = 0;
}