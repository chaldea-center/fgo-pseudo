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
  PurchaseBehaviour_c *v9; // x0
  Il2CppObject *HasComponent_object; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FBD4A & 1) == 0 )
  {
    sub_1B640C8(&Method_GameObjectExtensions_HasComponent_StoneCountRefreshComponent___, refreshAction);
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_StoneCountRefreshComponent___, v7);
    sub_1B640C8(&PurchaseBehaviour_TypeInfo, v8);
    byte_49FBD4A = 1;
  }
  if ( !checkDeferredPurchaseExists )
    goto LABEL_7;
  v9 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  if ( PurchaseBehaviour__IsDeferredPurchaseExists((const MethodInfo *)v9) )
  {
LABEL_7:
    HasComponent_object = (Il2CppObject *)GameObjectExtensions__HasComponent_object_(
                                            targetGameObject,
                                            (const MethodInfo_2E897F8 *)Method_GameObjectExtensions_HasComponent_StoneCountRefreshComponent___);
    if ( ((unsigned __int8)HasComponent_object & 1) == 0 )
    {
      if ( !targetGameObject
        || (HasComponent_object = UnityEngine_GameObject__AddComponent_object_(
                                    targetGameObject,
                                    (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_StoneCountRefreshComponent___)) == 0LL )
      {
        sub_1B64324(HasComponent_object);
      }
      HasComponent_object[2].klass = (Il2CppClass *)refreshAction;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&HasComponent_object[2], (int32_t)refreshAction, v11, v12);
    }
  }
}


void __fastcall StoneCountRefreshComponent__Refresh(
        StoneCountRefreshComponent_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  struct System_Action_int__o *refreshAction; // x8

  refreshAction = this->fields._refreshAction;
  if ( refreshAction )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))refreshAction->fields.m_target)(
      refreshAction->fields.original_method_info,
      stoneCount,
      *(_QWORD *)&refreshAction->fields.extra_arg);
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
  System_Object_array *ObjectsOfType_object__49003504; // x0
  __int64 v5; // x1
  int max_length; // w8
  System_Object_array *v7; // x20
  unsigned int v8; // w21
  Il2CppObject *v9; // x8
  Il2CppClass *klass; // x8

  if ( (byte_49FBD4B & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Object_FindObjectsOfType_StoneCountRefreshComponent___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FBD4B = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ObjectsOfType_object__49003504 = UnityEngine_Object__FindObjectsOfType_object__49003504(
                                     1,
                                     (const MethodInfo_2EBBBF0 *)Method_UnityEngine_Object_FindObjectsOfType_StoneCountRefreshComponent___);
  if ( !ObjectsOfType_object__49003504 )
    goto LABEL_15;
  max_length = ObjectsOfType_object__49003504->max_length;
  v7 = ObjectsOfType_object__49003504;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1B6432C(ObjectsOfType_object__49003504, v5);
      v9 = v7->m_Items[v8];
      if ( !v9 )
        break;
      klass = v9[2].klass;
      if ( klass )
        ObjectsOfType_object__49003504 = (System_Object_array *)((__int64 (__fastcall *)(Il2CppClass *, _QWORD, _QWORD))klass->_1.namespaze)(
                                                                  klass->_1.element_class,
                                                                  (unsigned int)stoneCount,
                                                                  *(_QWORD *)&klass->_1.byval_arg.bits);
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_15:
    sub_1B64324(ObjectsOfType_object__49003504);
  }
}


void __fastcall StoneCountRefreshComponent__RegisterRefreshAction(
        StoneCountRefreshComponent_o *this,
        System_Action_int__o *refreshAction,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._refreshAction = refreshAction;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._refreshAction,
    (int32_t)refreshAction,
    (int32_t)method,
    v3);
}