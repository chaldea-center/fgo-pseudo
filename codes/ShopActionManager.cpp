void __fastcall ShopActionManager___ctor(ShopActionManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_418BC8E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopActionEntity___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_ShopActionEntity__TypeInfo, v3);
    byte_418BC8E = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ShopActionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ShopActionEntity___ctor__);
  this->fields.shopActionList = (struct System_Collections_Generic_List_ShopActionEntity__o *)v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.shopActionList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ShopActionManager__ExecutionShopAction(ShopActionManager_o *this, const MethodInfo *method)
{
  const MethodInfo_2841668 **v2; // x20
  System_Action_c **v3; // x26
  ShopActionEntity_o *v5; // x28
  System_Collections_Generic_List_XWeaponTrail_Element__o *shopActionList; // x0
  int32_t actionType; // w8
  struct System_Collections_Generic_List_ShopActionEntity__o *v8; // x8
  ShopActionEntity_o *v9; // x8
  const MethodInfo_2841668 **v10; // x23
  EventRewardRootComponent_o *v11; // x20
  System_Action_c **v12; // x24
  System_Action_o *v13; // x26
  __int64 v14; // x9
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  UnityEngine_Object_o *gameObject; // x19
  ShopActionManager_o *v23; // x0
  const MethodInfo *v24; // x1

  v2 = (const MethodInfo_2841668 **)&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
  v3 = &System_Action_TypeInfo;
  while ( 1 )
  {
    if ( (byte_418BC8C & 1) == 0 )
    {
      sub_B2C35C(v3, method);
      sub_B2C35C(&EventRewardRootComponent_TypeInfo, v15);
      sub_B2C35C(&Method_System_Collections_Generic_List_ShopActionEntity__RemoveAt__, v16);
      sub_B2C35C(&Method_System_Collections_Generic_List_ShopActionEntity__get_Count__, v17);
      sub_B2C35C(&Method_System_Collections_Generic_List_ShopActionEntity__get_Item__, v18);
      sub_B2C35C(&UnityEngine_Object_TypeInfo, v19);
      sub_B2C35C(&Method_ShopActionManager_VoiceEnd__, v20);
      sub_B2C35C(v2, v21);
      byte_418BC8C = 1;
    }
    shopActionList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.shopActionList;
    if ( !shopActionList )
LABEL_25:
      sub_B2C434(shopActionList, method);
    if ( shopActionList->fields._size <= 0 )
      break;
    v5 = (ShopActionEntity_o *)shopActionList->fields._items->m_Items[0];
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      shopActionList,
      0,
      (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_ShopActionEntity__RemoveAt__);
    if ( !v5 )
      goto LABEL_25;
    actionType = v5->fields.actionType;
    if ( actionType != 8 )
    {
      if ( actionType != 5 )
        return;
      v8 = this->fields.shopActionList;
      this->fields.isVoicePlaying = 1;
      if ( !v8 )
        goto LABEL_25;
      if ( v8->fields._size >= 1 )
      {
        v9 = v8->fields._items->m_Items[0];
        if ( v9 )
        {
          if ( v9->fields.actionType == 8 )
            this->fields.isVoiceWaiting = 1;
        }
      }
      v10 = v2;
      shopActionList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)SingletonMonoBehaviour_WebViewManager___get_Instance(*v2);
      if ( !shopActionList )
        goto LABEL_25;
      v11 = *(EventRewardRootComponent_o **)&shopActionList->fields._size;
      v12 = v3;
      v13 = (System_Action_o *)sub_B2C42C(*v3);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_ShopActionManager_VoiceEnd__, 0LL);
      if ( !v11 )
        goto LABEL_25;
      v14 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v11->klass->_2.bitflags2 + 1) < (unsigned int)v14
        || (EventRewardRootComponent_c *)v11->klass->_2.typeHierarchy[v14 - 1] != EventRewardRootComponent_TypeInfo )
      {
        sub_B2C728(v11);
        ShopActionManager__VoiceEnd(v23, v24);
        return;
      }
      EventRewardRootComponent__PlayIndividualShopPurchaseVoice(v11, v5, v13, 0LL);
      v2 = v10;
      v3 = v12;
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
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.shopActionList,
    (System_Int32_array **)shopActionEntityList,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.afterCallback = callback;
  sub_B2C2F8(
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
  ShopActionManager_o *v2; // x19
  __int64 v3; // x1
  struct System_Collections_Generic_List_ShopActionEntity__o *shopActionList; // x8
  System_Action_o *afterCallback; // x0
  UnityEngine_Object_o *gameObject; // x20

  v2 = this;
  if ( (byte_418BC8D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopActionEntity__get_Count__, method);
    this = (ShopActionManager_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418BC8D = 1;
  }
  shopActionList = v2->fields.shopActionList;
  if ( !shopActionList )
    sub_B2C434(this, method);
  if ( shopActionList->fields._size <= 0 )
  {
    afterCallback = v2->fields.afterCallback;
    if ( afterCallback )
      ActionExtensions__Call(afterCallback, 0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
  }
  *(_WORD *)&v2->fields.isVoicePlaying = 0;
}