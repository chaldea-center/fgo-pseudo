void __fastcall StoneCountRefreshComponent___ctor(StoneCountRefreshComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall StoneCountRefreshComponent__AttachToGameObject(
        UnityEngine_GameObject_o *targetGameObject,
        System_Action_int__o *refreshAction,
        bool checkDeferredPurchaseExists,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *HasComponent_StoneCountRefreshComponent; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42E7AAE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_GameObjectExtensions_HasComponent_StoneCountRefreshComponent___,
      (_DWORD)refreshAction,
      checkDeferredPurchaseExists,
      method);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_StoneCountRefreshComponent___, v7, v8, v9);
    sub_B5D5C4(&PurchaseBehaviour_TypeInfo, v10, v11, v12);
    byte_42E7AAE = 1;
  }
  if ( !checkDeferredPurchaseExists )
    goto LABEL_8;
  if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  }
  if ( PurchaseBehaviour__IsDeferredPurchaseExists(0LL) )
  {
LABEL_8:
    HasComponent_StoneCountRefreshComponent = (Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *)GameObjectExtensions__HasComponent_StoneCountRefreshComponent_(targetGameObject, (const MethodInfo_1CC4F14 *)Method_GameObjectExtensions_HasComponent_StoneCountRefreshComponent___);
    if ( ((unsigned __int8)HasComponent_StoneCountRefreshComponent & 1) == 0 )
    {
      if ( !targetGameObject
        || (HasComponent_StoneCountRefreshComponent = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                        targetGameObject,
                                                        (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_StoneCountRefreshComponent___)) == 0LL )
      {
        sub_B5D69C(HasComponent_StoneCountRefreshComponent, v14);
      }
      HasComponent_StoneCountRefreshComponent->fields.callbackQueue = (struct System_Collections_Generic_Queue_Tuple_SendOrPostCallback__object___o *)refreshAction;
      sub_B5D560(
        (BattleServantConfConponent_o *)&HasComponent_StoneCountRefreshComponent->fields.callbackQueue,
        (System_Int32_array **)refreshAction,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
    }
  }
}


void __fastcall StoneCountRefreshComponent__Refresh(
        StoneCountRefreshComponent_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Action_int__o *refreshAction; // x0

  if ( (byte_42E7AAD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int__Invoke__, stoneCount, (_DWORD)method, v3);
    byte_42E7AAD = 1;
  }
  refreshAction = this->fields._refreshAction;
  if ( refreshAction )
    System_Action_int___Invoke(
      refreshAction,
      stoneCount,
      (const MethodInfo_2589DA4 *)Method_System_Action_int__Invoke__);
}


void __fastcall StoneCountRefreshComponent__RefreshAllStoneCount(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v2; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( SelfUserGame )
    StoneCountRefreshComponent__RefreshAllStoneCount_Inner(SelfUserGame->fields.stone, v2);
}


void __fastcall StoneCountRefreshComponent__RefreshAllStoneCount_Inner(int32_t stoneCount, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  StoneCountRefreshComponent_array *ObjectsOfType_StoneCountRefreshComponent; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  int max_length; // w8
  StoneCountRefreshComponent_array *v12; // x20
  unsigned int v13; // w21
  __int64 v14; // x0

  if ( (byte_42E7AAF & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Object_FindObjectsOfType_StoneCountRefreshComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E7AAF = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  ObjectsOfType_StoneCountRefreshComponent = UnityEngine_Object__FindObjectsOfType_StoneCountRefreshComponent_(
                                               1,
                                               (const MethodInfo_1E6620C *)Method_UnityEngine_Object_FindObjectsOfType_StoneCountRefreshComponent___);
  if ( !ObjectsOfType_StoneCountRefreshComponent )
    goto LABEL_14;
  max_length = ObjectsOfType_StoneCountRefreshComponent->max_length;
  v12 = ObjectsOfType_StoneCountRefreshComponent;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
      {
        v14 = sub_B5D6C8(ObjectsOfType_StoneCountRefreshComponent);
        sub_B5D668(v14, 0LL);
      }
      ObjectsOfType_StoneCountRefreshComponent = (StoneCountRefreshComponent_array *)v12->m_Items[v13];
      if ( !ObjectsOfType_StoneCountRefreshComponent )
        break;
      StoneCountRefreshComponent__Refresh(
        (StoneCountRefreshComponent_o *)ObjectsOfType_StoneCountRefreshComponent,
        stoneCount,
        v10);
      max_length = v12->max_length;
      if ( (int)++v13 >= max_length )
        return;
    }
LABEL_14:
    sub_B5D69C(ObjectsOfType_StoneCountRefreshComponent, v9);
  }
}


void __fastcall StoneCountRefreshComponent__RegisterRefreshAction(
        StoneCountRefreshComponent_o *this,
        System_Action_int__o *refreshAction,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._refreshAction = refreshAction;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._refreshAction,
    (System_Int32_array **)refreshAction,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}