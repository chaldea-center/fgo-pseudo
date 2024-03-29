void __fastcall ShopActionManager___ctor(ShopActionManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4218AB0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopActionEntity___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_ShopActionEntity__TypeInfo, v4);
    byte_4218AB0 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_ShopActionEntity__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ShopActionEntity___ctor__);
  this->fields.shopActionList = (struct System_Collections_Generic_List_ShopActionEntity__o *)v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.shopActionList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ShopActionManager__ExecutionShopAction(ShopActionManager_o *this, const MethodInfo *method)
{
  const MethodInfo_2A71064 **v2; // x20
  System_Action_c **v3; // x26
  ShopActionEntity_o *v5; // x28
  System_Collections_Generic_List_XWeaponTrail_Element__o *shopActionList; // x0
  int32_t actionType; // w8
  struct System_Collections_Generic_List_ShopActionEntity__o *v8; // x8
  ShopActionEntity_o *v9; // x8
  const MethodInfo_2A71064 **v10; // x23
  __int64 v11; // x1
  __int64 v12; // x2
  EventRewardRootComponent_o *v13; // x20
  System_Action_c **v14; // x24
  System_Action_o *v15; // x26
  __int64 v16; // x9
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  UnityEngine_Object_o *gameObject; // x19
  ShopActionManager_o *v25; // x0
  const MethodInfo *v26; // x1

  v2 = (const MethodInfo_2A71064 **)&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
  v3 = &System_Action_TypeInfo;
  while ( 1 )
  {
    if ( (byte_4218AAE & 1) == 0 )
    {
      sub_B0D8A4(v3, method);
      sub_B0D8A4(&EventRewardRootComponent_TypeInfo, v17);
      sub_B0D8A4(&Method_System_Collections_Generic_List_ShopActionEntity__RemoveAt__, v18);
      sub_B0D8A4(&Method_System_Collections_Generic_List_ShopActionEntity__get_Count__, v19);
      sub_B0D8A4(&Method_System_Collections_Generic_List_ShopActionEntity__get_Item__, v20);
      sub_B0D8A4(&UnityEngine_Object_TypeInfo, v21);
      sub_B0D8A4(&Method_ShopActionManager_VoiceEnd__, v22);
      sub_B0D8A4(v2, v23);
      byte_4218AAE = 1;
    }
    shopActionList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.shopActionList;
    if ( !shopActionList )
LABEL_25:
      sub_B0D97C(shopActionList);
    if ( shopActionList->fields._size <= 0 )
      break;
    v5 = (ShopActionEntity_o *)shopActionList->fields._items->m_Items[0];
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      shopActionList,
      0,
      (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_ShopActionEntity__RemoveAt__);
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
      v13 = *(EventRewardRootComponent_o **)&shopActionList->fields._size;
      v14 = v3;
      v15 = (System_Action_o *)sub_B0D974(*v3, v11, v12);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_ShopActionManager_VoiceEnd__, 0LL);
      if ( !v13 )
        goto LABEL_25;
      v16 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v13->klass->_2.bitflags2 + 1) < (unsigned int)v16
        || (EventRewardRootComponent_c *)v13->klass->_2.typeHierarchy[v16 - 1] != EventRewardRootComponent_TypeInfo )
      {
        sub_B0DC70(v13);
        ShopActionManager__VoiceEnd(v25, v26);
        return;
      }
      EventRewardRootComponent__PlayIndividualShopPurchaseVoice(v13, v5, v15, 0LL);
      v2 = v10;
      v3 = v14;
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
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.shopActionList,
    (System_Int32_array **)shopActionEntityList,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.afterCallback = callback;
  sub_B0D840(
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
  if ( (byte_4218AAF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopActionEntity__get_Count__, method);
    this = (ShopActionManager_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4218AAF = 1;
  }
  shopActionList = v2->fields.shopActionList;
  if ( !shopActionList )
    sub_B0D97C(this);
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
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
  }
  *(_WORD *)&v2->fields.isVoicePlaying = 0;
}