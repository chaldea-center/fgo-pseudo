void ShopActionManager___ctor(ShopActionManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2CA73 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ShopActionEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ShopActionEntity__TypeInfo);
    byte_4D2CA73 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ShopActionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ShopActionEntity___ctor__);
  this->fields.shopActionList = (struct System_Collections_Generic_List_ShopActionEntity__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.shopActionList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ShopActionManager__ExecutionShopAction(ShopActionManager_o *this, const MethodInfo *method)
{
  const MethodInfo_3AC52FC **v2; // x20
  System_Collections_Generic_List_object__o *shopActionList; // x0
  ShopActionEntity_o *v5; // x28
  int32_t actionType; // w8
  Il2CppObject *Item; // x0
  const MethodInfo_3AC52FC **v8; // x24
  EventRewardRootComponent_o *syncRoot; // x29
  System_Action_o *v10; // x20
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *gameObject; // x19
  ShopActionManager_o *v13; // x0
  const MethodInfo *v14; // x1

  v2 = (const MethodInfo_3AC52FC **)&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
  while ( 1 )
  {
    if ( (byte_4D2CA71 & 1) == 0 )
    {
      sub_1C93AD4(&System_Action_TypeInfo);
      sub_1C93AD4(&EventRewardRootComponent_TypeInfo);
      sub_1C93AD4(&Method_System_Collections_Generic_List_ShopActionEntity__RemoveAt__);
      sub_1C93AD4(&Method_System_Collections_Generic_List_ShopActionEntity__get_Count__);
      sub_1C93AD4(&Method_System_Collections_Generic_List_ShopActionEntity__get_Item__);
      sub_1C93AD4(&UnityEngine_Object_TypeInfo);
      sub_1C93AD4(&Method_ShopActionManager_VoiceEnd__);
      sub_1C93AD4(v2);
      byte_4D2CA71 = 1;
    }
    shopActionList = (System_Collections_Generic_List_object__o *)this->fields.shopActionList;
    if ( !shopActionList )
LABEL_25:
      sub_1C93D2C(shopActionList, method);
    if ( shopActionList->fields._size <= 0 )
      break;
    shopActionList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    shopActionList,
                                                                    0,
                                                                    (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ShopActionEntity__get_Item__);
    if ( !this->fields.shopActionList )
      goto LABEL_25;
    v5 = (ShopActionEntity_o *)shopActionList;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)this->fields.shopActionList,
      0,
      (const MethodInfo_387B170 *)Method_System_Collections_Generic_List_ShopActionEntity__RemoveAt__);
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
                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ShopActionEntity__get_Item__);
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
      v10 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_ShopActionManager_VoiceEnd__, 0);
      if ( !syncRoot )
        goto LABEL_25;
      naturalAligment = EventRewardRootComponent_TypeInfo->_2.naturalAligment;
      if ( syncRoot->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (EventRewardRootComponent_c *)syncRoot->klass->_2.typeHierarchy[naturalAligment - 1] != EventRewardRootComponent_TypeInfo )
      {
        sub_1C940C8(syncRoot);
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
    UnityEngine_Object__Destroy_72119908(gameObject, 0);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  const MethodInfo *v16; // x1

  this->fields.shopActionList = shopActionEntityList;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.shopActionList,
    (int32_t)shopActionEntityList,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.afterCallback = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.afterCallback,
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
  UnityEngine_Object_o *gameObject; // x20

  v2 = this;
  if ( (byte_4D2CA72 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ShopActionEntity__get_Count__);
    this = (ShopActionManager_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2CA72 = 1;
  }
  shopActionList = v2->fields.shopActionList;
  if ( !shopActionList )
    sub_1C93D2C(this, method);
  if ( shopActionList->fields._size <= 0 )
  {
    afterCallback = v2->fields.afterCallback;
    if ( afterCallback )
      ActionExtensions__Call(afterCallback, 0);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(gameObject, 0);
  }
  *(_WORD *)&v2->fields.isVoicePlaying = 0;
}