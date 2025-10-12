void StoneCountRefreshComponent___ctor(StoneCountRefreshComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void StoneCountRefreshComponent__AttachToGameObject(
        UnityEngine_GameObject_o *targetGameObject,
        System_Action_int__o *refreshAction,
        bool checkDeferredPurchaseExists,
        const MethodInfo *method)
{
  PurchaseBehaviour_c *v7; // x0
  Il2CppObject *HasComponent_object; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C37309 & 1) == 0 )
  {
    sub_1C32C20(&Method_GameObjectExtensions_HasComponent_StoneCountRefreshComponent___);
    sub_1C32C20(&Method_UnityEngine_GameObject_AddComponent_StoneCountRefreshComponent___);
    sub_1C32C20(&PurchaseBehaviour_TypeInfo);
    byte_4C37309 = 1;
  }
  if ( !checkDeferredPurchaseExists )
    goto LABEL_7;
  v7 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  if ( PurchaseBehaviour__IsDeferredPurchaseExists((const MethodInfo *)v7) )
  {
LABEL_7:
    HasComponent_object = (Il2CppObject *)GameObjectExtensions__HasComponent_object_(
                                            targetGameObject,
                                            (const MethodInfo_3136290 *)Method_GameObjectExtensions_HasComponent_StoneCountRefreshComponent___);
    if ( ((unsigned __int8)HasComponent_object & 1) == 0 )
    {
      if ( !targetGameObject
        || (HasComponent_object = UnityEngine_GameObject__AddComponent_object_(
                                    targetGameObject,
                                    (const MethodInfo_3134888 *)Method_UnityEngine_GameObject_AddComponent_StoneCountRefreshComponent___)) == 0 )
      {
        sub_1C32E7C(HasComponent_object);
      }
      HasComponent_object[2].klass = (Il2CppClass *)refreshAction;
      sub_1C32BC4((CGThumbnailListItem_o *)&HasComponent_object[2], (int32_t)refreshAction, v9, v10);
    }
  }
}


void StoneCountRefreshComponent__Refresh(
        StoneCountRefreshComponent_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  struct System_Action_int__o *refreshAction; // x8

  refreshAction = this->fields._refreshAction;
  if ( refreshAction )
    ((void (__fastcall *)(intptr_t, int32_t, intptr_t))refreshAction->fields.invoke_impl)(
      refreshAction->fields.method_code,
      stoneCount,
      refreshAction->fields.method);
}


void StoneCountRefreshComponent__RefreshAllStoneCount(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v2; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( SelfUserGame )
    StoneCountRefreshComponent__RefreshAllStoneCount_Inner(SelfUserGame->fields.stone, v2);
}


void StoneCountRefreshComponent__RefreshAllStoneCount_Inner(int32_t stoneCount, const MethodInfo *method)
{
  System_Object_array *ObjectsOfType_object__51812008; // x0
  int max_length; // w8
  System_Object_array *v5; // x20
  unsigned int v6; // w21
  Il2CppObject *v7; // x8
  Il2CppClass *klass; // x8

  if ( (byte_4C3730A & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Object_FindObjectsOfType_StoneCountRefreshComponent___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3730A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ObjectsOfType_object__51812008 = UnityEngine_Object__FindObjectsOfType_object__51812008(
                                     1,
                                     (const MethodInfo_31696A8 *)Method_UnityEngine_Object_FindObjectsOfType_StoneCountRefreshComponent___);
  if ( !ObjectsOfType_object__51812008 )
    goto LABEL_15;
  max_length = ObjectsOfType_object__51812008->max_length;
  v5 = ObjectsOfType_object__51812008;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_1C32E84(ObjectsOfType_object__51812008);
      v7 = v5->m_Items[v6];
      if ( !v7 )
        break;
      klass = v7[2].klass;
      if ( klass )
        ObjectsOfType_object__51812008 = (System_Object_array *)((__int64 (__fastcall *)(Il2CppClass *, _QWORD, _QWORD))klass->_1.namespaze)(
                                                                  klass->_1.element_class,
                                                                  (unsigned int)stoneCount,
                                                                  *(_QWORD *)&klass->_1.byval_arg.bits);
      max_length = v5->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_15:
    sub_1C32E7C(ObjectsOfType_object__51812008);
  }
}


void StoneCountRefreshComponent__RegisterRefreshAction(
        StoneCountRefreshComponent_o *this,
        System_Action_int__o *refreshAction,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._refreshAction = refreshAction;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._refreshAction, (int32_t)refreshAction, (int32_t)method, v3);
}