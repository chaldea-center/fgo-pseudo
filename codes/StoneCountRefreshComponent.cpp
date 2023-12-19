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
  __int64 v7; // x1
  __int64 v8; // x1
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40FAE9D & 1) == 0 )
  {
    sub_B16FFC(&Method_GameObjectExtensions_HasComponent_StoneCountRefreshComponent___, refreshAction);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_StoneCountRefreshComponent___, v7);
    sub_B16FFC(&PurchaseBehaviour_TypeInfo, v8);
    byte_40FAE9D = 1;
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
    if ( !GameObjectExtensions__HasComponent_StoneCountRefreshComponent_(
            targetGameObject,
            (const MethodInfo_19D2058 *)Method_GameObjectExtensions_HasComponent_StoneCountRefreshComponent___) )
    {
      if ( !targetGameObject
        || (v9 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                   targetGameObject,
                   (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_StoneCountRefreshComponent___)) == 0LL )
      {
        sub_B170D4();
      }
      v9->fields.callbackQueue = (struct System_Collections_Generic_Queue_Tuple_SendOrPostCallback__object___o *)refreshAction;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v9->fields.callbackQueue,
        (System_Int32_array **)refreshAction,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StoneCountRefreshComponent__Refresh(
        StoneCountRefreshComponent_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  System_Action_int__o *refreshAction; // x0

  if ( (byte_40FAE9C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int__Invoke__, *(_QWORD *)&stoneCount);
    byte_40FAE9C = 1;
  }
  refreshAction = this->fields._refreshAction;
  if ( refreshAction )
    System_Action_int___Invoke(
      refreshAction,
      stoneCount,
      (const MethodInfo_24B5D94 *)Method_System_Action_int__Invoke__);
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
  __int64 v3; // x1
  StoneCountRefreshComponent_array *ObjectsOfType_StoneCountRefreshComponent; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  int max_length; // w8
  StoneCountRefreshComponent_array *v8; // x20
  unsigned int v9; // w21
  StoneCountRefreshComponent_o *v10; // x0

  if ( (byte_40FAE9E & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_FindObjectsOfType_StoneCountRefreshComponent___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FAE9E = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  ObjectsOfType_StoneCountRefreshComponent = UnityEngine_Object__FindObjectsOfType_StoneCountRefreshComponent_(
                                               1,
                                               (const MethodInfo_19DE140 *)Method_UnityEngine_Object_FindObjectsOfType_StoneCountRefreshComponent___);
  if ( !ObjectsOfType_StoneCountRefreshComponent )
    goto LABEL_14;
  max_length = ObjectsOfType_StoneCountRefreshComponent->max_length;
  v8 = ObjectsOfType_StoneCountRefreshComponent;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
        sub_B17100(ObjectsOfType_StoneCountRefreshComponent, v5, v6);
        sub_B170A0();
      }
      v10 = v8->m_Items[v9];
      if ( !v10 )
        break;
      StoneCountRefreshComponent__Refresh(v10, stoneCount, v6);
      max_length = v8->max_length;
      if ( (int)++v9 >= max_length )
        return;
    }
LABEL_14:
    sub_B170D4();
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._refreshAction,
    (System_Int32_array **)refreshAction,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}