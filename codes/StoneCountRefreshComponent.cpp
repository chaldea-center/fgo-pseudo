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
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_48E2156 & 1) == 0 )
  {
    sub_1B00CCC(&Method_GameObjectExtensions_HasComponent_StoneCountRefreshComponent___, refreshAction);
    sub_1B00CCC(&Method_UnityEngine_GameObject_AddComponent_StoneCountRefreshComponent___, v7);
    sub_1B00CCC(&PurchaseBehaviour_TypeInfo, v8);
    byte_48E2156 = 1;
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
                                            (const MethodInfo_2DAF728 *)Method_GameObjectExtensions_HasComponent_StoneCountRefreshComponent___);
    if ( ((unsigned __int8)HasComponent_object & 1) == 0 )
    {
      if ( !targetGameObject
        || (HasComponent_object = UnityEngine_GameObject__AddComponent_object_(
                                    targetGameObject,
                                    (const MethodInfo_2DADD20 *)Method_UnityEngine_GameObject_AddComponent_StoneCountRefreshComponent___)) == 0LL )
      {
        sub_1B00F28(HasComponent_object, v11);
      }
      HasComponent_object[2].klass = (Il2CppClass *)refreshAction;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&HasComponent_object[2], (int32_t)refreshAction, v12, v13);
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
  System_Object_array *ObjectsOfType_object__48060984; // x0
  __int64 v5; // x1
  int max_length; // w8
  System_Object_array *v7; // x20
  unsigned int v8; // w21
  Il2CppObject *v9; // x8
  Il2CppClass *klass; // x8

  if ( (byte_48E2157 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Object_FindObjectsOfType_StoneCountRefreshComponent___, method);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v3);
    byte_48E2157 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ObjectsOfType_object__48060984 = UnityEngine_Object__FindObjectsOfType_object__48060984(
                                     1,
                                     (const MethodInfo_2DD5A38 *)Method_UnityEngine_Object_FindObjectsOfType_StoneCountRefreshComponent___);
  if ( !ObjectsOfType_object__48060984 )
    goto LABEL_15;
  max_length = ObjectsOfType_object__48060984->max_length;
  v7 = ObjectsOfType_object__48060984;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1B00F30(ObjectsOfType_object__48060984, v5);
      v9 = v7->m_Items[v8];
      if ( !v9 )
        break;
      klass = v9[2].klass;
      if ( klass )
        ObjectsOfType_object__48060984 = (System_Object_array *)((__int64 (__fastcall *)(Il2CppClass *, _QWORD, _QWORD))klass->_1.namespaze)(
                                                                  klass->_1.element_class,
                                                                  (unsigned int)stoneCount,
                                                                  *(_QWORD *)&klass->_1.byval_arg.bits);
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_15:
    sub_1B00F28(ObjectsOfType_object__48060984, v5);
  }
}


void __fastcall StoneCountRefreshComponent__RegisterRefreshAction(
        StoneCountRefreshComponent_o *this,
        System_Action_int__o *refreshAction,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._refreshAction = refreshAction;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._refreshAction,
    (int32_t)refreshAction,
    (int32_t)method,
    v3);
}