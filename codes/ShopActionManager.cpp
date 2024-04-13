void __fastcall ShopActionManager___ctor(ShopActionManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42ECF3F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopActionEntity___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_ShopActionEntity__TypeInfo, v5, v6, v7);
    byte_42ECF3F = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ShopActionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ShopActionEntity___ctor__);
  this->fields.shopActionList = (struct System_Collections_Generic_List_ShopActionEntity__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.shopActionList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ShopActionManager__ExecutionShopAction(ShopActionManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo_2A2FE60 **v4; // x20
  System_Action_c **v5; // x26
  ShopActionEntity_o *v7; // x28
  System_Collections_Generic_List_XWeaponTrail_Element__o *shopActionList; // x0
  int32_t actionType; // w8
  struct System_Collections_Generic_List_ShopActionEntity__o *v10; // x8
  ShopActionEntity_o *v11; // x8
  const MethodInfo_2A2FE60 **v12; // x23
  EventRewardRootComponent_o *v13; // x20
  System_Action_c **v14; // x24
  System_Action_o *v15; // x26
  __int64 v16; // x9
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  UnityEngine_Object_o *gameObject; // x19
  ShopActionManager_o *v39; // x0
  const MethodInfo *v40; // x1

  v4 = (const MethodInfo_2A2FE60 **)&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
  v5 = &System_Action_TypeInfo;
  while ( 1 )
  {
    if ( (byte_42ECF3D & 1) == 0 )
    {
      sub_B5D5C4(v5, (_DWORD)method, v2, v3);
      sub_B5D5C4(&EventRewardRootComponent_TypeInfo, v17, v18, v19);
      sub_B5D5C4(&Method_System_Collections_Generic_List_ShopActionEntity__RemoveAt__, v20, v21, v22);
      sub_B5D5C4(&Method_System_Collections_Generic_List_ShopActionEntity__get_Count__, v23, v24, v25);
      sub_B5D5C4(&Method_System_Collections_Generic_List_ShopActionEntity__get_Item__, v26, v27, v28);
      sub_B5D5C4(&UnityEngine_Object_TypeInfo, v29, v30, v31);
      sub_B5D5C4(&Method_ShopActionManager_VoiceEnd__, v32, v33, v34);
      sub_B5D5C4(v4, v35, v36, v37);
      byte_42ECF3D = 1;
    }
    shopActionList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.shopActionList;
    if ( !shopActionList )
LABEL_25:
      sub_B5D69C(shopActionList, method);
    if ( shopActionList->fields._size <= 0 )
      break;
    v7 = (ShopActionEntity_o *)shopActionList->fields._items->m_Items[0];
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      shopActionList,
      0,
      (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_ShopActionEntity__RemoveAt__);
    if ( !v7 )
      goto LABEL_25;
    actionType = v7->fields.actionType;
    if ( actionType != 8 )
    {
      if ( actionType != 5 )
        return;
      v10 = this->fields.shopActionList;
      this->fields.isVoicePlaying = 1;
      if ( !v10 )
        goto LABEL_25;
      if ( v10->fields._size >= 1 )
      {
        v11 = v10->fields._items->m_Items[0];
        if ( v11 )
        {
          if ( v11->fields.actionType == 8 )
            this->fields.isVoiceWaiting = 1;
        }
      }
      v12 = v4;
      shopActionList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)SingletonMonoBehaviour_WebViewManager___get_Instance(*v4);
      if ( !shopActionList )
        goto LABEL_25;
      v13 = *(EventRewardRootComponent_o **)&shopActionList->fields._size;
      v14 = v5;
      v15 = (System_Action_o *)sub_B5D694(*v5);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_ShopActionManager_VoiceEnd__, 0LL);
      if ( !v13 )
        goto LABEL_25;
      v16 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v13->klass->_2.bitflags2 + 1) < (unsigned int)v16
        || (EventRewardRootComponent_c *)v13->klass->_2.typeHierarchy[v16 - 1] != EventRewardRootComponent_TypeInfo )
      {
        sub_B5D990(v13);
        ShopActionManager__VoiceEnd(v39, v40);
        return;
      }
      EventRewardRootComponent__PlayIndividualShopPurchaseVoice(v13, v7, v15, 0LL);
      v4 = v12;
      v5 = v14;
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
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.shopActionList,
    (System_Int32_array **)shopActionEntityList,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.afterCallback = callback;
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  ShopActionManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_List_ShopActionEntity__o *shopActionList; // x8
  System_Action_o *afterCallback; // x0
  UnityEngine_Object_o *gameObject; // x20

  v4 = this;
  if ( (byte_42ECF3E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopActionEntity__get_Count__, (_DWORD)method, v2, v3);
    this = (ShopActionManager_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42ECF3E = 1;
  }
  shopActionList = v4->fields.shopActionList;
  if ( !shopActionList )
    sub_B5D69C(this, method);
  if ( shopActionList->fields._size <= 0 )
  {
    afterCallback = v4->fields.afterCallback;
    if ( afterCallback )
      ActionExtensions__Call(afterCallback, 0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
  }
  *(_WORD *)&v4->fields.isVoicePlaying = 0;
}