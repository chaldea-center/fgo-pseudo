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
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4CB5C01 & 1) == 0 )
  {
    sub_1C6BA08(&Method_GameObjectExtensions_HasComponent_StoneCountRefreshComponent___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_AddComponent_StoneCountRefreshComponent___);
    sub_1C6BA08(&PurchaseBehaviour_TypeInfo);
    byte_4CB5C01 = 1;
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
                                            (const MethodInfo_3194A4C *)Method_GameObjectExtensions_HasComponent_StoneCountRefreshComponent___);
    if ( ((unsigned __int8)HasComponent_object & 1) == 0 )
    {
      if ( !targetGameObject
        || (HasComponent_object = UnityEngine_GameObject__AddComponent_object_(
                                    targetGameObject,
                                    (const MethodInfo_3193044 *)Method_UnityEngine_GameObject_AddComponent_StoneCountRefreshComponent___)) == 0 )
      {
        sub_1C6BC60(HasComponent_object, v9);
      }
      HasComponent_object[2].klass = (Il2CppClass *)refreshAction;
      sub_1C6B9AC((CGThumbnailListItem_o *)&HasComponent_object[2], (int32_t)refreshAction, v10, v11);
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
  System_Object_array *ObjectsOfType_object__52199012; // x0
  __int64 v4; // x1
  int max_length; // w8
  System_Object_array *v6; // x20
  unsigned int v7; // w21
  Il2CppObject *v8; // x8
  Il2CppClass *klass; // x8

  if ( (byte_4CB5C02 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Object_FindObjectsOfType_StoneCountRefreshComponent___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB5C02 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ObjectsOfType_object__52199012 = UnityEngine_Object__FindObjectsOfType_object__52199012(
                                     1,
                                     (const MethodInfo_31C7E64 *)Method_UnityEngine_Object_FindObjectsOfType_StoneCountRefreshComponent___);
  if ( !ObjectsOfType_object__52199012 )
    goto LABEL_15;
  max_length = ObjectsOfType_object__52199012->max_length;
  v6 = ObjectsOfType_object__52199012;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_1C6BC68(ObjectsOfType_object__52199012);
      v8 = v6->m_Items[v7];
      if ( !v8 )
        break;
      klass = v8[2].klass;
      if ( klass )
        ObjectsOfType_object__52199012 = (System_Object_array *)((__int64 (__fastcall *)(Il2CppClass *, _QWORD, _QWORD))klass->_1.namespaze)(
                                                                  klass->_1.element_class,
                                                                  (unsigned int)stoneCount,
                                                                  *(_QWORD *)&klass->_1.byval_arg.bits);
      max_length = v6->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_15:
    sub_1C6BC60(ObjectsOfType_object__52199012, v4);
  }
}


void StoneCountRefreshComponent__RegisterRefreshAction(
        StoneCountRefreshComponent_o *this,
        System_Action_int__o *refreshAction,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._refreshAction = refreshAction;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._refreshAction, (int32_t)refreshAction, (int32_t)method, v3);
}